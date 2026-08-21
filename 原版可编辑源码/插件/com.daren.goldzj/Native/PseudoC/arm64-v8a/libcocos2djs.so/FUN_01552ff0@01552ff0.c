
undefined8 FUN_01552ff0(undefined8 param_1,ulong *param_2,Factory *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xd2);
  }
  if (DAT_01d46d28 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46d28 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d46d28;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46d28 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar1,"V8.Runtime_Runtime_BigIntCompareToNumber",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_50;
    local_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_BigIntCompareToNumber";
    local_98 = pbVar1;
    local_88 = uVar5;
  }
  uVar7 = *param_2;
  if ((uVar7 & 1) == 0) {
    uVar8 = param_2[-1];
    if (((uVar8 & 1) != 0) &&
       (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x41)) {
      uVar3 = v8::internal::BigInt::CompareToNumber(param_2 + -1,param_2 + -2);
      bVar2 = v8::internal::ComparisonResultToBool((int)uVar7 >> 1,uVar3);
      puVar6 = (undefined8 *)v8::internal::Factory::ToBoolean(param_3,(bool)(bVar2 & 1));
      uVar5 = *puVar6;
      if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
        plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
      }
      if (local_80 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
      }
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsBigInt()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSmi()");
}

