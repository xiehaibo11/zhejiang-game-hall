
undefined8 FUN_01565830(undefined8 param_1,undefined8 param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x156);
  }
  if (DAT_01d46f70 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46f70 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46f70;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d46f70 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_ReportDetachedWindowAccess",0,0,0,0,0,
                       0,0,&local_60,0);
    plVar5 = local_58;
    local_58 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_60;
    local_60 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_ReportDetachedWindowAccess";
    local_a8 = pbVar3;
    local_98 = uVar6;
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
  plVar5 = (long *)(uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13))
  ;
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = puVar1;
    if (puVar2 == puVar1) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
    *puVar7 = (ulong)plVar5;
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),(ulong)plVar5);
    plVar5 = (long *)*puVar7;
  }
  local_60 = plVar5;
  iVar4 = v8::internal::NativeContext::GetDetachedWindowReason((NativeContext *)&local_60);
  if (iVar4 != 0) {
    if (iVar4 == 3) {
      uVar6 = 0x59;
      uVar10 = 0x5a;
      uVar9 = 0x5b;
    }
    else if (iVar4 == 2) {
      uVar6 = 0x56;
      uVar10 = 0x57;
      uVar9 = 0x58;
    }
    else {
      uVar6 = 0x53;
      uVar10 = 0x54;
      uVar9 = 0x55;
    }
    v8::internal::Isolate::CountUsage(param_3,uVar6);
    local_60 = (long *)*puVar7;
    iVar4 = v8::internal::NativeContext::SecondsSinceDetachedWindow((NativeContext *)&local_60);
    if ((9 < iVar4) && (v8::internal::Isolate::CountUsage(param_3,uVar10), 0x3b < iVar4)) {
      v8::internal::Isolate::CountUsage(param_3,uVar9);
    }
  }
  uVar6 = *(undefined8 *)(param_3 + 0xa0);
  *(ulong **)(param_3 + 0x95a0) = puVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
    *(ulong **)(param_3 + 0x95a8) = puVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar6;
}

