`timescale 1ns/1ps

module counter_4bit (
    input  logic clk,
    input  logic reset,
    output logic [3:0] q
);

    logic [3:0] d;

    assign d = q + 1;

    genvar i;
    generate
        for (i = 0; i < 4; i++) begin : dff_array
            dff dff_inst (
                .clk(clk),
                .reset(reset),
                .d(d[i]),
                .q(q[i])
            );
        end
    endgenerate

endmodule
