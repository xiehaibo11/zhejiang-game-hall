
/* v8::internal::wasm::SideTable::SideTable(v8::internal::Zone*, v8::internal::wasm::WasmModule
   const*, v8::internal::wasm::InterpreterCode*)::Control::Finish(v8::internal::ZoneMap<unsigned
   long, v8::internal::wasm::ControlTransferEntry, std::__ndk1::less<unsigned long> >*, unsigned
   char const*) */

void v8::internal::wasm::SideTable::SideTable(v8::internal::Zone*,v8::internal::wasm::
     WasmModule_const*,v8::internal::wasm::InterpreterCode*)::Control::Finish(v8::internal::
     ZoneMap<unsigned_long,v8::internal::wasm::ControlTransferEntry,std::__ndk1::
     less<unsigned_long>_>__unsigned_char_const__(long param_1,ulong *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  long local_78 [2];
  long *local_68;
  
  piVar7 = *(int **)(param_1 + 8);
  plVar8 = *(long **)(piVar7 + 4);
  plVar1 = *(long **)(piVar7 + 6);
  if (plVar8 != plVar1) {
    do {
      lVar6 = *plVar8;
      lVar4 = plVar8[1];
      local_78[0] = lVar6 - param_3;
      iVar2 = *piVar7;
      iVar3 = piVar7[2];
      local_68 = local_78;
      lVar5 = std::__ndk1::
              __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
              ::
              __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                        (param_2,(piecewise_construct_t *)local_78,(tuple *)&DAT_019ef5ec,
                         (tuple *)&local_68);
      *(int *)(lVar5 + 0x28) = iVar2 - (int)lVar6;
      *(int *)(lVar5 + 0x2c) = (int)lVar4 - iVar3;
      plVar8 = plVar8 + 2;
      *(int *)(lVar5 + 0x30) = piVar7[3];
    } while (plVar8 != plVar1);
  }
  piVar7 = *(int **)(param_1 + 0x10);
  if (piVar7 != (int *)0x0) {
    plVar8 = *(long **)(piVar7 + 4);
    plVar1 = *(long **)(piVar7 + 6);
    if (plVar8 != plVar1) {
      do {
        lVar6 = *plVar8;
        lVar4 = plVar8[1];
        local_78[0] = lVar6 - param_3;
        iVar2 = *piVar7;
        iVar3 = piVar7[2];
        local_68 = local_78;
        lVar5 = std::__ndk1::
                __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                ::
                __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                          (param_2,(piecewise_construct_t *)local_78,(tuple *)&DAT_019ef5ec,
                           (tuple *)&local_68);
        *(int *)(lVar5 + 0x28) = iVar2 - (int)lVar6;
        *(int *)(lVar5 + 0x2c) = (int)lVar4 - iVar3;
        plVar8 = plVar8 + 2;
        *(int *)(lVar5 + 0x30) = piVar7[3];
      } while (plVar8 != plVar1);
    }
  }
  return;
}

