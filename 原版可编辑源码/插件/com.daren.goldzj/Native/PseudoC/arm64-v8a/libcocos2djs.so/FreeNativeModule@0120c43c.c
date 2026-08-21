
/* v8::internal::wasm::WasmEngine::FreeNativeModule(v8::internal::wasm::NativeModule*) */

void __thiscall
v8::internal::wasm::WasmEngine::FreeNativeModule(WasmEngine *this,NativeModule *param_1)

{
  long lVar1;
  __tree_node_base *p_Var2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  __tree_node_base *p_Var7;
  vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
  *this_00;
  ulong uVar8;
  __tree_node_base *p_Var9;
  long *plVar10;
  __tree_node_base *p_Var11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  NativeModuleInfo *this_01;
  __tree_node_base *p_Var17;
  undefined8 *puVar18;
  long *plVar19;
  undefined2 uVar20;
  undefined8 uVar21;
  long local_90 [2];
  long *local_80 [2];
  char local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  base::Mutex::Lock((Mutex *)(this + 0x100));
  uVar8 = *(ulong *)(this + 400);
  if (uVar8 != 0) {
    uVar12 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar21 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar8 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar8 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar8))))
                                                ))));
    uVar20 = NEON_uaddlv(uVar21,1);
    uVar13 = (uVar12 ^ (ulong)param_1 >> 0x20 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
    uVar12 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
    uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
    if (uVar12 < 2) {
      uVar14 = uVar8 - 1 & uVar13;
    }
    else {
      uVar14 = uVar13;
      if (uVar8 <= uVar13) {
        uVar14 = 0;
        if (uVar8 != 0) {
          uVar14 = uVar13 / uVar8;
        }
        uVar14 = uVar13 - uVar14 * uVar8;
      }
    }
    plVar15 = *(long **)(*(long *)(this + 0x188) + uVar14 * 8);
    if (plVar15 != (long *)0x0) {
      plVar15 = (long *)*plVar15;
      if (plVar15 != (long *)0x0) {
        do {
          uVar16 = plVar15[1];
          if (uVar16 == uVar13) {
            if ((NativeModule *)plVar15[2] == param_1) break;
          }
          else {
            if (uVar12 < 2) {
              uVar16 = uVar16 & uVar8 - 1;
            }
            else if (uVar8 <= uVar16) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar16 / uVar8;
              }
              uVar16 = uVar16 - uVar3 * uVar8;
            }
            if (uVar16 != uVar14) goto LAB_0120c568;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      goto LAB_0120c56c;
    }
  }
LAB_0120c568:
  plVar15 = (long *)0x0;
LAB_0120c56c:
  plVar19 = *(long **)(plVar15[3] + 0x10);
  if (plVar19 != (long *)0x0) {
    do {
      while( true ) {
        local_90[0] = plVar19[2];
        local_80[0] = local_90;
        lVar6 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>>>
                ::
                __emplace_unique_key_args<v8::internal::Isolate*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Isolate*const&>,std::__ndk1::tuple<>>
                          ((Isolate **)(this + 0x160),(piecewise_construct_t *)local_90,
                           (tuple *)&DAT_019eee9c,(tuple *)local_80);
        puVar18 = *(undefined8 **)(lVar6 + 0x18);
        p_Var9 = (__tree_node_base *)(puVar18 + 1);
        p_Var7 = *(__tree_node_base **)p_Var9;
        p_Var11 = p_Var7;
        p_Var17 = p_Var9;
        if (p_Var7 != (__tree_node_base *)0x0) {
          do {
            if (*(NativeModule **)(p_Var11 + 0x20) >= param_1) {
              p_Var17 = p_Var11;
            }
            p_Var2 = p_Var11 + (ulong)(*(NativeModule **)(p_Var11 + 0x20) < param_1) * 8;
            p_Var11 = *(__tree_node_base **)p_Var2;
          } while (*(__tree_node_base **)p_Var2 != (__tree_node_base *)0x0);
          if ((p_Var17 != p_Var9) && (*(NativeModule **)(p_Var17 + 0x20) <= param_1)) {
            plVar5 = *(long **)(p_Var17 + 8);
            if (*(long **)(p_Var17 + 8) == (long *)0x0) {
              p_Var11 = p_Var17 + 0x10;
              plVar10 = *(long **)p_Var11;
              if ((__tree_node_base *)*plVar10 != p_Var17) {
                do {
                  lVar6 = *(long *)p_Var11;
                  p_Var11 = (__tree_node_base *)(lVar6 + 0x10);
                  plVar10 = *(long **)p_Var11;
                } while (*plVar10 != lVar6);
              }
            }
            else {
              do {
                plVar10 = plVar5;
                plVar5 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
            }
            if ((__tree_node_base *)*puVar18 == p_Var17) {
              *puVar18 = plVar10;
            }
            puVar18[2] = puVar18[2] + -1;
            std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(p_Var7,p_Var17);
            operator_delete(p_Var17);
          }
        }
        this_00 = (vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                   *)(puVar18 + 5);
        if (puVar18[6] - *(long *)this_00 != 0) break;
LAB_0120c590:
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_0120c708;
      }
      uVar8 = 0;
      uVar12 = puVar18[6] - *(long *)this_00 >> 3;
      do {
        while ((uVar8 < uVar12 &&
               (lVar6 = *(long *)this_00,
               *(NativeModule **)(*(long *)(lVar6 + uVar8 * 8) + 0x30) == param_1))) {
          lVar1 = uVar12 * 8;
          uVar12 = uVar12 - 1;
          *(undefined8 *)(lVar6 + uVar8 * 8) = *(undefined8 *)(lVar6 + lVar1 + -8);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar12);
      uVar8 = (long)(puVar18[6] - puVar18[5]) >> 3;
      if (uVar8 <= uVar12 && uVar12 - uVar8 != 0) {
        std::__ndk1::
        vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
        ::__append(this_00,uVar12 - uVar8);
        goto LAB_0120c590;
      }
      if (uVar8 <= uVar12) goto LAB_0120c590;
      puVar18[6] = puVar18[5] + uVar12 * 8;
      plVar19 = (long *)*plVar19;
    } while (plVar19 != (long *)0x0);
  }
LAB_0120c708:
  if (*(long *)(this + 0x1b8) != 0) {
    for (plVar19 = *(long **)(*(long *)(this + 0x1b8) + 0x38); plVar19 != (long *)0x0;
        plVar19 = (long *)*plVar19) {
      while (*(NativeModule **)(plVar19[2] + 0x30) == param_1) {
        plVar19 = (long *)*plVar19;
        std::__ndk1::
        __hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
        ::remove(local_80,*(long *)(this + 0x1b8) + 0x28);
        plVar5 = local_80[0];
        local_80[0] = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          operator_delete(plVar5);
        }
        if (plVar19 == (long *)0x0) goto LAB_0120c760;
      }
    }
LAB_0120c760:
    if (FLAG_trace_wasm_code_gc != '\0') {
      PrintF("[wasm-gc] Native module %p died, reducing dead code objects to %zu.\n",param_1,
             *(undefined8 *)(*(long *)(this + 0x1b8) + 0x40));
    }
  }
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>>>
  ::remove(local_80,this + 0x188,plVar15);
  plVar15 = local_80[0];
  local_80[0] = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    if (local_70 != '\0') {
      this_01 = (NativeModuleInfo *)plVar15[3];
      plVar15[3] = 0;
      if (this_01 != (NativeModuleInfo *)0x0) {
        NativeModuleInfo::~NativeModuleInfo(this_01);
        operator_delete(this_01);
      }
    }
    operator_delete(plVar15);
  }
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

