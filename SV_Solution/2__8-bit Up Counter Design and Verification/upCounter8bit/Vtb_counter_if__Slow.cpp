// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_counter_if___ctor_var_reset(Vtb_counter_if* vlSelf);

Vtb_counter_if::Vtb_counter_if(Vtb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_counter_if___ctor_var_reset(this);
}

void Vtb_counter_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_counter_if::~Vtb_counter_if() {
}
