// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

std::string VL_TO_STRING(const Vtb_counter_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_counter_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
