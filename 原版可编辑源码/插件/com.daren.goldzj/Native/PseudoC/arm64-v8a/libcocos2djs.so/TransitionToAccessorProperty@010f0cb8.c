
/* v8::internal::Map::TransitionToAccessorProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::InternalIndex, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes) */

ulong * v8::internal::Map::TransitionToAccessorProperty
                  (Isolate *param_1,ulong *param_2,undefined8 *param_3,long param_4,ulong *param_5,
                  ulong *param_6,uint param_7)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  RuntimeCallStats *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  Isolate *local_f8;
  ulong *puStack_f0;
  ulong local_e8;
  Isolate *local_e0;
  undefined4 local_d8;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  local_100 = 0;
  uStack_118 = 0;
  local_120 = (RuntimeCallStats *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = 0x99;
    if ((*(uint *)(*param_2 + 0xb) & 0x100000) != 0) {
      uVar10 = 0xb1;
    }
    local_120 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_120,(ulong)&local_120 | 8,uVar10);
  }
  uVar11 = *param_2;
  if ((*(uint *)(uVar11 + 0xb) >> 0x18 & 1) != 0) {
    MapUpdater::MapUpdater((MapUpdater *)&local_f8,param_1,param_2);
    param_2 = (ulong *)MapUpdater::Update((MapUpdater *)&local_f8);
    uVar11 = *param_2;
  }
  puVar6 = param_2;
  if ((*(uint *)(uVar11 + 0xb) >> 0x15 & 1) != 0) goto joined_r0x010f1148;
  local_e8 = *param_2;
  local_e0 = param_1 + *(uint *)(local_e8 + 0x23);
  local_f8 = param_1;
  puStack_f0 = param_2;
  if ((((ulong)local_e0 & 1) == 0) || ((int)local_e0 == 3)) {
    local_d8 = 1;
  }
  else if (((ulong)local_e0 & 3) == 1) {
    uVar15 = (ulong)local_e0 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar15 + *(uint *)(local_e0 + -1)) == 0x98) {
      local_d8 = 4;
    }
    else if (*(short *)(uVar15 + *(uint *)(local_e0 + -1)) == 100) {
      local_d8 = 0;
    }
    else {
      local_d8 = 2;
    }
  }
  else {
    if (((ulong)local_e0 & 3) != 3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_d8 = 3;
  }
  uVar13 = *(uint *)(uVar11 + 0xb) >> 0x14 & 1;
  uVar11 = TransitionsAccessor::SearchTransition
                     ((TransitionsAccessor *)&local_f8,*param_3,1,param_7);
  if ((int)uVar11 == 0) {
    uVar11 = *param_2;
    uVar15 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0x17);
    uVar2 = *(uint *)(uVar11 + 0xb) >> 10 & 0x3ff;
    if (param_4 == -1) {
      if (0x3fb < uVar2) {
LAB_010f0fb8:
        uVar11 = (ulong)*(byte *)(uVar11 + 10);
        pcVar8 = "TooManyAccessors";
        uVar13 = 0;
        goto LAB_010f0f6c;
      }
      bVar3 = *(byte *)(uVar11 + 5);
      uVar13 = (uint)bVar3;
      if (2 < bVar3) {
        uVar13 = (uint)*(byte *)(uVar11 + 3) - (uint)bVar3;
      }
      if ((uVar13 == 0) && ((*(uint *)(uVar11 + 0xb) >> 0x14 & 1) == 0)) {
        iVar19 = (uint)*(byte *)(uVar11 + 3) - (uint)*(byte *)(uVar11 + 4);
        uVar17 = (ulong)(*(uint *)(uVar11 + 0xb) >> 10) & 0x3ff;
        if (iVar19 < 0x81) {
          iVar19 = 0x80;
        }
        if ((int)uVar17 == 0) {
          iVar18 = 0;
          iVar16 = 0;
        }
        else {
          iVar16 = 0;
          iVar18 = 0;
          puVar1 = (uint *)(uVar15 + 0x13);
          uVar13 = *puVar1;
          while( true ) {
            if ((uVar13 >> 2 & 1) == 0) {
              if ((uVar13 >> 3 & 1) == 0) {
                iVar16 = iVar16 + 1;
              }
              else {
                iVar18 = iVar18 + 1;
              }
            }
            uVar17 = uVar17 - 1;
            puVar1 = puVar1 + 3;
            if (uVar17 == 0) break;
            uVar13 = *puVar1;
          }
        }
        if ((0x3fc < iVar16 + iVar18) ||
           (iVar19 < (int)((iVar16 - (uint)*(byte *)(uVar11 + 3)) + (uint)*(byte *)(uVar11 + 4))))
        goto LAB_010f0fb8;
      }
      puVar6 = (ulong *)Factory::NewAccessorPair((Factory *)param_1);
LAB_010f11cc:
      uVar15 = *puVar6;
      uVar11 = *param_5;
      uVar17 = *param_6;
      iVar19 = (int)uVar11;
      iVar18 = (int)uVar17;
      if ((uVar11 & 1) == 0) {
        *(int *)(uVar15 + 3) = iVar19;
        if ((uVar17 & 1) == 0) goto LAB_010f12c4;
LAB_010f11ec:
        if (iVar18 != *(int *)((uVar17 & 0xffffffff00000000) + 0xb0)) {
          *(int *)(uVar15 + 7) = iVar18;
          uVar11 = *(ulong *)((uVar17 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar15,uVar15 + 7,uVar17);
            uVar11 = *(ulong *)(uVar17 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar15,uVar15 + 7,uVar17);
          }
        }
      }
      else {
        if (iVar19 != *(int *)((uVar11 & 0xffffffff00000000) + 0xb0)) {
          *(int *)(uVar15 + 3) = iVar19;
          uVar12 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar15,uVar15 + 3,uVar11);
            uVar12 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar15,uVar15 + 3,uVar11);
          }
        }
        if ((uVar17 & 1) != 0) goto LAB_010f11ec;
LAB_010f12c4:
        *(int *)(uVar15 + 7) = iVar18;
      }
      iVar19 = *(int *)(*(long *)(param_1 + 0x9508) + 8);
      Descriptor::AccessorConstant((Descriptor *)&local_f8,param_3,puVar6,param_7);
      puVar6 = (ulong *)CopyInsertDescriptor(param_1,param_2,&local_f8,iVar19 != 0);
      goto joined_r0x010f1148;
    }
    if ((int)(uVar2 - 1) == param_4) {
      uVar17 = param_4 * 0xc00000000 + 0x1000000000 >> 0x20;
      uVar2 = *(uint *)(uVar15 + (uVar17 | 3));
      if ((uVar2 >> 1 & 1) == 0) {
        uVar11 = (ulong)*(byte *)(uVar11 + 10);
        pcVar8 = "AccessorsOverwritingNonAccessors";
      }
      else {
        if ((uVar2 >> 4 & 7) == param_7) {
          uVar2 = *(uint *)(uVar17 + uVar15 + 7);
          uVar11 = uVar11 & 0xffffffff00000000 | (ulong)uVar2;
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar7 = *(ulong **)(param_1 + 0x95a0);
            if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
              puVar7 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
            *puVar7 = uVar11;
            if ((uVar2 & 1) != 0) goto LAB_010f1104;
          }
          else {
            puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
            uVar11 = *puVar7;
            if ((uVar11 & 1) != 0) {
LAB_010f1104:
              if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) ==
                  0x52) {
                uVar2 = *(uint *)(uVar11 + 3);
                uVar15 = *param_6;
                uVar14 = (uint)*param_5;
                uVar9 = (uint)uVar15;
                if ((uVar2 == uVar14) && (*(uint *)(uVar11 + 7) == uVar9)) goto joined_r0x010f1148;
                if ((((*param_5 & 1) == 0) || (uVar14 != *(uint *)(param_1 + 0xb0))) &&
                   (((uVar2 & 1) == 0 || (uVar2 != *(uint *)(param_1 + 0xb0))))) {
                  bVar5 = uVar2 != uVar14;
                  if ((uVar15 & 1) == 0) goto LAB_010f131c;
LAB_010f1310:
                  if (uVar9 != *(uint *)(param_1 + 0xb0)) goto LAB_010f131c;
LAB_010f1330:
                  if (bVar5) {
LAB_010f1350:
                    uVar11 = *param_2;
                    pcVar8 = "AccessorsOverwritingAccessors";
                    goto LAB_010f0f58;
                  }
                }
                else {
                  bVar5 = false;
                  if ((uVar15 & 1) != 0) goto LAB_010f1310;
LAB_010f131c:
                  uVar2 = *(uint *)(uVar11 + 7);
                  if (((uVar2 & 1) != 0) && (uVar2 == *(uint *)(param_1 + 0xb0))) goto LAB_010f1330;
                  if (!(bool)(uVar2 == uVar9 & (bVar5 ^ 1U))) goto LAB_010f1350;
                }
                puVar6 = (ulong *)AccessorPair::Copy(param_1,puVar7);
                goto LAB_010f11cc;
              }
            }
          }
          uVar11 = *param_2;
          pcVar8 = "AccessorsOverwritingNonPair";
          goto LAB_010f0f58;
        }
        uVar11 = (ulong)*(byte *)(uVar11 + 10);
        pcVar8 = "AccessorsWithAttributes";
      }
    }
    else {
      uVar11 = (ulong)*(byte *)(uVar11 + 10);
      pcVar8 = "AccessorsOverwritingNonLast";
    }
  }
  else {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(param_1 + 0x95a0);
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar11;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
      uVar11 = *puVar6;
    }
    uVar2 = *(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0x17)) +
                      ((long)(int)((*(uint *)(uVar11 + 0xb) >> 10 & 0x3ff) - 1) * 0xc00000000 +
                       0x1000000000 >> 0x20) + 7);
    uVar11 = uVar11 & 0xffffffff00000000 | (ulong)uVar2;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(param_1 + 0x95a0);
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar11;
      if ((uVar2 & 1) != 0) goto LAB_010f0f00;
LAB_010f0f4c:
      uVar11 = *param_2;
      pcVar8 = "TransitionToAccessorFromNonPair";
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
      uVar11 = *puVar7;
      if ((uVar11 & 1) == 0) goto LAB_010f0f4c;
LAB_010f0f00:
      if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x52)
      goto LAB_010f0f4c;
      if ((*(int *)(uVar11 + 3) == (int)*param_5) && (*(int *)(uVar11 + 7) == (int)*param_6))
      goto joined_r0x010f1148;
      uVar11 = *param_2;
      pcVar8 = "TransitionToDifferentAccessor";
    }
LAB_010f0f58:
    uVar11 = (ulong)*(byte *)(uVar11 + 10);
  }
LAB_010f0f6c:
  puVar6 = (ulong *)Normalize(param_1,param_2,uVar11 >> 3,uVar13,pcVar8);
joined_r0x010f1148:
  if (local_120 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_120,(RuntimeCallTimer *)((ulong)&local_120 | 8));
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}

