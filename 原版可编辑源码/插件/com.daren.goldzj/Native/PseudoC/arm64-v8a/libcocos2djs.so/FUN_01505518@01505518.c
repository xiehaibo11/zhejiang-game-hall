
ulong FUN_01505518(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
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
  long *local_68;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x13a);
  }
  if (DAT_01d46c20 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c20 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46c20;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d46c20 & 5) != 0) {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_StoreGlobalIC_Slow",0,0,0,0,0,0,0,
                       &local_70,0);
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
    local_b0 = "V8.Runtime_Runtime_StoreGlobalIC_Slow";
    local_b8 = pbVar4;
    local_a8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar9 = param_2 + -4;
  uVar11 = *puVar9;
  if (((uVar11 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[4].IsString()");
  }
  local_70 = *(long **)(param_3 + 0x2bc8);
  uVar11 = v8::internal::Context::global_object((Context *)&local_70);
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
  uVar11 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(param_3 + 0x95a0);
    if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar11;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
    uVar11 = *puVar8;
  }
  uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0x273);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(param_3 + 0x95a0);
    if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar11;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
    uVar11 = *puVar8;
  }
  uVar11 = v8::internal::ScriptContextTable::Lookup(param_3,uVar11,*puVar9,&local_70);
  if ((uVar11 & 1) == 0) {
    puVar9 = (ulong *)v8::internal::Runtime::SetObjectProperty(param_3,puVar7,puVar9,param_2,0,0);
    if (puVar9 == (ulong *)0x0) {
      uVar11 = *(ulong *)(param_3 + 0x180);
    }
    else {
      uVar11 = *puVar9;
    }
    goto LAB_0150592c;
  }
  uVar11 = *puVar8 & 0xffffffff00000000 |
           (ulong)*(uint *)(*puVar8 + (long)((int)local_70 * 4 + 4) + 7);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(param_3 + 0x95a0);
    if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar11;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
  }
  if ((char)local_68 == '\x01') {
    puVar10 = (undefined8 *)
              v8::internal::Factory::NewTypeError((Factory *)param_3,0x24,puVar7,puVar9,0);
LAB_01505818:
    uVar11 = v8::internal::Isolate::Throw(param_3,*puVar10,0);
  }
  else {
    uVar3 = *(uint *)(*puVar8 + (long)(local_70._4_4_ << 2) + 7);
    uVar11 = *puVar8 & 0xffffffff00000000 | (ulong)uVar3;
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(param_3 + 0x95a0);
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar11;
      if ((uVar3 & 1) != 0) goto LAB_01505894;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
      uVar11 = *puVar7;
      if ((uVar11 & 1) != 0) {
LAB_01505894:
        if ((int)uVar11 == *(int *)(param_3 + 0xa8)) {
          puVar10 = (undefined8 *)
                    v8::internal::Factory::NewReferenceError((Factory *)param_3,0xb4,puVar9,0,0);
          goto LAB_01505818;
        }
      }
    }
    uVar13 = *puVar8;
    uVar11 = *param_2;
    lVar1 = uVar13 + (long)(local_70._4_4_ << 2);
    *(int *)(lVar1 + 7) = (int)uVar11;
    if ((uVar11 & 1) != 0) {
      uVar12 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar13,lVar1,uVar11);
        uVar12 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar13,lVar1,uVar11);
      }
    }
    uVar11 = *param_2;
  }
LAB_0150592c:
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_b8,local_b0,local_a8);
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar11;
}

