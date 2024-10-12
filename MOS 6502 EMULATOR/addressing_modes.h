#pragma once
#include "memory.h"

class CPU;

WORD Absolute_read(CPU* cpu);

WORD Absolute_x_read(CPU* cpu);

WORD Absolute_y_read(CPU* cpu);

WORD Immediate_read(CPU* cpu);

WORD Indirect_x_read(CPU* cpu);

WORD Indirect_y_read(CPU* cpu);

WORD none(CPU* cpu);

WORD Zeropage_read(CPU* cpu);

WORD Zeropage_x_read(CPU* cpu);

WORD Zeropage_y_read(CPU* cpu);

WORD Relative_read(CPU* cpu);

WORD Indirect_read(CPU* cpu);

WORD Accumulator_read(CPU* CPU);
