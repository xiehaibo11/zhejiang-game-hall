
undefined8 FUN_0159d5f8(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
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
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x25f);
  }
  if (DAT_01d47488 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47488 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47488;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47488 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_PrepareFunctionForOptimization",0,0,0,
                       0,0,0,0,&local_60,0);
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
    local_a0 = "V8.Runtime_Runtime_PrepareFunctionForOptimization";
    local_a8 = pbVar3;
    local_98 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (uVar8 = uVar7 & 0xffffffff00000000 | 7, *(short *)(uVar8 + *(uint *)(uVar7 - 1)) == 0x439)) {
    if (*(short *)(uVar8 + *(uint *)(uVar7 - 1)) != 0x439) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
    }
    if (param_1 == 2) {
      plVar5 = (long *)param_2[-1];
      if ((((ulong)plVar5 & 1) == 0) ||
         (0x3f < *(ushort *)
                  (((ulong)plVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)plVar5 - 1))))
      goto LAB_0159d828;
      local_60 = plVar5;
      uVar4 = v8::internal::String::IsOneByteEqualTo(&local_60,"allow heuristic optimization",0x1c);
    }
    else {
      uVar4 = 0;
    }
    uVar7 = FUN_015af7a8(param_2);
    if ((uVar7 & 1) != 0) {
      uVar8 = *param_2;
      uVar7 = uVar8 & 0xffffffff00000000;
      if (((((*(uint *)((uVar7 | *(uint *)(uVar8 + 0xb)) + 0x1b) & 0xf00000) == 0) ||
           ((*(uint *)((uVar7 | *(uint *)(uVar8 + 0xb)) + 0x1b) & 0xf00000) != 0xb00000)) &&
          ((uVar1 = *(uint *)((uVar7 | *(uint *)(uVar8 + 0xb)) + 3), (uVar1 & 1) == 0 ||
           (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar1) - 1)) != 0x57)))) &&
         (v8::internal::FLAG_testing_d8_test_runner != '\0')) {
        v8::internal::PendingOptimizationTable::PreparedForOptimization(param_3,param_2,uVar4 & 1);
      }
    }
  }
LAB_0159d828:
  uVar9 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar9;
}

