#include "instruction.h"
#include "cpu.h"


void populate_instruction_table(Instruction* InstrTable) {
    Instruction instr; 

	instr.addr = &Immediate_read;
	instr.code = &Op_ADC;
	instr.cycles = 2;
	InstrTable[0x69] = instr;
	instr.addr = &Absolute_read;
	instr.code = &Op_ADC;
	instr.cycles = 4;
	InstrTable[0x6D] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_ADC;
	instr.cycles = 3;
	InstrTable[0x65] = instr;
	instr.addr = &Indirect_x_read;
	instr.code = &Op_ADC;
	instr.cycles = 6;
	InstrTable[0x61] = instr;
	instr.addr = &Indirect_y_read;
	instr.code = &Op_ADC;
	instr.cycles = 6;
	InstrTable[0x71] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_ADC;
	instr.cycles = 4;
	InstrTable[0x75] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_ADC;
	instr.cycles = 4;
	InstrTable[0x7D] = instr;
	instr.addr = &Absolute_y_read;
	instr.code = &Op_ADC;
	instr.cycles = 4;
	InstrTable[0x79] = instr;

	instr.addr = &Immediate_read;
	instr.code = &Op_AND;
	instr.cycles = 2;
	InstrTable[0x29] = instr;
	instr.addr = &Absolute_read;
	instr.code = &Op_AND;
	instr.cycles = 4;
	InstrTable[0x2D] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_AND;
	instr.cycles = 3;
	InstrTable[0x25] = instr;
	instr.addr = &Indirect_x_read;
	instr.code = &Op_AND;
	instr.cycles = 6;
	InstrTable[0x21] = instr;
	instr.addr = &Indirect_y_read;
	instr.code = &Op_AND;
	instr.cycles = 5;
	InstrTable[0x31] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_AND;
	instr.cycles = 4;
	InstrTable[0x35] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_AND;
	instr.cycles = 4;
	InstrTable[0x3D] = instr;
	instr.addr = &Absolute_y_read;
	instr.code = &Op_AND;
	instr.cycles = 4;
	InstrTable[0x39] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_ASL;
	instr.cycles = 6;
	InstrTable[0x0E] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_ASL;
	instr.cycles = 5;
	InstrTable[0x06] = instr;
	instr.addr = &Accumulator_read;
	instr.code = &Op_ASL_ACC;
	instr.cycles = 2;
	InstrTable[0x0A] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_ASL;
	instr.cycles = 6;
	InstrTable[0x16] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_ASL;
	instr.cycles = 7;
	InstrTable[0x1E] = instr;

	instr.addr = &Relative_read;
	instr.code = &Op_BCC;
	instr.cycles = 2;
	InstrTable[0x90] = instr;

	instr.addr = &Relative_read;
	instr.code = &Op_BCS;
	instr.cycles = 2;
	InstrTable[0xB0] = instr;

	instr.addr = &Relative_read;
	instr.code = &Op_BEQ;
	instr.cycles = 2;
	InstrTable[0xF0] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_BIT;
	instr.cycles = 4;
	InstrTable[0x2C] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_BIT;
	instr.cycles = 3;
	InstrTable[0x24] = instr;

	instr.addr = &Relative_read;
	instr.code = &Op_BMI;
	instr.cycles = 2;
	InstrTable[0x30] = instr;

	instr.addr = &Relative_read;
	instr.code = &Op_BNE;
	instr.cycles = 2;
	InstrTable[0xD0] = instr;

	instr.addr = &Relative_read;
	instr.code = &Op_BPL;
	instr.cycles = 2;
	InstrTable[0x10] = instr;

	instr.addr = &none;
	instr.code = &Op_BRK;
	instr.cycles = 7;
	InstrTable[0x00] = instr;

	instr.addr = &Relative_read;
	instr.code = &Op_BVC;
	instr.cycles = 2;
	InstrTable[0x50] = instr;

	instr.addr = &Relative_read;
	instr.code = &Op_BVS;
	instr.cycles = 2;
	InstrTable[0x70] = instr;

	instr.addr = &none;
	instr.code = &Op_CLC;
	instr.cycles = 2;
	InstrTable[0x18] = instr;

	instr.addr = &none;
	instr.code = &Op_CLD;
	instr.cycles = 2;
	InstrTable[0xD8] = instr;

	instr.addr = &none;
	instr.code = &Op_CLI;
	instr.cycles = 2;
	InstrTable[0x58] = instr;

	instr.addr = &none;
	instr.code = &Op_CLV;
	instr.cycles = 2;
	InstrTable[0xB8] = instr;

	instr.addr = &Immediate_read;
	instr.code = &Op_CMP;
	instr.cycles = 2;
	InstrTable[0xC9] = instr;
	instr.addr = &Absolute_read;
	instr.code = &Op_CMP;
	instr.cycles = 4;
	InstrTable[0xCD] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_CMP;
	instr.cycles = 3;
	InstrTable[0xC5] = instr;
	instr.addr = &Indirect_x_read;
	instr.code = &Op_CMP;
	instr.cycles = 6;
	InstrTable[0xC1] = instr;
	instr.addr = &Indirect_y_read;
	instr.code = &Op_CMP;
	instr.cycles = 3;
	InstrTable[0xD1] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_CMP;
	instr.cycles = 4;
	InstrTable[0xD5] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_CMP;
	instr.cycles = 4;
	InstrTable[0xDD] = instr;
	instr.addr = &Absolute_y_read;
	instr.code = &Op_CMP;
	instr.cycles = 4;
	InstrTable[0xD9] = instr;

	instr.addr = &Immediate_read;
	instr.code = &Op_CPX;
	instr.cycles = 2;
	InstrTable[0xE0] = instr;
	instr.addr = &Absolute_read;
	instr.code = &Op_CPX;
	instr.cycles = 4;
	InstrTable[0xEC] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_CPX;
	instr.cycles = 3;
	InstrTable[0xE4] = instr;

	instr.addr = &Immediate_read;
	instr.code = &Op_CPY;
	instr.cycles = 2;
	InstrTable[0xC0] = instr;
	instr.addr = &Absolute_read;
	instr.code = &Op_CPY;
	instr.cycles = 4;
	InstrTable[0xCC] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_CPY;
	instr.cycles = 3;
	InstrTable[0xC4] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_DEC;
	instr.cycles = 6;
	InstrTable[0xCE] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_DEC;
	instr.cycles = 5;
	InstrTable[0xC6] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_DEC;
	instr.cycles = 6;
	InstrTable[0xD6] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_DEC;
	instr.cycles = 7;
	InstrTable[0xDE] = instr;

	instr.addr = &none;
	instr.code = &Op_DEX;
	instr.cycles = 2;
	InstrTable[0xCA] = instr;

	instr.addr = &none;
	instr.code = &Op_DEY;
	instr.cycles = 2;
	InstrTable[0x88] = instr;

	instr.addr = &Immediate_read;
	instr.code = &Op_EOR;
	instr.cycles = 2;
	InstrTable[0x49] = instr;
	instr.addr = &Absolute_read;
	instr.code = &Op_EOR;
	instr.cycles = 4;
	InstrTable[0x4D] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_EOR;
	instr.cycles = 3;
	InstrTable[0x45] = instr;
	instr.addr = &Indirect_x_read;
	instr.code = &Op_EOR;
	instr.cycles = 6;
	InstrTable[0x41] = instr;
	instr.addr = &Indirect_y_read;
	instr.code = &Op_EOR;
	instr.cycles = 5;
	InstrTable[0x51] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_EOR;
	instr.cycles = 4;
	InstrTable[0x55] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_EOR;
	instr.cycles = 4;
	InstrTable[0x5D] = instr;
	instr.addr = &Absolute_y_read;
	instr.code = &Op_EOR;
	instr.cycles = 4;
	InstrTable[0x59] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_INC;
	instr.cycles = 6;
	InstrTable[0xEE] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_INC;
	instr.cycles = 5;
	InstrTable[0xE6] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_INC;
	instr.cycles = 6;
	InstrTable[0xF6] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_INC;
	instr.cycles = 7;
	InstrTable[0xFE] = instr;

	instr.addr = &none;
	instr.code = &Op_INX;
	instr.cycles = 2;
	InstrTable[0xE8] = instr;

	instr.addr = &none;
	instr.code = &Op_INY;
	instr.cycles = 2;
	InstrTable[0xC8] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_JMP;
	instr.cycles = 3;
	InstrTable[0x4C] = instr;
	instr.addr = &Indirect_read;
	instr.code = &Op_JMP;
	instr.cycles = 5;
	InstrTable[0x6C] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_JSR;
	instr.cycles = 6;
	InstrTable[0x20] = instr;

	instr.addr = &Immediate_read;
	instr.code = &Op_LDA;
	instr.cycles = 2;
	InstrTable[0xA9] = instr;
	instr.addr = &Absolute_read;
	instr.code = &Op_LDA;
	instr.cycles = 4;
	InstrTable[0xAD] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_LDA;
	instr.cycles = 3;
	InstrTable[0xA5] = instr;
	instr.addr = &Indirect_x_read;
	instr.code = &Op_LDA;
	instr.cycles = 6;
	InstrTable[0xA1] = instr;
	instr.addr = &Indirect_y_read;
	instr.code = &Op_LDA;
	instr.cycles = 5;
	InstrTable[0xB1] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_LDA;
	instr.cycles = 4;
	InstrTable[0xB5] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_LDA;
	instr.cycles = 4;
	InstrTable[0xBD] = instr;
	instr.addr = &Absolute_y_read;
	instr.code = &Op_LDA;
	instr.cycles = 4;
	InstrTable[0xB9] = instr;

	instr.addr = &Immediate_read;
	instr.code = &Op_LDX;
	instr.cycles = 2;
	InstrTable[0xA2] = instr;
	instr.addr = &Absolute_read;
	instr.code = &Op_LDX;
	instr.cycles = 4;
	InstrTable[0xAE] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_LDX;
	instr.cycles = 3;
	InstrTable[0xA6] = instr;
	instr.addr = &Absolute_y_read;
	instr.code = &Op_LDX;
	instr.cycles = 4;
	InstrTable[0xBE] = instr;
	instr.addr = &Zeropage_y_read;
	instr.code = &Op_LDX;
	instr.cycles = 4;
	InstrTable[0xB6] = instr;

	instr.addr = &Immediate_read;
	instr.code = &Op_LDY;
	instr.cycles = 2;
	InstrTable[0xA0] = instr;
	instr.addr = &Absolute_read;
	instr.code = &Op_LDY;
	instr.cycles = 4;
	InstrTable[0xAC] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_LDY;
	instr.cycles = 3;
	InstrTable[0xA4] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_LDY;
	instr.cycles = 4;
	InstrTable[0xB4] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_LDY;
	instr.cycles = 4;
	InstrTable[0xBC] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_LSR;
	instr.cycles = 6;
	InstrTable[0x4E] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_LSR;
	instr.cycles = 5;
	InstrTable[0x46] = instr;
	instr.addr = &Accumulator_read;
	instr.code = &Op_LSR_ACC;
	instr.cycles = 2;
	InstrTable[0x4A] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_LSR;
	instr.cycles = 6;
	InstrTable[0x56] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_LSR;
	instr.cycles = 7;
	InstrTable[0x5E] = instr;

	instr.addr = &none;
	instr.code = &Op_NOP;
	instr.cycles = 2;
	InstrTable[0xEA] = instr;

	instr.addr = &Immediate_read;
	instr.code = &Op_ORA;
	instr.cycles = 2;
	InstrTable[0x09] = instr;
	instr.addr = &Absolute_read;
	instr.code = &Op_ORA;
	instr.cycles = 4;
	InstrTable[0x0D] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_ORA;
	instr.cycles = 3;
	InstrTable[0x05] = instr;
	instr.addr = &Indirect_x_read;
	instr.code = &Op_ORA;
	instr.cycles = 6;
	InstrTable[0x01] = instr;
	instr.addr = &Indirect_y_read;
	instr.code = &Op_ORA;
	instr.cycles = 5;
	InstrTable[0x11] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_ORA;
	instr.cycles = 4;
	InstrTable[0x15] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_ORA;
	instr.cycles = 4;
	InstrTable[0x1D] = instr;
	instr.addr = &Absolute_y_read;
	instr.code = &Op_ORA;
	instr.cycles = 4;
	InstrTable[0x19] = instr;

	instr.addr = &none;
	instr.code = &Op_PHA;
	instr.cycles = 3;
	InstrTable[0x48] = instr;

	instr.addr = &none;
	instr.code = &Op_PHP;
	instr.cycles = 3;
	InstrTable[0x08] = instr;

	instr.addr = &none;
	instr.code = &Op_PLA;
	instr.cycles = 4;
	InstrTable[0x68] = instr;

	instr.addr = &none;
	instr.code = &Op_PLP;
	instr.cycles = 4;
	InstrTable[0x28] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_ROL;
	instr.cycles = 6;
	InstrTable[0x2E] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_ROL;
	instr.cycles = 5;
	InstrTable[0x26] = instr;
	instr.addr = &Accumulator_read;
	instr.code = &Op_ROL_ACC;
	instr.cycles = 2;
	InstrTable[0x2A] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_ROL;
	instr.cycles = 6;
	InstrTable[0x36] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_ROL;
	instr.cycles = 7;
	InstrTable[0x3E] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_ROR;
	instr.cycles = 6;
	InstrTable[0x6E] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_ROR;
	instr.cycles = 5;
	InstrTable[0x66] = instr;
	instr.addr = &Accumulator_read;
	instr.code = &Op_ROR_ACC;
	instr.cycles = 2;
	InstrTable[0x6A] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_ROR;
	instr.cycles = 6;
	InstrTable[0x76] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_ROR;
	instr.cycles = 7;
	InstrTable[0x7E] = instr;

	instr.addr = &none;
	instr.code = &Op_RTI;
	instr.cycles = 6;
	InstrTable[0x40] = instr;

	instr.addr = &none;
	instr.code = &Op_RTS;
	instr.cycles = 6;
	InstrTable[0x60] = instr;

	instr.addr = &Immediate_read;
	instr.code = &Op_SBC;
	instr.cycles = 2;
	InstrTable[0xE9] = instr;
	instr.addr = &Absolute_read;
	instr.code = &Op_SBC;
	instr.cycles = 4;
	InstrTable[0xED] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_SBC;
	instr.cycles = 3;
	InstrTable[0xE5] = instr;
	instr.addr = &Indirect_x_read;
	instr.code = &Op_SBC;
	instr.cycles = 6;
	InstrTable[0xE1] = instr;
	instr.addr = &Indirect_y_read;
	instr.code = &Op_SBC;
	instr.cycles = 5;
	InstrTable[0xF1] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_SBC;
	instr.cycles = 4;
	InstrTable[0xF5] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_SBC;
	instr.cycles = 4;
	InstrTable[0xFD] = instr;
	instr.addr = &Absolute_y_read;
	instr.code = &Op_SBC;
	instr.cycles = 4;
	InstrTable[0xF9] = instr;

	instr.addr = &none;
	instr.code = &Op_SEC;
	instr.cycles = 2;
	InstrTable[0x38] = instr;

	instr.addr = &none;
	instr.code = &Op_SED;
	instr.cycles = 2;
	InstrTable[0xF8] = instr;

	instr.addr = &none;
	instr.code = &Op_SEI;
	instr.cycles = 2;
	InstrTable[0x78] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_STA;
	instr.cycles = 4;
	InstrTable[0x8D] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_STA;
	instr.cycles = 3;
	InstrTable[0x85] = instr;
	instr.addr = &Indirect_x_read;
	instr.code = &Op_STA;
	instr.cycles = 6;
	InstrTable[0x81] = instr;
	instr.addr = &Indirect_y_read;
	instr.code = &Op_STA;
	instr.cycles = 6;
	InstrTable[0x91] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_STA;
	instr.cycles = 4;
	InstrTable[0x95] = instr;
	instr.addr = &Absolute_x_read;
	instr.code = &Op_STA;
	instr.cycles = 5;
	InstrTable[0x9D] = instr;
	instr.addr = &Absolute_y_read;
	instr.code = &Op_STA;
	instr.cycles = 5;
	InstrTable[0x99] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_STX;
	instr.cycles = 4;
	InstrTable[0x8E] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_STX;
	instr.cycles = 3;
	InstrTable[0x86] = instr;
	instr.addr = &Zeropage_y_read;
	instr.code = &Op_STX;
	instr.cycles = 4;
	InstrTable[0x96] = instr;

	instr.addr = &Absolute_read;
	instr.code = &Op_STY;
	instr.cycles = 4;
	InstrTable[0x8C] = instr;
	instr.addr = &Zeropage_read;
	instr.code = &Op_STY;
	instr.cycles = 3;
	InstrTable[0x84] = instr;
	instr.addr = &Zeropage_x_read;
	instr.code = &Op_STY;
	instr.cycles = 4;
	InstrTable[0x94] = instr;

	instr.addr = &none;
	instr.code = &Op_TAX;
	instr.cycles = 2;
	InstrTable[0xAA] = instr;

	instr.addr = &none;
	instr.code = &Op_TAY;
	instr.cycles = 2;
	InstrTable[0xA8] = instr;

	instr.addr = &none;
	instr.code = &Op_TSX;
	instr.cycles = 2;
	InstrTable[0xBA] = instr;

	instr.addr = &none;
	instr.code = &Op_TXA;
	instr.cycles = 2;
	InstrTable[0x8A] = instr;

	instr.addr = &none;
	instr.code = &Op_TXS;
	instr.cycles = 2;
	InstrTable[0x9A] = instr;

	instr.addr = &none;
	instr.code = &Op_TYA;
	instr.cycles = 2;
	InstrTable[0x98] = instr;

}

void Op_ADC(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	unsigned int tmp = m + cpu->AC + (cpu->if_carry() ? 1 : 0);
	cpu->set_zero(!(tmp & 0xFF));
	if (cpu->if_decimal())
	{
		if (((cpu->AC & 0xF) + (m & 0xF) + (cpu->if_carry() ? 1 : 0)) > 9) tmp += 6;
		cpu->set_negative(tmp & 0x80);
		cpu->set_overflow(!((cpu->AC ^ m) & 0x80) && ((cpu->AC ^ tmp) & 0x80));
		if (tmp > 0x99)
		{
			tmp += 96;
		}
		cpu->set_carry(tmp > 0x99);
	}
	else
	{
		cpu->set_negative(tmp & 0x80);
		cpu->set_overflow(!((cpu->AC ^ m) & 0x80) && ((cpu->AC ^ tmp) & 0x80));
		cpu->set_carry(tmp > 0xFF);
	}

	cpu->AC = tmp & 0xFF;
	return;
}


void Op_AND(CPU* cpu, WORD src) {
	BYTE m = cpu->memory.read_byte(src);
	BYTE res = m & cpu->AC;
	cpu->set_negative(res & 0x80);
	cpu->set_zero(!res);
	cpu->AC = res;
	return;
}


void Op_ASL(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	cpu->set_carry(m & 0x80);
	m <<= 1;
	m &= 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->memory.write_byte(src, m);
	return;
}

void Op_ASL_ACC(CPU* cpu, WORD src)
{
	uint8_t m = cpu->AC;
	cpu->set_carry(m & 0x80);
	m <<= 1;
	m &= 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->AC = m;
	return;
}

void Op_BCC(CPU* cpu,WORD src)
{
	if (!cpu->if_carry())
	{
		cpu->PC = src;
	}
	return;
}


void Op_BCS(CPU* cpu,WORD src)
{
	if (cpu->if_carry())
	{
		cpu->PC = src;
	}
	return;
}

void Op_BEQ(CPU* cpu,WORD src)
{
	if (cpu->if_zero())
	{
		cpu->PC = src;
	}
	return;
}

void Op_BIT(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	uint8_t res = m & cpu->AC;
	cpu->set_negative(res & 0x80);
	cpu->status = (cpu->status & 0x3F) | (uint8_t)(m & 0xC0) | CONSTANT | BREAK;
	cpu->set_zero(!res);
	return;
}

void Op_BMI(CPU* cpu,WORD src)
{
	if (cpu->if_negative())
	{
		cpu->PC = src;
	}
	return;
}

void Op_BNE(CPU* cpu,WORD src)
{
	if (!cpu->if_zero())
	{
		cpu->PC = src;
	}
	return;
}

void Op_BPL(CPU* cpu,WORD src)
{
	if (!cpu->if_negative())
	{
		cpu->PC = src;
	}
	return;
}

void Op_BRK(CPU* cpu,WORD src)
{
	cpu->PC++;
	cpu->StackPush((cpu->PC >> 8) & 0xFF);
	cpu->StackPush(cpu->PC & 0xFF);
	cpu->StackPush(cpu->status | CONSTANT | BREAK);
	cpu->set_interrupt(1);
	cpu->PC = (cpu->memory.read_byte(cpu->irqVectorH) << 8) + cpu->memory.read_byte(cpu->irqVectorL);
	return;
}

void Op_BVC(CPU* cpu,WORD src)
{
	if (!cpu->if_overflow())
	{
		cpu->PC = src;
	}
	return;
}

void Op_BVS(CPU* cpu,WORD src)
{
	if (cpu->if_overflow())
	{
		cpu->PC = src;
	}
	return;
}

void Op_CLC(CPU* cpu,WORD src)
{
	cpu->set_carry(0);
	return;
}

void Op_CLD(CPU* cpu,WORD src)
{
	cpu->set_decimal(0);
	return;
}

void Op_CLI(CPU* cpu,WORD src)
{
	cpu->set_interrupt(0);
	return;
}

void Op_CLV(CPU* cpu,WORD src)
{
	cpu->set_overflow(0);
	return;
}

void Op_CMP(CPU* cpu,WORD src)
{
	unsigned int tmp = cpu->AC - cpu->memory.read_byte(src);
	cpu->set_carry(tmp < 0x100);
	cpu->set_negative(tmp & 0x80);
	cpu->set_zero(!(tmp & 0xFF));
	return;
}

void Op_CPX(CPU* cpu,WORD src)
{
	unsigned int tmp = cpu->X - cpu->memory.read_byte(src);
	cpu->set_carry(tmp < 0x100);
	cpu->set_negative(tmp & 0x80);
	cpu->set_zero(!(tmp & 0xFF));
	return;
}

void Op_CPY(CPU* cpu,WORD src)
{
	unsigned int tmp = cpu->Y - cpu->memory.read_byte(src);
	cpu->set_carry(tmp < 0x100);
	cpu->set_negative(tmp & 0x80);
	cpu->set_zero(!(tmp & 0xFF));
	return;
}

void Op_DEC(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	m = (m - 1) & 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->memory.write_byte(src, m);
	return;
}

void Op_DEX(CPU* cpu,WORD src)
{
	uint8_t m = cpu->X;
	m = (m - 1) & 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->X = m;
	return;
}

void Op_DEY(CPU* cpu,WORD src)
{
	uint8_t m = cpu->Y;
	m = (m - 1) & 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->Y = m;
	return;
}

void Op_EOR(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	m = cpu->AC ^ m;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->AC = m;
}

void Op_INC(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	m = (m + 1) & 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->memory.write_byte(src, m);
}

void Op_INX(CPU* cpu,WORD src)
{
	uint8_t m = cpu->X;
	m = (m + 1) & 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->X = m;
}

void Op_INY(CPU* cpu,WORD src)
{
	uint8_t m = cpu->Y;
	m = (m + 1) & 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->Y = m;
}

void Op_JMP(CPU* cpu,WORD src)
{
	cpu->PC = src;
}

void Op_JSR(CPU* cpu,WORD src)
{
	cpu->PC--;
	cpu->StackPush((cpu->PC >> 8) & 0xFF);
	cpu->StackPush(cpu->PC & 0xFF);
	cpu->PC = src;
}

void Op_LDA(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->AC = m;
}

void Op_LDX(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->X = m;
}

void Op_LDY(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->Y = m;
}

void Op_LSR(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	cpu->set_carry(m & 0x01);
	m >>= 1;
	cpu->set_negative(0);
	cpu->set_zero(!m);
	cpu->memory.write_byte(src, m);
}

void Op_LSR_ACC(CPU* cpu,WORD src)
{
	uint8_t m = cpu->AC;
	cpu->set_carry(m & 0x01);
	m >>= 1;
	cpu->set_negative(0);
	cpu->set_zero(!m);
	cpu->AC = m;
}

void Op_NOP(CPU* cpu,WORD src)
{
	return;
}

void Op_ORA(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	m = cpu->AC | m;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->AC = m;
}

void Op_PHA(CPU* cpu,WORD src)
{
	cpu->StackPush(cpu->AC);
	return;
}

void Op_PHP(CPU* cpu,WORD src)
{
	cpu->StackPush(cpu->status | CONSTANT | BREAK);
	return;
}

void Op_PLA(CPU* cpu,WORD src)
{
	cpu->AC = cpu->StackPop();
	cpu->set_negative(cpu->AC & 0x80);
	cpu->set_zero(!cpu->AC);
	return;
}

void Op_PLP(CPU* cpu,WORD src)
{
	cpu->status = cpu->StackPop() | CONSTANT | BREAK;
	//SET_CONSTANT(1);
	return;
}

void Op_ROL(CPU* cpu,WORD src)
{
	uint16_t m = cpu->memory.read_byte(src);
	m <<= 1;
	if (cpu->if_carry()) m |= 0x01;
	cpu->set_carry(m > 0xFF);
	m &= 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->memory.write_byte(src, m);
	return;
}

void Op_ROL_ACC(CPU* cpu,WORD src)
{
	uint16_t m = cpu->AC;
	m <<= 1;
	if (cpu->if_carry()) m |= 0x01;
	cpu->set_carry(m > 0xFF);
	m &= 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->AC = m;
	return;
}

void Op_ROR(CPU* cpu,WORD src)
{
	uint16_t m = cpu->memory.read_byte(src);
	if (cpu->if_carry()) m |= 0x100;
	cpu->set_carry(m & 0x01);
	m >>= 1;
	m &= 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->memory.write_byte(src, m);
	return;
}

void Op_ROR_ACC(CPU* cpu,WORD src)
{
	uint16_t m = cpu->AC;
	if (cpu->if_carry()) m |= 0x100;
	cpu->set_carry(m & 0x01);
	m >>= 1;
	m &= 0xFF;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->AC = m;
	return;
}

void Op_RTI(CPU* cpu,WORD src)
{
	uint8_t lo, hi;

	cpu->status = cpu->StackPop() | CONSTANT | BREAK;

	lo = cpu->StackPop();
	hi = cpu->StackPop();

	cpu->PC = (hi << 8) | lo;
	return;
}

void Op_RTS(CPU* cpu,WORD src)
{
	uint8_t lo, hi;

	lo = cpu->StackPop();
	hi = cpu->StackPop();

	cpu->PC = ((hi << 8) | lo) + 1;
	return;
}

void Op_SBC(CPU* cpu,WORD src)
{
	uint8_t m = cpu->memory.read_byte(src);
	unsigned int tmp = cpu->AC - m - (cpu->if_carry() ? 0 : 1);
	cpu->set_negative(tmp & 0x80);
	cpu->set_zero(!(tmp & 0xFF));
	cpu->set_overflow(((cpu->AC ^ tmp) & 0x80) && ((cpu->AC ^ m) & 0x80));

	if (cpu->if_decimal())
	{
		if (((cpu->AC & 0x0F) - (cpu->if_carry() ? 0 : 1)) < (m & 0x0F)) tmp -= 6;
		if (tmp > 0x99)
		{
			tmp -= 0x60;
		}
	}
	cpu->set_carry(tmp < 0x100);
	cpu->AC = (tmp & 0xFF);
	return;
}

void Op_SEC(CPU* cpu,WORD src)
{
	cpu->set_carry(1);
	return;
}

void Op_SED(CPU* cpu,WORD src)
{
	cpu->set_decimal(1);
	return;
}

void Op_SEI(CPU* cpu,WORD src)
{
	cpu->set_interrupt(1);
	return;
}

void Op_STA(CPU* cpu,WORD src)
{
	cpu->memory.write_byte(src, cpu->AC);
	return;
}

void Op_STX(CPU* cpu,WORD src)
{
	cpu->memory.write_byte(src, cpu->X);
	return;
}

void Op_STY(CPU* cpu,WORD src)
{
	cpu->memory.write_byte(src, cpu->Y);
	return;
}

void Op_TAX(CPU* cpu,WORD src)
{
	uint8_t m = cpu->AC;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->X = m;
	return;
}

void Op_TAY(CPU* cpu,WORD src)
{
	uint8_t m = cpu->AC;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->Y = m;
	return;
}

void Op_TSX(CPU* cpu,WORD src)
{
	uint8_t m = cpu->SP;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->X = m;
	return;
}

void Op_TXA(CPU* cpu,WORD src)
{
	uint8_t m = cpu->X;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->AC = m;
	return;
}

void Op_TXS(CPU* cpu,WORD src)
{
	cpu->SP = cpu->X;
	return;
}

void Op_TYA(CPU* cpu,WORD src)
{
	uint8_t m = cpu->Y;
	cpu->set_negative(m & 0x80);
	cpu->set_zero(!m);
	cpu->AC = m;
	return;
}