
/* v8::internal::Compiler::Compile(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Compiler::ClearExceptionFlag, v8::internal::IsCompiledScope*) */

undefined4 v8::internal::Compiler::Compile(ulong *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  byte *pbVar5;
  RuntimeCallStats *pRVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  undefined4 uVar15;
  code *pcVar16;
  Isolate *this;
  Logger *pLVar17;
  CompilerDispatcher *pCVar18;
  long lVar19;
  long *local_200;
  long *local_1f8;
  long *local_1f0;
  long *local_1e8;
  undefined8 local_1a0;
  long *local_188;
  AstValueFactory *local_180;
  RuntimeCallStats *local_168;
  undefined8 local_148;
  PendingCompilationErrorHandler local_140 [48];
  byte **local_110;
  byte *local_108;
  char *local_100;
  undefined8 local_f8;
  RuntimeCallStats *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined **local_c0;
  StackGuard *local_b8;
  int local_a0;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar8 = *(uint *)((long)param_1 + 4);
  this = (Isolate *)((ulong)uVar8 << 0x20);
  uVar4 = *(undefined4 *)(this + 0x2c60);
  *(undefined4 *)(this + 0x2c60) = 3;
  InterruptsScope::InterruptsScope((InterruptsScope *)&local_c0,this,0xff,0);
  puVar1 = (undefined8 *)((ulong)uVar8 << 0x20 | 0xb748);
  local_c0 = &PTR__InterruptsScope_01c98490;
  pcVar16 = (code *)*puVar1;
  if (pcVar16 != (code *)0x0) {
    if (pcVar16 == Logger::DefaultEventLoggerSentinel) {
      pLVar17 = *(Logger **)(this + 0x9558);
      uVar12 = Logger::is_logging(pLVar17);
      if ((uVar12 & 1) != 0) {
        Logger::TimerEvent(pLVar17,0,"V8.CompileCode");
      }
    }
    else {
      (*pcVar16)("V8.CompileCode",0);
    }
  }
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = (RuntimeCallStats *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_f0 = (RuntimeCallStats *)(*(long *)(this + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_f0,(ulong)&local_f0 | 8,0x433);
  }
  if (DAT_01d3ebd0 == (byte *)0x0) {
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ebd0 = (byte *)(**(code **)(*plVar9 + 0x10))(plVar9,"disabled-by-default-v8.compile");
  }
  pbVar5 = DAT_01d3ebd0;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3ebd0 & 5) != 0) {
    local_1f0 = (long *)0x0;
    local_1e8 = (long *)0x0;
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar10 = (**(code **)(*plVar9 + 0x18))
                       (plVar9,0x58,pbVar5,"V8.CompileCode",0,0,0,0,0,0,0,&local_1f0,0);
    plVar9 = local_1e8;
    local_1e8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    plVar9 = local_1f0;
    local_1f0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    local_100 = "V8.CompileCode";
    local_110 = &local_108;
    local_108 = pbVar5;
    local_f8 = uVar10;
  }
  lVar19 = *(long *)(this + 0x9520);
  lVar11 = base::TimeTicks::HighResolutionNow();
  ParseInfo::ParseInfo((ParseInfo *)&local_1f0,this,param_1);
  local_1e8 = (long *)((ulong)local_1e8 | 0x100);
  pCVar18 = *(CompilerDispatcher **)(this + 0xb700);
  uVar12 = CompilerDispatcher::IsEnqueued(pCVar18,param_1);
  if ((uVar12 & 1) == 0) {
    uVar8 = *(uint *)(*param_1 + 3);
    if (((uVar8 & 1) != 0) &&
       (uVar12 = *param_1 & 0xffffffff00000000,
       *(short *)((uVar12 | 7) + (ulong)*(uint *)((uVar12 | uVar8) - 1)) == 0x95)) {
      uVar12 = *param_1 & 0xffffffff00000000;
      uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)(*param_1 + 3)) + 0xf);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)(this + 0x95a0);
        if (puVar13 == *(ulong **)(this + 0x95a8)) {
          puVar13 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)(this + 0x95a0) = puVar13 + 1;
        *puVar13 = uVar12;
      }
      else {
        puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(this + 0x95b8),uVar12);
      }
      ConsumedPreparseData::For((ConsumedPreparseData *)&local_1f8,this,puVar13);
      plVar9 = local_188;
      local_188 = local_1f8;
      local_1f8 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    uVar12 = parsing::ParseAny(&local_1f0,param_1,this,0);
    if ((uVar12 & 1) != 0) {
      local_200 = (long *)0x0;
      uVar10 = *(undefined8 *)(this + 0x95d0);
      uStack_88 = 0;
      local_90 = (RuntimeCallStats *)0x0;
      uStack_78 = 0;
      uStack_80 = 0;
      local_70 = 0;
      if ((local_168 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
        local_90 = local_168;
        uVar15 = 0x42f;
        if (*(int *)(local_168 + 0x14) == 1) {
          uVar15 = 0x430;
        }
        RuntimeCallStats::Enter(local_168,(RuntimeCallTimer *)((ulong)&local_90 | 8),uVar15);
      }
      uVar12 = Rewriter::Rewrite((ParseInfo *)&local_1f0);
      if ((uVar12 & 1) == 0) {
        uVar8 = 0;
        uVar7 = 0;
        if (local_90 == (RuntimeCallStats *)0x0) goto LAB_00ee136c;
LAB_00ee1498:
        RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
        if ((uVar7 & 1) != 0) goto LAB_00ee1370;
LAB_00ee14b0:
        ParseInfo::ResetCharacterStream((ParseInfo *)&local_1f0);
LAB_00ee14b8:
        if (param_2 == 1) {
          uVar15 = 0;
          *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
          plVar9 = local_200;
        }
        else {
          if (((*(ulong *)(this + 0x2bd8) & 1) != 0) &&
             ((int)*(ulong *)(this + 0x2bd8) == *(int *)(this + 0xa8))) {
            if (local_140[0] == (PendingCompilationErrorHandler)0x0) {
              Isolate::StackOverflow(this);
            }
            else {
              PendingCompilationErrorHandler::ReportErrors(local_140,this,local_1a0,local_180);
            }
          }
          uVar15 = 0;
          plVar9 = local_200;
        }
      }
      else {
        uVar7 = DeclarationScope::Analyze((ParseInfo *)&local_1f0);
        uVar8 = uVar7;
        if (local_90 != (RuntimeCallStats *)0x0) goto LAB_00ee1498;
LAB_00ee136c:
        if ((uVar8 & 1) == 0) goto LAB_00ee14b0;
LAB_00ee1370:
        FUN_00ee6ca4(&local_90,&local_1f0,local_148,uVar10,&local_200);
        pRVar6 = local_90;
        ParseInfo::ResetCharacterStream((ParseInfo *)&local_1f0);
        if (pRVar6 == (RuntimeCallStats *)0x0) goto LAB_00ee14b8;
        AstValueFactory::Internalize(local_180,this);
        uVar12 = FUN_00ee1730(&local_1f0,this,param_1,pRVar6,&local_200);
        if ((uVar12 & 1) == 0) {
          if (param_2 == 1) {
            uVar15 = 0;
            *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
          }
          else {
            if (((*(ulong *)(this + 0x2bd8) & 1) != 0) &&
               ((int)*(ulong *)(this + 0x2bd8) == *(int *)(this + 0xa8))) {
              if (local_140[0] == (PendingCompilationErrorHandler)0x0) {
                Isolate::StackOverflow(this);
              }
              else {
                PendingCompilationErrorHandler::ReportErrors(local_140,this,local_1a0,local_180);
              }
            }
            uVar15 = 0;
          }
        }
        else {
          IsCompiledScope::IsCompiledScope
                    ((IsCompiledScope *)&local_90,*param_1,*param_1 & 0xffffffff00000000);
          *param_3 = local_90;
          *(char *)(param_3 + 1) = (char)uStack_88;
          if (FLAG_stress_lazy_source_positions != '\0') {
            SharedFunctionInfo::EnsureSourcePositionsAvailable(this,param_1);
            for (plVar9 = local_200; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
              uVar10 = GetSharedFunctionInfo
                                 (*(undefined8 *)(*(long *)(plVar9[1] + 0x28) + 0x10),local_1a0,this
                                 );
              SharedFunctionInfo::EnsureSourcePositionsAvailable(this,uVar10);
            }
          }
          uVar15 = 1;
        }
        (**(code **)(*(long *)pRVar6 + 8))(pRVar6);
        plVar9 = local_200;
      }
      while (plVar9 != (long *)0x0) {
        plVar2 = (long *)*plVar9;
        plVar3 = (long *)plVar9[1];
        plVar9[1] = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        operator_delete(plVar9);
        plVar9 = plVar2;
      }
      goto LAB_00ee15e4;
    }
  }
  else {
    uVar12 = CompilerDispatcher::FinishNow(pCVar18,param_1);
    if ((uVar12 & 1) != 0) {
      IsCompiledScope::IsCompiledScope
                ((IsCompiledScope *)&local_90,*param_1,*param_1 & 0xffffffff00000000);
      *param_3 = local_90;
      *(char *)(param_3 + 1) = (char)uStack_88;
      uVar15 = 1;
      goto LAB_00ee15e4;
    }
  }
  if (param_2 == 1) {
    uVar15 = 0;
    *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
  }
  else {
    if (((*(ulong *)(this + 0x2bd8) & 1) != 0) &&
       ((int)*(ulong *)(this + 0x2bd8) == *(int *)(this + 0xa8))) {
      if (local_140[0] == (PendingCompilationErrorHandler)0x0) {
        Isolate::StackOverflow(this);
      }
      else {
        PendingCompilationErrorHandler::ReportErrors(local_140,this,local_1a0,local_180);
      }
    }
    uVar15 = 0;
  }
LAB_00ee15e4:
  ParseInfo::~ParseInfo((ParseInfo *)&local_1f0);
  lVar14 = base::TimeTicks::HighResolutionNow();
  *(long *)(lVar19 + 0x15c8) = (lVar14 - lVar11) + *(long *)(lVar19 + 0x15c8);
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar9 + 0x28))(plVar9,local_108,local_100,local_f8);
  }
  if (local_f0 == (RuntimeCallStats *)0x0) {
    pcVar16 = (code *)*puVar1;
  }
  else {
    RuntimeCallStats::Leave(local_f0,(RuntimeCallTimer *)((ulong)&local_f0 | 8));
    pcVar16 = (code *)*puVar1;
  }
  if (pcVar16 != (code *)0x0) {
    if (pcVar16 == Logger::DefaultEventLoggerSentinel) {
      pLVar17 = *(Logger **)(this + 0x9558);
      uVar12 = Logger::is_logging(pLVar17);
      if ((uVar12 & 1) != 0) {
        Logger::TimerEvent(pLVar17,1,"V8.CompileCode");
      }
    }
    else {
      (*pcVar16)("V8.CompileCode",1);
    }
  }
  local_c0 = &PTR__InterruptsScope_01c984b0;
  if (local_a0 != 2) {
    StackGuard::PopInterruptsScope(local_b8);
  }
  *(undefined4 *)(this + 0x2c60) = uVar4;
  return uVar15;
}

