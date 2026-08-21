
/* v8::internal::Runtime_ScriptLocationFromLine2(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_ScriptLocationFromLine2(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  double dVar17;
  undefined8 local_60;
  undefined8 local_58;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar15 = FUN_011c2dd0(param_1,param_2,param_3);
    return uVar15;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *param_2;
  if ((uVar10 & 1) == 0) {
    iVar5 = (int)uVar10 >> 1;
    uVar10 = param_2[-3];
joined_r0x011c2608:
    if ((uVar10 & 1) != 0) goto LAB_011c243c;
LAB_011c2590:
    uVar4 = (int)uVar10 >> 1;
  }
  else {
    if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    dVar17 = *(double *)(uVar10 + 3);
    if ((((dVar17 < -2147483648.0) || (2147483647.0 < dVar17)) || (ABS(dVar17) == INFINITY)) ||
       ((NAN(ABS(dVar17)) || (iVar5 = (int)dVar17, dVar17 != (double)iVar5)))) {
      uVar4 = 0xfffffbce;
      if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
        uVar4 = ((uint)((ulong)dVar17 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar4 < 0) {
        if ((int)uVar4 < -0x34) {
          iVar5 = 0;
          uVar10 = param_2[-3];
          goto joined_r0x011c2608;
        }
        uVar10 = (ulong)dVar17 & 0xfffffffffffff;
        if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
          uVar10 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar13 = (int)(uVar10 >> ((ulong)-uVar4 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar4) {
          iVar5 = 0;
          goto LAB_011c2588;
        }
        uVar10 = (ulong)dVar17 & 0xfffffffffffff;
        if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
          uVar10 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar13 = (int)(uVar10 << ((ulong)uVar4 & 0x3f));
      }
      iVar5 = -iVar13;
      if (-1 < (long)dVar17) {
        iVar5 = iVar13;
      }
      uVar10 = param_2[-3];
      goto joined_r0x011c2608;
    }
LAB_011c2588:
    uVar10 = param_2[-3];
    if ((uVar10 & 1) == 0) goto LAB_011c2590;
LAB_011c243c:
    if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[3].IsNumber()");
    }
    dVar17 = *(double *)(uVar10 + 3);
    if (((dVar17 < -2147483648.0) || (2147483647.0 < dVar17)) ||
       ((ABS(dVar17) == INFINITY ||
        ((NAN(ABS(dVar17)) || (uVar4 = (int)dVar17, dVar17 != (double)(int)dVar17)))))) {
      uVar4 = 0xfffffbce;
      if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
        uVar4 = ((uint)((ulong)dVar17 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar4 < 0) {
        if ((int)uVar4 < -0x34) goto LAB_011c25b8;
        uVar10 = (ulong)dVar17 & 0xfffffffffffff;
        if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
          uVar10 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar12 = (uint)(uVar10 >> ((ulong)-uVar4 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar4) {
LAB_011c25b8:
          uVar4 = 0;
          goto LAB_011c2634;
        }
        uVar10 = (ulong)dVar17 & 0xfffffffffffff;
        if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
          uVar10 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar12 = (uint)(uVar10 << ((ulong)uVar4 & 0x3f));
      }
      uVar4 = -uVar12;
      if (-1 < (long)dVar17) {
        uVar4 = uVar12;
      }
    }
  }
LAB_011c2634:
  Script::Iterator::Iterator((Iterator *)&local_60,param_3);
  do {
    uVar10 = Script::Iterator::Next((Iterator *)&local_60);
    if ((int)uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","GetScriptById(isolate, scriptid, &script)");
    }
  } while (iVar5 != *(int *)(uVar10 + 0x1f) >> 1);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar10;
    uVar10 = param_2[-1];
    if ((uVar10 & 1) != 0) goto LAB_011c2744;
LAB_011c2678:
    iVar5 = (int)uVar10 >> 1;
LAB_011c267c:
    uVar12 = iVar5 - (*(int *)(*puVar6 + 0xb) >> 1);
    uVar10 = param_2[-2];
    if ((uVar10 & 1) == 0) goto LAB_011c2690;
LAB_011c2768:
    if (((int)uVar10 != *(int *)(param_3 + 0xb0)) && ((int)uVar10 != *(int *)(param_3 + 0xa0))) {
      if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","opt_column->IsNumber()");
      }
      dVar17 = *(double *)(uVar10 + 3);
      if ((((dVar17 < -2147483648.0) || (2147483647.0 < dVar17)) || (ABS(dVar17) == INFINITY)) ||
         ((NAN(ABS(dVar17)) || (uVar16 = (uint)dVar17, dVar17 != (double)(int)uVar16)))) {
        uVar16 = 0xfffffbce;
        if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
          uVar16 = ((uint)((ulong)dVar17 >> 0x34) & 0x7ff) - 0x433;
        }
        if ((int)uVar16 < 0) {
          if ((int)uVar16 < -0x34) goto LAB_011c29d8;
          uVar10 = (ulong)dVar17 & 0xfffffffffffff;
          if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
            uVar10 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
          }
          uVar14 = (uint)(uVar10 >> ((ulong)-uVar16 & 0x3f));
        }
        else {
          if (0x1f < (int)uVar16) {
LAB_011c29d8:
            uVar16 = 0;
            goto joined_r0x011c2694;
          }
          uVar10 = (ulong)dVar17 & 0xfffffffffffff;
          if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
            uVar10 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
          }
          uVar14 = (uint)(uVar10 << ((ulong)uVar16 & 0x3f));
        }
        uVar16 = -uVar14;
        if (-1 < (long)dVar17) {
          uVar16 = uVar14;
        }
      }
      goto joined_r0x011c2694;
    }
    uVar16 = 0;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    uVar10 = param_2[-1];
    if ((uVar10 & 1) == 0) goto LAB_011c2678;
LAB_011c2744:
    if (((int)uVar10 != *(int *)(param_3 + 0xb0)) && ((int)uVar10 != *(int *)(param_3 + 0xa0))) {
      if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","opt_line->IsNumber()");
      }
      dVar17 = *(double *)(uVar10 + 3);
      if ((((dVar17 < -2147483648.0) || (2147483647.0 < dVar17)) || (ABS(dVar17) == INFINITY)) ||
         ((NAN(ABS(dVar17)) || (iVar5 = (int)dVar17, dVar17 != (double)(int)dVar17)))) {
        uVar12 = 0xfffffbce;
        if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
          uVar12 = ((uint)((ulong)dVar17 >> 0x34) & 0x7ff) - 0x433;
        }
        if ((int)uVar12 < 0) {
          if ((int)uVar12 < -0x34) goto LAB_011c29c8;
          uVar10 = (ulong)dVar17 & 0xfffffffffffff;
          if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
            uVar10 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
          }
          iVar13 = (int)(uVar10 >> ((ulong)-uVar12 & 0x3f));
        }
        else {
          if (0x1f < (int)uVar12) {
LAB_011c29c8:
            iVar5 = 0;
            goto LAB_011c267c;
          }
          uVar10 = (ulong)dVar17 & 0xfffffffffffff;
          if (((ulong)dVar17 & 0x7ff0000000000000) != 0) {
            uVar10 = (ulong)dVar17 & 0xfffffffffffff | 0x10000000000000;
          }
          iVar13 = (int)(uVar10 << ((ulong)uVar12 & 0x3f));
        }
        iVar5 = -iVar13;
        if (-1 < (long)dVar17) {
          iVar5 = iVar13;
        }
      }
      goto LAB_011c267c;
    }
    uVar12 = 0;
    uVar10 = param_2[-2];
    if ((uVar10 & 1) != 0) goto LAB_011c2768;
LAB_011c2690:
    uVar16 = (int)uVar10 >> 1;
joined_r0x011c2694:
    if (uVar12 == 0) {
      uVar16 = uVar16 - (*(int *)(*puVar6 + 0xf) >> 1);
    }
  }
  if ((int)(uVar12 | uVar4) < 0) goto LAB_011c2cf8;
  if ((uVar4 == 0) || (uVar12 == 0)) {
    if ((int)uVar12 < 0) {
LAB_011c2960:
      iVar5 = -1;
    }
    else {
      uVar10 = *puVar6;
      if ((*(uint *)(uVar10 + 0x17) & 0xfffffffe) == 6) {
        iVar5 = wasm::GetWasmFunctionOffset
                          (*(WasmModule **)
                            (**(long **)(*(long *)((uVar10 & 0xffffffff00000000 |
                                                   (ulong)*(uint *)(uVar10 + 0x27)) + 3) + 0x18) +
                            200),uVar12);
      }
      else {
        Script::InitLineEnds(puVar6);
        if (uVar12 == 0) goto joined_r0x011c29f0;
        uVar10 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0x1b);
        if (*(int *)(uVar10 + 3) >> 1 < (int)uVar12) goto LAB_011c2960;
        iVar5 = (*(int *)(uVar10 + (long)(int)(uVar12 * 4 + -4) + 7) >> 1) + 1;
      }
    }
    uVar4 = iVar5 + uVar4;
    goto joined_r0x011c29f0;
  }
  local_60 = 0xffffffffffffffff;
  local_58 = 0xffffffffffffffff;
  uVar10 = Script::GetPositionInfo(puVar6,uVar4,&local_60,0);
  if ((uVar10 & 1) != 0) {
    uVar12 = (int)local_60 + uVar12;
    if (-1 < (int)uVar12) {
      uVar10 = *puVar6;
      if ((*(uint *)(uVar10 + 0x17) & 0xfffffffe) == 6) {
        uVar4 = wasm::GetWasmFunctionOffset
                          (*(WasmModule **)
                            (**(long **)(*(long *)((uVar10 & 0xffffffff00000000 |
                                                   (ulong)*(uint *)(uVar10 + 0x27)) + 3) + 0x18) +
                            200),uVar12);
joined_r0x011c29f0:
        uVar12 = uVar4 | uVar16;
      }
      else {
        Script::InitLineEnds(puVar6);
        if (uVar12 != 0) {
          uVar10 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0x1b);
          if (*(int *)(uVar10 + 3) >> 1 < (int)uVar12) goto LAB_011c2cf8;
          uVar4 = (*(int *)(uVar10 + (long)(int)(uVar12 * 4 + -4) + 7) >> 1) + 1;
          goto joined_r0x011c29f0;
        }
        uVar4 = 0;
        uVar12 = uVar16;
      }
      if (-1 < (int)uVar12) {
        uVar4 = uVar4 + uVar16;
        local_60 = 0xffffffffffffffff;
        local_58 = 0xffffffffffffffff;
        uVar10 = Script::GetPositionInfo(puVar6,(ulong)uVar4,&local_60,0);
        if ((uVar10 & 1) != 0) {
          uVar10 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 3);
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            pIVar7 = *(Isolate **)pIVar1;
            if (pIVar7 == *(Isolate **)(param_3 + 0x95a8)) {
              pIVar7 = (Isolate *)HandleScope::Extend(param_3);
            }
            *(Isolate **)pIVar1 = pIVar7 + 8;
            *(ulong *)pIVar7 = uVar10;
          }
          else {
            pIVar7 = (Isolate *)
                     CanonicalHandleScope::Lookup
                               (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
          }
          if ((*(uint *)(*puVar6 + 0x17) & 0xfffffffe) == 6) {
            pIVar7 = param_3 + 200;
          }
          else if (((int)local_58 != 0) || (*(int *)(*(long *)pIVar7 + 7) != local_58._4_4_)) {
            pIVar7 = (Isolate *)Factory::NewProperSubString((Factory *)param_3,pIVar7);
          }
          uVar10 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
          uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_3 +
                                                                                        0x2bc8) - 1)
                                                          ) + 0x13)) + 499);
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)pIVar1;
            if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)pIVar1 = puVar8 + 1;
            *puVar8 = uVar10;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
          }
          pIVar9 = (Isolate *)Factory::NewJSObject((Factory *)param_3,puVar8,0);
          JSObject::AddProperty(param_3,pIVar9,param_3 + 0x988,puVar6,0);
          uVar10 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar6 = *(ulong **)pIVar1;
            if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
              puVar6 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)pIVar1 = puVar6 + 1;
            *puVar6 = uVar10;
          }
          else {
            puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
          }
          JSObject::AddProperty(param_3,pIVar9,param_3 + 0x8e0,puVar6,0);
          lVar11 = (long)(int)local_60;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar6 = *(ulong **)pIVar1;
            if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
              puVar6 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)pIVar1 = puVar6 + 1;
            *puVar6 = lVar11 << 1;
          }
          else {
            puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),lVar11 << 1);
          }
          JSObject::AddProperty(param_3,pIVar9,param_3 + 0x7c8,puVar6,0);
          lVar11 = (long)local_60._4_4_;
          if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar6 = *(ulong **)pIVar1;
            if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
              puVar6 = (ulong *)HandleScope::Extend(param_3);
            }
            *(ulong **)pIVar1 = puVar6 + 1;
            *puVar6 = lVar11 << 1;
          }
          else {
            puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_3 + 0x95b8),lVar11 << 1);
          }
          JSObject::AddProperty(param_3,pIVar9,param_3 + 0x5a8,puVar6,0);
          JSObject::AddProperty(param_3,pIVar9,param_3 + 0x9d8,pIVar7,0);
          goto LAB_011c2cfc;
        }
      }
    }
  }
LAB_011c2cf8:
  pIVar9 = param_3 + 0xb0;
LAB_011c2cfc:
  uVar15 = *(undefined8 *)pIVar9;
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar15;
}

