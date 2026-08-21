
/* v8::internal::Map::TransitionToDataProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes,
   v8::internal::PropertyConstness, v8::internal::StoreOrigin) */

ulong * v8::internal::Map::TransitionToDataProperty
                  (Isolate *param_1,ulong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
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
    uVar11 = 0x9a;
    if ((*(uint *)(*param_2 + 0xb) & 0x100000) != 0) {
      uVar11 = 0xb2;
    }
    local_120 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_120,(ulong)&local_120 | 8,uVar11);
  }
  if ((*(uint *)(*param_2 + 0xb) >> 0x18 & 1) != 0) {
    MapUpdater::MapUpdater((MapUpdater *)&local_f8,param_1,param_2);
    param_2 = (ulong *)MapUpdater::Update((MapUpdater *)&local_f8);
  }
  local_e8 = *param_2;
  local_e0 = param_1 + *(uint *)(local_e8 + 0x23);
  local_f8 = param_1;
  puStack_f0 = param_2;
  if ((((ulong)local_e0 & 1) == 0) || ((int)local_e0 == 3)) {
    local_d8 = 1;
  }
  else if (((ulong)local_e0 & 3) == 1) {
    uVar5 = (ulong)local_e0 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar5 + *(uint *)(local_e0 + -1)) == 0x98) {
      local_d8 = 4;
    }
    else if (*(short *)(uVar5 + *(uint *)(local_e0 + -1)) == 100) {
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
  uVar5 = TransitionsAccessor::SearchTransition((TransitionsAccessor *)&local_f8,*param_3,0,param_5)
  ;
  if ((int)uVar5 == 0) {
    local_f8 = (Isolate *)*param_2;
    iVar2 = *(int *)(*(long *)(param_1 + 0x9508) + 8);
    uVar5 = TooManyFastProperties((Map *)&local_f8,param_7);
    if ((uVar5 & 1) == 0) {
      local_f8 = (Isolate *)*param_4;
      if (FLAG_track_fields == '\0') {
        uVar14 = 4;
      }
      else if (((ulong)local_f8 & 1) == 0) {
        uVar14 = 1;
      }
      else if ((FLAG_track_double_fields == '\0') ||
              (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(local_f8 + -1)) != 0x42)) {
        if ((FLAG_track_computed_fields == '\0') || ((int)local_f8 != *(int *)(param_1 + 0x98))) {
          uVar14 = 3;
          if (FLAG_track_heap_object_fields == '\0') {
            uVar14 = 4;
          }
        }
        else {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = 2;
      }
      uVar7 = Object::OptimalType((Object *)&local_f8,param_1,uVar14);
      puVar6 = (ulong *)CopyWithField(param_1,param_2,param_3,uVar7,param_5,param_6,uVar14,
                                      iVar2 != 0);
      if (puVar6 != (ulong *)0x0) goto LAB_010f09c0;
    }
    uVar3 = *(uint *)(*param_2 + 0x13);
    uVar5 = *param_2 & 0xffffffff00000000;
    uVar13 = uVar5 | uVar3;
    if ((uVar3 & 1) != 0) {
      do {
        if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar13 + 0x13);
        uVar13 = uVar5 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(param_1 + 0x95a0);
      if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar13;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
    }
    uVar5 = *param_2;
    if ((((FLAG_feedback_normalization != '\0') && ((*(byte *)(uVar5 + 10) & 1) != 0)) &&
        (uVar13 = *puVar8, (uVar13 & 1) != 0)) &&
       ((uVar12 = uVar13 & 0xffffffff00000000,
        *(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x439 &&
        ((*(uint *)((uVar12 | *(uint *)(uVar13 + 0xb)) + 0x1b) >> 5 & 1) == 0)))) {
      uVar12 = uVar12 | *(uint *)(uVar13 + 0x1b);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)(param_1 + 0x95a0);
        if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar9 + 1;
        *puVar9 = uVar12;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
        uVar12 = *puVar9;
      }
      puVar6 = (ulong *)Normalize(param_1,puVar9,*(byte *)(uVar12 + 10) >> 3,0,
                                  "TooManyFastProperties");
      local_f8 = (Isolate *)*puVar9;
      DeprecateTransitionTree((Map *)&local_f8,param_1);
      uVar5 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0xf);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)(param_1 + 0x95a0);
        if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar10 + 1;
        *puVar10 = uVar5;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      }
      JSFunction::SetInitialMap(puVar8,puVar6,puVar10);
      local_f8 = (Isolate *)(*puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 + 0x1b));
      DependentCode::DeoptimizeDependentCodeGroup(&local_f8,param_1,4);
      local_f8 = (Isolate *)*puVar6;
      uVar5 = EquivalentToForNormalization((Map *)&local_f8,*param_2,(byte)local_f8[10] >> 3,0);
      if ((uVar5 & 1) != 0) goto LAB_010f09c0;
      uVar5 = *param_2;
    }
    puVar6 = (ulong *)Normalize(param_1,param_2,*(byte *)(uVar5 + 10) >> 3,0,"TooManyFastProperties"
                               );
  }
  else {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(param_1 + 0x95a0);
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar5;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      uVar5 = *puVar6;
    }
    puVar6 = (ulong *)FUN_010f02e0(param_1,puVar6,
                                   (long)(int)((*(uint *)(uVar5 + 0xb) >> 10 & 0x3ff) - 1),param_6,
                                   param_4);
  }
LAB_010f09c0:
  if (local_120 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_120,(RuntimeCallTimer *)((ulong)&local_120 | 8));
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}

