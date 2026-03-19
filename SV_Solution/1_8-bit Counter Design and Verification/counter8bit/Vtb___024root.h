// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_counter_if;
class Vtb_tb_pkg;
class Vtb_tb_pkg__03a__03adriver;
class Vtb_tb_pkg__03a__03adriver__Vclpkg;
class Vtb_tb_pkg__03a__03agenerator;
class Vtb_tb_pkg__03a__03agenerator__Vclpkg;
class Vtb_tb_pkg__03a__03amonitor;
class Vtb_tb_pkg__03a__03amonitor__Vclpkg;
class Vtb_tb_pkg__03a__03ascoreboard;
class Vtb_tb_pkg__03a__03ascoreboard__Vclpkg;
class Vtb_tb_pkg__03a__03atransaction;
class Vtb_tb_pkg__03a__03atransaction__Vclpkg;


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_tb_pkg* __PVT__tb_pkg;
    Vtb_counter_if* __PVT__tb__DOT__vif;
    Vtb_tb_pkg__03a__03atransaction__Vclpkg* tb_pkg__03a__03atransaction__Vclpkg;
    Vtb_tb_pkg__03a__03agenerator__Vclpkg* tb_pkg__03a__03agenerator__Vclpkg;
    Vtb_tb_pkg__03a__03adriver__Vclpkg* tb_pkg__03a__03adriver__Vclpkg;
    Vtb_tb_pkg__03a__03amonitor__Vclpkg* tb_pkg__03a__03amonitor__Vclpkg;
    Vtb_tb_pkg__03a__03ascoreboard__Vclpkg* tb_pkg__03a__03ascoreboard__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ tb__DOT____Vcellout__dut__q;
    CData/*7:0*/ tb__DOT__actual;
    CData/*0:0*/ tb__DOT__dut__DOT____Vcellout__dff_array__BRA__0__KET____DOT__dff_inst__q;
    CData/*0:0*/ tb__DOT__dut__DOT____Vcellout__dff_array__BRA__1__KET____DOT__dff_inst__q;
    CData/*0:0*/ tb__DOT__dut__DOT____Vcellout__dff_array__BRA__2__KET____DOT__dff_inst__q;
    CData/*0:0*/ tb__DOT__dut__DOT____Vcellout__dff_array__BRA__3__KET____DOT__dff_inst__q;
    CData/*0:0*/ tb__DOT__dut__DOT____Vcellout__dff_array__BRA__4__KET____DOT__dff_inst__q;
    CData/*0:0*/ tb__DOT__dut__DOT____Vcellout__dff_array__BRA__5__KET____DOT__dff_inst__q;
    CData/*0:0*/ tb__DOT__dut__DOT____Vcellout__dff_array__BRA__6__KET____DOT__dff_inst__q;
    CData/*0:0*/ tb__DOT__dut__DOT____Vcellout__dff_array__BRA__7__KET____DOT__dff_inst__q;
    CData/*0:0*/ __VvifTrigger_had08aada__0_Vtrigm_q;
    CData/*0:0*/ __VvifTrigger_had08aada__1_Vtrigm_clk;
    CData/*0:0*/ __VvifTrigger_had08aada__2_Vtrigm_reset;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__vif__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__vif__reset__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha74af053__0;
    VlDynamicTriggerScheduler __VdynSched;
    VlClassRef<Vtb_tb_pkg__03a__03atransaction> tb__DOT__unnamedblk1__DOT__unnamedblk2__DOT__tr;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
