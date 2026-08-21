
undefined8 FUN_014cdf10(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
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
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x315);
  }
  if (DAT_01d46638 == (byte *)0x0) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46638 = (byte *)(**(code **)(*plVar8 + 0x10))(plVar8,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46638;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d46638 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar9 = (**(code **)(*plVar8 + 0x18))
                      (plVar8,0x58,pbVar4,"V8.Builtin_ObjectIsSealed",0,0,0,0,0,0,0,&local_60,0);
    plVar8 = local_58;
    local_58 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    plVar8 = local_60;
    local_60 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Builtin_ObjectIsSealed";
    local_a8 = pbVar4;
    local_98 = uVar9;
  }
  iVar10 = *(int *)(param_3 + 0x95b0) + 1;
  pIVar1 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar1 = param_3 + 0xa0;
  }
  *(int *)(param_3 + 0x95b0) = iVar10;
  uVar11 = *(ulong *)pIVar1;
  uVar9 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  if (((uVar11 & 1) == 0) ||
     (*(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) < 0xa9)) {
    bVar6 = false;
    bVar5 = false;
    lVar12 = lVar3;
  }
  else {
    uVar7 = v8::internal::JSReceiver::TestIntegrityLevel(pIVar1,4);
    iVar10 = *(int *)(param_3 + 0x95b0);
    bVar6 = (uVar7 & 0xff) == 0;
    bVar5 = uVar7 < 0x100;
    lVar12 = *(long *)(param_3 + 0x95a8);
  }
  pIVar1 = param_3 + 0xc0;
  if (!bVar5) {
    pIVar1 = param_3 + 0xb8;
  }
  pIVar2 = param_3 + 0x180;
  if (!bVar6) {
    pIVar2 = pIVar1;
  }
  uVar13 = *(undefined8 *)pIVar2;
  *(undefined8 *)(param_3 + 0x95a0) = uVar9;
  *(int *)(param_3 + 0x95b0) = iVar10 + -1;
  if (lVar12 != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar8 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar8 + 0x28))(plVar8,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar13;
}

