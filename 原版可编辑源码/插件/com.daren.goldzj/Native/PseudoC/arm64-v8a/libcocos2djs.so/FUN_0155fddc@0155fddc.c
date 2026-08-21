
undefined8 FUN_0155fddc(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  ulong *puVar3;
  long *plVar4;
  undefined8 uVar5;
  Isolate *pIVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Isolate *local_68;
  ulong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  char local_44;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x114);
  }
  if (DAT_01d46e68 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46e68 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46e68;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d46e68 & 5) != 0) {
    local_68 = (Isolate *)0x0;
    local_60 = (ulong *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.Runtime_Runtime_ForInEnumerate",0,0,0,0,0,0,0,
                       &local_68,0);
    puVar3 = local_60;
    local_60 = (ulong *)0x0;
    if (puVar3 != (ulong *)0x0) {
      (**(code **)(*puVar3 + 8))();
    }
    pIVar6 = local_68;
    local_68 = (Isolate *)0x0;
    if (pIVar6 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar6 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_ForInEnumerate";
    local_a8 = pbVar2;
    local_98 = uVar5;
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
  v8::internal::JSObject::MakePrototypesFast(param_2,0,param_3);
  local_58 = 0;
  local_48 = 1;
  local_50 = 0x1200000001;
  local_44 = '\x01';
  local_68 = param_3;
  local_60 = param_2;
  v8::internal::FastKeyAccumulator::Prepare((FastKeyAccumulator *)&local_68);
  if (local_48._2_1_ == '\0') {
    pIVar6 = (Isolate *)
             v8::internal::FastKeyAccumulator::GetKeys
                       ((FastKeyAccumulator *)&local_68,(ulong)(local_44 == '\0') << 1);
    if (pIVar6 != (Isolate *)0x0) {
      if (local_48._2_1_ == '\0') goto LAB_0155ffd4;
      goto LAB_0155ff5c;
    }
  }
  else {
LAB_0155ff5c:
    uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar6 = *(Isolate **)(param_3 + 0x95a0);
      if (pIVar6 == *(Isolate **)(param_3 + 0x95a8)) {
        pIVar6 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
      }
      *(Isolate **)(param_3 + 0x95a0) = pIVar6 + 8;
      *(ulong *)pIVar6 = uVar7;
    }
    else {
      pIVar6 = (Isolate *)
               v8::internal::CanonicalHandleScope::Lookup
                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
    }
    if (pIVar6 != (Isolate *)0x0) goto LAB_0155ffd4;
  }
  pIVar6 = param_3 + 0x180;
LAB_0155ffd4:
  uVar8 = *(undefined8 *)pIVar6;
  *(undefined8 *)(param_3 + 0x95a0) = uVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar8;
}

