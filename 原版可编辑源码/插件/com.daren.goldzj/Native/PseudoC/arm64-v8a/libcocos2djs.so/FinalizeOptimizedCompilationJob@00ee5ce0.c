
/* v8::internal::Compiler::FinalizeOptimizedCompilationJob(v8::internal::OptimizedCompilationJob*,
   v8::internal::Isolate*) */

undefined8
v8::internal::Compiler::FinalizeOptimizedCompilationJob
          (OptimizedCompilationJob *param_1,Isolate *param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  Logger *pLVar16;
  byte **local_c0;
  byte *local_b8;
  char *local_b0;
  undefined8 local_a8;
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c60);
  *(undefined4 *)(param_2 + 0x2c60) = 4;
  pcVar11 = *(code **)(param_2 + 0xb748);
  lVar14 = *(long *)(param_1 + 0x18);
  if (pcVar11 != (code *)0x0) {
    if (pcVar11 == Logger::DefaultEventLoggerSentinel) {
      pLVar16 = *(Logger **)(param_2 + 0x9558);
      uVar12 = Logger::is_logging(pLVar16);
      if ((uVar12 & 1) != 0) {
        Logger::TimerEvent(pLVar16,0,"V8.RecompileSynchronous");
      }
    }
    else {
      (*pcVar11)("V8.RecompileSynchronous",0);
    }
  }
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_2 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0xa8);
  }
  if (DAT_01d3ebf0 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ebf0 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.compile");
  }
  pbVar5 = DAT_01d3ebf0;
  local_c0 = (byte **)0x0;
  if ((*DAT_01d3ebf0 & 5) != 0) {
    local_78 = (long *)0x0;
    local_70 = (long *)0x0;
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar5,"V8.OptimizeConcurrentFinalize",0,0,0,0,0,0,0,&local_78,0)
    ;
    plVar7 = local_70;
    local_70 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_78;
    local_78 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_c0 = &local_b8;
    local_b0 = "V8.OptimizeConcurrentFinalize";
    local_b8 = pbVar5;
    local_a8 = uVar8;
  }
  puVar2 = *(ulong **)(lVar14 + 0x18);
  uVar12 = **(ulong **)(lVar14 + 0x20) & 0xffffffff00000000;
  *(undefined4 *)
   ((uVar12 | *(uint *)((uVar12 | *(uint *)(**(ulong **)(lVar14 + 0x20) + 0x13)) + 3)) + 0x17) = 0;
  if (*(int *)(param_1 + 8) == 2) {
    if ((*(uint *)(*puVar2 + 0x1b) & 0xf00000) == 0) {
      PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
                ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *)&local_78,
                 param_2);
      lVar15 = base::TimeTicks::HighResolutionNow();
      iVar6 = (**(code **)(*(long *)param_1 + 0x20))(param_1,param_2);
      uVar10 = 3;
      if (iVar6 != 0) {
        uVar10 = 4;
      }
      *(undefined4 *)(param_1 + 8) = uVar10;
      lVar9 = base::TimeTicks::HighResolutionNow();
      *(long *)(param_1 + 0x30) = (lVar9 - lVar15) + *(long *)(param_1 + 0x30);
      PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
                ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *)&local_78);
      if (iVar6 == 0) {
        OptimizedCompilationJob::RecordCompilationStats(param_1,0,param_2);
        OptimizedCompilationJob::RecordFunctionCompilation(param_1,0xf,param_2);
        FUN_00ee61fc(lVar14);
        if (FLAG_trace_opt != '\0') {
          PrintF("[completed optimizing ");
          local_78 = (long *)**(ulong **)(lVar14 + 0x20);
          Object::ShortPrint((Object *)&local_78,(__sFILE *)waitpid);
          PrintF("]\n");
        }
        lVar15 = **(long **)(lVar14 + 0x20);
        uVar12 = **(ulong **)(lVar14 + 0x28);
        *(int *)(lVar15 + 0x17) = (int)uVar12;
        if (((uVar12 & 1) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
        {
          Heap_MarkingBarrierSlow(lVar15,lVar15 + 0x17);
        }
        uVar8 = 0;
        goto joined_r0x00ee6050;
      }
    }
    else {
      OptimizedCompilationInfo::RetryOptimization(*(OptimizedCompilationInfo **)(param_1 + 0x18),10)
      ;
      *(undefined4 *)(param_1 + 8) = 4;
    }
  }
  if (FLAG_trace_opt != '\0') {
    PrintF("[aborted optimizing ");
    local_78 = (long *)**(undefined8 **)(lVar14 + 0x20);
    Object::ShortPrint((Object *)&local_78,(__sFILE *)waitpid);
    uVar8 = GetBailoutReason(*(undefined1 *)(lVar14 + 0x50));
    PrintF(" because: %s]\n",uVar8);
  }
  local_78 = (long *)*puVar2;
  lVar15 = **(long **)(lVar14 + 0x20);
  uVar12 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_78);
  *(int *)(lVar15 + 0x17) = (int)uVar12;
  if (((uVar12 & 1) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(lVar15,lVar15 + 0x17);
  }
  uVar13 = **(ulong **)(lVar14 + 0x20);
  uVar12 = uVar13 & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar12 | *(uint *)(uVar13 + 0xb)) + 3);
  if ((uVar1 != 0x84) &&
     (((((uVar1 & 1) == 0 ||
        (1 < *(ushort *)((uVar12 | 7) + (ulong)*(uint *)((uVar12 | uVar1) - 1)) - 0x95)) &&
       (uVar13 = uVar12 | *(uint *)((uVar12 | *(uint *)(uVar13 + 0x13)) + 3),
       *(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x9f)) &&
      (*(int *)(uVar13 + 7) == 8)))) {
    uVar12 = **(ulong **)(lVar14 + 0x20) & 0xffffffff00000000;
    local_78 = (long *)(uVar12 | *(uint *)((uVar12 | *(uint *)(**(ulong **)(lVar14 + 0x20) + 0x13))
                                          + 3));
    FeedbackVector::ClearOptimizationMarker((FeedbackVector *)&local_78);
  }
  uVar8 = 1;
joined_r0x00ee6050:
  if ((local_c0 != (byte **)0x0) && (*local_b8 != 0)) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_b8,local_b0,local_a8);
  }
  if (local_a0 == (RuntimeCallStats *)0x0) {
    pcVar11 = *(code **)(param_2 + 0xb748);
  }
  else {
    RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
    pcVar11 = *(code **)(param_2 + 0xb748);
  }
  if (pcVar11 != (code *)0x0) {
    if (pcVar11 == Logger::DefaultEventLoggerSentinel) {
      pLVar16 = *(Logger **)(param_2 + 0x9558);
      uVar12 = Logger::is_logging(pLVar16);
      if ((uVar12 & 1) != 0) {
        Logger::TimerEvent(pLVar16,1,"V8.RecompileSynchronous");
      }
    }
    else {
      (*pcVar11)("V8.RecompileSynchronous",1);
    }
  }
  (**(code **)(*(long *)param_1 + 8))(param_1);
  *(undefined4 *)(param_2 + 0x2c60) = uVar3;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

