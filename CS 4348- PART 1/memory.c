#include <stdio.h>
#include "memory.h"

// Define the memory representation
int memory[1024][2]; // 2D array with 1024 rows and 2 columns

// Function to read from memory at a specified address
int* mem_read(int addr) {
    // Check if the address is within valid bounds
    if (addr >= 0 && addr < 1024) {
        // Return a pointer to the data at the specified address
        return memory[addr];
    } else {
        // Address is out of bounds
        printf("Error: Attempted to read from invalid memory address %d\n", addr);
        return NULL;
    }
}

// Function to write data to memory at a specified address
void mem_write(int addr, int* data) {
    // Check if the address is within valid bounds
    if (addr >= 0 && addr < 1024) {
        // Write the data to the specified address
        memory[addr][0] = data[0]; // OP Code
        memory[addr][1] = data[1]; // Argument
    } else {
        // Address is out of bounds
        printf("Error: Attempted to write to invalid memory address %d\n", addr);
    }
}
