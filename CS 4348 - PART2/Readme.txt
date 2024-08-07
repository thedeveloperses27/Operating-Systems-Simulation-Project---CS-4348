**************************************************************************
*                   Round Robin Scheduler Simulation                     *
**************************************************************************

**Overview:**

This C program simulates a simplified computer system with a Round Robin scheduler. The system loads multiple programs from a program list file into memory and schedules their execution using the Round Robin algorithm. The program components include CPU, memory, disk, and a scheduler.

**Components:**

1. `cpu.c` and `cpu.h`: Simulate the CPU of the computer, including registers and operations.

2. `memory.c` and `memory.h`: Simulate the physical memory of the computer as a 2D array.

3. `disk.c` and `disk.h`: Manage loading programs into memory and translating them into instructions from a program list file.

4. `scheduler.c` and `scheduler.h`: Implement the Round Robin scheduler, manage the ready queue, and perform context switching.

5. `main.c`: The main driver program that initializes components, loads programs, and drives CPU clock cycles and scheduling.

**Usage:**

1. Compile the program on the UTD Giant Server using the GCC compiler. Example command:



gcc -o scheduler_simulator cpu.c memory.c disk.c scheduler.c main.c -lm

or use makefile to compile the program. type make on the terminal

make



2. Run the compiled program with the program list file as a command-line argument. Example command:

/scheduler_simulator program_list.txt


3. The program will load the specified programs into memory, run CPU clock cycles, and print the first 20 memory locations.

**Program List File Format:**

The program list file contains a list of integers and filenames for instruction set programs that will be loaded into memory. Each row in the list has two arguments separated by a space: the position in memory where the program will be loaded and the filename containing the instructions.

Example program list file:


30 program_add.txt
200 program_if.txt
95 program_add.txt



**Notes:**

- The Round Robin scheduler uses a time quantum of 10 clock cycles (configurable in `scheduler.c`).

- Processes are created and added to the ready queue based on the program list.

- The program will continue executing until there are no more processes in the ready queue.

- At the end of execution, the first 20 memory locations are printed.

**Submission:**

- `cpu.c`
- `cpu.h`
- `memory.c`
- `memory.h`
- `disk.c`
- `disk.h`
- `scheduler.c`
- `scheduler.h`
- `main.c`
- `program_list.txt` (Include a sample program list file)
- `ReadMe.txt` (This document)
- `Makefile`

**Author:**

[Said]

**Date:**

[Oct 8 2023]

**************************************************************************




