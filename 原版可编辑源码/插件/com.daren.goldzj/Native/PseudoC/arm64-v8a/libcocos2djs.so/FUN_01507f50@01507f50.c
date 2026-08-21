
undefined8 FUN_01507f50(undefined8 param_1,undefined8 *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  byte **local_100;
  byte *local_f8;
  char *local_f0;
  undefined8 local_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined **local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x137);
  }
  if (DAT_01d46c58 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c58 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46c58;
  local_100 = (byte **)0x0;
  if ((*DAT_01d46c58 & 5) != 0) {
    local_b0 = (undefined **)0x0;
    local_a8 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.Runtime_Runtime_StoreCallbackProperty",0,0,0,0,0,0,0,
                       &local_b0,0);
    plVar4 = local_a8;
    local_a8 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    ppuVar3 = local_b0;
    local_b0 = (undefined **)0x0;
    if (ppuVar3 != (undefined **)0x0) {
      (**(code **)(*ppuVar3 + 8))();
    }
    local_100 = &local_f8;
    local_f0 = "V8.Runtime_Runtime_StoreCallbackProperty";
    local_f8 = pbVar2;
    local_e8 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  puVar6 = param_2 + -4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (v8::internal::TracingFlags::runtime_stats == 0) {
    v8::internal::PropertyCallbackArguments::PropertyCallbackArguments
              ((PropertyCallbackArguments *)&local_b0,param_3,
               param_2[-2] & 0xffffffff00000000 | (ulong)*(uint *)(param_2[-2] + 0x1b),*param_2,
               param_2[-1],0);
    v8::internal::PropertyCallbackArguments::CallAccessorSetter
              ((PropertyCallbackArguments *)&local_b0,param_2 + -2,param_2 + -3,puVar6);
    if (*(int *)(param_3 + 0x2c20) == *(int *)(param_3 + 0xa8)) {
      uVar7 = *puVar6;
    }
    else {
      uVar7 = v8::internal::Isolate::PromoteScheduledException(param_3);
    }
    local_b0 = &PTR__Relocatable_01cacc40;
    local_78 = 0x1baddead0baddeaf;
    *(undefined8 *)((long)local_a8 + 0xb790) = uStack_a0;
  }
  else {
    puVar6 = (undefined8 *)
             v8::internal::Runtime::SetObjectProperty(param_3,param_2,param_2 + -3,puVar6,0,0);
    if (puVar6 == (undefined8 *)0x0) {
      uVar7 = *(undefined8 *)(param_3 + 0x180);
    }
    else {
      uVar7 = *puVar6;
    }
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_100 != (byte **)0x0) && (*local_f8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_f8,local_f0,local_e8);
  }
  if (local_e0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  return uVar7;
}

