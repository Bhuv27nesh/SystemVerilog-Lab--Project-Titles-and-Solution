// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_tb_pkg__03a__03atransaction::__VnoInFunc_display(Vtb__Syms* __restrict vlSymsp, std::string name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03atransaction::__VnoInFunc_display\n"); );
    // Body
    VL_WRITEF_NX("[%@] reset=%0# expected=%0x\n",0,
                 -1,&(name),1,(IData)(this->__PVT__reset),
                 8,this->__PVT__expected);
}

Vtb_tb_pkg__03a__03atransaction::Vtb_tb_pkg__03a__03atransaction(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03atransaction::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__expected = 0U;
    this->__PVT__reset = 0U;
}

void Vtb_tb_pkg__03a__03atransaction::_ctor_var_reset(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03atransaction::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__reset = 0;
    __PVT__expected = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtb_tb_pkg__03a__03atransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03atransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_tb_pkg__03a__03atransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03atransaction::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_tb_pkg__03a__03atransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03atransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "reset:" + VL_TO_STRING(__PVT__reset);
    out += ", expected:" + VL_TO_STRING(__PVT__expected);
    return (out);
}
