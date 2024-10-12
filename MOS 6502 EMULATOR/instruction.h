#pragma once
//#include "cpu.h"
#include "addressing_modes.h"

class CPU;

typedef void (*CodeExec)(CPU*, WORD);
typedef WORD(*AddrExec)(CPU*);

struct Instruction {
	AddrExec addr;
	CodeExec code;
	BYTE cycles;
};


void Op_ADC(CPU* cpu,  WORD src);
void Op_AND(CPU* cpu,  WORD src);
void Op_ASL(CPU* cpu,  WORD src); 	void Op_ASL_ACC(CPU* cpu,  WORD src);
void Op_BCC(CPU* cpu,  WORD src);
void Op_BCS(CPU* cpu,  WORD src);

void Op_BEQ(CPU* cpu,  WORD src);
void Op_BIT(CPU* cpu,  WORD src);
void Op_BMI(CPU* cpu,  WORD src);
void Op_BNE(CPU* cpu,  WORD src);
void Op_BPL(CPU* cpu,  WORD src);

void Op_BRK(CPU* cpu,  WORD src);
void Op_BVC(CPU* cpu,  WORD src);
void Op_BVS(CPU* cpu,  WORD src);
void Op_CLC(CPU* cpu,  WORD src);
void Op_CLD(CPU* cpu,  WORD src);

void Op_CLI(CPU* cpu,  WORD src);
void Op_CLV(CPU* cpu,  WORD src);
void Op_CMP(CPU* cpu,  WORD src);
void Op_CPX(CPU* cpu,  WORD src);
void Op_CPY(CPU* cpu,  WORD src);

void Op_DEC(CPU* cpu,  WORD src);
void Op_DEX(CPU* cpu,  WORD src);
void Op_DEY(CPU* cpu,  WORD src);
void Op_EOR(CPU* cpu,  WORD src);
void Op_INC(CPU* cpu,  WORD src);

void Op_INX(CPU* cpu,  WORD src);
void Op_INY(CPU* cpu,  WORD src);
void Op_JMP(CPU* cpu,  WORD src);
void Op_JSR(CPU* cpu,  WORD src);
void Op_LDA(CPU* cpu,  WORD src);

void Op_LDX(CPU* cpu,  WORD src);
void Op_LDY(CPU* cpu,  WORD src);
void Op_LSR(CPU* cpu,  WORD src); 	void Op_LSR_ACC(CPU* cpu,  WORD src);
void Op_NOP(CPU* cpu,  WORD src);
void Op_ORA(CPU* cpu,  WORD src);

void Op_PHA(CPU* cpu,  WORD src);
void Op_PHP(CPU* cpu,  WORD src);
void Op_PLA(CPU* cpu,  WORD src);
void Op_PLP(CPU* cpu,  WORD src);
void Op_ROL(CPU* cpu,  WORD src); 	void Op_ROL_ACC(CPU* cpu,  WORD src);

void Op_ROR(CPU* cpu,  WORD src);	void Op_ROR_ACC(CPU* cpu,  WORD src);
void Op_RTI(CPU* cpu,  WORD src);
void Op_RTS(CPU* cpu,  WORD src);
void Op_SBC(CPU* cpu,  WORD src);
void Op_SEC(CPU* cpu,  WORD src);
void Op_SED(CPU* cpu,  WORD src);

void Op_SEI(CPU* cpu,  WORD src);
void Op_STA(CPU* cpu,  WORD src);
void Op_STX(CPU* cpu,  WORD src);
void Op_STY(CPU* cpu,  WORD src);
void Op_TAX(CPU* cpu,  WORD src);

void Op_TAY(CPU* cpu,  WORD src);
void Op_TSX(CPU* cpu,  WORD src);
void Op_TXA(CPU* cpu,  WORD src);
void Op_TXS(CPU* cpu,  WORD src);
void Op_TYA(CPU* cpu,  WORD src);

void Op_ILLEGAL(CPU* cpu, WORD src);

void populate_instruction_table(Instruction* instruction_table);