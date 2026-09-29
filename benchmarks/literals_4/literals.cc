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

// Compile time benchmark: 4 distinct `_mag` literals, spread across every form they come in.
// The `literals_*` benchmarks share their includes, so only the cost of the literals themselves
// changes from one to the next.

#include "au/magnitude.hh"

using ::au::au_literals::operator""_mag;

template <typename... Ts>
void consume(Ts...) {}

void use_literals() {
    consume(
        2_mag,
        1.5_mag,
        0x1A_mag,
        0b101_mag);
}
