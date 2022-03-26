#include <iostream>
#include "cpu.h"


Cpu::Cpu() {
    for (int i = 0; i < 100; i++) {
        memory[i] = 0;
    }
    pc = 0;
    a = 0;
    b = 0;
}

void Cpu::Run() {
    std::cout << "Gamba emulator" << std::endl;
}