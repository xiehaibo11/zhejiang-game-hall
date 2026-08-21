
/* v8::internal::Runtime_StringToArray(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StringToArray(int param_1,ulong *param_2,Isolate *param_3)

{
  uint *__s;
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  double dVar26;
  undefined1 auVar27 [16];
  uint local_78 [2];
  undefined4 local_70 [2];
  ulong local_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = FUN_01596190(param_1,param_2,param_3);
    return uVar10;
  }
  uVar10 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if (((uVar11 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  uVar11 = param_2[-1];
  if ((uVar11 & 1) == 0) {
    uVar20 = (int)uVar11 >> 1;
  }
  else {
    if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    dVar26 = *(double *)(uVar11 + 3);
    if ((((dVar26 < -2147483648.0) || (2147483647.0 < dVar26)) || (ABS(dVar26) == INFINITY)) ||
       ((NAN(ABS(dVar26)) || (uVar20 = (int)dVar26, dVar26 != (double)(int)dVar26)))) {
      uVar20 = 0xfffffbce;
      if (((ulong)dVar26 & 0x7ff0000000000000) != 0) {
        uVar20 = ((uint)((ulong)dVar26 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar20 < 0) {
        if ((int)uVar20 < -0x34) goto LAB_01595d60;
        uVar11 = (ulong)dVar26 & 0xfffffffffffff;
        if (((ulong)dVar26 & 0x7ff0000000000000) != 0) {
          uVar11 = (ulong)dVar26 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar13 = (uint)(uVar11 >> ((ulong)-uVar20 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar20) {
LAB_01595d60:
          uVar20 = 0;
          goto LAB_01595d8c;
        }
        uVar11 = (ulong)dVar26 & 0xfffffffffffff;
        if (((ulong)dVar26 & 0x7ff0000000000000) != 0) {
          uVar11 = (ulong)dVar26 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar13 = (uint)(uVar11 << ((ulong)uVar20 & 0x3f));
      }
      uVar20 = -uVar13;
      if (-1 < (long)dVar26) {
        uVar20 = uVar13;
      }
    }
  }
LAB_01595d8c:
  puVar6 = (ulong *)String::Flatten(param_3,param_2,0);
  uVar11 = *puVar6;
  uVar14 = uVar11 & 0xffffffff00000000;
  uVar13 = *(uint *)(uVar11 + 7);
  if (uVar20 <= *(uint *)(uVar11 + 7)) {
    uVar13 = uVar20;
  }
  uVar23 = (ulong)uVar13;
  if ((((*(ushort *)((uVar14 | *(uint *)(uVar11 - 1)) + 7) & 7) == 1) &&
      (*(int *)((uVar14 | *(uint *)(uVar11 + 0xf)) + 7) != 0)) ||
     ((*(byte *)((uVar14 | 7) + (ulong)*(uint *)(uVar11 - 1)) >> 3 & 1) == 0)) {
    puVar7 = (ulong *)Factory::NewFixedArray((Factory *)param_3,uVar23,0);
  }
  else {
    puVar7 = (ulong *)Factory::NewUninitializedFixedArray((Factory *)param_3,uVar13);
    local_68 = *puVar6;
    auVar27 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_68);
    if (auVar27._8_8_ >> 0x20 == 1) {
      if (0 < (int)uVar13) {
        uVar18 = *puVar7;
        uVar14 = *(ulong *)(param_3 + 0xf18);
        uVar20 = *(uint *)(param_3 + 0xa0);
        lVar22 = 0;
        uVar17 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
        uVar21 = uVar14 & 0xffffffff00000000;
        uVar11 = 0;
        do {
          __s = (uint *)(uVar18 + 7 + (long)(int)lVar22);
          uVar4 = *(uint *)(uVar14 + 7 + (ulong)*(byte *)(auVar27._0_8_ + uVar11) * 4);
          if (uVar4 == uVar20) {
            uVar20 = uVar13;
            if (uVar13 != (uint)uVar11) {
              memset(__s,0,(-(ulong)(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar23 << 2) - lVar22);
              uVar20 = (uint)uVar11;
            }
            goto joined_r0x01596070;
          }
          *__s = uVar4;
          if (((uVar17 & 0x40000) != 0 || (uVar17 & 0x18) == 0) && (uVar4 & 1) != 0) {
            uVar24 = uVar21 | uVar4;
            uVar15 = uVar21 | (ulong)uVar4 & 0xfffffffffffc0000;
            uVar12 = *(ulong *)(uVar15 + 8);
            if (((uint)uVar12 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar18,__s,uVar24);
              uVar12 = *(ulong *)(uVar15 | 8);
            }
            if (((uVar12 & 0x18) != 0) && ((*(byte *)(uVar18 & 0xfffffffffffc0000 | 8) & 0x18) == 0)
               ) {
              Heap_GenerationalBarrierSlow(uVar18,__s,uVar24);
            }
          }
          uVar11 = uVar11 + 1;
          lVar22 = lVar22 + 4;
        } while (uVar23 != uVar11);
        goto LAB_015960c8;
      }
    }
    else if (uVar13 != 0) {
      uVar11 = *puVar7;
      uVar3 = *(undefined4 *)(param_3 + 0xa0);
      uVar14 = (ulong)(int)uVar13;
      if (uVar13 < 8) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar14 & 0xfffffffffffffff8;
        puVar9 = (undefined8 *)(uVar11 + 0x17);
        uVar23 = uVar17;
        do {
          puVar9[-1] = CONCAT44(uVar3,uVar3);
          puVar9[-2] = CONCAT44(uVar3,uVar3);
          puVar9[1] = CONCAT44(uVar3,uVar3);
          *puVar9 = CONCAT44(uVar3,uVar3);
          uVar23 = uVar23 - 8;
          puVar9 = puVar9 + 4;
        } while (uVar23 != 0);
        if (uVar17 == uVar14) goto LAB_01595e04;
      }
      lVar22 = uVar14 - uVar17;
      puVar16 = (undefined4 *)(uVar11 + 7 + uVar17 * 4);
      do {
        lVar22 = lVar22 + -1;
        *puVar16 = uVar3;
        puVar16 = puVar16 + 1;
      } while (lVar22 != 0);
    }
  }
LAB_01595e04:
  uVar20 = 0;
joined_r0x01596070:
  if ((int)uVar20 < (int)uVar13) {
    lVar22 = (long)(int)uVar20;
    iVar25 = uVar20 << 2;
    do {
      local_68 = *puVar6;
      local_70[0] = (undefined4)lVar22;
      local_78[0] = (uint)*(ushort *)
                           ((local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1)) + 7);
      uVar5 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                        (local_78,&local_68,local_70);
      puVar8 = (ulong *)Factory::LookupSingleCharacterStringFromCode((Factory *)param_3,uVar5);
      uVar14 = *puVar7;
      uVar11 = *puVar8;
      *(int *)(uVar14 + (long)iVar25 + 7) = (int)uVar11;
      if ((uVar11 & 1) != 0) {
        uVar23 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
        lVar1 = uVar14 + (long)iVar25 + 7;
        if (((uint)uVar23 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,lVar1,uVar11);
          uVar23 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar23 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,lVar1,uVar11);
        }
      }
      lVar22 = lVar22 + 1;
      iVar25 = iVar25 + 4;
    } while (lVar22 < (int)uVar13);
  }
LAB_015960c8:
  puVar9 = (undefined8 *)
           Factory::NewJSArrayWithElements(param_3,puVar7,3,*(int *)(*puVar7 + 3) >> 1,0);
  uVar19 = *puVar9;
  if (param_3 != (Isolate *)0x0) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar10;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  return uVar19;
}

