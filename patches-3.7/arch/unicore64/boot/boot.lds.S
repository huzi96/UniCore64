#include <asm-generic/vmlinux.lds.h>
#include <arch/hwdef-memory.h>

OUTPUT_ARCH(unicore64)
ENTRY(_start)
SECTIONS
{
  /DISCARD/ : {
    /*
     * Discard any r/w data - this produces a link error if we have any,
     * which is required for PIC decompression.  Local data generates
     * GOTOFF relocations, which prevents it being relocated independently
     * of the text/got segments.
     */
    *(.data)
  }

  . = UC64_PM_ZIMAGE_START;
  _text = .;

  .text : {
    _start = .;
    *(.start)
    *(.text)
    *(.rodata)
    *(.rodata.*)
    *(.piggydata)
    . = ALIGN(4);
  }
  _etext = .;

  . = ALIGN(4);
  __bss_start = .;
  .bss			: { *(.bss) }
  _end = .;

  .comment 0		: { *(.comment) }
}