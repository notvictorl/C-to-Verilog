// example program that I want to be able to translate to verilog

#include "c2v.h"

void half_adder(wire a, wire b, wire &sum, wire &carry_out) {
    // input: a, b
    // output: sum, carry_out
    sum = a ^ b;
    carry_out = a & b;
}