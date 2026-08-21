
/* v8::internal::Compiler::GetSharedFunctionInfoForStreamedScript(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, v8::internal::Compiler::ScriptDetails const&,
   v8::ScriptOriginOptions, v8::internal::ScriptStreamingData*) */

long v8::internal::Compiler::GetSharedFunctionInfoForStreamedScript
               (Isolate *param_1,long *param_2,undefined8 *param_3,undefined4 param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  ulong *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  CompilationCache *pCVar12;
  long lVar13;
  BackgroundCompileTask *this;
  long *plVar14;
  CompilerDispatcher *this_00;
  undefined8 uVar15;
  long *plVar16;
  undefined **local_100;
  StackGuard *local_f8;
  int local_e0;
  Isolate *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  TimedHistogram *local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_c0 = 0;
  local_d0 = param_1;
  local_c8 = base::TimeTicks::HighResolutionNow();
  lVar8 = *(long *)(param_1 + 0x9520);
  local_b8 = (TimedHistogram *)(lVar8 + 0xb30);
  TimedHistogram::Start
            (local_b8,(ElapsedTimer *)(lVar8 + 0xb60),*(Isolate **)(*(long *)(lVar8 + 0xb50) + 0x10)
            );
  local_b0 = 5;
  InterruptsScope::InterruptsScope((InterruptsScope *)&local_100,param_1,0xff,0);
  local_100 = &PTR__InterruptsScope_01c98490;
  lVar8 = *(long *)(param_1 + 0x9520);
  iVar7 = *(int *)(*param_2 + 7);
  if (*(char *)(lVar8 + 0x1978) == '\0') {
    *(char *)(lVar8 + 0x1978) = '\x01';
    piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar8 + 0x1960))
    ;
    *(int **)(lVar8 + 0x1970) = piVar4;
  }
  else {
    piVar4 = *(int **)(lVar8 + 0x1970);
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + iVar7;
  }
  lVar8 = *(long *)(param_1 + 0x9520);
  if (*(char *)(lVar8 + 0x19d8) == '\0') {
    *(char *)(lVar8 + 0x19d8) = '\x01';
    piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar8 + 0x19c0))
    ;
    *(int **)(lVar8 + 0x19d0) = piVar4;
  }
  else {
    piVar4 = *(int **)(lVar8 + 0x19d0);
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + iVar7;
  }
  plVar14 = *(long **)(param_5 + 0x10);
  pCVar12 = *(CompilationCache **)(param_1 + 0x9518);
  uVar15 = param_3[1];
  uVar1 = *(undefined4 *)param_3;
  uVar2 = *(undefined4 *)((long)param_3 + 4);
  lVar8 = *plVar14;
  uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x95a0);
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar9;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
  }
  lVar6 = CompilationCache::LookupScript
                    (pCVar12,param_2,uVar15,uVar1,uVar2,param_4,puVar5,*(uint *)(lVar8 + 8) >> 3 & 1
                    );
  if (lVar6 != 0) {
    local_b0._0_5_ = CONCAT14(1,(undefined4)local_b0);
    goto LAB_00ee5c0c;
  }
  local_80 = param_3[4];
  uStack_98 = param_3[1];
  local_a0 = *param_3;
  uStack_88 = param_3[3];
  uStack_90 = param_3[2];
  uVar15 = FUN_00ee4dfc(param_1,lVar8,param_2,&local_a0,param_4,0);
  Parser::UpdateStatistics((Parser *)plVar14[1],param_1,uVar15);
  Parser::HandleSourceURLComments((Parser *)plVar14[1],param_1,uVar15);
  if ((*(long *)(lVar8 + 0xa8) == 0) || (lVar13 = plVar14[2], lVar13 == 0)) {
LAB_00ee5bc8:
    uVar9 = *(ulong *)(param_1 + 0x2bd8);
    iVar7 = (int)uVar9;
  }
  else {
    AstValueFactory::Internalize(*(AstValueFactory **)(lVar8 + 0x70),param_1);
    FUN_00ee7858(lVar8,param_1);
    lVar6 = Factory::NewSharedFunctionInfoForLiteral
                      ((Factory *)param_1,*(undefined8 *)(lVar8 + 0xa8),
                       *(undefined8 *)(lVar8 + 0x50),1);
    uVar9 = FUN_00ee1730(lVar8,param_1,lVar6,lVar13,plVar14 + 3);
    if ((uVar9 & 1) != 0) {
      plVar14 = *(long **)(lVar8 + 0x50);
      puVar10 = (uint *)(*plVar14 + 0x2f);
      *puVar10 = *puVar10 & 0xfffffffe | 4;
      puVar11 = *(undefined8 **)(lVar8 + 0xa0);
      if ((puVar11 != (undefined8 *)0x0) && (plVar16 = (long *)puVar11[1], plVar16 != (long *)0x0))
      {
        this_00 = (CompilerDispatcher *)*puVar11;
        do {
          while( true ) {
            local_a8 = *plVar14;
            uVar9 = plVar16[2];
            puVar11 = (undefined8 *)
                      Script::FindSharedFunctionInfo
                                ((Script *)&local_a8,param_1,(FunctionLiteral *)plVar16[1]);
            if (puVar11 == (undefined8 *)0x0) break;
            CompilerDispatcher::RegisterSharedFunctionInfo(this_00,uVar9,*puVar11);
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_00ee5b10;
          }
          CompilerDispatcher::AbortJob(this_00,uVar9);
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
LAB_00ee5b10:
      if (lVar6 != 0) {
        uVar9 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)(param_1 + 0x95a0);
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
          *puVar5 = uVar9;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
        }
        CompilationCache::PutScript(pCVar12,param_2,puVar5,*(uint *)(lVar8 + 8) >> 3 & 1,lVar6);
        goto LAB_00ee5c0c;
      }
      goto LAB_00ee5bc8;
    }
    if (((*(ulong *)(param_1 + 0x2bd8) & 1) == 0) ||
       ((int)*(ulong *)(param_1 + 0x2bd8) != *(int *)(param_1 + 0xa8))) goto LAB_00ee5bc8;
    if (*(PendingCompilationErrorHandler *)(lVar8 + 0xb0) == (PendingCompilationErrorHandler)0x0) {
      Isolate::StackOverflow(param_1);
      goto LAB_00ee5bc8;
    }
    PendingCompilationErrorHandler::ReportErrors
              ((PendingCompilationErrorHandler *)(lVar8 + 0xb0),param_1,
               *(undefined8 *)(lVar8 + 0x50),*(undefined8 *)(lVar8 + 0x70));
    uVar9 = *(ulong *)(param_1 + 0x2bd8);
    iVar7 = (int)uVar9;
  }
  if (((uVar9 & 1) != 0) && (iVar7 == *(int *)(param_1 + 0xa8))) {
    if (*(PendingCompilationErrorHandler *)(lVar8 + 0xb0) != (PendingCompilationErrorHandler)0x0) {
      PendingCompilationErrorHandler::ReportErrors
                ((PendingCompilationErrorHandler *)(lVar8 + 0xb0),param_1,
                 *(undefined8 *)(lVar8 + 0x50),*(undefined8 *)(lVar8 + 0x70));
      lVar6 = 0;
      goto LAB_00ee5c0c;
    }
    Isolate::StackOverflow(param_1);
  }
  lVar6 = 0;
LAB_00ee5c0c:
  this = *(BackgroundCompileTask **)(param_5 + 0x10);
  *(undefined8 *)(param_5 + 0x10) = 0;
  if (this != (BackgroundCompileTask *)0x0) {
    BackgroundCompileTask::~BackgroundCompileTask(this);
    operator_delete(this);
  }
  local_100 = &PTR__InterruptsScope_01c984b0;
  if (local_e0 != 2) {
    StackGuard::PopInterruptsScope(local_f8);
  }
  FUN_00ee4fcc(&local_d0);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

