
ulong * FUN_00ee31cc(ParseInfo *param_1,Isolate *param_2,undefined8 *param_3,undefined8 param_4,
                    vector *param_5)

{
  TimedHistogram *this;
  char *pcVar1;
  bool bVar2;
  byte *pbVar3;
  FunctionLiteral *pFVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  RuntimeCallStats *pRVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  AccountingAllocator *pAVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  code *pcVar16;
  long lVar17;
  uint *puVar18;
  undefined8 *puVar19;
  Logger *pLVar20;
  CompilerDispatcher *this_00;
  uint uVar21;
  long *plVar22;
  FunctionLiteral *pFVar23;
  ParseInfo *pPVar24;
  byte **local_140;
  byte *local_138;
  char *local_130;
  undefined8 local_128;
  RuntimeCallStats *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined **local_f8;
  StackGuard *local_f0;
  int local_d8;
  byte **local_c8;
  byte *local_c0;
  char *local_b8;
  undefined8 local_b0;
  long *local_a8;
  RuntimeCallStats *local_a0;
  RuntimeCallStats *pRStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  FunctionLiteral *local_78 [3];
  
  pcVar16 = *(code **)(param_2 + 0xb748);
  if (pcVar16 != (code *)0x0) {
    if (pcVar16 == v8::internal::Logger::DefaultEventLoggerSentinel) {
      pLVar20 = *(Logger **)(param_2 + 0x9558);
      uVar8 = v8::internal::Logger::is_logging(pLVar20);
      if ((uVar8 & 1) != 0) {
        v8::internal::Logger::TimerEvent(pLVar20,0,"V8.CompileCode");
      }
    }
    else {
      (*pcVar16)("V8.CompileCode",0);
    }
  }
  if (DAT_01d3ec18 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec18 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.compile");
  }
  pbVar3 = DAT_01d3ec18;
  local_c8 = (byte **)0x0;
  if ((*DAT_01d3ec18 & 5) != 0) {
    local_a0 = (RuntimeCallStats *)0x0;
    pRStack_98 = (RuntimeCallStats *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    param_5 = (vector *)0x0;
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar3,"V8.CompileCode",0,0,0,0,0,0,0,&local_a0,0);
    pRVar9 = pRStack_98;
    pRStack_98 = (RuntimeCallStats *)0x0;
    if (pRVar9 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar9 + 8))();
    }
    pRVar9 = local_a0;
    local_a0 = (RuntimeCallStats *)0x0;
    if (pRVar9 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar9 + 8))();
    }
    local_c8 = &local_c0;
    local_b8 = "V8.CompileCode";
    local_c0 = pbVar3;
    local_b0 = uVar7;
  }
  v8::internal::InterruptsScope::InterruptsScope((InterruptsScope *)&local_f8,param_2,0xff,0);
  local_f8 = &PTR__InterruptsScope_01c98490;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = (RuntimeCallStats *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    uVar15 = 0x43b;
    if ((*(uint *)(param_1 + 8) & 4) != 0) {
      uVar15 = 0x431;
    }
    local_120 = (RuntimeCallStats *)(*(long *)(param_2 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_120,(ulong)&local_120 | 8,uVar15);
  }
  uVar15 = *(undefined4 *)(param_2 + 0x2c60);
  *(undefined4 *)(param_2 + 0x2c60) = 3;
  if ((*(long *)(param_1 + 0xa8) == 0) &&
     (uVar8 = v8::internal::parsing::ParseProgram(param_1,param_2,0), (uVar8 & 1) == 0)) {
    puVar10 = (ulong *)0x0;
    goto LAB_00ee3928;
  }
  lVar17 = *(long *)(param_2 + 0x9520);
  this = (TimedHistogram *)(lVar17 + 0xa50);
  if ((*(uint *)(param_1 + 8) & 4) != 0) {
    this = (TimedHistogram *)(lVar17 + 0xa88);
  }
  v8::internal::TimedHistogram::Start
            (this,(ElapsedTimer *)(this + 0x30),*(Isolate **)(*(long *)(this + 0x20) + 0x10));
  if (DAT_01d3ec20 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec20 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.compile");
  }
  pbVar3 = DAT_01d3ec20;
  local_140 = (byte **)0x0;
  if ((*DAT_01d3ec20 & 5) != 0) {
    pcVar1 = "V8.Compile";
    if ((*(uint *)(param_1 + 8) & 4) != 0) {
      pcVar1 = "V8.CompileEval";
    }
    local_a0 = (RuntimeCallStats *)0x0;
    pRStack_98 = (RuntimeCallStats *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    param_5 = (vector *)0x0;
    uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,0x58,pbVar3,pcVar1,0,0,0,0,0,0,0,&local_a0,0);
    pRVar9 = pRStack_98;
    pRStack_98 = (RuntimeCallStats *)0x0;
    if (pRVar9 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar9 + 8))();
    }
    pRVar9 = local_a0;
    local_a0 = (RuntimeCallStats *)0x0;
    if (pRVar9 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar9 + 8))();
    }
    local_140 = &local_138;
    local_138 = pbVar3;
    local_130 = "V8.Compile";
    local_128 = uVar7;
    if ((*(uint *)(param_1 + 8) & 4) != 0) {
      local_130 = "V8.CompileEval";
    }
  }
  pFVar23 = *(FunctionLiteral **)(param_2 + 0x95d0);
  FUN_00ee7858(param_1,param_2);
  v8::internal::AstValueFactory::Internalize(*(AstValueFactory **)(param_1 + 0x70),param_2);
  pRVar9 = *(RuntimeCallStats **)(param_1 + 0x88);
  local_80 = 0;
  pRStack_98 = (RuntimeCallStats *)0x0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((pRVar9 != (RuntimeCallStats *)0x0) && (v8::internal::TracingFlags::runtime_stats != 0)) {
    uVar14 = 0x42f;
    if (*(int *)(pRVar9 + 0x14) == 1) {
      uVar14 = 0x430;
    }
    local_a0 = pRVar9;
    v8::internal::RuntimeCallStats::Enter(pRVar9,(RuntimeCallTimer *)((ulong)&local_a0 | 8),uVar14);
  }
  uVar8 = v8::internal::Rewriter::Rewrite(param_1);
  if ((uVar8 & 1) == 0) {
    uVar8 = 0;
    if (local_a0 == (RuntimeCallStats *)0x0) goto LAB_00ee350c;
LAB_00ee37b4:
    v8::internal::RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
    if ((uVar8 & 1) == 0) goto LAB_00ee3880;
LAB_00ee3510:
    v8::internal::DeclarationScope::AllocateScopeInfos(param_1,param_2);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    pAVar13 = (AccountingAllocator *)0x1;
    puVar10 = (ulong *)v8::internal::Factory::NewSharedFunctionInfoForLiteral
                                 ((Factory *)param_2,*(undefined8 *)(param_1 + 0xa8),uVar7);
    pRStack_98 = (RuntimeCallStats *)0x0;
    uStack_90 = 0;
    local_a0 = (RuntimeCallStats *)0x0;
    local_78[0] = *(FunctionLiteral **)(param_1 + 0xa8);
    std::__ndk1::
    vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>::
    __push_back_slow_path<v8::internal::FunctionLiteral*>
              ((vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
                *)&local_a0,local_78);
    do {
      do {
        if (local_a0 == pRStack_98) {
          v8::internal::ParseInfo::ResetCharacterStream(param_1);
          goto LAB_00ee37dc;
        }
        pRStack_98 = pRStack_98 + -8;
        pPVar24 = *(ParseInfo **)pRStack_98;
        puVar11 = (ulong *)v8::internal::Compiler::GetSharedFunctionInfo(pPVar24,uVar7,param_2);
        uVar21 = *(uint *)(*puVar11 + 3);
      } while ((uVar21 != 0x84) &&
              (((uVar21 & 1) == 0 ||
               (uVar8 = *puVar11 & 0xffffffff00000000,
               1 < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar21) - 1)) - 0x95))));
      if ((v8::internal::FLAG_validate_asm == '\0') ||
         (((*(uint *)(param_1 + 8) >> 0xc & 1) != 0 ||
          ((v8::internal::FLAG_stress_validate_asm == '\0' &&
           (uVar8 = v8::internal::Scope::IsAsmModule(*(Scope **)(pPVar24 + 0x28)), (uVar8 & 1) == 0)
           ))))) {
LAB_00ee3690:
        pAVar13 = (AccountingAllocator *)&local_a0;
        v8::internal::interpreter::Interpreter::NewCompilationJob
                  ((Interpreter *)param_1,pPVar24,pFVar23,pAVar13,param_5);
        plVar6 = local_a8;
        lVar17 = v8::base::TimeTicks::HighResolutionNow();
        iVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar14 = 2;
        if (iVar5 != 0) {
          uVar14 = 4;
        }
        *(undefined4 *)(plVar6 + 1) = uVar14;
        lVar12 = v8::base::TimeTicks::HighResolutionNow();
        plVar6[6] = (lVar12 - lVar17) + plVar6[6];
        if ((iVar5 == 1) || (iVar5 = FUN_00ee6e98(local_a8,puVar11,param_2), iVar5 == 1)) {
          uVar21 = 1;
        }
        else {
          if (v8::internal::FLAG_stress_lazy_source_positions != '\0') {
            v8::internal::SharedFunctionInfo::EnsureSourcePositionsAvailable(param_2,puVar11);
          }
          if (puVar11 == puVar10) {
            uVar8 = *puVar10;
LAB_00ee377c:
            v8::internal::IsCompiledScope::IsCompiledScope
                      ((IsCompiledScope *)local_78,uVar8,uVar8 & 0xffffffff00000000);
            uVar21 = 0;
            *param_3 = local_78[0];
            *(char *)(param_3 + 1) = (char)local_78[1];
          }
          else {
            uVar21 = 0;
            if ((puVar10 != (ulong *)0x0) && (puVar11 != (ulong *)0x0)) {
              uVar8 = *puVar11;
              if (uVar8 == *puVar10) goto LAB_00ee377c;
              uVar21 = 0;
            }
          }
        }
        plVar6 = local_a8;
        local_a8 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      else {
        v8::internal::AsmJs::NewCompilationJob((AsmJs *)param_1,pPVar24,pFVar23,pAVar13);
        pFVar4 = local_78[0];
        lVar17 = v8::base::TimeTicks::HighResolutionNow();
        iVar5 = (**(code **)(*(long *)pFVar4 + 0x10))(pFVar4);
        uVar14 = 2;
        if (iVar5 != 0) {
          uVar14 = 4;
        }
        *(undefined4 *)(pFVar4 + 8) = uVar14;
        lVar12 = v8::base::TimeTicks::HighResolutionNow();
        *(long *)(pFVar4 + 0x30) = (lVar12 - lVar17) + *(long *)(pFVar4 + 0x30);
        if ((iVar5 == 0) && (iVar5 = FUN_00ee6e98(local_78[0],puVar11,param_2), iVar5 == 0)) {
          uVar21 = 2;
          bVar2 = true;
        }
        else {
          uVar21 = 0;
          bVar2 = false;
        }
        pFVar4 = local_78[0];
        local_78[0] = (FunctionLiteral *)0x0;
        if (pFVar4 != (FunctionLiteral *)0x0) {
          (**(code **)(*(long *)pFVar4 + 8))();
        }
        if (!bVar2) goto LAB_00ee3690;
      }
    } while ((uVar21 | 2) == 2);
    puVar10 = (ulong *)0x0;
LAB_00ee37dc:
    if (local_a0 != (RuntimeCallStats *)0x0) {
      pRStack_98 = local_a0;
      operator_delete(local_a0);
    }
    if (puVar10 == (ulong *)0x0) goto LAB_00ee3880;
    plVar6 = *(long **)(param_1 + 0x50);
    puVar18 = (uint *)(*plVar6 + 0x2f);
    *puVar18 = *puVar18 & 0xfffffffe | 4;
    puVar19 = *(undefined8 **)(param_1 + 0xa0);
    if ((puVar19 != (undefined8 *)0x0) && (plVar22 = (long *)puVar19[1], plVar22 != (long *)0x0)) {
      this_00 = (CompilerDispatcher *)*puVar19;
      do {
        while( true ) {
          local_a0 = (RuntimeCallStats *)*plVar6;
          uVar8 = plVar22[2];
          puVar19 = (undefined8 *)
                    v8::internal::Script::FindSharedFunctionInfo
                              ((Script *)&local_a0,param_2,(FunctionLiteral *)plVar22[1]);
          if (puVar19 == (undefined8 *)0x0) break;
          v8::internal::CompilerDispatcher::RegisterSharedFunctionInfo(this_00,uVar8,*puVar19);
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto joined_r0x00ee38e8;
        }
        v8::internal::CompilerDispatcher::AbortJob(this_00,uVar8);
        plVar22 = (long *)*plVar22;
      } while (plVar22 != (long *)0x0);
    }
  }
  else {
    uVar8 = v8::internal::DeclarationScope::Analyze(param_1);
    uVar8 = uVar8 & 0xffffffff;
    if (local_a0 != (RuntimeCallStats *)0x0) goto LAB_00ee37b4;
LAB_00ee350c:
    if ((uVar8 & 1) != 0) goto LAB_00ee3510;
LAB_00ee3880:
    if ((*(ulong *)(param_2 + 0x2bd8) & 1) == 0) {
      puVar10 = (ulong *)0x0;
    }
    else {
      if ((int)*(ulong *)(param_2 + 0x2bd8) == *(int *)(param_2 + 0xa8)) {
        if (*(PendingCompilationErrorHandler *)(param_1 + 0xb0) ==
            (PendingCompilationErrorHandler)0x0) {
          v8::internal::Isolate::StackOverflow(param_2);
        }
        else {
          v8::internal::PendingCompilationErrorHandler::ReportErrors
                    ((PendingCompilationErrorHandler *)(param_1 + 0xb0),param_2,
                     *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x70));
        }
      }
      puVar10 = (ulong *)0x0;
    }
  }
joined_r0x00ee38e8:
  if ((local_140 != (byte **)0x0) && (*local_138 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_138,local_130,local_128);
  }
  v8::internal::TimedHistogram::Stop
            (this,(ElapsedTimer *)(this + 0x30),*(Isolate **)(*(long *)(this + 0x20) + 0x10));
LAB_00ee3928:
  *(undefined4 *)(param_2 + 0x2c60) = uVar15;
  if (local_120 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_120,(RuntimeCallTimer *)((ulong)&local_120 | 8));
  }
  local_f8 = &PTR__InterruptsScope_01c984b0;
  if (local_d8 != 2) {
    v8::internal::StackGuard::PopInterruptsScope(local_f0);
  }
  if ((local_c8 != (byte **)0x0) && (*local_c0 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_c0,local_b8,local_b0);
  }
  pcVar16 = *(code **)(param_2 + 0xb748);
  if (pcVar16 != (code *)0x0) {
    if (pcVar16 == v8::internal::Logger::DefaultEventLoggerSentinel) {
      pLVar20 = *(Logger **)(param_2 + 0x9558);
      uVar8 = v8::internal::Logger::is_logging(pLVar20);
      if ((uVar8 & 1) != 0) {
        v8::internal::Logger::TimerEvent(pLVar20,1,"V8.CompileCode");
      }
    }
    else {
      (*pcVar16)("V8.CompileCode",1);
    }
  }
  return puVar10;
}

