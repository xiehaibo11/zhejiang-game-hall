
undefined8 FUN_01596190(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  uint *__s;
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  double dVar28;
  undefined1 auVar29 [16];
  byte **local_d0;
  byte *local_c8;
  char *local_c0;
  undefined8 local_b8;
  RuntimeCallStats *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_88 [2];
  undefined4 local_80 [2];
  long *local_78;
  long *local_70;
  
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_b0,(ulong)&local_b0 | 8,0x211);
  }
  if (DAT_01d473b0 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d473b0 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar5 = DAT_01d473b0;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d473b0 & 5) != 0) {
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar5,"V8.Runtime_Runtime_StringToArray",0,0,0,0,0,0,0,&local_78
                       ,0);
    plVar7 = local_70;
    local_70 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_78;
    local_78 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_d0 = &local_c8;
    local_c0 = "V8.Runtime_Runtime_StringToArray";
    local_c8 = pbVar5;
    local_b8 = uVar8;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar13 = *param_2;
  if (((uVar13 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  uVar13 = param_2[-1];
  if ((uVar13 & 1) == 0) {
    uVar22 = (int)uVar13 >> 1;
  }
  else {
    if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    dVar28 = *(double *)(uVar13 + 3);
    if ((((dVar28 < -2147483648.0) || (2147483647.0 < dVar28)) || (ABS(dVar28) == INFINITY)) ||
       ((NAN(ABS(dVar28)) || (uVar22 = (int)dVar28, dVar28 != (double)(int)dVar28)))) {
      uVar22 = 0xfffffbce;
      if (((ulong)dVar28 & 0x7ff0000000000000) != 0) {
        uVar22 = ((uint)((ulong)dVar28 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar22 < 0) {
        if ((int)uVar22 < -0x34) goto LAB_015963a4;
        uVar13 = (ulong)dVar28 & 0xfffffffffffff;
        if (((ulong)dVar28 & 0x7ff0000000000000) != 0) {
          uVar13 = (ulong)dVar28 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar15 = (uint)(uVar13 >> ((ulong)-uVar22 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar22) {
LAB_015963a4:
          uVar22 = 0;
          goto LAB_015963d0;
        }
        uVar13 = (ulong)dVar28 & 0xfffffffffffff;
        if (((ulong)dVar28 & 0x7ff0000000000000) != 0) {
          uVar13 = (ulong)dVar28 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar15 = (uint)(uVar13 << ((ulong)uVar22 & 0x3f));
      }
      uVar22 = -uVar15;
      if (-1 < (long)dVar28) {
        uVar22 = uVar15;
      }
    }
  }
LAB_015963d0:
  puVar9 = (ulong *)v8::internal::String::Flatten(param_3,param_2,0);
  uVar13 = *puVar9;
  uVar16 = uVar13 & 0xffffffff00000000;
  uVar15 = *(uint *)(uVar13 + 7);
  if (uVar22 <= *(uint *)(uVar13 + 7)) {
    uVar15 = uVar22;
  }
  uVar25 = (ulong)uVar15;
  if ((((*(ushort *)((uVar16 | *(uint *)(uVar13 - 1)) + 7) & 7) == 1) &&
      (*(int *)((uVar16 | *(uint *)(uVar13 + 0xf)) + 7) != 0)) ||
     ((*(byte *)((uVar16 | 7) + (ulong)*(uint *)(uVar13 - 1)) >> 3 & 1) == 0)) {
    puVar10 = (ulong *)v8::internal::Factory::NewFixedArray(param_3,uVar25,0);
  }
  else {
    puVar10 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray(param_3,uVar15);
    local_78 = (long *)*puVar9;
    auVar29 = v8::internal::String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_78);
    if (auVar29._8_8_ >> 0x20 == 1) {
      if (0 < (int)uVar15) {
        uVar20 = *puVar10;
        uVar16 = *(ulong *)(param_3 + 0xf18);
        uVar22 = *(uint *)(param_3 + 0xa0);
        lVar24 = 0;
        uVar19 = *(ulong *)((uVar20 & 0xfffffffffffc0000) + 8);
        uVar23 = uVar16 & 0xffffffff00000000;
        uVar13 = 0;
        do {
          __s = (uint *)(uVar20 + 7 + (long)(int)lVar24);
          uVar4 = *(uint *)(uVar16 + 7 + (ulong)*(byte *)(auVar29._0_8_ + uVar13) * 4);
          if (uVar4 == uVar22) {
            uVar22 = uVar15;
            if (uVar15 != (uint)uVar13) {
              memset(__s,0,(-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar25 << 2) - lVar24);
              uVar22 = (uint)uVar13;
            }
            goto joined_r0x015966b8;
          }
          *__s = uVar4;
          if (((uVar19 & 0x40000) != 0 || (uVar19 & 0x18) == 0) && (uVar4 & 1) != 0) {
            uVar26 = uVar23 | uVar4;
            uVar17 = uVar23 | (ulong)uVar4 & 0xfffffffffffc0000;
            uVar14 = *(ulong *)(uVar17 + 8);
            if (((uint)uVar14 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar20,__s,uVar26);
              uVar14 = *(ulong *)(uVar17 | 8);
            }
            if (((uVar14 & 0x18) != 0) && ((*(byte *)(uVar20 & 0xfffffffffffc0000 | 8) & 0x18) == 0)
               ) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar20,__s,uVar26);
            }
          }
          uVar13 = uVar13 + 1;
          lVar24 = lVar24 + 4;
        } while (uVar25 != uVar13);
        goto LAB_01596710;
      }
    }
    else if (uVar15 != 0) {
      uVar13 = *puVar10;
      uVar3 = *(undefined4 *)(param_3 + 0xa0);
      uVar16 = (ulong)(int)uVar15;
      if (uVar15 < 8) {
        uVar19 = 0;
      }
      else {
        uVar19 = uVar16 & 0xfffffffffffffff8;
        puVar12 = (undefined8 *)(uVar13 + 0x17);
        uVar25 = uVar19;
        do {
          puVar12[-1] = CONCAT44(uVar3,uVar3);
          puVar12[-2] = CONCAT44(uVar3,uVar3);
          puVar12[1] = CONCAT44(uVar3,uVar3);
          *puVar12 = CONCAT44(uVar3,uVar3);
          uVar25 = uVar25 - 8;
          puVar12 = puVar12 + 4;
        } while (uVar25 != 0);
        if (uVar19 == uVar16) goto LAB_0159644c;
      }
      lVar24 = uVar16 - uVar19;
      puVar18 = (undefined4 *)(uVar13 + 7 + uVar19 * 4);
      do {
        lVar24 = lVar24 + -1;
        *puVar18 = uVar3;
        puVar18 = puVar18 + 1;
      } while (lVar24 != 0);
    }
  }
LAB_0159644c:
  uVar22 = 0;
joined_r0x015966b8:
  if ((int)uVar22 < (int)uVar15) {
    lVar24 = (long)(int)uVar22;
    iVar27 = uVar22 << 2;
    do {
      local_78 = (long *)*puVar9;
      local_80[0] = (undefined4)lVar24;
      local_88[0] = (uint)*(ushort *)
                           (((ulong)local_78 & 0xffffffff00000000 |
                            (ulong)*(uint *)((long)local_78 - 1)) + 7);
      uVar6 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (local_88,&local_78,local_80);
      puVar11 = (ulong *)v8::internal::Factory::LookupSingleCharacterStringFromCode(param_3,uVar6);
      uVar16 = *puVar10;
      uVar13 = *puVar11;
      *(int *)(uVar16 + (long)iVar27 + 7) = (int)uVar13;
      if ((uVar13 & 1) != 0) {
        uVar25 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
        lVar1 = uVar16 + (long)iVar27 + 7;
        if (((uint)uVar25 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar16,lVar1,uVar13);
          uVar25 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar25 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar16,lVar1,uVar13);
        }
      }
      lVar24 = lVar24 + 1;
      iVar27 = iVar27 + 4;
    } while (lVar24 < (int)uVar15);
  }
LAB_01596710:
  puVar12 = (undefined8 *)
            v8::internal::Factory::NewJSArrayWithElements
                      (param_3,puVar10,3,*(int *)(*puVar10 + 3) >> 1,0);
  uVar21 = *puVar12;
  if (param_3 != (Factory *)0x0) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar8;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
    }
  }
  if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_c8,local_c0,local_b8);
  }
  if (local_b0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
  }
  return uVar21;
}

