#include "cpu.h"

bool CPU::if_negative() {
	bool res = ((status & NEGATIVE) ? true : false);
	return res;
}

bool CPU::if_overflow() {
	bool res = ((status & OVERFLOW) ? true : false);
	return res;
}

bool CPU::if_constant() {
	bool res = ((status & CONSTANT) ? true : false);
	return res;
}

bool CPU::if_break() {
	bool res = ((status & BREAK) ? true : false);
	return res;
}

bool CPU::if_decimal() {
	bool res = ((status & DECIMAL) ? true : false);
	return res;
}

bool CPU::if_interrupt() {
	bool res = ((status & INTERRUPT) ? true : false);
	return res;
}

bool CPU::if_zero() {
	bool res = ((status & ZERO) ? true : false);
	return res;
}

bool CPU::if_carry() {
	bool res = ((status & CARRY) ? true : false);
	return res;
}

void CPU::set_negative(bool x) {
	if (CPU::if_negative() != x)
	{
		status &= (~NEGATIVE);
	}
}

void CPU::set_overflow(bool x) {
	if (CPU::if_overflow() != x)
	{
		status &= (~OVERFLOW);
	}
}

void CPU::set_constant(bool x) {
	if (CPU::if_constant() != x)
	{
		status &= (~CONSTANT);
	}
}

void CPU::set_break(bool x) {
	if (CPU::if_break() != x)
	{
		status &= (~BREAK);
	}
}

void CPU::set_decimal(bool x) {
	if (CPU::if_decimal() != x)
	{
		status &= (~DECIMAL);
	}
}

void CPU::set_interrupt(bool x) {
	if (CPU::if_interrupt() != x)
	{
		status &= (~INTERRUPT);
	}
}

void CPU::set_carry(bool x) {
	if (CPU::if_carry() != x) 
	{
		status &= (~CARRY);
	}
}

void CPU::set_zero(bool x) {
	if (CPU::if_zero() != x)
	{
		status &= (~ZERO);
	}
}

void CPU::Reset() {
	AC = reset_AC;
	Y = reset_Y;
	X = reset_X;
	PC = reset_pc;
	BYTE pcl = memory.read_byte(rstVectorL);
	BYTE pch = memory.read_byte(rstVectorH);
	status = reset_status | CONSTANT | BREAK;
	PC = (pch << 8) + pcl;
}

void CPU::StackPush(BYTE value) {
	memory.write_byte(0x100 + SP, value);
	if (SP = 0x00) SP= 0xFF;
	else SP--;
}

BYTE CPU::StackPop() {
	if (SP == 0xFF) SP = 0x00;
	else SP++;
	return memory.read_byte(0x0100 + SP);
}


void CPU::IRQ() {
	if (!if_interrupt()) {
		StackPush((PC >> 8) & 0xFF);
		StackPush((PC & 0xFF));
		StackPush((status & ~BREAK) | CONSTANT);
		set_interrupt(1);
		BYTE pcl = memory.read_byte(irqVectorL);
		BYTE pch = memory.read_byte(irqVectorH);
		PC = (pch << 8) + pcl;
	}
}

void CPU::NMI() {
	if (!if_interrupt()) {
		StackPush((PC >> 8) & 0xFF);
		StackPush((PC & 0xFF));
		StackPush((status & ~BREAK) | CONSTANT);
		set_interrupt(1);
		BYTE pcl = memory.read_byte(nmiVectorL);
		BYTE pch = memory.read_byte(nmiVectorH);
		PC = (pch << 8) + pcl;
	}
}


void CPU::Exec(Instruction i) {
	WORD address = i.addr(this);
	i.code(this, address);
}

void CPU::Run_step(Instruction* instruction_table) {
	BYTE opcode;
	Instruction i;

	opcode = memory.read_byte(PC);
	printf("OPCODE : %02X \n",opcode);
	printf("X : %02X \n", X);
	printf("Y : %02X \n", Y);
	printf("AC : %02X \n", AC);
	printf("SP : %02X \n", SP);
	printf("PC : %02X \n", PC);
	PC = PC + 1;
	i = instruction_table[opcode];
	Exec(i);


}