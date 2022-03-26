# Gamba 
Gamba (GAMe Boy Advance) is a Game Boy Advance emulator written in C++

# Building / Running
```
bazel build //src:gamba
./bazel-bin/src/gamba
```

# Goals / Non-Goals
### Goals
- Learn the Game Boy Advance architecture
- Learn C++ / Bazel better

### Non-Goals
- Cycle accurate emulation
- Code quality (Tests, Optimizations, etc)