#ifndef __UNICORE64_ASM_DMA_MAPPING_H__
#define __UNICORE64_ASM_DMA_MAPPING_H__

#ifdef __KERNEL__

#include <linux/mm_types.h>
#include <linux/scatterlist.h>
#include <linux/swiotlb.h>

#include <asm-generic/dma-coherent.h>

#include <asm/cacheflush.h>

extern struct dma_map_ops swiotlb_dma_map_ops;

#define get_dma_ops(dev)		(&swiotlb_dma_map_ops)

#define dma_supported(d, m)			\
		(get_dma_ops(dev)->dma_supported((d), (m)))
#define dma_alloc_coherent(d, s, h, f)		\
		(get_dma_ops(dev)->alloc((d), (s), (h), (f), NULL))
#define dma_free_coherent(d, s, a, h)		\
		(get_dma_ops(dev)->free((d), (s), (a), (h), NULL))

#define dma_alloc_noncoherent(d, s, h, f)	\
		dma_alloc_coherent((d), (s), (h), (f))
#define dma_free_noncoherent(d, s, a, h)	\
		dma_free_coherent((d), (s), (a), (h))

extern bool dma_capable(struct device *dev, dma_addr_t addr, size_t size);
extern dma_addr_t phys_to_dma(struct device *dev, phys_addr_t paddr);
extern phys_addr_t dma_to_phys(struct device *dev, dma_addr_t daddr);
extern void dma_mark_clean(void *addr, size_t size);

#include <asm-generic/dma-mapping-common.h>

#endif /* __KERNEL__ */
#endif /* __UNICORE64_ASM_DMA_MAPPING_H__ */
