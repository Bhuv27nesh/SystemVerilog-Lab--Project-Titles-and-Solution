// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb__pch.h"
#include "Vtb.h"
#include "Vtb___024root.h"
#include "Vtb_tb_pkg.h"
#include "Vtb_counter_if.h"
#include "Vtb_tb_pkg__03a__03atransaction__Vclpkg.h"
#include "Vtb_tb_pkg__03a__03agenerator__Vclpkg.h"
#include "Vtb_tb_pkg__03a__03adriver__Vclpkg.h"
#include "Vtb_tb_pkg__03a__03amonitor__Vclpkg.h"
#include "Vtb_tb_pkg__03a__03areference_model__Vclpkg.h"
#include "Vtb_tb_pkg__03a__03ascoreboard__Vclpkg.h"

// FUNCTIONS
Vtb__Syms::~Vtb__Syms()
{
}

Vtb__Syms::Vtb__Syms(VerilatedContext* contextp, const char* namep, Vtb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb__DOT__vif{this, Verilated::catName(namep, "tb.vif")}
    , TOP__tb_pkg{this, Verilated::catName(namep, "tb_pkg")}
    , TOP__tb_pkg__03a__03adriver__Vclpkg{this, Verilated::catName(namep, "tb_pkg::driver__Vclpkg")}
    , TOP__tb_pkg__03a__03agenerator__Vclpkg{this, Verilated::catName(namep, "tb_pkg::generator__Vclpkg")}
    , TOP__tb_pkg__03a__03amonitor__Vclpkg{this, Verilated::catName(namep, "tb_pkg::monitor__Vclpkg")}
    , TOP__tb_pkg__03a__03areference_model__Vclpkg{this, Verilated::catName(namep, "tb_pkg::reference_model__Vclpkg")}
    , TOP__tb_pkg__03a__03ascoreboard__Vclpkg{this, Verilated::catName(namep, "tb_pkg::scoreboard__Vclpkg")}
    , TOP__tb_pkg__03a__03atransaction__Vclpkg{this, Verilated::catName(namep, "tb_pkg::transaction__Vclpkg")}
{
    // Check resources
    Verilated::stackCheck(364);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb__DOT__vif = &TOP__tb__DOT__vif;
    TOP.__PVT__tb_pkg = &TOP__tb_pkg;
    TOP.tb_pkg__03a__03adriver__Vclpkg = &TOP__tb_pkg__03a__03adriver__Vclpkg;
    TOP.tb_pkg__03a__03agenerator__Vclpkg = &TOP__tb_pkg__03a__03agenerator__Vclpkg;
    TOP.tb_pkg__03a__03amonitor__Vclpkg = &TOP__tb_pkg__03a__03amonitor__Vclpkg;
    TOP.tb_pkg__03a__03areference_model__Vclpkg = &TOP__tb_pkg__03a__03areference_model__Vclpkg;
    TOP.tb_pkg__03a__03ascoreboard__Vclpkg = &TOP__tb_pkg__03a__03ascoreboard__Vclpkg;
    TOP.tb_pkg__03a__03atransaction__Vclpkg = &TOP__tb_pkg__03a__03atransaction__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb__DOT__vif.__Vconfigure(true);
    TOP__tb_pkg.__Vconfigure(true);
    TOP__tb_pkg__03a__03adriver__Vclpkg.__Vconfigure(true);
    TOP__tb_pkg__03a__03agenerator__Vclpkg.__Vconfigure(true);
    TOP__tb_pkg__03a__03amonitor__Vclpkg.__Vconfigure(true);
    TOP__tb_pkg__03a__03areference_model__Vclpkg.__Vconfigure(true);
    TOP__tb_pkg__03a__03ascoreboard__Vclpkg.__Vconfigure(true);
    TOP__tb_pkg__03a__03atransaction__Vclpkg.__Vconfigure(true);
}
