#include <linux/kernel.h>
#include <linux/elfcore.h>

#include <arch/asm-common.h>

/**
 * kernel_execve() -
 * @filename:
 * @argv:
 * @envp:
 */
int kernel_execve(const char *filename, const char *const argv[],
		const char *const envp[])
{
	struct pt_regs *regs = task_pt_regs(current);
	int ret = do_execve(filename, argv, envp, regs);

	if (ret < 0)
		return ret;

	/* FIXME */
	BUG();
	return 0;
}

static void __noreturn kernel_thread_helper(void *unused,
		int (*fn)(void *), void *arg)
{
	fn(arg);
	do_exit(-1); /* Should never be called. */
}

/**
 * kernel_thread() - Create a kernel thread
 * @fn:
 * @arg:
 * @flags:
 */
int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags)
{
	struct pt_regs regs;

	memset(&regs, 0, sizeof(regs));

	/* Don't use r0 since that is set to 0 in copy_thread. */
	regs.UC64_R01 = (unsigned long)fn;
	regs.UC64_R02 = (unsigned long)arg;
	regs.UC64_R31 = (unsigned long)kernel_thread_helper;
	regs.UC64_ASR = ASR_MODE_PRIV;

	/* Create the new process. */
	return do_fork(flags | CLONE_VM | CLONE_UNTRACED,
			0, &regs, 0, NULL, NULL);
}

asmlinkage void ret_from_fork(void) __asm__("ret_from_fork");

/**
 * copy_thread() - Copy a thread
 * @clone_flags:
 * @stack_start:
 * @stk_sz:
 * @p:
 * @regs:
 */
int copy_thread(unsigned long clone_flags, unsigned long stack_start,
	    unsigned long stk_sz, struct task_struct *p, struct pt_regs *regs)
{
	struct pt_regs *childregs = task_pt_regs(p);

	*childregs = *regs;
	childregs->UC64_R00 = 0;
	if (stack_start) {
		BUG();
	} else { /* For kernel_thread, useless pt_regs will be kept in stack */
		childregs->UC64_R29 = (unsigned long)childregs;
	}

	/* cpu_context is used for __switch_to */
	p->thread.cpu_context.r29 = (unsigned long)childregs;
	p->thread.cpu_context.r30 = (unsigned long)ret_from_fork;

	return 0;
}

/**
 * exit_thread() - Free current thread data structures etc..
 */
void exit_thread(void)
{
	/* FIXME */
	BUG();
}

/**
 * machine_restart() - Reboot the machine
 * @cmd:
 */
void machine_restart(char *cmd)
{
	/* FIXME */
	BUG();
}

/**
 * machine_halt() - Halt the machine
 */
void machine_halt(void)
{
	__halt();
}

/**
 * machine_power_off() - Power off the machine
 */
void machine_power_off(void)
{
	/* FIXME */
	BUG();
}

/**
 * Function pointers to optional machine specific functions
 */
void (*pm_power_off)(void) = NULL;

/**
 * get_wchan() -
 * @p:
 */
unsigned long get_wchan(struct task_struct *p)
{
	/* FIXME */
	BUG();
	return 0;
}

/**
 * cpu_idle() - The idle thread
 *
 * The idle thread. There's no useful work to be
 * done, so just try to conserve power and have a
 * low exit latency (ie sit in a loop waiting for
 * somebody to say that they'd like to reschedule)
 */
void cpu_idle(void)
{
	/* FIXME */
	BUG();
}
