#include <cstdint>

// ARM7TDMI CPU
class Cpu {
    public:
        uint32_t memory[0x10000000];

        // r1-r12 standard registers
        // r13 stack point
        // r14 link register
        // r15 program counter
        uint32_t regs[15];

        uint32_t cpsr; // current program status register
        uint32_t spsr; // saved program status register

        Cpu();
        void Run();
};