all:
	arm-none-eabi-gcc -g -mcpu=cortex-m3 -mthumb only_c.c -nostartfiles -T only_c.ld -o only_c.o
	arm-none-eabi-ld -T only_c.ld -o only_c.axf only_c.o


