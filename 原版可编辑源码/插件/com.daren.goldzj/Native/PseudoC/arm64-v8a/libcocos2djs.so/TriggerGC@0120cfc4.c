
/* v8::internal::wasm::WasmEngine::TriggerGC(signed char) */

void __thiscall v8::internal::wasm::WasmEngine::TriggerGC(WasmEngine *this,undefined1 param_2)

{
  WasmEngine *pWVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  CancelableTask *pCVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong unaff_x25;
  long *plVar17;
  ulong uVar18;
  undefined2 uVar19;
  CancelableTask *local_80;
  ulong local_78 [2];
  piecewise_construct_t *local_68;
  
  *(undefined8 *)(this + 0x1b0) = 0;
  pWVar1 = this + 0x1b8;
  puVar4 = operator_new(0x60);
  *(undefined1 *)(puVar4 + 10) = param_2;
  *(undefined1 *)((long)puVar4 + 0x51) = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 4) = 0x3f800000;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  *(undefined4 *)(puVar4 + 9) = 0x3f800000;
  puVar4[0xb] = 0;
  lVar9 = *(long *)(this + 0x1b8);
  *(undefined8 **)(this + 0x1b8) = puVar4;
  if (lVar9 != 0) {
    FUN_01210550(pWVar1);
  }
  uVar5 = base::TimeTicks::IsHighResolution();
  if ((uVar5 & 1) != 0) {
    uVar6 = base::TimeTicks::Now();
    *(undefined8 *)(*(long *)pWVar1 + 0x58) = uVar6;
  }
  plVar17 = *(long **)(this + 0x198);
  if (plVar17 != (long *)0x0) {
    do {
      lVar9 = plVar17[3];
      if (*(long *)(lVar9 + 0x40) != 0) {
        local_68 = (piecewise_construct_t *)(plVar17 + 2);
        lVar7 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>>>
                ::
                __emplace_unique_key_args<v8::internal::wasm::NativeModule*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::wasm::NativeModule*const&>,std::__ndk1::tuple<>>
                          ((NativeModule **)(this + 0x188),local_68,(tuple *)&DAT_019eee9c,
                           (tuple *)&local_68);
        for (plVar14 = *(long **)(*(long *)(lVar7 + 0x18) + 0x10); plVar14 != (long *)0x0;
            plVar14 = (long *)*plVar14) {
          uVar18 = plVar14[2];
          plVar15 = *(long **)pWVar1;
          uVar5 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) * -0x622015f714c7d297;
          uVar13 = plVar15[1];
          uVar5 = (uVar5 ^ uVar18 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
          uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
          local_78[0] = uVar18;
          if (uVar13 != 0) {
            uVar6 = CONCAT17(POPCOUNT((char)(uVar13 >> 0x38)),
                             CONCAT16(POPCOUNT((char)(uVar13 >> 0x30)),
                                      CONCAT15(POPCOUNT((char)(uVar13 >> 0x28)),
                                               CONCAT14(POPCOUNT((char)(uVar13 >> 0x20)),
                                                        CONCAT13(POPCOUNT((char)(uVar13 >> 0x18)),
                                                                 CONCAT12(POPCOUNT((char)(uVar13 >>
                                                                                         0x10)),
                                                                          CONCAT11(POPCOUNT((char)(
                                                  uVar13 >> 8)),POPCOUNT((char)uVar13))))))));
            uVar19 = NEON_uaddlv(uVar6,1);
            uVar11 = CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar19) & 0xffffffff;
            if (uVar11 < 2) {
              unaff_x25 = uVar5 & uVar13 - 1;
            }
            else {
              unaff_x25 = uVar5;
              if (uVar13 <= uVar5) {
                uVar12 = 0;
                if (uVar13 != 0) {
                  uVar12 = uVar5 / uVar13;
                }
                unaff_x25 = uVar5 - uVar12 * uVar13;
              }
            }
            puVar4 = *(undefined8 **)(*plVar15 + unaff_x25 * 8);
            if (puVar4 != (undefined8 *)0x0) {
              for (plVar16 = (long *)*puVar4; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
                uVar12 = plVar16[1];
                if (uVar12 != uVar5) {
                  if (uVar11 < 2) {
                    uVar12 = uVar12 & uVar13 - 1;
                  }
                  else if (uVar13 <= uVar12) {
                    uVar2 = 0;
                    if (uVar13 != 0) {
                      uVar2 = uVar12 / uVar13;
                    }
                    if (uVar12 - uVar2 * uVar13 == unaff_x25) goto LAB_0120d174;
                    break;
                  }
                  if (uVar12 != unaff_x25) break;
                }
LAB_0120d174:
                if (plVar16[2] == uVar18) goto LAB_0120d380;
              }
            }
          }
          plVar16 = operator_new(0x20);
          plVar16[2] = uVar18;
          plVar16[3] = 0;
          *plVar16 = 0;
          plVar16[1] = uVar5;
          if ((uVar13 == 0) || (*(float *)(plVar15 + 4) * (float)uVar13 < (float)(plVar15[3] + 1)))
          {
            uVar18 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
            uVar11 = (ulong)((float)(plVar15[3] + 1) / *(float *)(plVar15 + 4));
            if (uVar11 <= uVar18) {
              uVar11 = uVar18;
            }
            if (uVar11 - 1 == 0) {
              uVar11 = 2;
              bVar3 = uVar13 < 3;
              uVar18 = uVar11;
              if (1 < uVar13) goto LAB_0120d268;
LAB_0120d248:
              FUN_012105c8(plVar15,uVar11);
            }
            else {
              if ((uVar11 & uVar11 - 1) != 0) {
                uVar11 = std::__ndk1::__next_prime(uVar11);
                uVar13 = plVar15[1];
                bVar3 = uVar13 <= uVar11;
                uVar18 = uVar11;
                if (uVar11 <= uVar13) goto LAB_0120d268;
                goto LAB_0120d248;
              }
              bVar3 = uVar13 <= uVar11;
              uVar18 = uVar11;
              if (uVar13 < uVar11) goto LAB_0120d248;
LAB_0120d268:
              if (!bVar3) {
                uVar11 = (ulong)((float)(ulong)plVar15[3] / *(float *)(plVar15 + 4));
                if ((uVar13 < 3) ||
                   (uVar6 = CONCAT17(POPCOUNT((char)(uVar13 >> 0x38)),
                                     CONCAT16(POPCOUNT((char)(uVar13 >> 0x30)),
                                              CONCAT15(POPCOUNT((char)(uVar13 >> 0x28)),
                                                       CONCAT14(POPCOUNT((char)(uVar13 >> 0x20)),
                                                                CONCAT13(POPCOUNT((char)(uVar13 >>
                                                                                        0x18)),
                                                                         CONCAT12(POPCOUNT((char)(
                                                  uVar13 >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)(uVar13 >> 8)),
                                                           POPCOUNT((char)uVar13)))))))),
                   uVar19 = NEON_uaddlv(uVar6,1),
                   1 < (uint)CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar19))) {
                  uVar11 = std::__ndk1::__next_prime(uVar11);
                }
                else if (1 < uVar11) {
                  uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
                }
                if (uVar11 <= uVar18) {
                  uVar11 = uVar18;
                }
                if (uVar11 < uVar13) goto LAB_0120d248;
              }
            }
            uVar13 = plVar15[1];
            if ((uVar13 & uVar13 - 1) == 0) {
              unaff_x25 = uVar13 - 1 & uVar5;
            }
            else {
              unaff_x25 = uVar5;
              if (uVar13 <= uVar5) {
                uVar18 = 0;
                if (uVar13 != 0) {
                  uVar18 = uVar5 / uVar13;
                }
                unaff_x25 = uVar5 - uVar18 * uVar13;
              }
            }
          }
          lVar7 = *plVar15;
          plVar10 = *(long **)(lVar7 + unaff_x25 * 8);
          if (plVar10 == (long *)0x0) {
            plVar10 = plVar15 + 2;
            *plVar16 = *plVar10;
            *plVar10 = (long)plVar16;
            *(long **)(lVar7 + unaff_x25 * 8) = plVar10;
            if (*plVar16 != 0) {
              uVar5 = *(ulong *)(*plVar16 + 8);
              if ((uVar13 & uVar13 - 1) == 0) {
                uVar5 = uVar5 & uVar13 - 1;
              }
              else if (uVar13 <= uVar5) {
                uVar18 = 0;
                if (uVar13 != 0) {
                  uVar18 = uVar5 / uVar13;
                }
                uVar5 = uVar5 - uVar18 * uVar13;
              }
              plVar10 = (long *)(*plVar15 + uVar5 * 8);
              goto LAB_0120d370;
            }
          }
          else {
            *plVar16 = *plVar10;
LAB_0120d370:
            *plVar10 = (long)plVar16;
          }
          plVar15[3] = plVar15[3] + 1;
LAB_0120d380:
          if (plVar16[3] == 0) {
            pCVar8 = operator_new(0x30);
            uVar5 = local_78[0];
            CancelableTask::CancelableTask(pCVar8,*(CancelableTaskManager **)(local_78[0] + 0xc700))
            ;
            *(undefined ***)pCVar8 = &PTR__CancelableTask_01cbc4e8;
            *(undefined ***)(pCVar8 + 0x20) = &PTR_FUN_01cbc518;
            local_68 = (piecewise_construct_t *)local_78;
            *(ulong *)(pCVar8 + 0x28) = uVar5;
            plVar16[3] = (long)pCVar8;
            lVar7 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>>>
                    ::
                    __emplace_unique_key_args<v8::internal::Isolate*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Isolate*const&>,std::__ndk1::tuple<>>
                              ((Isolate **)(this + 0x160),(piecewise_construct_t *)local_78,
                               (tuple *)&DAT_019eee9c,(tuple *)&local_68);
            puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0x18) + 0x40);
            local_80 = pCVar8 + 0x20;
            (**(code **)*puVar4)(puVar4,&local_80);
            pCVar8 = local_80;
            local_80 = (CancelableTask *)0x0;
            if (pCVar8 != (CancelableTask *)0x0) {
              (**(code **)(*(long *)pCVar8 + 8))();
            }
          }
          StackGuard::RequestInterrupt((StackGuard *)(local_78[0] + 0x48),0x80);
        }
        for (plVar14 = *(long **)(lVar9 + 0x38); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14)
        {
          local_68 = (piecewise_construct_t *)plVar14[2];
          std::__ndk1::
          __hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
          ::
          __emplace_unique_key_args<v8::internal::wasm::WasmCode*,v8::internal::wasm::WasmCode*const&>
                    ((__hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                      *)(*(long *)pWVar1 + 0x28),(WasmCode **)&local_68,(WasmCode **)&local_68);
        }
      }
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
  if (FLAG_trace_wasm_code_gc != '\0') {
    PrintF("[wasm-gc] Starting GC. Total number of potentially dead code objects: %zu\n",
           *(undefined8 *)(*(long *)pWVar1 + 0x40));
  }
  return;
}

