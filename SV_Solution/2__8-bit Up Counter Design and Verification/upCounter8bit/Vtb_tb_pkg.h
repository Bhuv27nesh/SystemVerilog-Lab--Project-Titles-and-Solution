// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_TB_PKG_H_
#define VERILATED_VTB_TB_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tb_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_tb_pkg(Vtb__Syms* symsp, const char* v__name);
    ~Vtb_tb_pkg();
    VL_UNCOPYABLE(Vtb_tb_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
