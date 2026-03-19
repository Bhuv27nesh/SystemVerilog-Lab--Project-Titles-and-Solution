`timescale 1ns/1ps

/* verilator lint_off DECLFILENAME */
package tb_pkg;

    // ---------------- TRANSACTION ----------------
    class transaction;
        rand bit reset = 0;
        bit [7:0] expected = 0;

        function void display(string name);
            $display("[%s] reset=%0d expected=%0h", name, reset, expected);
        endfunction
    endclass


    // ---------------- GENERATOR ----------------
    class generator;
        function transaction gen_tr(int cycle);
            transaction tr = new();
            tr.reset = (cycle == 0);
            tr.expected = cycle[7:0];
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


    // ---------------- SCOREBOARD ----------------
    class scoreboard;
        function void check(bit [7:0] actual, bit [7:0] expected);
            if (actual == expected)
                $display("PASS: expected=%0h actual=%0h", expected, actual);
            else
                $display("FAIL: expected=%0h actual=%0h", expected, actual);
        endfunction
    endclass

endpackage
/* verilator lint_on DECLFILENAME */
