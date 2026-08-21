
undefined8 FUN_01504efc(undefined8 param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  byte *pbVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  undefined8 uVar8;
  byte **local_100;
  byte *local_f8;
  char *local_f0;
  undefined8 local_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined **local_b8;
  Isolate *local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  void *pvStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x139);
  }
  if (DAT_01d46c18 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c18 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46c18;
  local_100 = (byte **)0x0;
  if ((*DAT_01d46c18 & 5) != 0) {
    local_b8 = (undefined **)0x0;
    local_b0 = (Isolate *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_StoreGlobalICNoFeedback_Miss",0,0,0,0,
                       0,0,0,&local_b8,0);
    pIVar1 = local_b0;
    local_b0 = (Isolate *)0x0;
    if (pIVar1 != (Isolate *)0x0) {
      (**(code **)(*(long *)pIVar1 + 8))();
    }
    ppuVar4 = local_b8;
    local_b8 = (undefined **)0x0;
    if (ppuVar4 != (undefined **)0x0) {
      (**(code **)(*ppuVar4 + 8))();
    }
    local_100 = &local_f8;
    local_f0 = "V8.Runtime_Runtime_StoreGlobalICNoFeedback_Miss";
    local_f8 = pbVar3;
    local_e8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uStack_80 = 0;
  local_88 = (void *)0x0;
  pvStack_90 = (void *)0x0;
  local_98 = 0;
  local_b8 = &PTR__IC_01cc6f78;
  local_a8 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_9c = 10;
  local_a4 = 0;
  local_b0 = param_3;
  pIVar7 = (Isolate *)
           v8::internal::StoreGlobalIC::Store((StoreGlobalIC *)&local_b8,param_2 + -8,param_2);
  pIVar1 = param_3 + 0x180;
  if (pIVar7 != (Isolate *)0x0) {
    pIVar1 = pIVar7;
  }
  uVar8 = *(undefined8 *)pIVar1;
  local_b8 = &PTR__IC_01cc6ed8;
  if (pvStack_90 != (void *)0x0) {
    local_88 = pvStack_90;
    operator_delete(pvStack_90);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_100 != (byte **)0x0) && (*local_f8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_f8,local_f0,local_e8);
  }
  if (local_e0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  return uVar8;
}

