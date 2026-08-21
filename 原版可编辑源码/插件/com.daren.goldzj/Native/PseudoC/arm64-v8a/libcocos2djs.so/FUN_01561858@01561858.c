
undefined8 FUN_01561858(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  void *__s;
  Isolate *pIVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
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
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x116);
  }
  if (DAT_01d46ea0 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46ea0 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46ea0;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d46ea0 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_Call",0,0,0,0,0,0,0,&local_60,0);
    plVar5 = local_58;
    local_58 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_60;
    local_60 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_Call";
    local_a8 = pbVar4;
    local_98 = uVar6;
  }
  uVar3 = param_1 - 2;
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
  if ((ulong)(long)(int)uVar3 >> 0x3d != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
  if (__s == (void *)0x0) {
    plVar5 = (long *)v8::internal::V8::GetCurrentPlatform();
    (**(code **)(*plVar5 + 0x18))();
    __s = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      v8::internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  if ((uVar3 != 0) && (memset(__s,0,(long)(int)uVar3 << 3), 0 < (int)uVar3)) {
    uVar8 = (ulong)uVar3;
    if (uVar3 < 4) {
      uVar9 = 0;
    }
    else {
      iVar12 = 0;
      iVar13 = 1;
      uVar9 = uVar8 & 0xfffffffc;
      plVar5 = (long *)((long)__s + 0x10);
      uVar10 = uVar9;
      do {
        iVar14 = iVar12 * 8;
        iVar15 = iVar13 * 8;
        iVar12 = iVar12 + 4;
        iVar13 = iVar13 + 4;
        uVar10 = uVar10 - 4;
        plVar5[-1] = param_2 - (iVar15 + 0x10);
        plVar5[-2] = param_2 - (iVar14 + 0x10);
        plVar5[1] = param_2 - (iVar15 + 0x20);
        *plVar5 = param_2 - (iVar14 + 0x20);
        plVar5 = plVar5 + 4;
      } while (uVar10 != 0);
      if (uVar9 == uVar8) goto LAB_01561a74;
    }
    iVar12 = (int)uVar9 * 8 + 0x10;
    do {
      *(long *)((long)__s + uVar9 * 8) = param_2 - iVar12;
      uVar9 = uVar9 + 1;
      iVar12 = iVar12 + 8;
    } while (uVar8 != uVar9);
  }
LAB_01561a74:
  pIVar7 = (Isolate *)v8::internal::Execution::Call(param_3,param_2,param_2 + -8,uVar3,__s);
  pIVar1 = param_3 + 0x180;
  if (pIVar7 != (Isolate *)0x0) {
    pIVar1 = pIVar7;
  }
  uVar11 = *(undefined8 *)pIVar1;
  if (__s != (void *)0x0) {
    operator_delete__(__s);
  }
  if (param_3 != (Isolate *)0x0) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar6;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar11;
}

