
undefined8 FUN_011c4a64(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte *pbVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  void *pvVar17;
  long *plVar18;
  long lVar19;
  void *pvVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  void *pvVar27;
  ulong uVar28;
  ulong uVar29;
  void *pvVar30;
  void *pvVar31;
  int iVar32;
  long lVar33;
  void *pvVar34;
  long *plVar35;
  void *pvVar36;
  ulong uVar37;
  byte **local_e0;
  byte *local_d8;
  char *local_d0;
  undefined8 local_c8;
  RuntimeCallStats *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_90;
  long *local_88;
  long *plStack_80;
  char *local_78;
  undefined8 uStack_70;
  
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = (RuntimeCallStats *)0x0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_c0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_c0,(ulong)&local_c0 | 8,0xff);
  }
  if (DAT_01d3f9d8 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f9d8 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar6 = DAT_01d3f9d8;
  local_e0 = (byte **)0x0;
  if ((*DAT_01d3f9d8 & 5) != 0) {
    local_90 = (long *)0x0;
    local_88 = (long *)0x0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar6,"V8.Runtime_Runtime_DebugCollectCoverage",0,0,0,0,0,0,0,
                       &local_90,0);
    plVar7 = local_88;
    local_88 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_90;
    local_90 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_e0 = &local_d8;
    local_d0 = "V8.Runtime_Runtime_DebugCollectCoverage";
    local_d8 = pbVar6;
    local_c8 = uVar8;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar24 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (*(int *)(param_3 + 0xb810) == 0) {
    v8::internal::Coverage::CollectBestEffort(param_3);
  }
  else {
    v8::internal::Coverage::CollectPrecise(param_3);
  }
  plVar7 = local_90;
  lVar2 = *local_90;
  lVar4 = local_90[1];
  uVar28 = (ulong)(lVar4 - lVar2) >> 5;
  puVar9 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_3,uVar28 & 0xffffffff,0);
  if (0 < (int)uVar28) {
    uVar28 = 0;
    do {
      lVar3 = *plVar7;
      if ((ulong)(plVar7[1] - lVar3 >> 5) <= uVar28) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar21 = *(undefined8 *)(param_3 + 0x95a0);
      lVar19 = lVar3 + uVar28 * 0x20;
      lVar22 = *(long *)(param_3 + 0x95a8);
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
      local_88 = (long *)0x0;
      plStack_80 = (long *)0x0;
      local_90 = (long *)0x0;
      plVar26 = (long *)(lVar19 + 8);
      lVar33 = *plVar26;
      uVar25 = (*(long *)(lVar19 + 0x10) - lVar33 >> 3) * 0xb6db6db7;
      if (0 < (int)uVar25) {
        uVar29 = 0;
        while( true ) {
          plVar18 = (long *)(lVar33 + uVar29 * 0x38);
          if (local_88 < plStack_80) {
            uVar5 = *(uint *)(plVar18 + 1);
            *local_88 = *plVar18;
            *(uint *)(local_88 + 1) = uVar5;
            local_88 = (long *)((long)local_88 + 0xc);
          }
          else {
            std::__ndk1::
            vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
            ::__emplace_back_slow_path<int_const&,int_const&,unsigned_int_const&>
                      ((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                        *)&local_90,(int *)plVar18,(int *)(lVar33 + uVar29 * 0x38 + 4),
                       (uint *)(plVar18 + 1));
          }
          lVar33 = lVar33 + uVar29 * 0x38;
          plVar18 = (long *)(lVar33 + 0x18);
          lVar19 = *plVar18;
          plVar35 = (long *)(lVar33 + 0x20);
          if (*plVar35 != lVar19) {
            lVar33 = 0;
            uVar37 = 0;
            do {
              piVar1 = (int *)(lVar19 + lVar33);
              if (local_88 < plStack_80) {
                uVar5 = piVar1[2];
                *local_88 = *(long *)(lVar19 + lVar33);
                *(uint *)(local_88 + 1) = uVar5;
                local_88 = (long *)((long)local_88 + 0xc);
              }
              else {
                std::__ndk1::
                vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                ::__emplace_back_slow_path<int_const&,int_const&,unsigned_int_const&>
                          ((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                            *)&local_90,piVar1,piVar1 + 1,(uint *)(piVar1 + 2));
              }
              lVar19 = *plVar18;
              uVar37 = uVar37 + 1;
              lVar33 = lVar33 + 0xc;
            } while (uVar37 < (ulong)((*plVar35 - lVar19 >> 2) * -0x5555555555555555));
          }
          uVar29 = uVar29 + 1;
          if (uVar29 == (uVar25 & 0xffffffff)) break;
          lVar33 = *plVar26;
        }
      }
      uVar25 = ((long)local_88 - (long)local_90 >> 2) * -0x5555555555555555;
      puVar10 = (ulong *)v8::internal::Factory::NewFixedArray
                                   ((Factory *)param_3,uVar25 & 0xffffffff,0);
      if (0 < (int)uVar25) {
        iVar32 = 0;
        lVar19 = 0;
        do {
          plVar26 = local_90;
          uStack_70 = __strlen_chk("start",6);
          local_78 = "start";
          uVar11 = v8::internal::Factory::InternalizeUtf8String
                             ((Factory *)param_3,(Vector *)&local_78);
          uStack_70 = __strlen_chk("end",4);
          local_78 = "end";
          uVar12 = v8::internal::Factory::InternalizeUtf8String
                             ((Factory *)param_3,(Vector *)&local_78);
          uStack_70 = __strlen_chk("count",6);
          local_78 = "count";
          uVar13 = v8::internal::Factory::InternalizeUtf8String
                             ((Factory *)param_3,(Vector *)&local_78);
          puVar14 = (ulong *)v8::internal::Factory::NewJSObjectWithNullProto((Factory *)param_3);
          piVar1 = (int *)((long)plVar26 + lVar19);
          uVar15 = v8::internal::Factory::NewNumberFromInt((Factory *)param_3,*piVar1);
          v8::internal::JSObject::AddProperty(param_3,puVar14,uVar11,uVar15,0);
          uVar11 = v8::internal::Factory::NewNumberFromInt((Factory *)param_3,piVar1[1]);
          v8::internal::JSObject::AddProperty(param_3,puVar14,uVar12,uVar11,0);
          uVar11 = v8::internal::Factory::NewNumberFromUint((Factory *)param_3,piVar1[2]);
          v8::internal::JSObject::AddProperty(param_3,puVar14,uVar13,uVar11,0);
          uVar37 = *puVar10;
          uVar29 = *puVar14;
          *(int *)(uVar37 + (long)iVar32 + 7) = (int)uVar29;
          if ((uVar29 & 1) != 0) {
            uVar23 = *(ulong *)((uVar29 & 0xfffffffffffc0000) + 8);
            lVar33 = uVar37 + (long)iVar32 + 7;
            if (((uint)uVar23 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar37,lVar33,uVar29);
              uVar23 = *(ulong *)(uVar29 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar23 & 0x18) != 0) &&
               ((*(byte *)((uVar37 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar37,lVar33,uVar29);
            }
          }
          lVar19 = lVar19 + 0xc;
          iVar32 = iVar32 + 4;
        } while (((uVar25 & 0xffffffff) + (uVar25 & 0xffffffff) * 2) * 4 != lVar19);
      }
      puVar10 = (ulong *)v8::internal::Factory::NewJSArrayWithElements
                                   (param_3,puVar10,2,*(int *)(*puVar10 + 3) >> 1,0);
      uVar25 = **(ulong **)(lVar3 + uVar28 * 0x20);
      uVar25 = uVar25 & 0xffffffff00000000 | (ulong)*(uint *)(uVar25 + 3);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar14 = *(ulong **)(param_3 + 0x95a0);
        if (puVar14 == *(ulong **)(param_3 + 0x95a8)) {
          puVar14 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)(param_3 + 0x95a0) = puVar14 + 1;
        *puVar14 = uVar25;
      }
      else {
        puVar14 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar25);
      }
      v8::internal::JSObject::AddProperty(param_3,puVar10,param_3 + 0x988,puVar14,0);
      uVar25 = *puVar10;
      uVar29 = *puVar9;
      lVar3 = uVar29 + (long)((int)uVar28 << 2);
      *(int *)(lVar3 + 7) = (int)uVar25;
      if ((uVar25 & 1) != 0) {
        uVar37 = *(ulong *)((uVar25 & 0xfffffffffffc0000) + 8);
        lVar3 = lVar3 + 7;
        if (((uint)uVar37 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar29,lVar3,uVar25);
          uVar37 = *(ulong *)(uVar25 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar37 & 0x18) != 0) && ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar29,lVar3,uVar25);
        }
      }
      if (local_90 != (long *)0x0) {
        local_88 = local_90;
        operator_delete(local_90);
      }
      *(undefined8 *)(param_3 + 0x95a0) = uVar21;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar22) {
        *(long *)(param_3 + 0x95a8) = lVar22;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 != ((ulong)(lVar4 - lVar2) >> 5 & 0xffffffff));
  }
  puVar16 = (undefined8 *)
            v8::internal::Factory::NewJSArrayWithElements
                      (param_3,puVar9,2,*(int *)(*puVar9 + 3) >> 1,0);
  uVar21 = *puVar16;
  if (plVar7 != (long *)0x0) {
    pvVar27 = (void *)*plVar7;
    if (pvVar27 == (void *)0x0) {
      operator_delete(plVar7);
    }
    else {
      pvVar30 = (void *)plVar7[1];
      pvVar31 = pvVar27;
      if (pvVar30 != pvVar27) {
        do {
          pvVar34 = *(void **)((long)pvVar30 + -0x18);
          pvVar31 = (void *)((long)pvVar30 + -0x20);
          if (pvVar34 != (void *)0x0) {
            pvVar17 = pvVar34;
            pvVar20 = *(void **)((long)pvVar30 + -0x10);
            if (*(void **)((long)pvVar30 + -0x10) != pvVar34) {
              do {
                pvVar17 = *(void **)((long)pvVar20 + -0x20);
                pvVar36 = (void *)((long)pvVar20 + -0x38);
                if (pvVar17 != (void *)0x0) {
                  *(void **)((long)pvVar20 + -0x18) = pvVar17;
                  operator_delete(pvVar17);
                }
                pvVar20 = pvVar36;
              } while (pvVar34 != pvVar36);
              pvVar17 = *(void **)((long)pvVar30 + -0x18);
            }
            *(void **)((long)pvVar30 + -0x10) = pvVar34;
            operator_delete(pvVar17);
          }
          pvVar30 = pvVar31;
        } while (pvVar31 != pvVar27);
        pvVar31 = (void *)*plVar7;
      }
      plVar7[1] = (long)pvVar27;
      operator_delete(pvVar31);
      operator_delete(plVar7);
      if (param_3 == (Isolate *)0x0) goto LAB_011c5190;
    }
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar8;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar24) {
    *(long *)(param_3 + 0x95a8) = lVar24;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
LAB_011c5190:
  if ((local_e0 != (byte **)0x0) && (*local_d8 != 0)) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_d8,local_d0,local_c8);
  }
  if (local_c0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_c0,(RuntimeCallTimer *)((ulong)&local_c0 | 8));
  }
  return uVar21;
}

