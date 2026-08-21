
undefined8 FUN_0157adc4(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  long lVar1;
  byte *pbVar2;
  ushort uVar3;
  long *plVar4;
  undefined8 uVar5;
  Factory *pFVar6;
  ulong uVar7;
  undefined8 uVar8;
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
    v8::internal::RuntimeCallStats::Enter(local_d0,(ulong)&local_d0 | 8,0x1dc);
  }
  if (DAT_01d47228 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47228 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d47228;
  local_f0 = (byte **)0x0;
  if ((*DAT_01d47228 & 5) != 0) {
    local_a8 = (long *)0x0;
    local_a0 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.Runtime_Runtime_SetPropertyWithReceiver",0,0,0,0,0,0,0
                       ,&local_a8,0);
    plVar4 = local_a0;
    local_a0 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_a8;
    local_a8 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_f0 = &local_e8;
    local_e0 = "V8.Runtime_Runtime_SetPropertyWithReceiver";
    local_e8 = pbVar2;
    local_d8 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
  }
  local_34[0] = '\0';
  v8::internal::LookupIterator::PropertyOrElement
            ((LookupIterator *)&local_a8,param_3,param_2 + -3,param_2 + -1,local_34,param_2,3);
  if (local_34[0] != '\0') {
    uVar3 = v8::internal::Object::SetSuperProperty(&local_a8,param_2 + -2,0,0);
    if ((uVar3 & 0xff) != 0) {
      pFVar6 = (Factory *)v8::internal::Factory::ToBoolean(param_3,0xff < uVar3);
      goto LAB_0157af6c;
    }
  }
  pFVar6 = param_3 + 0x180;
LAB_0157af6c:
  uVar8 = *(undefined8 *)pFVar6;
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  if ((local_f0 != (byte **)0x0) && (*local_e8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_e8,local_e0,local_d8);
  }
  if (local_d0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
  }
  return uVar8;
}

