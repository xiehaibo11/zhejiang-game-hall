
/* v8::internal::compiler::ResolveWasmImportCall(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Signature<v8::internal::wasm::ValueType>*, v8::internal::wasm::WasmFeatures const&)
    */

void v8::internal::compiler::ResolveWasmImportCall
               (ulong *param_1,Signature *param_2,WasmFeatures *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  Signature *pSVar7;
  char *pcVar8;
  CanonicalHandleScope *pCVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  Isolate *pIVar13;
  ulong local_70;
  ulong *local_68;
  uint local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = WasmExportedFunction::IsWasmExportedFunction(*param_1);
  if ((uVar3 & 1) != 0) {
    local_68 = (ulong *)*param_1;
    uVar2 = WasmExportedFunction::function_index((WasmExportedFunction *)&local_68);
    local_70 = *param_1;
    local_68 = (ulong *)WasmExportedFunction::instance((WasmExportedFunction *)&local_70);
    lVar4 = WasmInstanceObject::module((WasmInstanceObject *)&local_68);
    pSVar7 = *(Signature **)
              (*(long *)(lVar4 + 0x88) +
              (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar2 << 5));
    if (pSVar7 == param_2) {
LAB_01322ff8:
      if (*(uint *)(lVar4 + 0x3c) <= uVar2) {
        uVar6 = 3;
        goto LAB_01323dc4;
      }
      local_68 = (ulong *)*param_1;
      pIVar13 = (Isolate *)((ulong)local_68 & 0xffffffff00000000);
      uVar3 = WasmExportedFunction::instance((WasmExportedFunction *)&local_68);
      pCVar9 = *(CanonicalHandleScope **)((ulong)pIVar13 | 0x95b8);
      if (pCVar9 == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar13 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar13 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar13);
        }
        *(ulong **)(pIVar13 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar3;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup(pCVar9,uVar3);
      }
      local_68 = puVar5;
      local_60 = uVar2;
      uVar3 = ImportedFunctionEntry::callable((ImportedFunctionEntry *)&local_68);
      pCVar9 = *(CanonicalHandleScope **)((ulong)pIVar13 | 0x95b8);
      if (pCVar9 == (CanonicalHandleScope *)0x0) {
        param_1 = *(ulong **)(pIVar13 + 0x95a0);
        if (param_1 == *(ulong **)(pIVar13 + 0x95a8)) {
          param_1 = (ulong *)HandleScope::Extend(pIVar13);
        }
        *(ulong **)(pIVar13 + 0x95a0) = param_1 + 1;
        *param_1 = uVar3;
      }
      else {
        param_1 = (ulong *)CanonicalHandleScope::Lookup(pCVar9,uVar3);
      }
      goto LAB_013230c8;
    }
    lVar11 = *(long *)(pSVar7 + 8);
    if ((lVar11 == *(long *)(param_2 + 8)) && (lVar12 = *(long *)pSVar7, lVar12 == *(long *)param_2)
       ) {
      pcVar8 = *(char **)(pSVar7 + 0x10);
      if (pcVar8 != pcVar8 + lVar11 + lVar12) {
        pcVar10 = *(char **)(param_2 + 0x10);
        lVar12 = lVar12 + lVar11;
        do {
          if (*pcVar8 != *pcVar10) goto LAB_01323128;
          pcVar8 = pcVar8 + 1;
          lVar12 = lVar12 + -1;
          pcVar10 = pcVar10 + 1;
        } while (lVar12 != 0);
      }
      goto LAB_01322ff8;
    }
LAB_01323128:
    uVar6 = 0;
    goto LAB_01323dc4;
  }
LAB_013230c8:
  uVar3 = WasmJSFunction::IsWasmJSFunction(*param_1);
  if ((uVar3 & 1) != 0) {
    local_68 = (ulong *)*param_1;
    uVar3 = WasmJSFunction::MatchesSignature((WasmJSFunction *)&local_68,param_2);
    if ((uVar3 & 1) == 0) goto LAB_01323128;
    local_68 = (ulong *)*param_1;
    pIVar13 = (Isolate *)((ulong)local_68 & 0xffffffff00000000);
    uVar3 = WasmJSFunction::GetCallable((WasmJSFunction *)&local_68);
    if (*(CanonicalHandleScope **)((ulong)pIVar13 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_1 = *(ulong **)(pIVar13 + 0x95a0);
      if (param_1 == *(ulong **)(pIVar13 + 0x95a8)) {
        param_1 = (ulong *)HandleScope::Extend(pIVar13);
      }
      *(ulong **)(pIVar13 + 0x95a0) = param_1 + 1;
      *param_1 = uVar3;
    }
    else {
      param_1 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)((ulong)pIVar13 | 0x95b8),uVar3);
    }
  }
  uVar3 = WasmCapiFunction::IsWasmCapiFunction(*param_1);
  if ((uVar3 & 1) != 0) {
    local_68 = (ulong *)*param_1;
    uVar3 = WasmCapiFunction::IsSignatureEqual((WasmCapiFunction *)&local_68,param_2);
    uVar6 = 2;
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
    }
    goto LAB_01323dc4;
  }
  uVar3 = wasm::IsJSCompatibleSignature(param_2,param_3);
  if ((uVar3 & 1) == 0) {
    uVar6 = 1;
    goto LAB_01323dc4;
  }
  uVar3 = *param_1;
  if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x439) {
    uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb);
    if ((FLAG_wasm_math_intrinsics != '\0') && ((*(uint *)(uVar3 + 3) & 1) == 0)) {
      switch((int)*(uint *)(uVar3 + 3) >> 1) {
      case 0x303:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0x99);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0x99);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) {
LAB_01323a90:
            pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0x8b);
            if (pSVar7 == (Signature *)0x0) {
              pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0x8b);
            }
            if (pSVar7 != param_2) {
              lVar4 = *(long *)(param_2 + 8);
              if ((lVar4 != *(long *)(pSVar7 + 8)) ||
                 (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
              pcVar8 = *(char **)(param_2 + 0x10);
              if (pcVar8 != pcVar8 + lVar4 + lVar11) {
                pcVar10 = *(char **)(pSVar7 + 0x10);
                lVar11 = lVar11 + lVar4;
                uVar6 = 0x18;
                do {
                  if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
                  pcVar8 = pcVar8 + 1;
                  lVar11 = lVar11 + -1;
                  pcVar10 = pcVar10 + 1;
                } while (lVar11 != 0);
                goto LAB_01323dc4;
              }
            }
            uVar6 = 0x18;
            goto LAB_01323dc4;
          }
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0x15;
            do {
              if (*pcVar8 != *pcVar10) goto LAB_01323a90;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0x15;
        goto LAB_01323dc4;
      case 0x304:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0x9b);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0x9b);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) {
LAB_01323b10:
            pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0x8d);
            if (pSVar7 == (Signature *)0x0) {
              pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0x8d);
            }
            if (pSVar7 != param_2) {
              lVar4 = *(long *)(param_2 + 8);
              if ((lVar4 != *(long *)(pSVar7 + 8)) ||
                 (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
              pcVar8 = *(char **)(param_2 + 0x10);
              if (pcVar8 != pcVar8 + lVar4 + lVar11) {
                pcVar10 = *(char **)(pSVar7 + 0x10);
                lVar11 = lVar11 + lVar4;
                uVar6 = 0x19;
                do {
                  if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
                  pcVar8 = pcVar8 + 1;
                  lVar11 = lVar11 + -1;
                  pcVar10 = pcVar10 + 1;
                } while (lVar11 != 0);
                goto LAB_01323dc4;
              }
            }
            uVar6 = 0x19;
            goto LAB_01323dc4;
          }
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0x10;
            do {
              if (*pcVar8 != *pcVar10) goto LAB_01323b10;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0x10;
        goto LAB_01323dc4;
      case 0x305:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0x9c);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0x9c);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) {
LAB_01323b90:
            pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0x8e);
            if (pSVar7 == (Signature *)0x0) {
              pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0x8e);
            }
            if (pSVar7 != param_2) {
              lVar4 = *(long *)(param_2 + 8);
              if ((lVar4 != *(long *)(pSVar7 + 8)) ||
                 (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
              pcVar8 = *(char **)(param_2 + 0x10);
              if (pcVar8 != pcVar8 + lVar4 + lVar11) {
                pcVar10 = *(char **)(pSVar7 + 0x10);
                lVar11 = lVar11 + lVar4;
                uVar6 = 0x1a;
                do {
                  if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
                  pcVar8 = pcVar8 + 1;
                  lVar11 = lVar11 + -1;
                  pcVar10 = pcVar10 + 1;
                } while (lVar11 != 0);
                goto LAB_01323dc4;
              }
            }
            uVar6 = 0x1a;
            goto LAB_01323dc4;
          }
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0x11;
            do {
              if (*pcVar8 != *pcVar10) goto LAB_01323b90;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0x11;
        goto LAB_01323dc4;
      case 0x308:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0xce);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0xce);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0xf;
            do {
              if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0xf;
        goto LAB_01323dc4;
      case 0x309:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0xa5);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0xa5);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) {
LAB_01323c10:
            pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0x97);
            if (pSVar7 == (Signature *)0x0) {
              pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0x97);
            }
            if (pSVar7 != param_2) {
              lVar4 = *(long *)(param_2 + 8);
              if ((lVar4 != *(long *)(pSVar7 + 8)) ||
                 (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
              pcVar8 = *(char **)(param_2 + 0x10);
              if (pcVar8 != pcVar8 + lVar4 + lVar11) {
                pcVar10 = *(char **)(pSVar7 + 0x10);
                lVar11 = lVar11 + lVar4;
                uVar6 = 0x17;
                do {
                  if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
                  pcVar8 = pcVar8 + 1;
                  lVar11 = lVar11 + -1;
                  pcVar10 = pcVar10 + 1;
                } while (lVar11 != 0);
                goto LAB_01323dc4;
              }
            }
            uVar6 = 0x17;
            goto LAB_01323dc4;
          }
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0x14;
            do {
              if (*pcVar8 != *pcVar10) goto LAB_01323c10;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0x14;
        goto LAB_01323dc4;
      case 0x30a:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0xa4);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0xa4);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) {
LAB_01323c90:
            pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0x96);
            if (pSVar7 == (Signature *)0x0) {
              pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0x96);
            }
            if (pSVar7 != param_2) {
              lVar4 = *(long *)(param_2 + 8);
              if ((lVar4 != *(long *)(pSVar7 + 8)) ||
                 (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
              pcVar8 = *(char **)(param_2 + 0x10);
              if (pcVar8 != pcVar8 + lVar4 + lVar11) {
                pcVar10 = *(char **)(pSVar7 + 0x10);
                lVar11 = lVar11 + lVar4;
                uVar6 = 0x16;
                do {
                  if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
                  pcVar8 = pcVar8 + 1;
                  lVar11 = lVar11 + -1;
                  pcVar10 = pcVar10 + 1;
                } while (lVar11 != 0);
                goto LAB_01323dc4;
              }
            }
            uVar6 = 0x16;
            goto LAB_01323dc4;
          }
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0x13;
            do {
              if (*pcVar8 != *pcVar10) goto LAB_01323c90;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0x13;
        goto LAB_01323dc4;
      case 0x30b:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0xc5);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0xc5);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 6;
            do {
              if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 6;
        goto LAB_01323dc4;
      case 0x30d:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0xc6);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0xc6);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 7;
            do {
              if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 7;
        goto LAB_01323dc4;
      case 0x30f:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(199);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(199);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 8;
            do {
              if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 8;
        goto LAB_01323dc4;
      case 0x310:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0xcd);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0xcd);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0xe;
            do {
              if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0xe;
        goto LAB_01323dc4;
      case 0x314:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(200);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(200);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 9;
            do {
              if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 9;
        goto LAB_01323dc4;
      case 0x316:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0xcb);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0xcb);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0xc;
            do {
              if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0xc;
        goto LAB_01323dc4;
      case 0x318:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0xb6);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0xb6);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0x1c;
            do {
              if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0x1c;
        goto LAB_01323dc4;
      case 0x31a:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0xcc);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0xcc);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0xd;
            do {
              if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0xd;
        goto LAB_01323dc4;
      case 0x31e:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0xc9);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0xc9);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 10;
            do {
              if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 10;
        goto LAB_01323dc4;
      case 0x321:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0x9f);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0x9f);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) {
LAB_01323d10:
            pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0x91);
            if (pSVar7 == (Signature *)0x0) {
              pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0x91);
            }
            if (pSVar7 != param_2) {
              lVar4 = *(long *)(param_2 + 8);
              if ((lVar4 != *(long *)(pSVar7 + 8)) ||
                 (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
              pcVar8 = *(char **)(param_2 + 0x10);
              if (pcVar8 != pcVar8 + lVar4 + lVar11) {
                pcVar10 = *(char **)(pSVar7 + 0x10);
                lVar11 = lVar11 + lVar4;
                uVar6 = 0x1b;
                do {
                  if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
                  pcVar8 = pcVar8 + 1;
                  lVar11 = lVar11 + -1;
                  pcVar10 = pcVar10 + 1;
                } while (lVar11 != 0);
                goto LAB_01323dc4;
              }
            }
            uVar6 = 0x1b;
            goto LAB_01323dc4;
          }
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0x12;
            do {
              if (*pcVar8 != *pcVar10) goto LAB_01323d10;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0x12;
        goto LAB_01323dc4;
      case 0x322:
        pSVar7 = (Signature *)wasm::WasmOpcodes::Signature(0xca);
        if (pSVar7 == (Signature *)0x0) {
          pSVar7 = (Signature *)wasm::WasmOpcodes::AsmjsSignature(0xca);
        }
        if (pSVar7 != param_2) {
          lVar4 = *(long *)(param_2 + 8);
          if ((lVar4 != *(long *)(pSVar7 + 8)) ||
             (lVar11 = *(long *)param_2, lVar11 != *(long *)pSVar7)) break;
          pcVar8 = *(char **)(param_2 + 0x10);
          if (pcVar8 != pcVar8 + lVar4 + lVar11) {
            pcVar10 = *(char **)(pSVar7 + 0x10);
            lVar11 = lVar11 + lVar4;
            uVar6 = 0xb;
            do {
              if (*pcVar8 != *pcVar10) goto switchD_01323204_caseD_306;
              pcVar8 = pcVar8 + 1;
              lVar11 = lVar11 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar11 != 0);
            goto LAB_01323dc4;
          }
        }
        uVar6 = 0xb;
        goto LAB_01323dc4;
      }
    }
switchD_01323204_caseD_306:
    if (3 < ((*(uint *)(uVar3 + 0x1b) & 0x1f) - 3 & 0xff)) {
      uVar6 = 4;
      if (*(ulong *)(param_2 + 8) != (ulong)*(ushort *)(uVar3 + 0x15)) {
        uVar6 = 5;
      }
      goto LAB_01323dc4;
    }
  }
  uVar6 = 0x1d;
LAB_01323dc4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

