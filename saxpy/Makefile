

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
all: saxpy 


saxpy: saxpy.o main_saxpy.o 
	$(CC) -g -Og -T spike.lds -nostartfiles $^ -o $@
	# $(LD) $(LDFLAGS) $^ -o $@

disa-saxpy: saxpy
	$(OBJDUMP) -d saxpy > saxpy.asm

TEMP += saxpy saxpy.o main_saxpy.o saxpy.asm


.PHONY: clean
clean:
	rm -f $(TEMP)
