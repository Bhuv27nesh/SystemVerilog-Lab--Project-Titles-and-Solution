// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

void Vtb_tb_pkg__03a__03agenerator::__VnoInFunc_gen_tr(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ cycle, VlClassRef<Vtb_tb_pkg__03a__03atransaction> &gen_tr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03agenerator::__VnoInFunc_gen_tr\n"); );
    // Body
    VlClassRef<Vtb_tb_pkg__03a__03atransaction> tr;
    tr = VL_NEW(Vtb_tb_pkg__03a__03atransaction, vlSymsp);
    VL_NULL_CHECK(tr, "tb_pkg.sv", 20)->__PVT__reset 
        = (0U == cycle);
    gen_tr__Vfuncrtn = tr;
}

Vtb_tb_pkg__03a__03agenerator::Vtb_tb_pkg__03a__03agenerator(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03agenerator::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtb_tb_pkg__03a__03agenerator::_ctor_var_reset(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03agenerator::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtb_tb_pkg__03a__03agenerator>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03agenerator::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb_tb_pkg__03a__03agenerator::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03agenerator::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtb_tb_pkg__03a__03agenerator::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_tb_pkg__03a__03agenerator::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
