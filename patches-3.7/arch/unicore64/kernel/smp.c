#include <linux/init.h>
#include <linux/smp.h>
#include <linux/sched.h>
#include <linux/delay.h>

unsigned int num_processors = 2;

/* Set when a secondary comes online.  */
static int smp_secondary_alive __devinitdata;

void __init smp_setup_processor_id(void)
{
	int i;

	for (i = 0; i < num_processors; i++)
		set_cpu_possible(i, true);
}

void __init smp_prepare_cpus(unsigned int max_cpus)
{
	int cpu;

	for_each_possible_cpu(cpu)
		set_cpu_present(cpu, true);
}

void __devinit smp_prepare_boot_cpu(void)
{
}

void smp_send_reschedule(int cpu)
{
	/* FIXME */
	BUG();
}

int smp_call_function(smp_call_func_t func, void *info, int wait)
{
	/* FIXME */
	BUG();
	return 0;
}

void smp_call_function_many(const struct cpumask *mask, smp_call_func_t func,
				void *info, bool wait)
{
	/* FIXME */
	BUG();
}

int smp_call_function_single(int cpuid, smp_call_func_t func, void *info,
				int wait)
{
	/* FIXME */
	BUG();
	return 0;
}

void __init smp_cpus_done(unsigned int max_cpus)
{
	/* FIXME */
	BUG();
}

unsigned long secondary_stack_start;

static int __init smp_boot_one_cpu(unsigned int cpu, struct task_struct *idle)
{
	unsigned long timeout;

	smp_secondary_alive = 0;

	wmb();

	/*
	 * CSU is not quite ready. Use a temporary reg 0xff6100000.
	 */
	__asm__ __volatile__(
		"dmovl	r0, #0xfffffffff6100000\n"
		"ldd	r1, =secondary_stext\n"
		"stw	r1, [r0]\n"
		"movc	p0.c10, r0, #4");

	/* Wait one second for secondary to start up. */
	timeout = jiffies + 1 * HZ;
	while (time_before(jiffies, timeout)) {
		if (smp_secondary_alive == 1)
			goto alive;
		udelay(10);
		barrier();
	}

	/* We failed to boot the CPU.  */

	printk(KERN_ERR "SMP: Processor %d is stuck.\n", cpu);
	return -1;

 alive:
	return 0;
}

/*
 * Bring one cpu online.
 */
int __cpuinit __cpu_up(unsigned int cpu, struct task_struct *idle)
{
	/*
	 * We need to tell the secondary core where to find its stack.
	 */
	secondary_stack_start = (unsigned long) task_stack_page(idle)
			+ THREAD_SIZE - KSTK_PTREGS_GAP;

	/*
	 * Now bring the CPU into our world.
	 */
	smp_boot_one_cpu(cpu, idle);

	return cpu_online(cpu) ? 0 : -1;
}

/*
 * Where secondaries begin a life of C.
 */
void __init secondary_start_kernel(void)
{
	preempt_disable();

	smp_secondary_alive = 1;

	cpu_idle();
}

void smp_send_stop(void)
{
	/* FIXME */
	BUG();
}
