
undefined8 FUN_014ca684(int param_1,long param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  Isolate *pIVar5;
  Isolate *pIVar6;
  Isolate *pIVar7;
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
  long *local_60;
  long *local_58;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x307);
  }
  if (DAT_01d465b0 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d465b0 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d465b0;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d465b0 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Builtin_JsonStringify",0,0,0,0,0,0,0,&local_60,0);
    plVar3 = local_58;
    local_58 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_60;
    local_60 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Builtin_JsonStringify";
    local_a8 = pbVar2;
    local_98 = uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  param_1 = param_1 + -4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (param_1 < 2) {
    pIVar5 = param_3 + 0xa0;
LAB_014ca7dc:
    pIVar6 = param_3 + 0xa0;
  }
  else {
    pIVar5 = (Isolate *)(param_2 + -8);
    if (param_1 == 2) goto LAB_014ca7dc;
    pIVar6 = (Isolate *)(param_2 + -0x10);
    if (3 < param_1) {
      pIVar7 = (Isolate *)(param_2 + -0x18);
      goto LAB_014ca7e4;
    }
  }
  pIVar7 = param_3 + 0xa0;
LAB_014ca7e4:
  pIVar6 = (Isolate *)v8::internal::JsonStringify(param_3,pIVar5,pIVar6,pIVar7);
  pIVar5 = param_3 + 0x180;
  if (pIVar6 != (Isolate *)0x0) {
    pIVar5 = pIVar6;
  }
  uVar8 = *(undefined8 *)pIVar5;
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar8;
}

