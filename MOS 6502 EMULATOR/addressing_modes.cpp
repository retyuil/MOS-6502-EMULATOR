#include "addressing_modes.h"
#include "cpu.h"

WORD Absolute_read(CPU* cpu) {
	WORD addr;
	BYTE low_byte = cpu->memory.read_byte(cpu->PC);
	cpu->PC = cpu->PC + 1;
	BYTE high_byte = cpu->memory.read_byte(cpu->PC);
	cpu->PC = cpu->PC + 1;
	addr = low_byte + (high_byte << 8);
	return (addr);
}

WORD Absolute_x_read(CPU* cpu) {
	WORD addr;
	BYTE low_byte = cpu->memory.read_byte(cpu->PC);
	cpu->PC = cpu->PC + 1;
	BYTE high_byte = cpu->memory.read_byte(cpu->PC);
	cpu->PC = cpu->PC + 1;
	addr = low_byte + (high_byte << 8) + cpu->X;
	return (addr);
}

WORD Absolute_y_read(CPU* cpu) {
	WORD addr;
	BYTE low_byte = cpu->memory.read_byte(cpu->PC);
	cpu->PC = cpu->PC + 1;
	BYTE high_byte = cpu->memory.read_byte(cpu->PC);
	cpu->PC = cpu->PC + 1;
	addr = low_byte + (high_byte << 8) + cpu->Y;
	return (addr);
}


WORD Immediate_read(CPU* cpu) {
	WORD addr;
	addr = cpu->PC;
	cpu->PC = cpu->PC + 1;
	return (addr);
}

WORD Indirect_x_read(CPU* cpu) {
	WORD zeroL;
	WORD zeroH;
	WORD addr;

	zeroL = (cpu->memory.read_byte(cpu->PC));
	cpu->PC = cpu->PC + 1;
	zeroH = (zeroL + 1) & 0xFF;
	addr = cpu->memory.read_byte(zeroL) + (cpu->memory.read_byte(zeroH) << 8) + cpu->X;

	return addr;
}


WORD Indirect_y_read(CPU* cpu) {
	WORD zeroL;
	WORD zeroH;
	WORD addr;

	zeroL = (cpu->memory.read_byte(cpu->PC));
	cpu->PC = cpu->PC + 1;
	zeroH = (zeroL + 1) & 0xFF;
	addr = cpu->memory.read_byte(zeroL) + (cpu->memory.read_byte(zeroH) << 8) + cpu->Y;

	return addr;
}

WORD none(CPU* cpu) {
	return 0;
}

WORD Zeropage_read(CPU* cpu) {
	WORD addr;
	addr = cpu->memory.read_byte(cpu->PC);
	cpu->PC = cpu->PC+1;
	return addr;
}

WORD Zeropage_x_read(CPU* cpu) {
	WORD addr;
	addr = (cpu->memory.read_byte(cpu->PC) + cpu->X) & 0xFF;
	cpu->PC = cpu->PC + 1;
	return addr;
}

WORD Zeropage_y_read(CPU* cpu) {
	WORD addr;
	addr = (cpu->memory.read_byte(cpu->PC) + cpu->Y) & 0xFF;
	cpu->PC = cpu->PC + 1;
	return addr;
}

WORD Relative_read(CPU* cpu) {
	WORD offset;
	WORD addr;

	offset = (WORD)cpu->memory.read_byte(cpu->PC);
	cpu->PC = cpu->PC + 1;

	if (offset & 0x80) offset |= 0xFF00;

	addr = cpu->PC + (int16_t)offset;

	return addr;
}

WORD Indirect_read(CPU* cpu) {
	WORD zeroL;
	WORD zeroH;
	WORD addr;

	zeroL = (cpu->memory.read_byte(cpu->PC));
	cpu->PC = cpu->PC + 1;
	zeroH = (cpu->memory.read_byte(cpu->PC));
	cpu->PC = cpu->PC + 1;
	addr = cpu->memory.read_byte(zeroL) + (cpu->memory.read_byte(zeroH) << 8);

	return addr;
}

WORD Accumulator_read(CPU* CPU) {
	return 0;
}