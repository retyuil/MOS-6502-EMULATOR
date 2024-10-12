#pragma once
#include <stdexcept>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;

class Memory {
private:
	static const uint16_t memory_SIZE = 0xFFFF;
	BYTE memory[memory_SIZE];

public:
	Memory();
	BYTE read_byte(uint16_t address) const;
	WORD read_word(uint16_t address) const;
	void write_byte(uint16_t address, BYTE value);
	void write_word(uint16_t address, WORD value);
	void print_Memory();
	void load_from_file(const char* filename);
};