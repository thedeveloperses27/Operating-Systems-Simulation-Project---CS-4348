#ifndef MEMORY_H
#define MEMORY_H

// Function prototypes for memory operations
int* mem_read(int addr);
void mem_write(int addr, int* data);

// Memory array declaration
extern int memory[1024][2]; // 2D array with 1024 rows and 2 columns

#endif /* MEMORY_H */

