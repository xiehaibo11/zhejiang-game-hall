
/* v8::internal::wasm::WasmInterpreter::ComputeControlTransfersForTesting(v8::internal::Zone*,
   v8::internal::wasm::WasmModule const*, unsigned char const*, unsigned char const*) */

void __thiscall
v8::internal::wasm::WasmInterpreter::ComputeControlTransfersForTesting
          (WasmInterpreter *this,Zone *param_1,WasmModule *param_2,uchar *param_3,uchar *param_4)

{
  long lVar1;
  bool bVar2;
  undefined8 *in_x8;
  __tree_node *p_Var3;
  long lVar4;
  undefined8 **local_100;
  undefined4 local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  WasmInterpreter *pWStack_d8;
  WasmModule *local_d0;
  uchar *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  __tree_node *local_90;
  __tree_node *local_88;
  undefined8 local_80;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68 = &uStack_a8;
  uStack_60 = 0;
  local_100 = &local_68;
  local_e0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_58 = 0;
  local_50 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  pWStack_d8 = this;
  local_d0 = param_2;
  puStack_c8 = param_3;
  SideTable::SideTable
            ((SideTable *)&local_90,(Zone *)this,(WasmModule *)param_1,(InterpreterCode *)&local_100
            );
  in_x8[1] = 0;
  in_x8[2] = local_80;
  in_x8[3] = 0;
  *in_x8 = in_x8 + 1;
  while (local_90 != (__tree_node *)&local_88) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
    ::
    __emplace_hint_unique_key_args<unsigned_long,std::__ndk1::pair<unsigned_long_const,v8::internal::wasm::ControlTransferEntry>const&>
              ();
    p_Var3 = *(__tree_node **)(local_90 + 8);
    if (*(__tree_node **)(local_90 + 8) == (__tree_node *)0x0) {
      p_Var3 = local_90 + 0x10;
      bVar2 = (__tree_node *)*(__tree_node ***)*(__tree_node **)p_Var3 != local_90;
      local_90 = *(__tree_node **)p_Var3;
      if (bVar2) {
        do {
          lVar4 = *(long *)p_Var3;
          p_Var3 = (__tree_node *)(lVar4 + 0x10);
          local_90 = *(__tree_node **)p_Var3;
        } while (*(long *)local_90 != lVar4);
      }
    }
    else {
      do {
        local_90 = p_Var3;
        p_Var3 = *(__tree_node **)local_90;
      } while (*(__tree_node **)local_90 != (__tree_node *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
             *)&local_90,local_88);
  if (local_f0 != 0) {
    local_e8 = local_f0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

