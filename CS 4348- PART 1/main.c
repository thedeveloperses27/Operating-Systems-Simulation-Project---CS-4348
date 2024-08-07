#include <stdio.h>
#include "cpu.h"
#include "memory.h"
#include "disk.h"

int main(int argc, char *argv[]) {
    if(argc != 2){
        fprintf(stderr, "Usage: %s <filename> \n", argv[0]);
        return 1;
    }
    
    char *filename = argv[1];
    // Initialize CPU, memory, and other components
    Base = 0; // Initialize Base register
    PC = 4;   // Set PC to address 4 (as specified)
    AC = 0;   // Initialize accumulator

    // Load programs into memory using load_prog function
    load_prog(filename, 4); // Load program 1 at address 4
    // You can load additional programs as needed

    int cycle = 0;

    // Drive CPU clock cycles using clock_cycle function
    do {
        cycle++;
        printf("Clock Cycle %d\n", cycle);
    } while (clock_cycle()); // Keep running until exit command is encountered

    // Print the first 20 memory locations
    printf("First 20 Memory Locations:\n");
    for (int i = 0; i < 20; i++) {
        int* data = mem_read(i);
        printf("Memory[%d]: OP Code=%d, Argument=%d\n", i, data[0], data[1]);
    }

    return 0;
}
