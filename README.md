# A minimalist firmware code skeleton for the PIC32MX210F016B

- https://github.com/clarestudio/pic32mx-template

## Description

This project provides example linker scripts, startup routines,
and basic header files to facilitate firmware development
for the PIC32MX210F016B using the upstream GCC toolchain.

Currently, this project targets developers comfortable
working without a standard C library.

Please note that this template does not yet include interrupt handler
logic such as vector dispatching or default handlers.
Users are expected to implement their own interrupt service routines
(ISRs) and initialization code according to their application requirements.

## Target Environment

- Microcontroller: the Microchip PIC32MX210F016B
- Toolchain: plain GCC
  (Note: this is not for the XC32 compilers provided by the Microchip)
- Build system: GNU make
- Basic headers (SFR definitions): included in this project

Note: Currently, this project does not provide SFRbits-style bitfield
structure definitions found in Microchip's official headers.
Instead, all register access is performed using address-level macros
and bit masks.

## Usage

- Adjust (edit) the config.mk file to match your environment.
- Run GNU make to build the firmware.

## License

All source code files in this project -- including but not limited to:
- sample code (*.c, *.S)
- header files (*.h)
- linker scripts (*.x)
- Makefile and its fragments (Makefile, *.mk)

-- as well as the overall directory and file structure,  
are released into the public domain.  Where this is not legally possible,  
they are licensed under the Creative Commons Zero (CC0) license.

Note: The contents of this README file are distributed under
the BSD license described below, and are *not* covered
by the public domain dedication applied to the source code.

## Disclaimer

Copyright (c) 2025 Shinichi Doyashiki <clare@csel.org>.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
