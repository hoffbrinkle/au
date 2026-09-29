// Copyright 2026 Aurora Operations, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Compile time benchmark: 64 distinct `_mag` literals, spread across every form they come in.
// The `literals_*` benchmarks share their includes, so only the cost of the literals themselves
// changes from one to the next.

#include "au/magnitude.hh"

using ::au::au_literals::operator""_mag;

template <typename... Ts>
void consume(Ts...) {}

void use_literals() {
    consume(
        2_mag,
        3_mag,
        4_mag,
        5_mag,
        6_mag,
        7_mag,
        8_mag,
        9_mag,
        10_mag,
        11_mag,
        1.5_mag,
        2.25_mag,
        3.75_mag,
        4.125_mag,
        5.5_mag,
        6.25_mag,
        7.75_mag,
        8.125_mag,
        9.5_mag,
        10.25_mag,
        1e1_mag,
        2e-2_mag,
        3e+3_mag,
        4e4_mag,
        5e-1_mag,
        6e+2_mag,
        7e3_mag,
        8e-4_mag,
        9e+1_mag,
        10e2_mag,
        0x1A_mag,
        0x1B_mag,
        0x1C_mag,
        0x1D_mag,
        0x1E_mag,
        0x1F_mag,
        0x20_mag,
        0x21_mag,
        0x22_mag,
        0x23_mag,
        0b101_mag,
        0b110_mag,
        0b111_mag,
        0b1000_mag,
        0b1001_mag,
        0b1010_mag,
        0b1011_mag,
        0b1100_mag,
        011_mag,
        012_mag,
        013_mag,
        014_mag,
        015_mag,
        016_mag,
        017_mag,
        020_mag,
        1'024_mag,
        0xF'F_mag,
        0b1'0'1'1_mag,
        0'17_mag,
        1'2.5_mag,
        2'0e3_mag,
        0x1'0'0_mag,
        0b1'1'1_mag);
}
