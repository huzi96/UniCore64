#ifndef __UNICORE64_ARCH_PUV4_REGS_PS2__
#define __UNICORE64_ARCH_PUV4_REGS_PS2__

#include <arch/puv4-iomem.h>

/*
 * PUV4 PS2 Controller Registers
 *
 * PS2_DATA	I8042_DATA_REG
 * PS2_COMMAND	I8042_COMMAND_REG
 * PS2_STATUS	I8042_STATUS_REG
 * PS2_CNT	Counter register
 */
#define PS2_DATA		PUV4_IOREG(PUV4_PS2_BASE + (0x0060 << 2))
#define PS2_COMMAND		PUV4_IOREG(PUV4_PS2_BASE + (0x0064 << 2))
#define PS2_STATUS		PUV4_IOREG(PUV4_PS2_BASE + (0x0064 << 2))
#define PS2_CNT			PUV4_IOREG(PUV4_PS2_BASE + (0x0068 << 2))

#endif /* __UNICORE64_ARCH_PUV4_REGS_PS2__ */