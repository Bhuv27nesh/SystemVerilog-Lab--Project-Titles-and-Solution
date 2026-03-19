// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_TB_PKG__03A__03AGENERATOR__VCLPKG_H_
#define VERILATED_VTB_TB_PKG__03A__03AGENERATOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_tb_pkg__03a__03atransaction;


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tb_pkg__03a__03agenerator__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_tb_pkg__03a__03agenerator__Vclpkg(Vtb__Syms* symsp, const char* v__name);
    ~Vtb_tb_pkg__03a__03agenerator__Vclpkg();
    VL_UNCOPYABLE(Vtb_tb_pkg__03a__03agenerator__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb__Syms;

class Vtb_tb_pkg__03a__03agenerator : public virtual VlClass {
  public:
    void __VnoInFunc_gen_tr(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ cycle, VlClassRef<Vtb_tb_pkg__03a__03atransaction> &gen_tr__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb__Syms* __restrict vlSymsp);
  public:
    Vtb_tb_pkg__03a__03agenerator(Vtb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_tb_pkg__03a__03agenerator() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_tb_pkg__03a__03agenerator>& obj);

#endif  // guard
