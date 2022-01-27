# playplay decryptor

## Token: 01E132CAE527BD21620E822F58514932, Version: 2


## Usage

### Prerequisites

You will need:

 * C++ Compiler - needs to support at least the C++11 standard, i.e. MSVC, GCC
 * CMake 3.5+ installed

### Building The Project

#### Git Clone

First we need to checkout the git repo:

```bash
> mkdir ~/workspace; cd ~/workspace
> git clone https://github.com/SuisChan/playplay.git --recursive
> cd playplay
```

### Building

```bash
> mkdir build; cd build
> cmake ..
> cmake --build . --target playplay --config Release
```

### Where does it run?

I expect this project to be usable on at least the following operating system:
- Linux: Ubuntu 20.04 LTS
- Windows 10 / 11

and with the following C++ compilers/toolchains:
- GCC 9.3.0
- Visual Studio 2019