
undefined8 FUN_014c5db8(int param_1,long param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  Isolate *pIVar8;
  Isolate *pIVar9;
  ulong uVar10;
  Isolate *pIVar11;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long *local_58;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x2f7);
  }
  if (DAT_01d46508 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46508 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46508;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d46508 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Builtin_MakeSyntaxError",0,0,0,0,0,0,0,&local_60,0);
    plVar4 = local_58;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Builtin_MakeSyntaxError";
    local_a8 = pbVar3;
    local_98 = uVar5;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) -
                                                                     1)) + 0x13)) + 0x3ab);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = puVar1;
    if (puVar2 == puVar1) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar10;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
  }
  param_1 = param_1 + -4;
  if (param_1 < 2) {
    pIVar11 = param_3 + 0xa0;
LAB_014c5f7c:
    pIVar7 = param_3 + 0xa0;
  }
  else {
    pIVar11 = (Isolate *)(param_2 + -8);
    if (param_1 == 2) goto LAB_014c5f7c;
    pIVar7 = (Isolate *)(param_2 + -0x10);
    if (3 < param_1) {
      pIVar8 = (Isolate *)(param_2 + -0x18);
      if (param_1 == 4) {
        pIVar9 = param_3 + 0xa0;
      }
      else {
        pIVar9 = (Isolate *)(param_2 + -0x20);
      }
      goto LAB_014c5f88;
    }
  }
  pIVar8 = param_3 + 0xa0;
  pIVar9 = param_3 + 0xa0;
LAB_014c5f88:
  pIVar7 = (Isolate *)
           v8::internal::ErrorUtils::MakeGenericError
                     (param_3,puVar6,*(int *)pIVar11 >> 1,pIVar7,pIVar8,pIVar9,2);
  pIVar11 = param_3 + 0x180;
  if (pIVar7 != (Isolate *)0x0) {
    pIVar11 = pIVar7;
  }
  uVar5 = *(undefined8 *)pIVar11;
  *(ulong **)(param_3 + 0x95a0) = puVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
    *(ulong **)(param_3 + 0x95a8) = puVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar5;
}

