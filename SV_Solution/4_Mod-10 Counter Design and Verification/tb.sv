`timescale 1ns/1ps

module tb;

    import tb_pkg::*;

    counter_if vif();

    // DUT
    counter_mod10 dut (
        .clk(vif.clk),
        .reset(vif.reset),
        .q(vif.q)
    );

    // Clock
    initial begin
        vif.clk = 0;
        forever #5 vif.clk = ~vif.clk;
    end

    // Dump
    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, tb);
    end

    generator gen;
    driver drv;
    monitor mon;
    scoreboard scb;
    reference_model ref_model;

    bit [7:0] actual, expected;

    initial begin

        gen = new();
        drv = new(vif);
        mon = new(vif);
        scb = new();
        ref_model = new();

        $display("-------------------------------------------------------------");
        $display("Cycle | CLK | RST | DUT_OUT | EXPECTED | RESULT");
        $display("-------------------------------------------------------------");

        // Reset
        vif.reset = 1;
        repeat (2) @(posedge vif.clk);
        vif.reset = 0;

        // Run more cycles to see repetition
        for (int i = 0; i < 20; i++) begin
            transaction tr;

            tr = gen.gen_tr(i);
            drv.drive(tr);

            #1;

            actual   = mon.sample();
            expected = ref_model.get_expected(tr.reset);

            scb.check(actual, expected, i, vif.clk, vif.reset);
        end

        $display("-------------------------------------------------------------");
        $finish;
    end

endmodule
