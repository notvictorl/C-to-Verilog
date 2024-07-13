module half_adder (
    input wire a,
    input wire b,
    output wire sum,
    output wire carry_out
);
    sum = a ^ b;
    carry_out = a & b;
endmodule