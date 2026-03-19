// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

Vtb_tb_pkg__03a__03amonitor::Vtb_tb_pkg__03a__03amonitor(Vtb__Syms* __restrict vlSymsp, Vtb_counter_if* vif_in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03amonitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__vif = vif_in;
}

void Vtb_tb_pkg__03a__03amonitor::__VnoInFunc_sample(Vtb__Syms* __restrict vlSymsp, CData/*7:0*/ &sample__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03amonitor::__VnoInFunc_sample\n"); );
    // Body
    sample__Vfuncrtn = VL_NULL_CHECK(this->__PVT__vif, "tb_pkg.sv", 50)
        ->q;
}

void Vtb_tb_pkg__03a__03amonitor::_ctor_var_reset(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03amonitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

std::string VL_TO_STRING(const VlClassRef<Vtb_tb_pkg__03a__03amonitor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03amonitor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_tb_pkg__03a__03amonitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03amonitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_tb_pkg__03a__03amonitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03amonitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    return (out);
}
