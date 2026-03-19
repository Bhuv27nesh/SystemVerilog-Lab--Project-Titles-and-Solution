// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_TB_PKG__03A__03AMONITOR__VCLPKG_H_
#define VERILATED_VTB_TB_PKG__03A__03AMONITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tb_pkg__03a__03amonitor__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_tb_pkg__03a__03amonitor__Vclpkg(Vtb__Syms* symsp, const char* v__name);
    ~Vtb_tb_pkg__03a__03amonitor__Vclpkg();
    VL_UNCOPYABLE(Vtb_tb_pkg__03a__03amonitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb__Syms;

class Vtb_tb_pkg__03a__03amonitor : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vtb_counter_if* __PVT__vif;
    void __VnoInFunc_sample(Vtb__Syms* __restrict vlSymsp, CData/*7:0*/ &sample__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb__Syms* __restrict vlSymsp);
  public:
    Vtb_tb_pkg__03a__03amonitor(Vtb__Syms* __restrict vlSymsp, Vtb_counter_if* vif_in);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_tb_pkg__03a__03amonitor() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_tb_pkg__03a__03amonitor>& obj);

#endif  // guard
