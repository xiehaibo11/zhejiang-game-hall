
undefined8 FUN_011c2dd0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  Isolate *pIVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  double dVar18;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x111);
  }
  if (DAT_01d3f9b0 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f9b0 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d3f9b0;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d3f9b0 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar2,"V8.Runtime_Runtime_ScriptLocationFromLine2",0,0,0,0,0,0,0
                       ,&local_70,0);
    plVar5 = local_68;
    local_68 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_70;
    local_70 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.Runtime_Runtime_ScriptLocationFromLine2";
    local_b8 = pbVar2;
    local_a8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if ((uVar11 & 1) == 0) {
    iVar4 = (int)uVar11 >> 1;
    uVar11 = param_2[-3];
joined_r0x011c30d8:
    if ((uVar11 & 1) != 0) goto LAB_011c2f0c;
LAB_011c3060:
    uVar3 = (int)uVar11 >> 1;
  }
  else {
    if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    dVar18 = *(double *)(uVar11 + 3);
    if ((((dVar18 < -2147483648.0) || (2147483647.0 < dVar18)) || (ABS(dVar18) == INFINITY)) ||
       ((NAN(ABS(dVar18)) || (iVar4 = (int)dVar18, dVar18 != (double)iVar4)))) {
      uVar3 = 0xfffffbce;
      if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
        uVar3 = ((uint)((ulong)dVar18 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar3 < 0) {
        if ((int)uVar3 < -0x34) {
          iVar4 = 0;
          uVar11 = param_2[-3];
          goto joined_r0x011c30d8;
        }
        uVar11 = (ulong)dVar18 & 0xfffffffffffff;
        if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
          uVar11 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar14 = (int)(uVar11 >> ((ulong)-uVar3 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar3) {
          iVar4 = 0;
          goto LAB_011c3058;
        }
        uVar11 = (ulong)dVar18 & 0xfffffffffffff;
        if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
          uVar11 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar14 = (int)(uVar11 << ((ulong)uVar3 & 0x3f));
      }
      iVar4 = -iVar14;
      if (-1 < (long)dVar18) {
        iVar4 = iVar14;
      }
      uVar11 = param_2[-3];
      goto joined_r0x011c30d8;
    }
LAB_011c3058:
    uVar11 = param_2[-3];
    if ((uVar11 & 1) == 0) goto LAB_011c3060;
LAB_011c2f0c:
    if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[3].IsNumber()");
    }
    dVar18 = *(double *)(uVar11 + 3);
    if (((dVar18 < -2147483648.0) || (2147483647.0 < dVar18)) ||
       ((ABS(dVar18) == INFINITY ||
        ((NAN(ABS(dVar18)) || (uVar3 = (int)dVar18, dVar18 != (double)(int)dVar18)))))) {
      uVar3 = 0xfffffbce;
      if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
        uVar3 = ((uint)((ulong)dVar18 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar3 < 0) {
        if ((int)uVar3 < -0x34) goto LAB_011c3088;
        uVar11 = (ulong)dVar18 & 0xfffffffffffff;
        if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
          uVar11 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar13 = (uint)(uVar11 >> ((ulong)-uVar3 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar3) {
LAB_011c3088:
          uVar3 = 0;
          goto LAB_011c3104;
        }
        uVar11 = (ulong)dVar18 & 0xfffffffffffff;
        if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
          uVar11 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar13 = (uint)(uVar11 << ((ulong)uVar3 & 0x3f));
      }
      uVar3 = -uVar13;
      if (-1 < (long)dVar18) {
        uVar3 = uVar13;
      }
    }
  }
LAB_011c3104:
  v8::internal::Script::Iterator::Iterator((Iterator *)&local_70,param_3);
  do {
    uVar11 = v8::internal::Script::Iterator::Next((Iterator *)&local_70);
    if ((int)uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","GetScriptById(isolate, scriptid, &script)");
    }
  } while (iVar4 != *(int *)(uVar11 + 0x1f) >> 1);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(param_3 + 0x95a0);
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar11;
    uVar11 = param_2[-1];
    if ((uVar11 & 1) != 0) goto LAB_011c3214;
LAB_011c3148:
    iVar4 = (int)uVar11 >> 1;
LAB_011c314c:
    uVar13 = iVar4 - (*(int *)(*puVar7 + 0xb) >> 1);
    uVar11 = param_2[-2];
    if ((uVar11 & 1) == 0) goto LAB_011c3160;
LAB_011c3238:
    if (((int)uVar11 != *(int *)(param_3 + 0xb0)) && ((int)uVar11 != *(int *)(param_3 + 0xa0))) {
      if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","opt_column->IsNumber()");
      }
      dVar18 = *(double *)(uVar11 + 3);
      if ((((dVar18 < -2147483648.0) || (2147483647.0 < dVar18)) || (ABS(dVar18) == INFINITY)) ||
         ((NAN(ABS(dVar18)) || (uVar17 = (uint)dVar18, dVar18 != (double)(int)uVar17)))) {
        uVar17 = 0xfffffbce;
        if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
          uVar17 = ((uint)((ulong)dVar18 >> 0x34) & 0x7ff) - 0x433;
        }
        if ((int)uVar17 < 0) {
          if ((int)uVar17 < -0x34) goto LAB_011c34a8;
          uVar11 = (ulong)dVar18 & 0xfffffffffffff;
          if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
            uVar11 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
          }
          uVar15 = (uint)(uVar11 >> ((ulong)-uVar17 & 0x3f));
        }
        else {
          if (0x1f < (int)uVar17) {
LAB_011c34a8:
            uVar17 = 0;
            goto joined_r0x011c3164;
          }
          uVar11 = (ulong)dVar18 & 0xfffffffffffff;
          if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
            uVar11 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
          }
          uVar15 = (uint)(uVar11 << ((ulong)uVar17 & 0x3f));
        }
        uVar17 = -uVar15;
        if (-1 < (long)dVar18) {
          uVar17 = uVar15;
        }
      }
      goto joined_r0x011c3164;
    }
    uVar17 = 0;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
    uVar11 = param_2[-1];
    if ((uVar11 & 1) == 0) goto LAB_011c3148;
LAB_011c3214:
    if (((int)uVar11 != *(int *)(param_3 + 0xb0)) && ((int)uVar11 != *(int *)(param_3 + 0xa0))) {
      if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","opt_line->IsNumber()");
      }
      dVar18 = *(double *)(uVar11 + 3);
      if ((((dVar18 < -2147483648.0) || (2147483647.0 < dVar18)) || (ABS(dVar18) == INFINITY)) ||
         ((NAN(ABS(dVar18)) || (iVar4 = (int)dVar18, dVar18 != (double)(int)dVar18)))) {
        uVar13 = 0xfffffbce;
        if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
          uVar13 = ((uint)((ulong)dVar18 >> 0x34) & 0x7ff) - 0x433;
        }
        if ((int)uVar13 < 0) {
          if ((int)uVar13 < -0x34) goto LAB_011c3498;
          uVar11 = (ulong)dVar18 & 0xfffffffffffff;
          if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
            uVar11 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
          }
          iVar14 = (int)(uVar11 >> ((ulong)-uVar13 & 0x3f));
        }
        else {
          if (0x1f < (int)uVar13) {
LAB_011c3498:
            iVar4 = 0;
            goto LAB_011c314c;
          }
          uVar11 = (ulong)dVar18 & 0xfffffffffffff;
          if (((ulong)dVar18 & 0x7ff0000000000000) != 0) {
            uVar11 = (ulong)dVar18 & 0xfffffffffffff | 0x10000000000000;
          }
          iVar14 = (int)(uVar11 << ((ulong)uVar13 & 0x3f));
        }
        iVar4 = -iVar14;
        if (-1 < (long)dVar18) {
          iVar4 = iVar14;
        }
      }
      goto LAB_011c314c;
    }
    uVar13 = 0;
    uVar11 = param_2[-2];
    if ((uVar11 & 1) != 0) goto LAB_011c3238;
LAB_011c3160:
    uVar17 = (int)uVar11 >> 1;
joined_r0x011c3164:
    if (uVar13 == 0) {
      uVar17 = uVar17 - (*(int *)(*puVar7 + 0xf) >> 1);
    }
  }
  if ((int)(uVar13 | uVar3) < 0) goto LAB_011c37c8;
  if ((uVar3 == 0) || (uVar13 == 0)) {
    if ((int)uVar13 < 0) {
LAB_011c3430:
      iVar4 = -1;
    }
    else {
      uVar11 = *puVar7;
      if ((*(uint *)(uVar11 + 0x17) & 0xfffffffe) == 6) {
        iVar4 = v8::internal::wasm::GetWasmFunctionOffset
                          (*(WasmModule **)
                            (**(long **)(*(long *)((uVar11 & 0xffffffff00000000 |
                                                   (ulong)*(uint *)(uVar11 + 0x27)) + 3) + 0x18) +
                            200),uVar13);
      }
      else {
        v8::internal::Script::InitLineEnds(puVar7);
        if (uVar13 == 0) goto joined_r0x011c34c0;
        uVar11 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0x1b);
        if (*(int *)(uVar11 + 3) >> 1 < (int)uVar13) goto LAB_011c3430;
        iVar4 = (*(int *)(uVar11 + (long)(int)(uVar13 * 4 + -4) + 7) >> 1) + 1;
      }
    }
    uVar3 = iVar4 + uVar3;
    goto joined_r0x011c34c0;
  }
  local_70 = (long *)0xffffffffffffffff;
  local_68 = (long *)0xffffffffffffffff;
  uVar11 = v8::internal::Script::GetPositionInfo(puVar7,uVar3,&local_70,0);
  if ((uVar11 & 1) != 0) {
    uVar13 = (int)local_70 + uVar13;
    if (-1 < (int)uVar13) {
      uVar11 = *puVar7;
      if ((*(uint *)(uVar11 + 0x17) & 0xfffffffe) == 6) {
        uVar3 = v8::internal::wasm::GetWasmFunctionOffset
                          (*(WasmModule **)
                            (**(long **)(*(long *)((uVar11 & 0xffffffff00000000 |
                                                   (ulong)*(uint *)(uVar11 + 0x27)) + 3) + 0x18) +
                            200),uVar13);
joined_r0x011c34c0:
        uVar13 = uVar3 | uVar17;
      }
      else {
        v8::internal::Script::InitLineEnds(puVar7);
        if (uVar13 != 0) {
          uVar11 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0x1b);
          if (*(int *)(uVar11 + 3) >> 1 < (int)uVar13) goto LAB_011c37c8;
          uVar3 = (*(int *)(uVar11 + (long)(int)(uVar13 * 4 + -4) + 7) >> 1) + 1;
          goto joined_r0x011c34c0;
        }
        uVar3 = 0;
        uVar13 = uVar17;
      }
      if (-1 < (int)uVar13) {
        uVar3 = uVar3 + uVar17;
        local_70 = (long *)0xffffffffffffffff;
        local_68 = (long *)0xffffffffffffffff;
        uVar11 = v8::internal::Script::GetPositionInfo(puVar7,(ulong)uVar3,&local_70,0);
        if ((uVar11 & 1) != 0) {
          uVar11 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 3);
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            pIVar8 = *(Isolate **)(param_3 + 0x95a0);
            if (pIVar8 == *(Isolate **)(param_3 + 0x95a8)) {
              pIVar8 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
            }
            *(Isolate **)(param_3 + 0x95a0) = pIVar8 + 8;
            *(ulong *)pIVar8 = uVar11;
          }
          else {
            pIVar8 = (Isolate *)
                     v8::internal::CanonicalHandleScope::Lookup
                               (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
          }
          if ((*(uint *)(*puVar7 + 0x17) & 0xfffffffe) == 6) {
            pIVar8 = param_3 + 200;
          }
          else if (((int)local_68 != 0) || (*(int *)(*(long *)pIVar8 + 7) != local_68._4_4_)) {
            pIVar8 = (Isolate *)v8::internal::Factory::NewProperSubString((Factory *)param_3,pIVar8)
            ;
          }
          uVar11 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
          uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_3 +
                                                                                        0x2bc8) - 1)
                                                          ) + 0x13)) + 499);
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar9 = *(ulong **)(param_3 + 0x95a0);
            if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
              puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_3);
            }
            *(ulong **)(param_3 + 0x95a0) = puVar9 + 1;
            *puVar9 = uVar11;
          }
          else {
            puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
          }
          pIVar10 = (Isolate *)v8::internal::Factory::NewJSObject((Factory *)param_3,puVar9,0);
          v8::internal::JSObject::AddProperty(param_3,pIVar10,param_3 + 0x988,puVar7,0);
          uVar11 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(param_3 + 0x95a0);
            if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
              puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
            }
            *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar11;
          }
          else {
            puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
          }
          v8::internal::JSObject::AddProperty(param_3,pIVar10,param_3 + 0x8e0,puVar7,0);
          lVar12 = (long)(int)local_70;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(param_3 + 0x95a0);
            if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
              puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
            }
            *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
            *puVar7 = lVar12 << 1;
          }
          else {
            puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),lVar12 << 1);
          }
          v8::internal::JSObject::AddProperty(param_3,pIVar10,param_3 + 0x7c8,puVar7,0);
          lVar12 = (long)local_70._4_4_;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(param_3 + 0x95a0);
            if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
              puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
            }
            *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
            *puVar7 = lVar12 << 1;
          }
          else {
            puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),lVar12 << 1);
          }
          v8::internal::JSObject::AddProperty(param_3,pIVar10,param_3 + 0x5a8,puVar7,0);
          v8::internal::JSObject::AddProperty(param_3,pIVar10,param_3 + 0x9d8,pIVar8,0);
          goto LAB_011c37cc;
        }
      }
    }
  }
LAB_011c37c8:
  pIVar10 = param_3 + 0xb0;
LAB_011c37cc:
  uVar16 = *(undefined8 *)pIVar10;
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar16;
}

