#pragma once
#include "memory.h"
#include "instruction.h"

typedef unsigned short USHORT;
typedef unsigned char BYTE;

#define NEGATIVE  0x80
#define OVERFLOW  0x40
#define CONSTANT  0x20
#define BREAK     0x10
#define DECIMAL   0x08
#define INTERRUPT 0x04
#define ZERO      0x02
#define CARRY     0x01

const BYTE reset_AC = 0x00;
const BYTE reset_X = 0x00;
const BYTE reset_Y = 0x00;
const BYTE reset_sp = 0xFD;
const BYTE reset_status = CONSTANT;
const WORD reset_pc = 0;


class CPU {
public:
	WORD PC = 0;
	BYTE SP  = reset_sp;
	BYTE AC = reset_AC;
	BYTE X = reset_X;
	BYTE Y = reset_Y;
	BYTE status = reset_status;
	Memory memory;

	static const WORD irqVectorH = 0xFFFE;
	static const WORD irqVectorL = 0xFFFD;
	static const WORD rstVectorH = 0xFFFC;
	static const WORD rstVectorL = 0xFFFB;
	static const WORD nmiVectorH = 0xFFFA;
	static const WORD nmiVectorL = 0xFFF9;



	bool if_negative();
	bool if_overflow();
	bool if_constant();
	bool if_break();
	bool if_decimal();
	bool if_interrupt();
	bool if_zero();
	bool if_carry();

	void set_negative(bool x);
	void set_overflow(bool x);
	void set_constant(bool x);
	void set_break(bool x);
	void set_decimal(bool x);
	void set_interrupt(bool x);
	void set_zero(bool x);
	void set_carry(bool x);

	void Reset();
	void StackPush(BYTE value);
	BYTE StackPop();
	void IRQ();
	void NMI();
	void Exec(Instruction i);

	void Run_step(Instruction* instruction_table);
};
