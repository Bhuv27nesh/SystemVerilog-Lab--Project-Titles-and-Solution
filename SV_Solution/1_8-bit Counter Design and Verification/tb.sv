`timescale 1ns/1ps

module tb;

    import tb_pkg::*;

    // Interface
    counter_if vif();

    // DUT
    counter_8bit dut (
        .clk(vif.clk),
        .reset(vif.reset),
        .q(vif.q)
    );

    // Clock generation
    initial begin
        vif.clk = 0;
        forever #5 vif.clk = ~vif.clk;
    end

    // Waveform dump
    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, tb);
    end

    // OOP components
    generator gen;
    driver drv;
    monitor mon;
    scoreboard scb;

    // Declare variables OUTSIDE procedural code (important)
    bit [7:0] actual;

    initial begin

        // Create objects
        gen = new();
        drv = new(vif);
        mon = new(vif);
        scb = new();

        // Display header
        $display("-------------------------------------------------------------");
        $display("Cycle | CLK | RST | DUT_OUT | EXPECTED | RESULT");
        $display("-------------------------------------------------------------");

        // Apply reset
        vif.reset = 1;
        repeat (2) @(posedge vif.clk);
        vif.reset = 0;

        // Run full range
        for (int i = 0; i < 256; i++) begin
            transaction tr;

            tr = gen.gen_tr(i);

            drv.drive(tr);

            #1; // allow DUT update

            actual = mon.sample();

            // Display + Check
            if (actual == tr.expected) begin
                $display("%3d   |  %0d  |  %0d  |   %02h    |   %02h    | PASS",
                          i, vif.clk, vif.reset, actual, tr.expected);
            end
            else begin
                $display("%3d   |  %0d  |  %0d  |   %02h    |   %02h    | FAIL",
                          i, vif.clk, vif.reset, actual, tr.expected);
            end
        end

        $display("-------------------------------------------------------------");
        $display("TEST COMPLETED");
        $display("-------------------------------------------------------------");

        $finish;
    end

endmodule
