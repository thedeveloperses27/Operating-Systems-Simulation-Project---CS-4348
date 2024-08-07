**************************************************************************
*                  Simplified Computer Simulation Readme                  *
**************************************************************************

This C program simulates a simplified computer with a limited instruction set architecture. The program includes several components:

1. cpu.c: Simulates the CPU of the computer, including registers and operations.
2. memory.c: Simulates the physical memory of the computer as a 2D array.
3. disk.c: Handles loading programs into memory and translating them into OP codes.
4. main.c: The main driver program that initializes components, loads programs, and drives CPU clock cycles.

Instructions for Compiling and Running:

1. Ensure that you have all the required source code files in the same directory: cpu.c, memory.c, disk.c, main.c, cpu.h, memory.h, disk.h.

2. To compile the program, log in to the UTD Giant Server and use the GCC compiler. For example:

gcc -o simulator cpu.c memory.c disk.c main.c -lm


Replace "simulator" with your desired executable name.

3. After compilation, you can run the program by executing the compiled binary with your chosen name of course:

./similator program_add(1).txt


4. The program will load the specified programs into memory, run CPU clock cycles, and print the first 20 memory locations.


**************************************************************************
*                               Author                                    *
**************************************************************************

[SAID]
[OCT 2 2023]

**************************************************************************
