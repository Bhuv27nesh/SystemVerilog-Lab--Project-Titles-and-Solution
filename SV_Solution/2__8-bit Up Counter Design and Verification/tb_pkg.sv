`timescale 1ns/1ps
/* verilator lint_off DECLFILENAME */
package tb_pkg;

    // ---------------- TRANSACTION ----------------
    class transaction;
        rand bit reset = 0;

        function void display(string name);
            $display("[%s] reset=%0d", name, reset);
        endfunction
    endclass


    // ---------------- GENERATOR ----------------
    class generator;
        function transaction gen_tr(int cycle);
            transaction tr = new();
            tr.reset = (cycle == 0); // reset only first cycle
            return tr;
        endfunction
    endclass


    // ---------------- DRIVER ----------------
    class driver;
        virtual counter_if vif;

        function new(virtual counter_if vif_in);
            this.vif = vif_in;
        endfunction

        task drive(transaction tr);
            vif.reset = tr.reset;
            @(posedge vif.clk);
        endtask
    endclass


    // ---------------- MONITOR ----------------
    class monitor;
        virtual counter_if vif;

        function new(virtual counter_if vif_in);
            this.vif = vif_in;
        endfunction

        function bit [7:0] sample();
            return vif.q;
        endfunction
    endclass


    // ---------------- REFERENCE MODEL ----------------
    class reference_model;

        bit [7:0] ref_val;

        function new();
            ref_val = 0;
        endfunction

        function bit [7:0] get_expected(bit reset);
            if (reset)
                ref_val = 0;
            else
                ref_val = ref_val + 1;

            return ref_val;
        endfunction

    endclass


    // ---------------- SCOREBOARD ----------------
    class scoreboard;

        function void check(bit [7:0] actual,
                            bit [7:0] expected,
                            int cycle,
                            bit clk,
                            bit reset);

            if (actual == expected)
                $display("%3d   | %0d   | %0d   | %02h      | %02h       | PASS",
                          cycle, clk, reset, actual, expected);
            else
                $display("%3d   | %0d   | %0d   | %02h      | %02h       | FAIL",
                          cycle, clk, reset, actual, expected);

        endfunction

    endclass

endpackage
/* verilator lint_on DECLFILENAME */
