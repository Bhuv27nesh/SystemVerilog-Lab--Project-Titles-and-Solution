`timescale 1ns/1ps
interface counter_if;
    logic clk;
    logic reset;
    /* verilator lint_off UNUSEDSIGNAL */
    logic [7:0] q;
    /* verilator lint_on UNUSEDSIGNAL */
endinterface
