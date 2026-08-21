
undefined8 FUN_0157aa2c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte **local_f0;
  byte *local_e8;
  char *local_e0;
  undefined8 local_d8;
  RuntimeCallStats *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  char local_34 [4];
  
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = (RuntimeCallStats *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_d0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x1db);
  }
  if (DAT_01d47220 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47220 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d47220;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d47220 & 5) != 0) {
    local_a8 = (long *)0x0;
    local_a0 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_GetPropertyWithReceiver",0,0,0,0,0,0,0
                       ,&local_a8,0);
    plVar3 = local_a0;
    local_a0 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_a8;
    local_a8 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_f0 = &local_e8;
    local_e0 = "V8.Runtime_Runtime_GetPropertyWithReceiver";
    local_e8 = pbVar2;
    local_d8 = uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (0xa8 < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
    local_34[0] = '\0';
    v8::internal::LookupIterator::PropertyOrElement
              ((LookupIterator *)&local_a8,param_3,param_2 + -2,param_2 + -1,local_34,param_2,3);
    if ((local_34[0] == '\0') ||
       (pIVar5 = (Isolate *)v8::internal::Object::GetProperty((LookupIterator *)&local_a8,false),
       pIVar5 == (Isolate *)0x0)) {
      pIVar5 = param_3 + 0x180;
    }
    uVar7 = *(undefined8 *)pIVar5;
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
      plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_e8,local_e0,local_d8);
    }
    if (local_d0 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

