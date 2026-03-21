// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_tb_pkg__03a__03ascoreboard::__VnoInFunc_check(Vtb__Syms* __restrict vlSymsp, CData/*7:0*/ actual, CData/*7:0*/ expected, IData/*31:0*/ cycle, CData/*0:0*/ clk, CData/*0:0*/ reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03ascoreboard::__VnoInFunc_check\n"); );
    // Body
    if (((IData)(actual) == (IData)(expected))) {
        VL_WRITEF_NX("%3d   | %0#   | %0#   | %02x      | %02x       | PASS\n",0,
                     32,cycle,1,(IData)(clk),1,reset,
                     8,(IData)(actual),8,expected);
    } else {
        VL_WRITEF_NX("%3d   | %0#   | %0#   | %02x      | %02x       | FAIL\n",0,
                     32,cycle,1,(IData)(clk),1,reset,
                     8,(IData)(actual),8,expected);
    }
}

Vtb_tb_pkg__03a__03ascoreboard::Vtb_tb_pkg__03a__03ascoreboard(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03ascoreboard::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtb_tb_pkg__03a__03ascoreboard::_ctor_var_reset(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03ascoreboard::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtb_tb_pkg__03a__03ascoreboard>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03ascoreboard::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_tb_pkg__03a__03ascoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03ascoreboard::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_tb_pkg__03a__03ascoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03ascoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
