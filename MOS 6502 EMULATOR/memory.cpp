#include "memory.h"

Memory::Memory() {
	memset(memory,0, memory_SIZE);
}

BYTE Memory::read_byte(uint16_t address) const {
	if (address >= memory_SIZE) {
		throw std::out_of_range("Adresse en dehors de la mémoire.");
	}
	return memory[address];
}

WORD Memory::read_word(uint16_t address) const {
	if (address >= memory_SIZE) {
		throw std::out_of_range("Adresse en dehors de la mémoire.");
	}
	BYTE low_byte = memory[address];
	BYTE high_byte = memory[address + 1];
	return (low_byte + (high_byte << 8));
}


void Memory::write_byte(uint16_t address, BYTE value) {
	if (address >= memory_SIZE) {
		throw std::out_of_range("Adresse en dehors de la mémoire.");
	}
	memory[address] = value;
}

void Memory::write_word(uint16_t address, WORD value) {
	if (address >= memory_SIZE) {
		throw std::out_of_range("Adresse en dehors de la mémoire.");
	}
	BYTE low_byte = value & 0xff;
	BYTE high_byte = value >> 8;
	memory[address] = low_byte;
	memory[address] = high_byte;
}


void Memory::print_Memory() {
	for (int i = 0; i < memory_SIZE; i++) {
		printf("%02X", memory[i]);
	}

}


void Memory::load_from_file(const char* filename) {
	FILE* file;
	fopen_s(&file,filename, "rb"); // Ouvre le fichier en mode binaire

	if (file == NULL) {
		perror("Erreur : Impossible d'ouvrir le fichier");
		exit(EXIT_FAILURE);
	}

	size_t bytesRead = 0;
	uint16_t address = 0;

	// Lecture du fichier dans la mémoire, octet par octet
	while ((bytesRead = fread(&memory[address], sizeof(BYTE), 1, file)) == 1 && address < memory_SIZE) {
		++address;
	}

	if (ferror(file)) {
		perror("Erreur : Problème lors de la lecture du fichier");
		fclose(file);
		exit(EXIT_FAILURE);
	}

	fclose(file); // Ferme le fichier une fois la lecture terminée
}