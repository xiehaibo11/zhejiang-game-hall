
undefined8 FUN_011d36e8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x1ba);
  }
  if (DAT_01d3fba0 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fba0 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d3fba0;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3fba0 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_ToLength",0,0,0,0,0,0,0,&local_50,0);
    plVar5 = local_48;
    local_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_50;
    local_50 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_ToLength";
    local_98 = pbVar4;
    local_88 = uVar6;
  }
  pIVar2 = *(Isolate **)(param_3 + 0x95a0);
  pIVar3 = *(Isolate **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if ((uVar8 & 1) == 0) {
    uVar8 = (ulong)(((uint)(uVar8 >> 1) & 0x7fffffff & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) << 1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar7 = pIVar2;
      if (pIVar3 == pIVar2) {
        pIVar7 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
      }
      *(Isolate **)(param_3 + 0x95a0) = pIVar7 + 8;
      *(ulong *)pIVar7 = uVar8;
    }
    else {
      pIVar7 = (Isolate *)
               v8::internal::CanonicalHandleScope::Lookup
                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
    }
  }
  else {
    pIVar7 = (Isolate *)v8::internal::Object::ConvertToLength(param_3,param_2);
  }
  pIVar1 = param_3 + 0x180;
  if (pIVar7 != (Isolate *)0x0) {
    pIVar1 = pIVar7;
  }
  uVar6 = *(undefined8 *)pIVar1;
  *(Isolate **)(param_3 + 0x95a0) = pIVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(Isolate **)(param_3 + 0x95a8) != pIVar3) {
    *(Isolate **)(param_3 + 0x95a8) = pIVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar6;
}

