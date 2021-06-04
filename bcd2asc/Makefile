

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
all: bcd2asc disa-bcd2asc


bcd2asc: bcd2ascii.o main_bcd2a.o
	$(CC) $(LDFLAGS) $^ -o $@

disa-bcd2asc: bcd2asc
	$(OBJDUMP) -d bcd2asc > bcd2asc.asm

TEMP += bcd2asc main_bcd2a.o bcd2asc.asm bcd2asc.o

.PHONY: clean
clean:
	rm -f $(TEMP)
