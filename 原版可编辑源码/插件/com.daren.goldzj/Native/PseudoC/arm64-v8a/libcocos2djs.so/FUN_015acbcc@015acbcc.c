
int FUN_015acbcc(undefined8 param_1,ulong *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  byte **ppbVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  byte *local_88;
  char *local_80;
  undefined8 local_78;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_40;
  long *local_38;
  
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x272);
  }
  if (DAT_01d47718 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47718 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47718;
  if ((*DAT_01d47718 & 5) == 0) {
    ppbVar6 = (byte **)0x0;
    uVar8 = *param_2;
  }
  else {
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_WasmGetNumberOfInstances",0,0,0,0,0,0,
                       0,&local_40,0);
    plVar4 = local_38;
    local_38 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_40;
    local_40 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    ppbVar6 = &local_88;
    local_80 = "V8.Runtime_Runtime_WasmGetNumberOfInstances";
    uVar8 = *param_2;
    local_88 = pbVar3;
    local_78 = uVar5;
  }
  if (((uVar8 & 1) != 0) &&
     (uVar10 = uVar8 & 0xffffffff00000000,
     *(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x436)) {
    uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)(uVar8 + 0x13)) + 0x2b);
    uVar1 = *(uint *)(uVar10 + 7);
    if ((int)uVar1 < 2) {
      iVar7 = 0;
    }
    else {
      iVar9 = 0;
      uVar8 = 0;
      iVar7 = 0;
      do {
        uVar2 = *(uint *)(uVar10 + 0xb + (long)iVar9);
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 4;
        iVar7 = iVar7 + (uint)(uVar2 != 3 && ((uVar2 ^ 0xffffffff) & 3) == 0);
      } while (uVar8 < uVar1 >> 1);
      iVar7 = iVar7 * 2;
    }
    if ((ppbVar6 != (byte **)0x0) && (*local_88 != 0)) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_88,local_80,local_78);
    }
    if (local_70 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
    }
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsWasmModuleObject()");
}

