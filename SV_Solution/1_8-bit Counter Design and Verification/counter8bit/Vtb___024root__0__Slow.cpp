// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__vif__clk__0 
        = vlSymsp->TOP__tb__DOT__vif.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__vif__reset__0 
        = vlSymsp->TOP__tb__DOT__vif.reset;
}

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("wave.vcd"s);
    VL_PRINTF_MT("-Info: tb.sv:25: $dumpvar ignored, as Verilated without --trace\n");
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT____Vcellout__dut__q = ((((((IData)(vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__7__KET____DOT__dff_inst__q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__6__KET____DOT__dff_inst__q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__5__KET____DOT__dff_inst__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__4__KET____DOT__dff_inst__q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__3__KET____DOT__dff_inst__q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__2__KET____DOT__dff_inst__q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__1__KET____DOT__dff_inst__q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__0__KET____DOT__dff_inst__q))));
    vlSymsp->TOP__tb__DOT__vif.q = vlSelfRef.tb__DOT____Vcellout__dut__q;
    vlSelfRef.__VvifTrigger_had08aada__0_Vtrigm_q = 1U;
}

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb.vif.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb.vif.reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdynSched.evaluate())\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'act' trigger - virtual interface member: counter_if.q\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: Internal 'act' trigger - virtual interface member: counter_if.clk\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: Internal 'act' trigger - virtual interface member: counter_if.reset\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb__DOT____Vcellout__dut__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12342081799789870518ull);
    vlSelf->tb__DOT__actual = 0;
    vlSelf->tb__DOT__expected = 0;
    vlSelf->tb__DOT__dut__DOT____Vcellout__dff_array__BRA__0__KET____DOT__dff_inst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5899445466159013850ull);
    vlSelf->tb__DOT__dut__DOT____Vcellout__dff_array__BRA__1__KET____DOT__dff_inst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6207350780725061622ull);
    vlSelf->tb__DOT__dut__DOT____Vcellout__dff_array__BRA__2__KET____DOT__dff_inst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7330629699754425635ull);
    vlSelf->tb__DOT__dut__DOT____Vcellout__dff_array__BRA__3__KET____DOT__dff_inst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9790437895601694742ull);
    vlSelf->tb__DOT__dut__DOT____Vcellout__dff_array__BRA__4__KET____DOT__dff_inst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15219886002609187260ull);
    vlSelf->tb__DOT__dut__DOT____Vcellout__dff_array__BRA__5__KET____DOT__dff_inst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4029981090354234560ull);
    vlSelf->tb__DOT__dut__DOT____Vcellout__dff_array__BRA__6__KET____DOT__dff_inst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18000253219613975680ull);
    vlSelf->tb__DOT__dut__DOT____Vcellout__dff_array__BRA__7__KET____DOT__dff_inst__q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5536299689630837621ull);
    vlSelf->__VvifTrigger_had08aada__0_Vtrigm_q = 0;
    vlSelf->__VvifTrigger_had08aada__1_Vtrigm_clk = 0;
    vlSelf->__VvifTrigger_had08aada__2_Vtrigm_reset = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__vif__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16416997995245485870ull);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__vif__reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7520361462607573550ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
