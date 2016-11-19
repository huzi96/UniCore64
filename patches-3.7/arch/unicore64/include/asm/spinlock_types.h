#ifndef __UNICORE64_ASM_SPINLOCK_TYPES_H__
#define __UNICORE64_ASM_SPINLOCK_TYPES_H__

#ifndef __LINUX_SPINLOCK_TYPES_H
# error "please don't include this file directly"
#endif

#define LOCK_TOKEN		(1)
#define WRLOCK_TOKEN		__BP(31)

typedef struct {
	volatile unsigned int lock;
} arch_spinlock_t;

#define __ARCH_SPIN_LOCK_UNLOCKED	{ 0 }

typedef struct {
	volatile unsigned int lock;
} arch_rwlock_t;

#define __ARCH_RW_LOCK_UNLOCKED		{ 0 }

#endif /* __UNICORE64_ASM_SPINLOCK_TYPES_H__ */
