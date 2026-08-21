
undefined8 FUN_011cb6cc(undefined8 param_1,Isolate *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  Isolate *pIVar7;
  undefined8 uVar8;
  byte **local_d0;
  byte *local_c8;
  char *local_c0;
  undefined8 local_b8;
  RuntimeCallStats *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  Isolate *local_80;
  long *local_78;
  Isolate *local_70;
  undefined4 local_68;
  char local_64;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_b0,(ulong)&local_b0 | 8,0x1a3);
  }
  if (DAT_01d3faa0 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3faa0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d3faa0;
  local_d0 = (byte **)0x0;
  if ((*DAT_01d3faa0 & 5) != 0) {
    local_80 = (Isolate *)0x0;
    local_78 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_JSReceiverGetPrototypeOf",0,0,0,0,0,0,
                       0,&local_80,0);
    plVar4 = local_78;
    local_78 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pIVar7 = local_80;
    local_80 = (Isolate *)0x0;
    if (pIVar7 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar7 + 8))();
    }
    local_d0 = &local_c8;
    local_c0 = "V8.Runtime_Runtime_JSReceiverGetPrototypeOf";
    local_c8 = pbVar3;
    local_b8 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *(ulong *)param_2;
  if (((uVar6 & 1) == 0) ||
     (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
  }
  local_78 = (long *)0x0;
  local_64 = '\0';
  local_68 = 1;
  local_60 = 0;
  local_80 = param_3;
  local_70 = param_2;
  do {
    uVar6 = v8::internal::PrototypeIterator::HasAccess((PrototypeIterator *)&local_80);
    if ((uVar6 & 1) == 0) {
      pIVar7 = local_80 + 0xb0;
      goto LAB_011cb86c;
    }
    uVar6 = v8::internal::PrototypeIterator::AdvanceFollowingProxiesIgnoringAccessChecks
                      ((PrototypeIterator *)&local_80);
    if ((uVar6 & 1) == 0) goto LAB_011cb85c;
  } while (local_64 == '\0');
  pIVar7 = local_70;
  if (local_70 == (Isolate *)0x0) {
LAB_011cb85c:
    uVar8 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
LAB_011cb86c:
    uVar8 = *(undefined8 *)pIVar7;
    if (param_3 == (Isolate *)0x0) goto LAB_011cb89c;
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
LAB_011cb89c:
  if ((local_d0 != (byte **)0x0) && (*local_c8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_c8,local_c0,local_b8);
  }
  if (local_b0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

