
undefined8 FUN_01569a74(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
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
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x150);
  }
  if (DAT_01d47020 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47020 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47020;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d47020 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_BytecodeBudgetInterrupt",0,0,0,0,0,0,0
                       ,&local_50,0);
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
    local_90 = "V8.Runtime_Runtime_BytecodeBudgetInterrupt";
    local_98 = pbVar3;
    local_88 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x439)) {
    *(undefined4 *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x13)) + 7) =
         v8::internal::FLAG_interrupt_budget;
    uVar8 = *param_2;
    uVar7 = uVar8 & 0xffffffff00000000;
    uVar1 = *(uint *)((uVar7 | *(uint *)(uVar8 + 0xb)) + 3);
    if ((uVar1 == 0x84) ||
       ((((uVar1 & 1) != 0 &&
         (*(ushort *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar1) - 1)) - 0x95 < 2)) ||
        (*(short *)((uVar7 | 7) +
                   (ulong)*(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(uVar8 + 0x13)) + 3)) - 1))
         != 0x9f)))) {
      v8::internal::JSFunction::EnsureFeedbackVector(param_2);
      uVar7 = *param_2 & 0xffffffff00000000;
      *(undefined4 *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*param_2 + 0x13)) + 3)) + 0x13) = 1;
    }
    else {
      lVar9 = *(long *)(param_3 + 0x9520);
      if (*(char *)(lVar9 + 0x1c78) == '\0') {
        *(char *)(lVar9 + 0x1c78) = '\x01';
        piVar6 = (int *)v8::internal::StatsCounterBase::FindLocationInStatsTable
                                  ((StatsCounterBase *)(lVar9 + 0x1c60));
        *(int **)(lVar9 + 0x1c70) = piVar6;
      }
      else {
        piVar6 = *(int **)(lVar9 + 0x1c70);
      }
      if (piVar6 != (int *)0x0) {
        *piVar6 = *piVar6 + 1;
      }
      v8::internal::RuntimeProfiler::MarkCandidatesForOptimization
                (*(RuntimeProfiler **)(param_3 + 0x9510));
    }
    uVar10 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
    }
    if (local_80 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
    }
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

