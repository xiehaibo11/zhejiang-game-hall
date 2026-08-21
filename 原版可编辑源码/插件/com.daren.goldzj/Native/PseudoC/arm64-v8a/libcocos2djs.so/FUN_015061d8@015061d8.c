
undefined8 FUN_015061d8(undefined8 param_1,undefined8 *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  undefined **ppuVar3;
  Isolate *pIVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte **local_120;
  byte *local_118;
  char *local_110;
  undefined8 local_108;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined **local_d0;
  Isolate *local_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  void *pvStack_a8;
  void *local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  ulong *puStack_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  ulong local_68;
  
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_100 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0x12f);
  }
  if (DAT_01d46c30 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c30 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46c30;
  local_120 = (byte **)0x0;
  if ((*DAT_01d46c30 & 5) != 0) {
    local_d0 = (undefined **)0x0;
    local_c8 = (Isolate *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar2,"V8.Runtime_Runtime_StoreInArrayLiteralIC_Miss",0,0,0,0,0,
                       0,0,&local_d0,0);
    pIVar4 = local_c8;
    local_c8 = (Isolate *)0x0;
    if (pIVar4 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar4 + 8))();
    }
    ppuVar3 = local_d0;
    local_d0 = (undefined **)0x0;
    if (ppuVar3 != (undefined **)0x0) {
      (**(code **)(*ppuVar3 + 8))();
    }
    local_120 = &local_118;
    local_110 = "V8.Runtime_Runtime_StoreInArrayLiteralIC_Miss";
    local_118 = pbVar2;
    local_108 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = param_2[-2];
  local_d0 = &PTR__IC_01cc6ed8;
  local_c0 = 0;
  local_b4 = 0xe;
  local_70 = *(int *)(param_2 + -1) >> 1;
  puStack_80 = (ulong *)0x0;
  if ((int)uVar7 != *(int *)((uVar7 & 0xffffffff00000000) + 0xa0)) {
    puStack_80 = param_2 + -2;
  }
  pvStack_a8 = (void *)0x0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_88 = 0;
  local_c8 = param_3;
  if (puStack_80 == (ulong *)0x0) {
    local_bc = 0;
    local_6c = 0;
  }
  else {
    local_68 = *puStack_80;
    local_6c = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_68);
    local_bc = v8::internal::FeedbackNexus::ic_state((FeedbackNexus *)&puStack_80);
  }
  local_d0 = &PTR__IC_01cc6fb8;
  uStack_b8 = local_bc;
  v8::internal::StoreInArrayLiteralIC::Store
            ((StoreInArrayLiteralIC *)&local_d0,param_2 + -3,param_2 + -4,param_2);
  uVar8 = *param_2;
  local_d0 = &PTR__IC_01cc6ed8;
  if (pvStack_a8 != (void *)0x0) {
    local_a0 = pvStack_a8;
    operator_delete(pvStack_a8);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_118,local_110,local_108);
  }
  if (local_100 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
  }
  return uVar8;
}

