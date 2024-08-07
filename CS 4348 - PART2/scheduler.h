#include "cpu.h"
#ifndef SCHEDULER_H
#define SCHEDULER_H

// Define the maximum number of processes
#define MAX_PROCESS_COUNT 20

// Process Control Block (PCB) struct
typedef struct {
    int process_id;
    int process_size;
    register_struct registers;
    
} PCB;

// Function prototypes for scheduler operations
void init_scheduler();
void new_process(int base, int size);
int schedule(int cycle_num, int process_status);

#endif /* SCHEDULER_H */

