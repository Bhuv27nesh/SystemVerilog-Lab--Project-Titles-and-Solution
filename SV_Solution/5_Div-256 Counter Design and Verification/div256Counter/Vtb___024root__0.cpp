// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__tb__DOT__vif.clk = 0U;
    vlSelfRef.__VvifTrigger_had08aada__1_Vtrigm_clk = 1U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb.sv", 
                                             19);
        vlSymsp->TOP__tb__DOT__vif.clk = (1U & (~ (IData)(vlSymsp->TOP__tb__DOT__vif.clk)));
        vlSelfRef.__VvifTrigger_had08aada__1_Vtrigm_clk = 1U;
    }
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vtb_tb_pkg__03a__03agenerator> tb__DOT__gen;
    VlClassRef<Vtb_tb_pkg__03a__03adriver> tb__DOT__drv;
    VlClassRef<Vtb_tb_pkg__03a__03amonitor> tb__DOT__mon;
    VlClassRef<Vtb_tb_pkg__03a__03ascoreboard> tb__DOT__scb;
    VlClassRef<Vtb_tb_pkg__03a__03areference_model> tb__DOT__ref_model;
    IData/*31:0*/ tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb__DOT__unnamedblk1__DOT__i;
    tb__DOT__unnamedblk1__DOT__i = 0;
    VlClassRef<Vtb_tb_pkg__03a__03atransaction> __Vtask_gen_tr__5__Vfuncout;
    CData/*7:0*/ __Vtask_sample__7__Vfuncout;
    __Vtask_sample__7__Vfuncout = 0;
    CData/*7:0*/ __Vtask_get_expected__8__Vfuncout;
    __Vtask_get_expected__8__Vfuncout = 0;
    // Body
    tb__DOT__gen = VL_NEW(Vtb_tb_pkg__03a__03agenerator, vlSymsp);
    tb__DOT__drv = VL_NEW(Vtb_tb_pkg__03a__03adriver, vlSymsp, (&vlSymsp->TOP__tb__DOT__vif));
    tb__DOT__mon = VL_NEW(Vtb_tb_pkg__03a__03amonitor, vlSymsp, (&vlSymsp->TOP__tb__DOT__vif));
    tb__DOT__scb = VL_NEW(Vtb_tb_pkg__03a__03ascoreboard, vlSymsp);
    tb__DOT__ref_model = VL_NEW(Vtb_tb_pkg__03a__03areference_model, vlSymsp);
    VL_WRITEF_NX("-------------------------------------------------------------\nCycle | CLK | RST | DUT_OUT | EXPECTED | RESULT\n-------------------------------------------------------------\n",0);
    vlSymsp->TOP__tb__DOT__vif.reset = 1U;
    vlSelfRef.__VvifTrigger_had08aada__2_Vtrigm_reset = 1U;
    tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha74af053__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.vif.clk)", 
                                                             "tb.sv", 
                                                             52);
        tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = (tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                                                   - (IData)(1U));
    }
    vlSymsp->TOP__tb__DOT__vif.reset = 0U;
    vlSelfRef.__VvifTrigger_had08aada__2_Vtrigm_reset = 1U;
    tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, tb__DOT__unnamedblk1__DOT__i)) {
        VL_NULL_CHECK(tb__DOT__gen, "tb.sv", 59)->__VnoInFunc_gen_tr(vlSymsp, tb__DOT__unnamedblk1__DOT__i, __Vtask_gen_tr__5__Vfuncout);
        vlSelfRef.tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__tr 
            = __Vtask_gen_tr__5__Vfuncout;
        co_await VL_NULL_CHECK(tb__DOT__drv, "tb.sv", 60)->__VnoInFunc_drive(vlSymsp, vlSelfRef.tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__tr);
        co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                             nullptr, 
                                             "tb.sv", 
                                             62);
        VL_NULL_CHECK(tb__DOT__mon, "tb.sv", 64)->__VnoInFunc_sample(vlSymsp, __Vtask_sample__7__Vfuncout);
        vlSelfRef.tb__DOT__actual = __Vtask_sample__7__Vfuncout;
        VL_NULL_CHECK(tb__DOT__ref_model, "tb.sv", 65)->__VnoInFunc_get_expected(vlSymsp, VL_NULL_CHECK(vlSelfRef.tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__tr, "tb.sv", 65)
                                                                                ->__PVT__reset, __Vtask_get_expected__8__Vfuncout);
        vlSelfRef.tb__DOT__expected = __Vtask_get_expected__8__Vfuncout;
        VL_NULL_CHECK(tb__DOT__scb, "tb.sv", 67)->__VnoInFunc_check(vlSymsp, vlSelfRef.tb__DOT__actual, (IData)(vlSelfRef.tb__DOT__expected), tb__DOT__unnamedblk1__DOT__i, (IData)(vlSymsp->TOP__tb__DOT__vif.clk), vlSymsp->TOP__tb__DOT__vif.reset);
        tb__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                        + tb__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF_NX("-------------------------------------------------------------\nTEST COMPLETED\n-------------------------------------------------------------\n",0);
    VL_FINISH_MT("tb.sv", 74, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffbULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_had08aada__2_Vtrigm_reset)) 
                                               << 2U));
    vlSelfRef.__VvifTrigger_had08aada__2_Vtrigm_reset = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffdULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | ((QData)((IData)(vlSelfRef.__VvifTrigger_had08aada__1_Vtrigm_clk)) 
                                               << 1U));
    vlSelfRef.__VvifTrigger_had08aada__1_Vtrigm_clk = 0U;
    vlSelfRef.__VactTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VactTriggered
                                      [1U]) | (IData)((IData)(vlSelfRef.__VvifTrigger_had08aada__0_Vtrigm_q)));
    vlSelfRef.__VvifTrigger_had08aada__0_Vtrigm_q = 0U;
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                 ((VL_EXTEND_II(2,1, vlSelfRef.__VdynSched.evaluate()) 
                                                   << 2U) 
                                                  | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__tb__DOT__vif.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__vif__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__vif__clk__0 
        = vlSymsp->TOP__tb__DOT__vif.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__0__KET____DOT__dff_inst__q 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb__DOT__vif.reset)) 
                 & ((IData)(1U) + (IData)(vlSelfRef.tb__DOT____Vcellout__dut__q))));
    vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__1__KET____DOT__dff_inst__q 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb__DOT__vif.reset)) 
                 & (((IData)(1U) + (IData)(vlSelfRef.tb__DOT____Vcellout__dut__q)) 
                    >> 1U)));
    vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__2__KET____DOT__dff_inst__q 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb__DOT__vif.reset)) 
                 & (((IData)(1U) + (IData)(vlSelfRef.tb__DOT____Vcellout__dut__q)) 
                    >> 2U)));
    vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__3__KET____DOT__dff_inst__q 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb__DOT__vif.reset)) 
                 & (((IData)(1U) + (IData)(vlSelfRef.tb__DOT____Vcellout__dut__q)) 
                    >> 3U)));
    vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__4__KET____DOT__dff_inst__q 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb__DOT__vif.reset)) 
                 & (((IData)(1U) + (IData)(vlSelfRef.tb__DOT____Vcellout__dut__q)) 
                    >> 4U)));
    vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__5__KET____DOT__dff_inst__q 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb__DOT__vif.reset)) 
                 & (((IData)(1U) + (IData)(vlSelfRef.tb__DOT____Vcellout__dut__q)) 
                    >> 5U)));
    vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__6__KET____DOT__dff_inst__q 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb__DOT__vif.reset)) 
                 & (((IData)(1U) + (IData)(vlSelfRef.tb__DOT____Vcellout__dut__q)) 
                    >> 6U)));
    vlSelfRef.tb__DOT__dut__DOT____Vcellout__dff_array__BRA__7__KET____DOT__dff_inst__q 
        = (1U & ((~ (IData)(vlSymsp->TOP__tb__DOT__vif.reset)) 
                 & (((IData)(1U) + (IData)(vlSelfRef.tb__DOT____Vcellout__dut__q)) 
                    >> 7U)));
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

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb___024root___timing_commit(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_commit\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_ha74af053__0.commit(
                                                   "@(posedge tb.vif.clk)");
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha74af053__0.resume(
                                                   "@(posedge tb.vif.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdynSched.resume();
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    Vtb___024root___timing_commit(vlSelf);
    Vtb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vtb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        Vtb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb___024root___eval_phase__act(vlSelf));
    } while (Vtb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
