
ulong * FUN_00ee1db0(ulong *param_1,int param_2,uint param_3,undefined8 param_4)

{
  Isolate *pIVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  byte *pbVar7;
  OptimizedCompilationJob *pOVar8;
  Isolate *pIVar9;
  RuntimeCallStats *this;
  int iVar10;
  ulong *puVar11;
  Isolate *pIVar12;
  long *plVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined4 uVar16;
  CanonicalHandleScope *this_00;
  code *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  Logger *pLVar21;
  long lVar22;
  ulong uVar23;
  ulong *puVar24;
  Optional<v8::internal::CompilationHandleScope> local_1f8 [8];
  DeferredHandleScope local_1f0 [24];
  OptimizedCompilationInfo *local_1d8;
  OptimizedCompilationInfo *local_1d0;
  OptimizedCompilationJob *local_1c8;
  undefined **local_1c0;
  StackGuard *local_1b8;
  int local_1a0;
  byte **local_190;
  byte *local_188;
  char *local_180;
  undefined8 local_178;
  RuntimeCallStats *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  Isolate *local_148;
  byte **local_140;
  byte *local_138;
  char *local_130;
  undefined8 local_128;
  RuntimeCallStats *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  RuntimeCallStats *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_88;
  long *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  local_148 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  this_00 = *(CanonicalHandleScope **)((ulong)*(uint *)((long)param_1 + 4) << 0x20 | 0x95b8);
  uVar23 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb);
  if (this_00 == (CanonicalHandleScope *)0x0) {
    pIVar12 = local_148 + 0x95a0;
    puVar11 = *(ulong **)pIVar12;
    if (puVar11 == *(ulong **)(local_148 + 0x95a8)) {
      puVar11 = (ulong *)v8::internal::HandleScope::Extend(local_148);
    }
    *(ulong **)pIVar12 = puVar11 + 1;
    *puVar11 = uVar23;
  }
  else {
    puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this_00,uVar23);
  }
  uVar20 = *param_1;
  uVar23 = uVar20 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar23 | *(uint *)(uVar20 + 0xb)) + 3);
  if ((uVar2 != 0x84) &&
     (((((uVar2 & 1) == 0 ||
        (1 < *(ushort *)((uVar23 | 7) + (ulong)*(uint *)((uVar23 | uVar2) - 1)) - 0x95)) &&
       (uVar20 = uVar23 | *(uint *)((uVar23 | *(uint *)(uVar20 + 0x13)) + 3),
       *(short *)((uVar23 | 7) + (ulong)*(uint *)(uVar20 - 1)) == 0x9f)) &&
      ((uVar2 = *(uint *)(uVar20 + 7), (uVar2 & 1) == 0 && (1 < (uint)((int)uVar2 >> 1))))))) {
    uVar23 = *param_1 & 0xffffffff00000000;
    local_f0 = (RuntimeCallStats *)(uVar23 | *(uint *)((uVar23 | *(uint *)(*param_1 + 0x13)) + 3));
    v8::internal::FeedbackVector::ClearOptimizationMarker((FeedbackVector *)&local_f0);
  }
  if ((((*(uint *)(*puVar11 + 0x1b) & 0xf00000) != 0) &&
      ((*(uint *)(*puVar11 + 0x1b) & 0xf00000) == 0xb00000)) ||
     (*(char *)(*(long *)(local_148 + 0xb6c8) + 9) != '\0')) {
    puVar24 = (ulong *)0x0;
    goto LAB_00ee1f2c;
  }
  if (v8::internal::FLAG_testing_d8_test_runner != '\0') {
    v8::internal::PendingOptimizationTable::FunctionWasOptimized(local_148,param_1);
  }
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = (RuntimeCallStats *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_f0 = (RuntimeCallStats *)(*(long *)(*param_1 & 0xffffffff00000000 | 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_f0,(ulong)&local_f0 | 8,0x7b);
  }
  pIVar12 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar23 = (ulong)pIVar12 | (ulong)*(uint *)(*param_1 + 0xb);
  if (*(CanonicalHandleScope **)((ulong)pIVar12 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar24 = *(ulong **)(pIVar12 + 0x95a0);
    if (puVar24 == *(ulong **)(pIVar12 + 0x95a8)) {
      puVar24 = (ulong *)v8::internal::HandleScope::Extend(pIVar12);
    }
    *(ulong **)(pIVar12 + 0x95a0) = puVar24 + 1;
    *puVar24 = uVar23;
  }
  else {
    puVar24 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)((ulong)pIVar12 | 0x95b8),uVar23);
  }
  uVar23 = *param_1;
  pIVar12 = (Isolate *)(uVar23 & 0xffffffff00000000);
  if (param_3 == 0xffffffff) {
    uVar2 = *(uint *)(((ulong)pIVar12 | (ulong)*(uint *)(uVar23 + 0xb)) + 3);
    if ((uVar2 != 0x84) &&
       ((((uVar2 & 1) == 0 ||
         (1 < *(ushort *)
               (((ulong)pIVar12 | 7) + (ulong)*(uint *)(((ulong)pIVar12 | (ulong)uVar2) - 1)) - 0x95
         )) && (*(short *)(((ulong)pIVar12 | 7) +
                          (ulong)*(uint *)(((ulong)pIVar12 |
                                           (ulong)*(uint *)(((ulong)pIVar12 |
                                                            (ulong)*(uint *)(uVar23 + 0x13)) + 3)) -
                                          1)) == 0x9f)))) {
      uVar23 = *param_1 & 0xffffffff00000000;
      local_1c0 = (undefined **)(uVar23 | *(uint *)((uVar23 | *(uint *)(*param_1 + 0x13)) + 3));
      v8::internal::FeedbackVector::EvictOptimizedCodeMarkedForDeoptimization
                ((FeedbackVector *)&local_1c0,
                 *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb),
                 "GetCodeFromOptimizedCodeCache");
      uVar2 = *(uint *)((long)local_1c0 + 7);
      uVar23 = (ulong)uVar2 & 0xfffffffffffffffd | (ulong)local_1c0 & 0xffffffff00000000;
      if ((uVar2 & (ulong)uVar2 != 3) == 0) {
        uVar23 = 0;
      }
      if ((int)uVar23 != 0) goto LAB_00ee2040;
    }
LAB_00ee21d0:
    puVar24 = (ulong *)0x0;
  }
  else {
    local_1c0 = (undefined **)
                ((ulong)pIVar12 |
                (ulong)*(uint *)(((ulong)pIVar12 |
                                 (ulong)*(uint *)(((ulong)pIVar12 |
                                                  (ulong)*(uint *)(((ulong)pIVar12 |
                                                                   (ulong)*(uint *)(uVar23 + 0xf)) -
                                                                  1)) + 0x13)) + 0x3cf));
    uVar23 = v8::internal::OSROptimizedCodeCache::GetOptimizedCode
                       ((OSROptimizedCodeCache *)&local_1c0,puVar24,param_3,pIVar12);
    if ((int)uVar23 == 0) goto LAB_00ee21d0;
LAB_00ee2040:
    if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar24 = *(ulong **)(pIVar12 + 0x95a0);
      if (puVar24 == *(ulong **)(pIVar12 + 0x95a8)) {
        puVar24 = (ulong *)v8::internal::HandleScope::Extend(pIVar12);
      }
      *(ulong **)(pIVar12 + 0x95a0) = puVar24 + 1;
      *puVar24 = uVar23;
    }
    else {
      puVar24 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar12 + 0x95b8),uVar23);
    }
  }
  pIVar12 = local_148;
  if (local_f0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_f0,(RuntimeCallTimer *)((ulong)&local_f0 | 8));
    pIVar12 = local_148;
  }
  local_148 = pIVar12;
  if (puVar24 != (ulong *)0x0) {
    if (v8::internal::FLAG_trace_opt != '\0') {
      v8::internal::PrintF("[found optimized code for ");
      local_f0 = (RuntimeCallStats *)*param_1;
      v8::internal::Object::ShortPrint((Object *)&local_f0,(__sFILE *)waitpid);
      if (param_3 != 0xffffffff) {
        v8::internal::PrintF(" at OSR AST id %d",(ulong)param_3);
      }
      v8::internal::PrintF("]\n");
    }
    goto LAB_00ee1f2c;
  }
  uVar23 = *param_1 & 0xffffffff00000000;
  *(undefined4 *)((uVar23 | *(uint *)((uVar23 | *(uint *)(*param_1 + 0x13)) + 3)) + 0x17) = 0;
  uVar4 = *(undefined4 *)(pIVar12 + 0x2c60);
  *(undefined4 *)(pIVar12 + 0x2c60) = 4;
  pcVar17 = *(code **)(pIVar12 + 0xb748);
  if (pcVar17 != (code *)0x0) {
    if (pcVar17 == v8::internal::Logger::DefaultEventLoggerSentinel) {
      pLVar21 = *(Logger **)(pIVar12 + 0x9558);
      uVar23 = v8::internal::Logger::is_logging(pLVar21);
      if ((uVar23 & 1) != 0) {
        v8::internal::Logger::TimerEvent(pLVar21,0,"V8.OptimizeCode");
      }
    }
    else {
      (*pcVar17)("V8.OptimizeCode",0);
    }
  }
  uStack_168 = 0;
  local_170 = (RuntimeCallStats *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  local_150 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_170 = (RuntimeCallStats *)(*(long *)(local_148 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_170,(ulong)&local_170 | 8,0xa6);
  }
  if (DAT_01d3ec00 == (byte *)0x0) {
    plVar13 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec00 = (byte *)(**(code **)(*plVar13 + 0x10))(plVar13,"disabled-by-default-v8.compile");
  }
  pbVar7 = DAT_01d3ec00;
  local_190 = (byte **)0x0;
  if ((*DAT_01d3ec00 & 5) != 0) {
    local_88 = (long *)0x0;
    local_80 = (long *)0x0;
    plVar13 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar14 = (**(code **)(*plVar13 + 0x18))
                       (plVar13,0x58,pbVar7,"V8.OptimizeCode",0,0,0,0,0,0,0,&local_88,0);
    plVar13 = local_80;
    local_80 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    plVar13 = local_88;
    local_88 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    local_180 = "V8.OptimizeCode";
    local_190 = &local_188;
    local_188 = pbVar7;
    local_178 = uVar14;
  }
  v8::internal::InterruptsScope::InterruptsScope((InterruptsScope *)&local_1c0,local_148,0xff,0);
  local_1c0 = &PTR__InterruptsScope_01c98490;
  uVar20 = *puVar11 & 0xffffffff00000000;
  uVar23 = uVar20 | *(uint *)(*puVar11 + 0xf);
  if (*(short *)((uVar20 | 7) + (ulong)*(uint *)(uVar23 - 1)) == 0x5b) {
    uVar23 = uVar20 | *(uint *)(uVar23 + 0xb);
  }
  v8::internal::compiler::Pipeline::NewCompilationJob
            (&local_1c8,local_148,param_1,
             *(short *)((uVar23 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar23 - 1)) == 0x65);
  local_1d0 = *(OptimizedCompilationInfo **)(local_1c8 + 0x18);
  *(uint *)(local_1d0 + 0x38) = param_3;
  *(undefined8 *)(local_1d0 + 0x78) = param_4;
  local_f0 = (RuntimeCallStats *)**(undefined8 **)(local_1d0 + 0x18);
  uVar23 = v8::internal::SharedFunctionInfo::HasBreakInfo((SharedFunctionInfo *)&local_f0);
  if ((uVar23 & 1) == 0) {
    if (v8::internal::FLAG_opt == '\0') {
LAB_00ee24f0:
      uVar14 = 10;
      goto LAB_00ee24f8;
    }
    local_f0 = (RuntimeCallStats *)*puVar11;
    uVar23 = v8::internal::SharedFunctionInfo::PassesFilter
                       ((SharedFunctionInfo *)&local_f0,v8::internal::FLAG_turbo_filter);
    if ((uVar23 & 1) == 0) goto LAB_00ee24f0;
    local_1f8[0] = (Optional<v8::internal::CompilationHandleScope>)0x0;
    local_1f0[0] = (DeferredHandleScope)0x0;
    if (param_2 == 1) {
      v8::base::Optional<v8::internal::CompilationHandleScope>::
      emplace<v8::internal::Isolate*&,v8::internal::OptimizedCompilationInfo*&>
                (local_1f8,&local_148,&local_1d0);
    }
    v8::internal::CanonicalHandleScope::CanonicalHandleScope
              ((CanonicalHandleScope *)&local_f0,local_148);
    v8::internal::OptimizedCompilationInfo::ReopenHandlesInNewHandleScope(local_1d0,local_148);
    pIVar9 = local_148;
    pOVar8 = local_1c8;
    pIVar1 = local_148 + 0x8910;
    if (param_2 == 1) {
      lVar22 = *(long *)(local_148 + 0xc610);
      lVar18 = *(long *)(local_1c8 + 0x18);
      v8::base::Mutex::Lock((Mutex *)(lVar22 + 0x1c));
      iVar10 = *(int *)(lVar22 + 0x10);
      iVar3 = *(int *)(lVar22 + 0x14);
      v8::base::Mutex::Unlock((Mutex *)(lVar22 + 0x1c));
      if (iVar3 < iVar10) {
        if (*(int *)pIVar1 == 0) {
          pcVar17 = *(code **)(pIVar9 + 0xb748);
          if (pcVar17 != (code *)0x0) {
            if (pcVar17 == v8::internal::Logger::DefaultEventLoggerSentinel) {
              pLVar21 = *(Logger **)(pIVar9 + 0x9558);
              uVar23 = v8::internal::Logger::is_logging(pLVar21);
              if ((uVar23 & 1) != 0) {
                v8::internal::Logger::TimerEvent(pLVar21,0,"V8.RecompileSynchronous");
              }
            }
            else {
              (*pcVar17)("V8.RecompileSynchronous",0);
            }
          }
          local_100 = 0;
          uStack_118 = 0;
          local_120 = (RuntimeCallStats *)0x0;
          uStack_108 = 0;
          uStack_110 = 0;
          if (v8::internal::TracingFlags::runtime_stats != 0) {
            local_120 = (RuntimeCallStats *)(*(long *)(pIVar9 + 0x9520) + 0x58a0);
            v8::internal::RuntimeCallStats::Enter(local_120,(ulong)&local_120 | 8,0xa7);
          }
          if (DAT_01d3ec08 == (byte *)0x0) {
            plVar13 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
            DAT_01d3ec08 = (byte *)(**(code **)(*plVar13 + 0x10))
                                             (plVar13,"disabled-by-default-v8.compile");
          }
          pbVar7 = DAT_01d3ec08;
          local_140 = (byte **)0x0;
          if ((*DAT_01d3ec08 & 5) != 0) {
            local_88 = (long *)0x0;
            local_80 = (long *)0x0;
            plVar13 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
            uVar14 = (**(code **)(*plVar13 + 0x18))
                               (plVar13,0x58,pbVar7,"V8.OptimizeConcurrentPrepare",0,0,0,0,0,0,0,
                                &local_88,0);
            plVar13 = local_80;
            local_80 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 8))();
            }
            plVar13 = local_88;
            local_88 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 8))();
            }
            local_140 = &local_138;
            local_130 = "V8.OptimizeConcurrentPrepare";
            local_138 = pbVar7;
            local_128 = uVar14;
          }
          iVar10 = v8::internal::OptimizedCompilationJob::PrepareJob(pOVar8,pIVar9);
          if (iVar10 == 0) {
            v8::internal::OptimizingCompileDispatcher::QueueForOptimization
                      (*(OptimizingCompileDispatcher **)(pIVar9 + 0xc610),pOVar8);
            if (v8::internal::FLAG_trace_concurrent_recompilation != '\0') {
              v8::internal::PrintF("  ** Queued ");
              local_88 = (long *)**(undefined8 **)(lVar18 + 0x20);
              v8::internal::Object::ShortPrint((Object *)&local_88,(__sFILE *)waitpid);
              v8::internal::PrintF(" for concurrent optimization.\n");
            }
            bVar6 = true;
          }
          else {
            bVar6 = false;
          }
          if ((local_140 != (byte **)0x0) && (*local_138 != 0)) {
            plVar13 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
            (**(code **)(*plVar13 + 0x28))(plVar13,local_138,local_130,local_128);
          }
          if (local_120 == (RuntimeCallStats *)0x0) {
            pcVar17 = *(code **)(pIVar9 + 0xb748);
          }
          else {
            v8::internal::RuntimeCallStats::Leave
                      (local_120,(RuntimeCallTimer *)((ulong)&local_120 | 8));
            pcVar17 = *(code **)(pIVar9 + 0xb748);
          }
          if (pcVar17 != (code *)0x0) {
            if (pcVar17 == v8::internal::Logger::DefaultEventLoggerSentinel) {
              pLVar21 = *(Logger **)(pIVar9 + 0x9558);
              uVar23 = v8::internal::Logger::is_logging(pLVar21);
              if ((uVar23 & 1) != 0) {
                v8::internal::Logger::TimerEvent(pLVar21,1,"V8.RecompileSynchronous");
              }
            }
            else {
              (*pcVar17)("V8.RecompileSynchronous",1);
            }
          }
          if (!bVar6) goto LAB_00ee2b6c;
          local_1c8 = (OptimizedCompilationJob *)0x0;
          uVar23 = *param_1 & 0xffffffff00000000;
          local_120 = (RuntimeCallStats *)
                      (uVar23 | *(uint *)((uVar23 | *(uint *)(*param_1 + 0x13)) + 3));
          v8::internal::FeedbackVector::SetOptimizationMarker((FeedbackVector *)&local_120,4);
          puVar24 = (ulong *)v8::internal::Builtins::builtin_handle
                                       ((Builtins *)(local_148 + 0x9e00),0x38);
          goto LAB_00ee2b98;
        }
        if (v8::internal::FLAG_trace_concurrent_recompilation != '\0') {
          pcVar15 = "  ** High memory pressure, will retry optimizing ";
          goto LAB_00ee2610;
        }
      }
      else if (v8::internal::FLAG_trace_concurrent_recompilation != '\0') {
        pcVar15 = "  ** Compilation queue full, will retry optimizing ";
LAB_00ee2610:
        v8::internal::PrintF(pcVar15);
        local_120 = (RuntimeCallStats *)**(ulong **)(lVar18 + 0x20);
        v8::internal::Object::ShortPrint((Object *)&local_120,(__sFILE *)waitpid);
        v8::internal::PrintF(" later.\n");
      }
LAB_00ee2b6c:
      if (((*(ulong *)(local_148 + 0x2bd8) & 1) == 0) ||
         ((int)*(ulong *)(local_148 + 0x2bd8) != (int)*(undefined8 *)(local_148 + 0xa8))) {
        puVar24 = (ulong *)0x0;
        *(undefined8 *)(local_148 + 0x2bd8) = *(undefined8 *)(local_148 + 0xa8);
      }
      else {
        puVar24 = (ulong *)0x0;
      }
    }
    else {
      pcVar17 = *(code **)(local_148 + 0xb748);
      if (pcVar17 != (code *)0x0) {
        if (pcVar17 == v8::internal::Logger::DefaultEventLoggerSentinel) {
          pLVar21 = *(Logger **)(local_148 + 0x9558);
          uVar23 = v8::internal::Logger::is_logging(pLVar21);
          if ((uVar23 & 1) != 0) {
            v8::internal::Logger::TimerEvent(pLVar21,0,"V8.RecompileSynchronous");
          }
        }
        else {
          (*pcVar17)("V8.RecompileSynchronous",0);
        }
      }
      local_100 = 0;
      uStack_118 = 0;
      local_120 = (RuntimeCallStats *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      if (v8::internal::TracingFlags::runtime_stats != 0) {
        local_120 = (RuntimeCallStats *)(*(long *)(pIVar9 + 0x9520) + 0x58a0);
        v8::internal::RuntimeCallStats::Enter(local_120,(ulong)&local_120 | 8,0xab);
      }
      lVar18 = *(long *)(pOVar8 + 0x18);
      if (DAT_01d3ec10 == (byte *)0x0) {
        plVar13 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        DAT_01d3ec10 = (byte *)(**(code **)(*plVar13 + 0x10))
                                         (plVar13,"disabled-by-default-v8.compile");
      }
      pbVar7 = DAT_01d3ec10;
      local_140 = (byte **)0x0;
      if ((*DAT_01d3ec10 & 5) != 0) {
        local_88 = (long *)0x0;
        local_80 = (long *)0x0;
        plVar13 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        uVar14 = (**(code **)(*plVar13 + 0x18))
                           (plVar13,0x58,pbVar7,"V8.OptimizeNonConcurrent",0,0,0,0,0,0,0,&local_88,0
                           );
        plVar13 = local_80;
        local_80 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        plVar13 = local_88;
        local_88 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
        local_140 = &local_138;
        local_130 = "V8.OptimizeNonConcurrent";
        local_138 = pbVar7;
        local_128 = uVar14;
      }
      iVar10 = v8::internal::OptimizedCompilationJob::PrepareJob(pOVar8,pIVar9);
      if (iVar10 == 0) {
        lVar19 = *(long *)(pIVar9 + 0x9520);
        lVar22 = v8::base::TimeTicks::HighResolutionNow();
        iVar10 = (**(code **)(*(long *)pOVar8 + 0x18))(pOVar8,lVar19 + 0x58a0);
        uVar16 = 2;
        if (iVar10 != 0) {
          uVar16 = 4;
        }
        *(undefined4 *)(pOVar8 + 8) = uVar16;
        lVar19 = v8::base::TimeTicks::HighResolutionNow();
        *(long *)(pOVar8 + 0x28) = (lVar19 - lVar22) + *(long *)(pOVar8 + 0x28);
        if (iVar10 != 0) goto LAB_00ee2820;
        v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
        PerIsolateAssertScope
                  ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *)&local_88,
                   pIVar9);
        lVar22 = v8::base::TimeTicks::HighResolutionNow();
        iVar10 = (**(code **)(*(long *)pOVar8 + 0x20))(pOVar8,pIVar9);
        uVar16 = 3;
        if (iVar10 != 0) {
          uVar16 = 4;
        }
        *(undefined4 *)(pOVar8 + 8) = uVar16;
        lVar19 = v8::base::TimeTicks::HighResolutionNow();
        *(long *)(pOVar8 + 0x30) = (lVar19 - lVar22) + *(long *)(pOVar8 + 0x30);
        v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
        ~PerIsolateAssertScope
                  ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *)&local_88);
        if (iVar10 != 0) goto LAB_00ee2820;
        bVar6 = true;
        v8::internal::OptimizedCompilationJob::RecordCompilationStats(pOVar8,1,pIVar9);
        FUN_00ee61fc(lVar18);
        v8::internal::OptimizedCompilationJob::RecordFunctionCompilation(pOVar8,0xf,pIVar9);
      }
      else {
LAB_00ee2820:
        if (v8::internal::FLAG_trace_opt != '\0') {
          v8::internal::PrintF("[aborted optimizing ");
          local_88 = (long *)**(undefined8 **)(lVar18 + 0x20);
          v8::internal::Object::ShortPrint((Object *)&local_88,(__sFILE *)waitpid);
          uVar14 = v8::internal::GetBailoutReason(*(undefined1 *)(lVar18 + 0x50));
          v8::internal::PrintF(" because: %s]\n",uVar14);
        }
        bVar6 = false;
      }
      if ((local_140 != (byte **)0x0) && (*local_138 != 0)) {
        plVar13 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar13 + 0x28))(plVar13,local_138,local_130,local_128);
      }
      if (local_120 == (RuntimeCallStats *)0x0) {
        pcVar17 = *(code **)(pIVar9 + 0xb748);
      }
      else {
        v8::internal::RuntimeCallStats::Leave(local_120,(RuntimeCallTimer *)((ulong)&local_120 | 8))
        ;
        pcVar17 = *(code **)(pIVar9 + 0xb748);
      }
      if (pcVar17 != (code *)0x0) {
        if (pcVar17 == v8::internal::Logger::DefaultEventLoggerSentinel) {
          pLVar21 = *(Logger **)(pIVar9 + 0x9558);
          uVar23 = v8::internal::Logger::is_logging(pLVar21);
          if ((uVar23 & 1) != 0) {
            v8::internal::Logger::TimerEvent(pLVar21,1,"V8.RecompileSynchronous");
          }
        }
        else {
          (*pcVar17)("V8.RecompileSynchronous",1);
        }
      }
      if (!bVar6) goto LAB_00ee2b6c;
      puVar24 = *(ulong **)(local_1d0 + 0x28);
    }
LAB_00ee2b98:
    v8::internal::CanonicalHandleScope::~CanonicalHandleScope((CanonicalHandleScope *)&local_f0);
    if (local_1f8[0] != (Optional<v8::internal::CompilationHandleScope>)0x0) {
      v8::internal::DeferredHandleScope::Detach(local_1f0);
      v8::internal::OptimizedCompilationInfo::set_deferred_handles(local_1d8,&local_f0);
      this = local_f0;
      local_f0 = (RuntimeCallStats *)0x0;
      if (this != (RuntimeCallStats *)0x0) {
        v8::internal::DeferredHandles::~DeferredHandles((DeferredHandles *)this);
        operator_delete(this);
      }
      v8::internal::DeferredHandleScope::~DeferredHandleScope(local_1f0);
    }
  }
  else {
    uVar14 = 4;
LAB_00ee24f8:
    v8::internal::OptimizedCompilationInfo::AbortOptimization(local_1d0,uVar14);
    puVar24 = (ulong *)0x0;
  }
  pOVar8 = local_1c8;
  local_1c8 = (OptimizedCompilationJob *)0x0;
  if (pOVar8 != (OptimizedCompilationJob *)0x0) {
    (**(code **)(*(long *)pOVar8 + 8))();
  }
  local_1c0 = &PTR__InterruptsScope_01c984b0;
  if (local_1a0 != 2) {
    v8::internal::StackGuard::PopInterruptsScope(local_1b8);
  }
  if ((local_190 != (byte **)0x0) && (*local_188 != 0)) {
    plVar13 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar13 + 0x28))(plVar13,local_188,local_180,local_178);
  }
  if (local_170 == (RuntimeCallStats *)0x0) {
    pcVar17 = *(code **)(pIVar12 + 0xb748);
  }
  else {
    v8::internal::RuntimeCallStats::Leave(local_170,(RuntimeCallTimer *)((ulong)&local_170 | 8));
    pcVar17 = *(code **)(pIVar12 + 0xb748);
  }
  if (pcVar17 != (code *)0x0) {
    if (pcVar17 == v8::internal::Logger::DefaultEventLoggerSentinel) {
      pLVar21 = *(Logger **)(pIVar12 + 0x9558);
      uVar23 = v8::internal::Logger::is_logging(pLVar21);
      if ((uVar23 & 1) != 0) {
        v8::internal::Logger::TimerEvent(pLVar21,1,"V8.OptimizeCode");
      }
    }
    else {
      (*pcVar17)("V8.OptimizeCode",1);
    }
  }
  *(undefined4 *)(pIVar12 + 0x2c60) = uVar4;
LAB_00ee1f2c:
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return puVar24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

