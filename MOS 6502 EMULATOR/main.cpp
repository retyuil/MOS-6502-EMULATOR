#include "cpu.h"

int main(){

	CPU cpu;
	cpu.AC = 0;
	Instruction instruction_table[256];
	populate_instruction_table(instruction_table);

	cpu.memory.load_from_file("hello");
	//cpu.memory.print_Memory();

	for (int i = 0; i < 250; i++){
	cpu.Run_step(instruction_table);
	}

}