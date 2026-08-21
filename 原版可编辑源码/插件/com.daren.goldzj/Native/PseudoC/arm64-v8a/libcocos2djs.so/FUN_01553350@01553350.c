
undefined8 FUN_01553350(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xd3);
  }
  if (DAT_01d46d30 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46d30 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46d30;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46d30 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar2,"V8.Runtime_Runtime_BigIntCompareToString",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar5 = local_48;
    local_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_50;
    local_50 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_BigIntCompareToString";
    local_98 = pbVar2;
    local_88 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if ((uVar8 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsSmi()");
  }
  uVar9 = param_2[-1];
  if (((uVar9 & 1) == 0) ||
     (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x41)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsBigInt()");
  }
  uVar9 = param_2[-2];
  if (((uVar9 & 1) != 0) &&
     (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0x40)) {
    uVar4 = v8::internal::BigInt::CompareToString(param_3,param_2 + -1,param_2 + -2);
    bVar3 = v8::internal::ComparisonResultToBool((int)uVar8 >> 1,uVar4);
    puVar7 = (undefined8 *)v8::internal::Factory::ToBoolean(param_3,(bool)(bVar3 & 1));
    uVar10 = *puVar7;
    *(undefined8 *)(param_3 + 0x95a0) = uVar6;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
    }
    if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
      plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar5 + 0x28))(plVar5,local_98,local_90,local_88);
    }
    if (local_80 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
    }
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].IsString()");
}

