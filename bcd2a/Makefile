

ASFLAGS = -march=rv64gv

AS = riscv64-unknown-elf-as
CC = riscv64-unknown-elf-gcc
LD = riscv64-unknown-elf-ld
OBJDUMP = riscv64-unknown-elf-objdump

CFLAGSW_GCC = -Wall -Wextra -Wno-missing-field-initializers \
    -Wno-parentheses -Wno-missing-braces \
    -Wmissing-prototypes -Wfloat-equal \
    -Wwrite-strings -Wpointer-arith -Wcast-align \
    -Wnull-dereference \
    -Werror=multichar -Werror=sizeof-pointer-memaccess -Werror=return-type \
    -fstrict-aliasing

CFLAGS = $(CFLAGSW_GCC) $(CFLAGS0) $(CFLAGS1)


.PHONY: all
all: bcd2a 


bcd2a: bcd2ascii.o start_bcd2a.o 
	$(LD) $(LDFLAGS) $^ -o $@

disa-bcd2a: bcd2a
	$(OBJDUMP) -d bcd2a > bcd2a.asm

TEMP += bcd2a bcd2ascii.o start_bcd2a.o bcd2a.asm


.PHONY: clean
clean:
	rm -f $(TEMP)
