#ifndef __UNICORE64_ARCH_ASM_COMMON_H__
#define __UNICORE64_ARCH_ASM_COMMON_H__

#include <linux/stringify.h>

#ifdef __ASSEMBLY__
#define csub		cmpsub
#define dcsub		dcmpsub
#define push_lr		std.w	lr, [sp-], #8
#define pop_lr		ldd.w	lr, [sp]+, #8
#endif /* __ASSEMBLY__ */

/*
 * __ASMMACRO_WRAP is ONLY used for assembly macro definitions.
 * Then this macro could be used in both assembly files and c files.
 */
#ifdef __ASSEMBLY__
#define __ASMMACRO_WRAP(code...)	code
#else
#define __ASMMACRO_WRAP(code...)	__asm__(__stringify(code));
#endif /* __ASSEMBLY__ */

#endif /* __UNICORE64_ARCH_ASM_COMMON_H__ */
