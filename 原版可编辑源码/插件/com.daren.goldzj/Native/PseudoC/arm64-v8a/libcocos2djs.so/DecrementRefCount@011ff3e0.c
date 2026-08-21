
/* v8::internal::wasm::WasmCode::DecrementRefCount(v8::internal::Vector<v8::internal::wasm::WasmCode*
   const>) */

void __thiscall v8::internal::wasm::WasmCode::DecrementRefCount(WasmCode *this,long param_2)

{
  WasmCode *pWVar1;
  WasmCode *pWVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  NativeModule *pNVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  WasmEngine *this_00;
  void *pvVar13;
  undefined8 local_90;
  WasmCode *local_88 [2];
  undefined1 *local_78;
  NativeModule *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  uStack_68 = 0;
  local_70 = (NativeModule *)0x0;
  uStack_58 = 0;
  local_60 = (undefined8 *)0x0;
  local_50 = 0x3f800000;
  pNVar8 = local_70;
  puVar9 = local_60;
  if (param_2 != 0) {
    this_00 = (WasmEngine *)0x0;
    pWVar2 = this + param_2 * 8;
    do {
      local_88[0] = *(WasmCode **)this;
      pWVar1 = local_88[0] + 0x8c;
      iVar7 = *(int *)pWVar1;
      do {
        while( true ) {
          if (iVar7 == 1) {
            uVar10 = DecRefOnPotentiallyDeadCode(local_88[0]);
            if ((uVar10 & 1) != 0) {
              local_90 = *(undefined8 *)(local_88[0] + 0x30);
              local_78 = (undefined1 *)&local_90;
              lVar11 = std::__ndk1::
                       __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>>>>
                       ::
                       __emplace_unique_key_args<v8::internal::wasm::NativeModule*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::wasm::NativeModule*&&>,std::__ndk1::tuple<>>
                                 (&local_70,(piecewise_construct_t *)&local_90,
                                  (tuple *)&DAT_019eeb44,(tuple *)&local_78);
              if (*(long **)(lVar11 + 0x20) == *(long **)(lVar11 + 0x28)) {
                std::__ndk1::
                vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                ::__push_back_slow_path<v8::internal::wasm::WasmCode*const&>
                          ((vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                            *)(lVar11 + 0x18),local_88);
              }
              else {
                **(long **)(lVar11 + 0x20) = (long)local_88[0];
                *(long *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + 8;
              }
              if (this_00 == (WasmEngine *)0x0) {
                this_00 = *(WasmEngine **)(*(long *)(local_88[0] + 0x30) + 0x178);
              }
            }
            goto LAB_011ff474;
          }
          iVar3 = *(int *)pWVar1;
          if (iVar3 == iVar7) break;
          ClearExclusiveLocal();
          iVar7 = iVar3;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pWVar1,0x10);
        if (bVar5) {
          *(int *)pWVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar7 = iVar3;
      } while (cVar4 != '\0');
LAB_011ff474:
      this = this + 8;
    } while (this != pWVar2);
    pNVar8 = local_70;
    puVar9 = local_60;
    if (this_00 != (WasmEngine *)0x0) {
      WasmEngine::FreeDeadCode(this_00,(unordered_map *)&local_70);
      pNVar8 = local_70;
      puVar9 = local_60;
    }
  }
  while (puVar9 != (void *)0x0) {
    pvVar12 = (void *)puVar9[3];
    pvVar13 = (void *)*puVar9;
    local_70 = pNVar8;
    if (pvVar12 != (void *)0x0) {
      puVar9[4] = pvVar12;
      operator_delete(pvVar12);
    }
    operator_delete(puVar9);
    pNVar8 = local_70;
    puVar9 = pvVar13;
  }
  local_70 = (NativeModule *)0x0;
  if (pNVar8 != (NativeModule *)0x0) {
    operator_delete(pNVar8);
  }
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

