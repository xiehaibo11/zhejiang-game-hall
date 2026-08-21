
ulong FUN_014ccf4c(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  char cVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
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
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x311);
  }
  if (DAT_01d46610 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46610 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar5 = DAT_01d46610;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d46610 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar5,"V8.Builtin_ObjectFreeze",0,0,0,0,0,0,0,&local_60,0);
    plVar7 = local_58;
    local_58 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_60;
    local_60 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Builtin_ObjectFreeze";
    local_a8 = pbVar5;
    local_98 = uVar8;
  }
  iVar4 = *(int *)(param_3 + 0x95b0);
  pIVar1 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar1 = param_3 + 0xa0;
  }
  *(int *)(param_3 + 0x95b0) = iVar4 + 1;
  uVar9 = *(ulong *)pIVar1;
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  if (((uVar9 & 1) == 0) ||
     (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0xa9)) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar8;
    *(int *)(param_3 + 0x95b0) = iVar4;
  }
  else {
    cVar6 = v8::internal::JSReceiver::SetIntegrityLevel(pIVar1,5,0);
    pIVar2 = param_3 + 0x180;
    if (cVar6 != '\0') {
      pIVar2 = pIVar1;
    }
    uVar9 = *(ulong *)pIVar2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar8;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar9;
}

