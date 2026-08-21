
/* v8::internal::Runtime_BytecodeBudgetInterrupt(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_BytecodeBudgetInterrupt(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_01569a74(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x439)) {
    *(undefined4 *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x13)) + 7) =
         FLAG_interrupt_budget;
    uVar6 = *param_2;
    uVar5 = uVar6 & 0xffffffff00000000;
    uVar1 = *(uint *)((uVar5 | *(uint *)(uVar6 + 0xb)) + 3);
    if ((uVar1 == 0x84) ||
       ((((uVar1 & 1) != 0 &&
         (*(ushort *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar1) - 1)) - 0x95 < 2)) ||
        (*(short *)((uVar5 | 7) +
                   (ulong)*(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(uVar6 + 0x13)) + 3)) - 1))
         != 0x9f)))) {
      JSFunction::EnsureFeedbackVector(param_2);
      uVar5 = *param_2 & 0xffffffff00000000;
      *(undefined4 *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*param_2 + 0x13)) + 3)) + 0x13) = 1;
    }
    else {
      lVar7 = *(long *)(param_3 + 0x9520);
      if (*(char *)(lVar7 + 0x1c78) == '\0') {
        *(char *)(lVar7 + 0x1c78) = '\x01';
        piVar3 = (int *)StatsCounterBase::FindLocationInStatsTable
                                  ((StatsCounterBase *)(lVar7 + 0x1c60));
        *(int **)(lVar7 + 0x1c70) = piVar3;
      }
      else {
        piVar3 = *(int **)(lVar7 + 0x1c70);
      }
      if (piVar3 != (int *)0x0) {
        *piVar3 = *piVar3 + 1;
      }
      RuntimeProfiler::MarkCandidatesForOptimization(*(RuntimeProfiler **)(param_3 + 0x9510));
    }
    uVar8 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

