#ifndef __UNICORE64_ARCH_HWDEF_COPRO_H__
#define __UNICORE64_ARCH_HWDEF_COPRO_H__

/**
 * DOC: HWDEF_COPRO_H
 *
 * This file defines coprocessor names and their register names.
 */
#include <arch/bitfield.h>

/**
 * DOC: HWDEF_COPRO_H_CP0
 *
 * CP0 is the control coprocesscor which helps the main processor
 * with global control.
 *
 * Following CP0 register names are defined:
 *
 * \\\\lt:programlisting\\\\gt:
 * -
 * CP0 CR0:	reg. that stores CPU information and cache information
 * CP0 CR1:	control reg. of mmu and Cache
 * CP0 CR2:	reg. for Translation Table Base and Address Space Identifier
 * CP0 CR3:	reg. for status information of instruction and data abort
 * CP0 CR4:	reg. for virtual address of data abort
 * CP0 CR5:	reg. for TLB management
 * CP0 CR6:	reg. for DCache management
 * CP0 CR7:	reg. for ICache management
 * CP0 CR8:	reg. for Memory Region Attribute Register configuration
 * CP0 CR9:	reg. for interruption vector base
 * CP0 CR10:	reg. for timer interrupt and interrupt information
 * CP0 CR11:	control reg. of Read/Write Margin
 * -
 * \\\\lt:/programlisting\\\\gt:
 */
#define CP0_CPUID		p0.c0
#define CP0_CTRLREG		p0.c1
#define CP0_TTB_ASID		p0.c2
#define CP0_ABORT_STAT		p0.c3
#define CP0_DABORT_VADDR	p0.c4
#define CP0_TLB			p0.c5
#define CP0_DCACHE		p0.c6
#define CP0_ICACHE		p0.c7
#define CP0_MRAR		p0.c8
#define CP0_INTR_VECBASE	p0.c9
#define CP0_INTR_STAT		p0.c10
#define CP0_RWM			p0.c11

/**
 * DOC: HWDEF_COPRO_H_CP0_CTRLREG
 * Following bit field definitions for control register in CP0 are defined:
 *
 * \\\\lt:programlisting\\\\gt:
 * -
 * CP0_CTRLREG_MMU:		MMU enable
 * CP0_CTRLREG_ALIGN:		Alignment abort enable
 * CP0_CTRLREG_DCACHE:		Dcache enable
 * CP0_CTRLREG_ICACHE:		Icache enable
 * CP0_CTRLREG_SAVEPOWER:	Save power enable
 * CP0_CTRLREG_WRITEBACK:	Dcache write mechanism: write back
 * CP0_CTRLREG_DEFAULT:		MMU control register's default value
 * -
 * \\\\lt:/programlisting\\\\gt:
 */
#define CP0_CTRLREG_MMU			BFIELD(1, 1, 0)
#define CP0_CTRLREG_ALIGN		BFIELD(1, 1, 1)
#define CP0_CTRLREG_DCACHE		BFIELD(1, 1, 2)
#define CP0_CTRLREG_ICACHE		BFIELD(1, 1, 3)
#define CP0_CTRLREG_SAVEPOWER		BFIELD(1, 1, 4)
#define CP0_CTRLREG_WRITEBACK		BFIELD(1, 1, 5)
#define CP0_CTRLREG_DEFAULT		CP0_CTRLREG_WRITEBACK

/**
 * DOC: HWDEF_COPRO_H_CP0_CPUID
 * Following cpu inforamtion macros in CP0 are defined:
 *
 * \\\\lt:programlisting\\\\gt:
 * -
 * CP0_CPUID_PARTNO_MASK:	mask for the cpuid partnumber
 * CP0_CPUID_PARTNO_PKUNITY:	the cpuid partnumber of PKUnity
 * CP0_CPUID_LAYOUT_MASK:	mask for the cpuid layout
 * CP0_CPUID_SERIES_MASK:	mask for the cpuid series
 * CP0_CPUID_DESIGNER_MASK:	mask for the cpuid designer
 * CP0_CPUID_DESIGNER_MPRC:	the symbol of MPRC for the cpu designer
 * -
 * \\\\lt:/programlisting\\\\gt:
 */
#define CP0_CPUID_PARTNO_MASK		BFMASK(16, 0)
#define CP0_CPUID_PARTNO_PKUNITY	BFIELD(0x863, 12, 0)
#define CP0_CPUID_LAYOUT_POS		(16)
#define CP0_CPUID_LAYOUT_MASK		BFMASK(4, CP0_CPUID_LAYOUT_POS)
#define CP0_CPUID_SERIES_POS		(20)
#define CP0_CPUID_SERIES_MASK		BFMASK(4, CP0_CPUID_SERIES_POS)
#define CP0_CPUID_DESIGNER_MASK		BFMASK(8, 24)
#define CP0_CPUID_DESIGNER_MPRC		BFIELD(0x4D, 8, 24)

/**
 * DOC: HWDEF_COPRO_H_CP0_CACHE
 * Following cache inforamtion macros in CP0 are defined.
 */
#define CP0_CPUID_ICACHE_LINE_MASK		BFMASK(2, 0)
#define CP0_CPUID_ICACHE_LINE_8BYTE		BFIELD(0, 2, 0)
#define CP0_CPUID_ICACHE_LINE_16BYTE		BFIELD(1, 2, 0)
#define CP0_CPUID_ICACHE_LINE_32BYTE		BFIELD(2, 2, 0)
#define CP0_CPUID_ICACHE_LINE_64BYTE		BFIELD(3, 2, 0)

#define CP0_CPUID_ICACHE_ASSOC_MASK		BFMASK(3, 3)
#define CP0_CPUID_ICACHE_ASSOC_DMAP		BFIELD(0, 3, 3)
#define CP0_CPUID_ICACHE_ASSOC_2WAY		BFIELD(1, 3, 3)
#define CP0_CPUID_ICACHE_ASSOC_4WAY		BFIELD(2, 3, 3)
#define CP0_CPUID_ICACHE_ASSOC_8WAY		BFIELD(3, 3, 3)
#define CP0_CPUID_ICACHE_ASSOC_16WAY		BFIELD(4, 3, 3)
#define CP0_CPUID_ICACHE_ASSOC_32WAY		BFIELD(5, 3, 3)
#define CP0_CPUID_ICACHE_ASSOC_64WAY		BFIELD(6, 3, 3)
#define CP0_CPUID_ICACHE_ASSOC_128WAY		BFIELD(7, 3, 3)

#define CP0_CPUID_ICACHE_SIZE_MASK		BFMASK(3, 6)
#define CP0_CPUID_ICACHE_SIZE_512B		BFIELD(0, 3, 6)
#define CP0_CPUID_ICACHE_SIZE_1KB		BFIELD(1, 3, 6)
#define CP0_CPUID_ICACHE_SIZE_2KB		BFIELD(2, 3, 6)
#define CP0_CPUID_ICACHE_SIZE_4KB		BFIELD(3, 3, 6)
#define CP0_CPUID_ICACHE_SIZE_8KB		BFIELD(4, 3, 6)
#define CP0_CPUID_ICACHE_SIZE_16KB		BFIELD(5, 3, 6)
#define CP0_CPUID_ICACHE_SIZE_32KB		BFIELD(6, 3, 6)
#define CP0_CPUID_ICACHE_SIZE_64KB		BFIELD(7, 3, 6)

#define CP0_CPUID_DCACHE_LINE_MASK		BFMASK(2, 12)
#define CP0_CPUID_DCACHE_LINE_8BYTE		BFIELD(0, 2, 12)
#define CP0_CPUID_DCACHE_LINE_16BYTE		BFIELD(1, 2, 12)
#define CP0_CPUID_DCACHE_LINE_32BYTE		BFIELD(2, 2, 12)
#define CP0_CPUID_DCACHE_LINE_64BYTE		BFIELD(3, 2, 12)

#define CP0_CPUID_DCACHE_ASSOC_MASK		BFMASK(3, 15)
#define CP0_CPUID_DCACHE_ASSOC_DMAP		BFIELD(0, 3, 15)
#define CP0_CPUID_DCACHE_ASSOC_2WAY		BFIELD(1, 3, 15)
#define CP0_CPUID_DCACHE_ASSOC_4WAY		BFIELD(2, 3, 15)
#define CP0_CPUID_DCACHE_ASSOC_8WAY		BFIELD(3, 3, 15)
#define CP0_CPUID_DCACHE_ASSOC_16WAY		BFIELD(4, 3, 15)
#define CP0_CPUID_DCACHE_ASSOC_32WAY		BFIELD(5, 3, 15)
#define CP0_CPUID_DCACHE_ASSOC_64WAY		BFIELD(6, 3, 15)
#define CP0_CPUID_DCACHE_ASSOC_128WAY		BFIELD(7, 3, 15)

#define CP0_CPUID_DCACHE_SIZE_MASK		BFMASK(3, 18)
#define CP0_CPUID_DCACHE_SIZE_512B		BFIELD(0, 3, 18)
#define CP0_CPUID_DCACHE_SIZE_1KB		BFIELD(1, 3, 18)
#define CP0_CPUID_DCACHE_SIZE_2KB		BFIELD(2, 3, 18)
#define CP0_CPUID_DCACHE_SIZE_4KB		BFIELD(3, 3, 18)
#define CP0_CPUID_DCACHE_SIZE_8KB		BFIELD(4, 3, 18)
#define CP0_CPUID_DCACHE_SIZE_16KB		BFIELD(5, 3, 18)
#define CP0_CPUID_DCACHE_SIZE_32KB		BFIELD(6, 3, 18)
#define CP0_CPUID_DCACHE_SIZE_64KB		BFIELD(7, 3, 18)

#define CP0_CPUID_CACHE_SEPERATE		BFIELD(1, 1, 24)
#define CP0_CPUID_CACHE_LOCKDOWN		BFIELD(1, 1, 25)
#define CP0_CPUID_CACHE_WRITEBACK		BFIELD(1, 1, 26)
#define CP0_CPUID_CACHE_WRITETHROUGH		BFIELD(1, 1, 27)

#endif /* __UNICORE64_ARCH_HWDEF_COPRO_H__ */
