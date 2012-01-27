#ifndef __UNICORE64_ARCH_PUV3_IOMEM_H__
#define __UNICORE64_ARCH_PUV3_IOMEM_H__

#include <linux/types.h>
#include <arch/hwdef-memory.h>

#ifndef __ASSEMBLY__
#define PUV3_IOMEM(x)			(resource_size_t)(UC64_VM_IO_START + (x))
#define PUV3_IOREG(x)			(void __iomem *)(x)
#else
#define PUV3_IOMEM(x)			(UC64_VM_IO_START + (x))
#define PUV3_IOREG(x)			(x)
#endif

/* Assume the region for every ip in puv3 having 4K iomem */
#define PUV3_IOMEM_REGION		__BS(12, 0)

/*
 * PUV3 System Bus Addresses (PCI): 0x80000000 - 0xBFFFFFFF (1GB)
 * 0x80000000 - 0x8000000B 12B    PCI Configuration regs
 * 0x80010000 - 0x80010250 592B   PCI Bridge Base
 * 0x80030000 - 0x8003FFFF 64KB   PCI Legacy IO
 * 0x90000000 - 0x97FFFFFF 128MB  PCI AHB-PCI MEM-mapping
 * 0x98000000 - 0x9FFFFFFF 128MB  PCI PCI-AHB MEM-mapping
 */
#define PUV3_PCI_BASE			PUV3_IOMEM(0x00000000)
#define PUV3_PCICFG_BASE		(PUV3_PCI_BASE + 0x0)
#define PUV3_PCIBRI_BASE		(PUV3_PCI_BASE + 0x00010000)
#define PUV3_PCILIO_BASE		(PUV3_PCI_BASE + 0x00030000)
#define PUV3_PCIMEM_BASE		(PUV3_PCI_BASE + 0x10000000)
#define PUV3_PCIAHB_BASE		(PUV3_PCI_BASE + 0x18000000)

/*
 * PUV3 System Bus Addresses (AHB): 0xC0000000 - 0xEDFFFFFF (640MB)
 */
#define PUV3_AHB_BASE			PUV3_IOMEM(0x40000000)

/* AHB-0 is DDR2 SDRAM */
/* AHB-1 is PCI Space */
#define PUV3_ARBITER_BASE		(PUV3_AHB_BASE + 0x000000) /* AHB-2 */
#define PUV3_DDR2CTRL_BASE		(PUV3_AHB_BASE + 0x100000) /* AHB-3 */
#define PUV3_DMAC_BASE			(PUV3_AHB_BASE + 0x200000) /* AHB-4 */
#define PUV3_UMAL_BASE			(PUV3_AHB_BASE + 0x300000) /* AHB-5 */
#define PUV3_USB_BASE			(PUV3_AHB_BASE + 0x400000) /* AHB-6 */
#define PUV3_SATA_BASE			(PUV3_AHB_BASE + 0x500000) /* AHB-7 */
#define PUV3_SMC_BASE			(PUV3_AHB_BASE + 0x600000) /* AHB-8 */
/* AHB-9 is for APB bridge */
#define PUV3_MME_BASE			(PUV3_AHB_BASE + 0x700000) /* AHB-10 */
#define PUV3_UNIGFX_BASE		(PUV3_AHB_BASE + 0x800000) /* AHB-11 */
#define PUV3_NAND_BASE			(PUV3_AHB_BASE + 0x900000) /* AHB-12 */
#define PUV3_H264D_BASE			(PUV3_AHB_BASE + 0xA00000) /* AHB-13 */
#define PUV3_H264E_BASE			(PUV3_AHB_BASE + 0xB00000) /* AHB-14 */

/*
 * PUV3 Peripheral Bus Addresses (APB): 0xEE000000 - 0xEFFFFFFF (128MB)
 */
#define PUV3_APB_BASE			PUV3_IOMEM(0x6E000000)

#define PUV3_UART0_BASE			(PUV3_APB_BASE + 0x000000) /* APB-0 */
#define PUV3_UART1_BASE			(PUV3_APB_BASE + 0x100000) /* APB-1 */
#define PUV3_I2C_BASE			(PUV3_APB_BASE + 0x200000) /* APB-2 */
#define PUV3_SPI_BASE			(PUV3_APB_BASE + 0x300000) /* APB-3 */
#define PUV3_AC97_BASE			(PUV3_APB_BASE + 0x400000) /* APB-4 */
#define PUV3_GPIO_BASE			(PUV3_APB_BASE + 0x500000) /* APB-5 */
#define PUV3_INTC_BASE			(PUV3_APB_BASE + 0x600000) /* APB-6 */
#define PUV3_RTC_BASE			(PUV3_APB_BASE + 0x700000) /* APB-7 */
#define PUV3_OST_BASE			(PUV3_APB_BASE + 0x800000) /* APB-8 */
#define PUV3_RESETC_BASE		(PUV3_APB_BASE + 0x900000) /* APB-9 */
#define PUV3_PM_BASE			(PUV3_APB_BASE + 0xA00000) /* APB-10 */
#define PUV3_PS2_BASE			(PUV3_APB_BASE + 0xB00000) /* APB-11 */
#define PUV3_SDC_BASE			(PUV3_APB_BASE + 0xC00000) /* APB-12 */

#endif  /* __UNICORE64_ARCH_PUV3_IOMEM_H__ */
