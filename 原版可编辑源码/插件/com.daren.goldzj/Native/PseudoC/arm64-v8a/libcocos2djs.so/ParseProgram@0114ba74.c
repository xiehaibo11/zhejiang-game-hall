
/* v8::internal::Parser::ParseProgram(v8::internal::Isolate*, v8::internal::ParseInfo*) */

Expression * __thiscall
v8::internal::Parser::ParseProgram(Parser *this,Isolate *param_1,ParseInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  byte *pbVar3;
  RuntimeCallStats *pRVar4;
  long *plVar5;
  undefined8 uVar6;
  Expression *pEVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  Logger *this_00;
  int iVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  void *pvVar15;
  ulong uVar16;
  double dVar17;
  byte **local_110;
  byte *local_108;
  char *local_100;
  undefined8 local_f8;
  RuntimeCallStats *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  AstNode *local_b8;
  void *local_a0;
  undefined8 *local_90;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  pRVar4 = *(RuntimeCallStats **)(this + 0x90);
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = (RuntimeCallStats *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if ((pRVar4 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    uVar10 = 0x4a9;
    if ((*(uint *)(param_2 + 8) & 4) != 0) {
      uVar10 = 0xae;
    }
    local_f0 = pRVar4;
    RuntimeCallStats::Enter(pRVar4,(RuntimeCallTimer *)((ulong)&local_f0 | 8),uVar10);
  }
  if (DAT_01d3f740 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f740 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.compile");
  }
  pbVar3 = DAT_01d3f740;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f740 & 5) != 0) {
    local_c8 = (long *)0x0;
    local_c0 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.ParseProgram",0,0,0,0,0,0,0,&local_c8,0);
    plVar5 = local_c0;
    local_c0 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_c8;
    local_c8 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_110 = &local_108;
    local_100 = "V8.ParseProgram";
    local_108 = pbVar3;
    local_f8 = uVar6;
  }
  if (FLAG_log_function_events == '\0') {
    lVar13 = 0;
  }
  else {
    lVar13 = base::TimeTicks::HighResolutionNow();
  }
  DeserializeScopeChain(this,param_1,param_2,*(undefined8 *)(param_2 + 0x58),0);
  Scanner::Initialize((Scanner *)(this + 0x140));
  Scanner::SkipHashBang((Scanner *)(this + 0x140));
  pEVar7 = (Expression *)DoParseProgram(this,param_1,param_2);
  if ((char)param_2[9] < '\0') {
    if (FLAG_stress_validate_asm != '\0') goto joined_r0x0114bc28;
    if ((pEVar7 == (Expression *)0x0) ||
       (uVar16 = Scope::ContainsAsmModule(*(Scope **)(pEVar7 + 0x28)), (uVar16 & 1) == 0))
    goto LAB_0114bc08;
  }
  else {
LAB_0114bc08:
    ParseInfo::ResetCharacterStream(param_2);
joined_r0x0114bc28:
    if (pEVar7 == (Expression *)0x0) goto LAB_0114bc74;
  }
  if (*(SourceRangeMap **)(param_2 + 0x98) != (SourceRangeMap *)0x0) {
    SourceRangeAstVisitor::SourceRangeAstVisitor
              ((SourceRangeAstVisitor *)&local_c8,*(ulong *)(this + 0xa8),pEVar7,
               *(SourceRangeMap **)(param_2 + 0x98));
    pvVar2 = local_a0;
    if ((char)local_c0 == '\0') {
      plVar5 = (long *)GetCurrentStackPosition();
      if (plVar5 < local_c8) {
        local_c0 = (long *)CONCAT71(local_c0._1_7_,1);
        pvVar2 = local_a0;
      }
      else {
        AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitNoStackOverflowCheck
                  ((AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *)&local_c8,local_b8);
        pvVar2 = local_a0;
      }
    }
    while (local_90 != (void *)0x0) {
      pvVar15 = (void *)*local_90;
      local_a0 = pvVar2;
      operator_delete(local_90);
      pvVar2 = local_a0;
      local_90 = pvVar15;
    }
    local_a0 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
LAB_0114bc74:
  HandleSourceURLComments(this,param_1,*(undefined8 *)(param_2 + 0x50));
  if ((pEVar7 != (Expression *)0x0) && (FLAG_log_function_events != '\0')) {
    lVar8 = base::TimeTicks::HighResolutionNow();
    local_c8 = (long *)(lVar8 - lVar13);
    dVar17 = (double)base::TimeDelta::InMillisecondsF((TimeDelta *)&local_c8);
    uVar16 = **(ulong **)(param_2 + 0x50);
    if (((byte)param_2[8] >> 2 & 1) == 0) {
      iVar11 = 0;
      iVar12 = *(int *)((uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 3)) + 7);
      pcVar14 = "parse-script";
    }
    else {
      pcVar14 = "parse-eval";
      iVar11 = -1;
      iVar12 = -1;
    }
    this_00 = *(Logger **)(param_1 + 0x9558);
    uVar9 = Logger::is_logging(this_00);
    if ((uVar9 & 1) != 0) {
      Logger::FunctionEvent(this_00,pcVar14,*(int *)(uVar16 + 0x1f) >> 1,dVar17,iVar11,iVar12,"",0);
    }
  }
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_108,local_100,local_f8);
  }
  if (local_f0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_f0,(RuntimeCallTimer *)((ulong)&local_f0 | 8));
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return pEVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

