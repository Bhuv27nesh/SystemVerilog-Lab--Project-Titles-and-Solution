// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

Vtb_tb_pkg__03a__03adriver::Vtb_tb_pkg__03a__03adriver(Vtb__Syms* __restrict vlSymsp, Vtb_counter_if* vif_in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03adriver::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__vif = vif_in;
}

VlCoroutine Vtb_tb_pkg__03a__03adriver::__VnoInFunc_drive(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb_tb_pkg__03a__03atransaction> tr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03adriver::__VnoInFunc_drive\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h362c623c__0;
    __Vtrigprevexpr_h362c623c__0 = 0;
    // Body
    VL_KEEP_THIS;
    VL_NULL_CHECK(this->__PVT__vif, "tb_pkg.sv", 35)->reset 
        = VL_NULL_CHECK(tr, "tb_pkg.sv", 35)->__PVT__reset;
    vlSymsp->TOP.__VvifTrigger_had08aada__2_Vtrigm_reset = 1U;
    CData/*0:0*/ __VdynTrigger_h5052f4b9__0;
    __VdynTrigger_h5052f4b9__0 = 0;
    __VdynTrigger_h5052f4b9__0 = 0U;
    __Vtrigprevexpr_h362c623c__0 = VL_NULL_CHECK(this->__PVT__vif, "tb_pkg.sv", 36)
        ->clk;
    while ((1U & (~ (IData)(__VdynTrigger_h5052f4b9__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge tb_pkg::driver.vif.clk)", 
                                                     "tb_pkg.sv", 
                                                     36);
        __VdynTrigger_h5052f4b9__0 = (VL_NULL_CHECK(this->__PVT__vif, "tb_pkg.sv", 36)
                                      ->clk & (~ (IData)(__Vtrigprevexpr_h362c623c__0)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h5052f4b9__0);
        __Vtrigprevexpr_h362c623c__0 = VL_NULL_CHECK(this->__PVT__vif, "tb_pkg.sv", 36)
            ->clk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge tb_pkg::driver.vif.clk)", 
                                                 "tb_pkg.sv", 
                                                 36);
}

void Vtb_tb_pkg__03a__03adriver::_ctor_var_reset(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03adriver::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__vif = nullptr;
}

std::string VL_TO_STRING(const VlClassRef<Vtb_tb_pkg__03a__03adriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03adriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_tb_pkg__03a__03adriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03adriver::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_tb_pkg__03a__03adriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03adriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "vif:" + VL_TO_STRING(__PVT__vif);
    return (out);
}
