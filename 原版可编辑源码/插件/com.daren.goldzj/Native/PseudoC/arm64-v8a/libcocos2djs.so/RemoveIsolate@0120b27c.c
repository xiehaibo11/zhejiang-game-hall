
/* v8::internal::wasm::WasmEngine::RemoveIsolate(v8::internal::Isolate*) */

void __thiscall v8::internal::wasm::WasmEngine::RemoveIsolate(WasmEngine *this,Isolate *param_1)

{
  WasmCode *pWVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  long local_98;
  undefined8 *local_90 [2];
  long *local_80 [2];
  char local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  base::Mutex::Lock((Mutex *)(this + 0x100));
  uVar6 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar5 = *(ulong *)(this + 0x168);
  uVar6 = (uVar6 ^ (ulong)param_1 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  if (uVar5 == 0) {
LAB_0120b3a8:
    plVar9 = (long *)0x0;
  }
  else {
    uVar15 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar7 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar7 < 2) {
      uVar8 = uVar5 - 1 & uVar6;
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar6 / uVar5;
        }
        uVar8 = uVar6 - uVar8 * uVar5;
      }
    }
    plVar9 = *(long **)(*(long *)(this + 0x160) + uVar8 * 8);
    if (plVar9 == (long *)0x0) goto LAB_0120b3a8;
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
      do {
        uVar11 = plVar9[1];
        if (uVar11 == uVar6) {
          if ((Isolate *)plVar9[2] == param_1) break;
        }
        else {
          if (uVar7 < 2) {
            uVar11 = uVar11 & uVar5 - 1;
          }
          else if (uVar5 <= uVar11) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar11 / uVar5;
            }
            uVar11 = uVar11 - uVar2 * uVar5;
          }
          if (uVar11 != uVar8) goto LAB_0120b3a8;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  puVar13 = (undefined8 *)plVar9[3];
  plVar9[3] = 0;
  local_90[0] = puVar13;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>>>
  ::remove(local_80);
  plVar9 = local_80[0];
  local_80[0] = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    if ((local_70 != '\0') && (lVar4 = plVar9[3], plVar9[3] = 0, lVar4 != 0)) {
      FUN_0120f170();
    }
    operator_delete(plVar9);
    puVar13 = local_90[0];
  }
  if ((long *)*puVar13 != puVar13 + 1) {
    plVar9 = (long *)*puVar13;
    do {
      local_98 = plVar9[4];
      local_80[0] = &local_98;
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>>>
              ::
              __emplace_unique_key_args<v8::internal::wasm::NativeModule*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::wasm::NativeModule*const&>,std::__ndk1::tuple<>>
                        ((NativeModule **)(this + 0x188),(piecewise_construct_t *)&local_98,
                         (tuple *)&DAT_019eee9c,(tuple *)local_80);
      plVar12 = *(long **)(lVar4 + 0x18);
      uVar5 = plVar12[1];
      if (uVar5 != 0) {
        uVar15 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                          CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                                   CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                            CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                     CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                              CONCAT12(POPCOUNT((char)(uVar5 >> 0x10
                                                                                      )),
                                                                       CONCAT11(POPCOUNT((char)(
                                                  uVar5 >> 8)),POPCOUNT((char)uVar5))))))));
        uVar14 = NEON_uaddlv(uVar15,1);
        uVar7 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
        if (uVar7 < 2) {
          uVar8 = uVar5 - 1 & uVar6;
        }
        else {
          uVar8 = uVar6;
          if (uVar5 <= uVar6) {
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = uVar6 / uVar5;
            }
            uVar8 = uVar6 - uVar8 * uVar5;
          }
        }
        plVar10 = *(long **)(*plVar12 + uVar8 * 8);
        if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
          do {
            uVar11 = plVar10[1];
            if (uVar11 == uVar6) {
              if ((Isolate *)plVar10[2] == param_1) {
                std::__ndk1::
                __hash_table<v8::internal::Isolate*,std::__ndk1::hash<v8::internal::Isolate*>,std::__ndk1::equal_to<v8::internal::Isolate*>,std::__ndk1::allocator<v8::internal::Isolate*>>
                ::remove(local_80,plVar12);
                plVar10 = local_80[0];
                local_80[0] = (long *)0x0;
                if (plVar10 != (long *)0x0) {
                  operator_delete(plVar10);
                }
                break;
              }
            }
            else {
              if (uVar7 < 2) {
                uVar11 = uVar11 & uVar5 - 1;
              }
              else if (uVar5 <= uVar11) {
                uVar2 = 0;
                if (uVar5 != 0) {
                  uVar2 = uVar11 / uVar5;
                }
                uVar11 = uVar11 - uVar2 * uVar5;
              }
              if (uVar11 != uVar8) break;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
      lVar4 = *(long *)(this + 0x1b8);
      if ((lVar4 != 0) && (plVar12 = (long *)plVar12[7], plVar12 != (long *)0x0)) {
        local_80[0] = (long *)plVar12[2];
        while( true ) {
          FUN_0120b648(lVar4 + 0x28,local_80);
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) break;
          lVar4 = *(long *)(this + 0x1b8);
          local_80[0] = (long *)plVar12[2];
        }
      }
      plVar12 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        plVar12 = plVar9 + 2;
        plVar10 = (long *)*plVar12;
        if ((long *)*plVar10 != plVar9) {
          do {
            lVar4 = *plVar12;
            plVar12 = (long *)(lVar4 + 0x10);
            plVar10 = (long *)*plVar12;
          } while (*plVar10 != lVar4);
        }
      }
      else {
        do {
          plVar10 = plVar12;
          plVar12 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar9 = plVar10;
    } while (plVar10 != puVar13 + 1);
  }
  if ((*(long *)(this + 0x1b8) != 0) &&
     (uVar5 = RemoveIsolateFromCurrentGC(this,param_1), (uVar5 & 1) != 0)) {
    PotentiallyFinishCurrentGC(this);
  }
  if (local_90[0][4] != 0) {
    *(undefined8 *)(local_90[0][4] + 0x18) = 0;
  }
  pWVar1 = (WasmCode *)local_90[0][5];
  if (pWVar1 != (WasmCode *)local_90[0][6]) {
    WasmCode::DecrementRefCount
              (pWVar1,((long)local_90[0][6] - (long)pWVar1) * 0x20000000 >> 0x20 &
                      0x1fffffffffffffff);
    puVar13 = local_90[0];
    local_90[0][6] = local_90[0][5];
    local_90[0] = (undefined8 *)0x0;
    if (puVar13 == (undefined8 *)0x0) goto LAB_0120b608;
  }
  local_90[0] = (undefined8 *)0x0;
  FUN_0120f170(local_90);
LAB_0120b608:
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

