// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

Vtb_tb_pkg__03a__03areference_model::Vtb_tb_pkg__03a__03areference_model(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03areference_model::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__ref_val = 0U;
}

void Vtb_tb_pkg__03a__03areference_model::__VnoInFunc_get_expected(Vtb__Syms* __restrict vlSymsp, CData/*0:0*/ reset, CData/*7:0*/ &get_expected__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03areference_model::__VnoInFunc_get_expected\n"); );
    // Body
    this->__PVT__ref_val = ((IData)(reset) ? 0U : (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(this->__PVT__ref_val))));
    get_expected__Vfuncrtn = this->__PVT__ref_val;
}

void Vtb_tb_pkg__03a__03areference_model::_ctor_var_reset(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03areference_model::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__ref_val = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtb_tb_pkg__03a__03areference_model>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03areference_model::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_tb_pkg__03a__03areference_model::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03areference_model::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_tb_pkg__03a__03areference_model::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03areference_model::to_string_middle\n"); );
    // Body
    std::string out;
    out += "ref_val:" + VL_TO_STRING(__PVT__ref_val);
    return (out);
}
