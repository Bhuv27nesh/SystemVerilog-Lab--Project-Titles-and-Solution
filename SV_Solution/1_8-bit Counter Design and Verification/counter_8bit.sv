`timescale 1ns/1ps

module counter_8bit (
    input  logic clk,
    input  logic reset,
    output logic [7:0] q
);

    logic [7:0] d;

    // Next state logic (increment)
    assign d = q + 1;

    // Instantiate 8 DFFs
    genvar i;
    generate
        for (i = 0; i < 8; i++) begin : dff_array
            dff dff_inst (
                .clk(clk),
                .reset(reset),
                .d(d[i]),
                .q(q[i])
            );
        end
    endgenerate

endmodule
