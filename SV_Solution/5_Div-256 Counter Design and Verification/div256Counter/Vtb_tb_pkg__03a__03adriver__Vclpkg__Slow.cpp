// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_tb_pkg__03a__03adriver__Vclpkg___ctor_var_reset(Vtb_tb_pkg__03a__03adriver__Vclpkg* vlSelf);

Vtb_tb_pkg__03a__03adriver__Vclpkg::Vtb_tb_pkg__03a__03adriver__Vclpkg(Vtb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_tb_pkg__03a__03adriver__Vclpkg___ctor_var_reset(this);
}

void Vtb_tb_pkg__03a__03adriver__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_tb_pkg__03a__03adriver__Vclpkg::~Vtb_tb_pkg__03a__03adriver__Vclpkg() {
}
