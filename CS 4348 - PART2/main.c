#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cpu.h"
#include "memory.h"
#include "disk.h"
#include "scheduler.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <program_list_file>\n", argv[0]);
        return 1;
    }

    char *program_list_file = argv[1];

    // Initialize CPU, memory, and other components
    Base = 0; // Initialize Base register
    PC = 0;   // Set PC to address 0
    AC = 0;   // Initialize accumulator

    // Initialize the scheduler and process table
    init_scheduler();

    // Load programs from the program list file into memory
    load_programs(program_list_file);

    int cycle = 0;
    //int process_status = 1; // Initialize process_status as 1 (running)

    // Drive CPU clock cycles and scheduling using clock_cycle function
    do {
        cycle++;
        //printf("Clock Cycle %d\n", cycle);

        // Execute the current instruction
        int execution_result = clock_cycle();
        
        // Perform scheduling and context switching
        int scheduling_result = schedule(cycle, execution_result);

        // Exit the loop if there are no more processes to execute
        if (scheduling_result == 0) {
            break;
        }
    } while (1);

    // Print the first 20 memory locations
    printf("First 20 Memory Locations:\n");
    for (int i = 0; i < 20; i++) {
        int *data = mem_read(i);
        printf("Memory[%d]: OP Code=%d, Argument=%d\n", i, data[0], data[1]);
    }

    return 0;
}

