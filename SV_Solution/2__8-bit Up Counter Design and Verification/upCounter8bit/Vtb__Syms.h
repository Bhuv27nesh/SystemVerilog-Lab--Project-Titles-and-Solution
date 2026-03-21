// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB__SYMS_H_
#define VERILATED_VTB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb.h"

// INCLUDE MODULE CLASSES
#include "Vtb___024root.h"
#include "Vtb_tb_pkg.h"
#include "Vtb_counter_if.h"
#include "Vtb_tb_pkg__03a__03atransaction__Vclpkg.h"
#include "Vtb_tb_pkg__03a__03agenerator__Vclpkg.h"
#include "Vtb_tb_pkg__03a__03adriver__Vclpkg.h"
#include "Vtb_tb_pkg__03a__03amonitor__Vclpkg.h"
#include "Vtb_tb_pkg__03a__03areference_model__Vclpkg.h"
#include "Vtb_tb_pkg__03a__03ascoreboard__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb___024root                  TOP;
    Vtb_counter_if                 TOP__tb__DOT__vif;
    Vtb_tb_pkg                     TOP__tb_pkg;
    Vtb_tb_pkg__03a__03adriver__Vclpkg TOP__tb_pkg__03a__03adriver__Vclpkg;
    Vtb_tb_pkg__03a__03agenerator__Vclpkg TOP__tb_pkg__03a__03agenerator__Vclpkg;
    Vtb_tb_pkg__03a__03amonitor__Vclpkg TOP__tb_pkg__03a__03amonitor__Vclpkg;
    Vtb_tb_pkg__03a__03areference_model__Vclpkg TOP__tb_pkg__03a__03areference_model__Vclpkg;
    Vtb_tb_pkg__03a__03ascoreboard__Vclpkg TOP__tb_pkg__03a__03ascoreboard__Vclpkg;
    Vtb_tb_pkg__03a__03atransaction__Vclpkg TOP__tb_pkg__03a__03atransaction__Vclpkg;

    // CONSTRUCTORS
    Vtb__Syms(VerilatedContext* contextp, const char* namep, Vtb* modelp);
    ~Vtb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
