
/* v8::internal::Parser::ParseFunction(v8::internal::Isolate*, v8::internal::ParseInfo*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

Expression * __thiscall
v8::internal::Parser::ParseFunction(Parser *this,Isolate *param_1,ParseInfo *param_2,ulong *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  byte *pbVar7;
  RuntimeCallStats *pRVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  CanonicalHandleScope *pCVar12;
  ulong *puVar13;
  Expression *pEVar14;
  long lVar15;
  size_t sVar16;
  ulong uVar17;
  void *pvVar18;
  Logger *this_00;
  long lVar19;
  ulong uVar20;
  double dVar21;
  byte **local_120;
  byte *local_118;
  char *local_110;
  undefined8 local_108;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *local_d0;
  long *local_c8;
  AstNode *local_c0;
  void *local_a8;
  undefined8 *local_98;
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  pRVar8 = *(RuntimeCallStats **)(this + 0x90);
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if ((pRVar8 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    local_100 = pRVar8;
    RuntimeCallStats::Enter(pRVar8,(RuntimeCallTimer *)((ulong)&local_100 | 8),0xaf);
  }
  if (DAT_01d3f748 == (byte *)0x0) {
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f748 = (byte *)(**(code **)(*plVar9 + 0x10))(plVar9,"disabled-by-default-v8.compile");
  }
  pbVar7 = DAT_01d3f748;
  local_120 = (byte **)0x0;
  if ((*DAT_01d3f748 & 5) != 0) {
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar10 = (**(code **)(*plVar9 + 0x18))
                       (plVar9,0x58,pbVar7,"V8.ParseFunction",0,0,0,0,0,0,0,&local_d0,0);
    plVar9 = local_c8;
    local_c8 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    plVar9 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    local_120 = &local_118;
    local_110 = "V8.ParseFunction";
    local_118 = pbVar7;
    local_108 = uVar10;
  }
  if (FLAG_log_function_events == '\0') {
    lVar19 = 0;
  }
  else {
    lVar19 = base::TimeTicks::HighResolutionNow();
  }
  DeserializeScopeChain(this,param_1,param_2,*(undefined8 *)(param_2 + 0x58),0);
  uVar17 = *param_4;
  uVar3 = *(uint *)(uVar17 + 7);
  uVar20 = uVar17 & 0xffffffff00000000;
  plVar9 = (long *)(uVar20 | uVar3);
  if (((uVar3 & 1) == 0) || (*(short *)((uVar20 | 7) + (ulong)*(uint *)((long)plVar9 - 1)) != 0x83))
  {
    if (uVar3 != 0) {
      if ((uVar3 & 1) != 0) goto LAB_0114d960;
      goto LAB_0114d9a4;
    }
LAB_0114d9a0:
    plVar9 = *(long **)(uVar20 + 200);
LAB_0114d9a4:
    pCVar12 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    if (pCVar12 != (CanonicalHandleScope *)0x0) goto LAB_0114d9ac;
LAB_0114d9bc:
    puVar13 = *(ulong **)(param_1 + 0x95a0);
    if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar13 + 1;
    *puVar13 = (ulong)plVar9;
  }
  else {
    local_d0 = plVar9;
    uVar11 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_d0);
    if ((uVar11 & 1) == 0) goto LAB_0114d9a0;
    plVar9 = (long *)(uVar20 | *(uint *)(uVar17 + 7));
    if ((*(uint *)(uVar17 + 7) & 1) == 0) goto LAB_0114d9a4;
LAB_0114d960:
    if (*(short *)((uVar20 | 7) + (ulong)*(uint *)((long)plVar9 - 1)) != 0x83) goto LAB_0114d9a4;
    local_d0 = plVar9;
    uVar17 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_d0);
    if ((uVar17 & 1) == 0) goto LAB_0114d9a0;
    local_d0 = plVar9;
    plVar9 = (long *)ScopeInfo::FunctionName((ScopeInfo *)&local_d0);
    pCVar12 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    if (pCVar12 == (CanonicalHandleScope *)0x0) goto LAB_0114d9bc;
LAB_0114d9ac:
    puVar13 = (ulong *)CanonicalHandleScope::Lookup(pCVar12,(ulong)plVar9);
  }
  uVar10 = AstValueFactory::GetString(*(AstValueFactory **)(this + 0x60),puVar13);
  *(undefined8 *)(param_2 + 0x80) = uVar10;
  Scanner::Initialize((Scanner *)(this + 0x140));
  if ((*(int *)(*param_4 + 0x1b) < 0) && (*(char *)(*(long *)(this + 8) + 0x80) == '\0')) {
    lVar15 = Scope::AsClassScope();
    *(ulong *)(lVar15 + 0x88) = *(ulong *)(lVar15 + 0x88) & 0xfffffffffffffff8 | 1;
    pEVar14 = (Expression *)DoParseFunction(this,param_1,param_2,*(AstRawString **)(param_2 + 0x80))
    ;
    *(ulong *)(lVar15 + 0x88) = *(ulong *)(lVar15 + 0x88) & 0xfffffffffffffff8;
    if (-1 < (char)param_2[9]) goto LAB_0114da2c;
LAB_0114daa0:
    if (FLAG_stress_validate_asm != '\0') goto joined_r0x0114da34;
    if ((pEVar14 == (Expression *)0x0) ||
       (uVar17 = Scope::ContainsAsmModule(*(Scope **)(pEVar14 + 0x28)), (uVar17 & 1) == 0))
    goto LAB_0114da2c;
  }
  else {
    pEVar14 = (Expression *)DoParseFunction(this,param_1,param_2,*(AstRawString **)(param_2 + 0x80))
    ;
    if ((char)param_2[9] < '\0') goto LAB_0114daa0;
LAB_0114da2c:
    ParseInfo::ResetCharacterStream(param_2);
joined_r0x0114da34:
    if (pEVar14 == (Expression *)0x0) goto LAB_0114dc9c;
  }
  if (*(SourceRangeMap **)(param_2 + 0x98) != (SourceRangeMap *)0x0) {
    SourceRangeAstVisitor::SourceRangeAstVisitor
              ((SourceRangeAstVisitor *)&local_d0,*(ulong *)(this + 0xa8),pEVar14,
               *(SourceRangeMap **)(param_2 + 0x98));
    pvVar6 = local_a8;
    if ((char)local_c8 == '\0') {
      plVar9 = (long *)GetCurrentStackPosition();
      if (plVar9 < local_d0) {
        local_c8 = (long *)CONCAT71(local_c8._1_7_,1);
        pvVar6 = local_a8;
      }
      else {
        AstTraversalVisitor<v8::internal::SourceRangeAstVisitor>::VisitNoStackOverflowCheck
                  ((AstTraversalVisitor<v8::internal::SourceRangeAstVisitor> *)&local_d0,local_c0);
        pvVar6 = local_a8;
      }
    }
    while (local_98 != (void *)0x0) {
      pvVar18 = (void *)*local_98;
      local_a8 = pvVar6;
      operator_delete(local_98);
      pvVar6 = local_a8;
      local_98 = pvVar18;
    }
    local_a8 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    if (pEVar14 == (Expression *)0x0) goto LAB_0114dc9c;
  }
  uVar17 = *param_4;
  uVar20 = uVar17 & 0xffffffff00000000;
  if (((*(uint *)(uVar17 + 7) & 1) == 0) ||
     (plVar9 = (long *)(uVar20 | *(uint *)(uVar17 + 7)),
     *(short *)((uVar20 | 7) + (ulong)*(uint *)((long)plVar9 - 1)) != 0x83)) {
    if (((*(uint *)(uVar17 + 3) & 1) != 0) &&
       (*(ushort *)((uVar20 | 7) + (ulong)*(uint *)((uVar20 | *(uint *)(uVar17 + 3)) - 1)) - 0x95 <
        2)) {
      uVar17 = uVar20 | *(uint *)((uVar20 | *(uint *)(uVar17 + 3)) + 3);
      goto LAB_0114dba0;
    }
LAB_0114dbb8:
    uVar17 = *(ulong *)(uVar20 + 200);
    pCVar12 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    if (pCVar12 == (CanonicalHandleScope *)0x0) goto LAB_0114dbc4;
LAB_0114dba8:
    puVar13 = (ulong *)CanonicalHandleScope::Lookup(pCVar12,uVar17);
  }
  else {
    local_d0 = plVar9;
    uVar17 = ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_d0);
    if ((((uVar17 & 1) == 0) ||
        (uVar17 = ScopeInfo::InferredFunctionName((ScopeInfo *)&local_d0), (uVar17 & 1) == 0)) ||
       (0x3f < *(ushort *)((uVar17 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar17 - 1))))
    goto LAB_0114dbb8;
LAB_0114dba0:
    pCVar12 = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    if (pCVar12 != (CanonicalHandleScope *)0x0) goto LAB_0114dba8;
LAB_0114dbc4:
    puVar13 = *(ulong **)(param_1 + 0x95a0);
    if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
      puVar13 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar13 + 1;
    *puVar13 = uVar17;
  }
  FunctionLiteral::set_inferred_name((FunctionLiteral *)pEVar14,puVar13);
  if (FLAG_log_function_events != '\0') {
    lVar15 = base::TimeTicks::HighResolutionNow();
    local_d0 = (long *)(lVar15 - lVar19);
    dVar21 = (double)base::TimeDelta::InMillisecondsF((TimeDelta *)&local_d0);
    AstValueFactory::Internalize(*(AstValueFactory **)(this + 0x60),param_1);
    lVar19 = *(long *)(pEVar14 + 0x28);
    FunctionLiteral::GetDebugName();
    this_00 = *(Logger **)(param_1 + 0x9558);
    uVar17 = Logger::is_logging(this_00);
    plVar9 = local_d0;
    if ((uVar17 & 1) != 0) {
      iVar1 = *(int *)(lVar19 + 0x70);
      iVar2 = *(int *)(lVar19 + 0x74);
      iVar4 = *(int *)(**(long **)(param_2 + 0x50) + 0x1f);
      sVar16 = strlen((char *)local_d0);
      Logger::FunctionEvent
                (this_00,"parse-function",iVar4 >> 1,dVar21,iVar1,iVar2,(char *)plVar9,sVar16);
    }
    plVar9 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      operator_delete__(plVar9);
    }
  }
LAB_0114dc9c:
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar9 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar9 + 0x28))(plVar9,local_118,local_110,local_108);
  }
  if (local_100 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
  }
  if (*(long *)(lVar5 + 0x28) == local_80) {
    return pEVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

