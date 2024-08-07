#ifndef CPU_H
#define CPU_H

// Function prototypes for CPU operations
void fetch_instruction(int addr);
void execute_instruction();
int mem_address(int l_addr);
int clock_cycle();

// CPU register declarations
extern int Base;
extern int PC;
extern int IR0;
extern int IR1;
extern int AC;
extern int MAR;
extern int MBR;

#endif /* CPU_H */
