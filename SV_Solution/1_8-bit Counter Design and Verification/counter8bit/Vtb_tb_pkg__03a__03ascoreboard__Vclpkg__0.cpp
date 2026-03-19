// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_tb_pkg__03a__03ascoreboard::__VnoInFunc_check(Vtb__Syms* __restrict vlSymsp, CData/*7:0*/ actual, CData/*7:0*/ expected) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03ascoreboard::__VnoInFunc_check\n"); );
    // Body
    if (((IData)(actual) == (IData)(expected))) {
        VL_WRITEF_NX("PASS: expected=%0x actual=%0x\n",0,
                     8,expected,8,(IData)(actual));
    } else {
        VL_WRITEF_NX("FAIL: expected=%0x actual=%0x\n",0,
                     8,expected,8,(IData)(actual));
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
