
/* v8::internal::parsing::ParseProgram(v8::internal::ParseInfo*, v8::internal::Isolate*,
   v8::internal::parsing::ReportErrorsAndStatisticsMode) */

bool v8::internal::parsing::ParseProgram(ParseInfo *param_1,Isolate *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong *puVar7;
  int *piVar8;
  FunctionLiteral *this;
  ulong uVar9;
  long lVar10;
  long *local_520;
  Parser aPStack_518 [310];
  char local_3e2;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c60);
  *(undefined4 *)(param_2 + 0x2c60) = 2;
  uVar9 = **(ulong **)(param_1 + 0x50) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(param_1 + 0x50) + 3);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(param_2 + 0x95a0);
    if (puVar7 == *(ulong **)(param_2 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_2);
    }
    *(ulong **)(param_2 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar9;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar9);
    uVar9 = *puVar7;
  }
  lVar10 = *(long *)(param_2 + 0x9520);
  iVar4 = *(int *)(uVar9 + 7);
  if (*(char *)(lVar10 + 0x1998) == '\0') {
    *(char *)(lVar10 + 0x1998) = '\x01';
    piVar8 = (int *)StatsCounterBase::FindLocationInStatsTable
                              ((StatsCounterBase *)(lVar10 + 0x1980));
    *(int **)(lVar10 + 0x1990) = piVar8;
  }
  else {
    piVar8 = *(int **)(lVar10 + 0x1990);
  }
  if (piVar8 != (int *)0x0) {
    *piVar8 = *piVar8 + iVar4;
  }
  local_520 = (long *)ScannerStream::For(param_2,puVar7);
  ParseInfo::set_character_stream(param_1,&local_520);
  plVar6 = local_520;
  local_520 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  Parser::Parser(aPStack_518,param_1);
  this = (FunctionLiteral *)Parser::ParseProgram(aPStack_518,param_2,param_1);
  *(FunctionLiteral **)(param_1 + 0xa8) = this;
  if (this != (FunctionLiteral *)0x0) {
    uVar9 = FunctionLiteral::language_mode(this);
    uVar1 = *(uint *)(param_1 + 8) | 8;
    if ((uVar9 & 1) == 0) {
      uVar1 = *(uint *)(param_1 + 8) & 0xfffffff7;
    }
    *(uint *)(param_1 + 8) = uVar1;
    if ((uVar1 >> 2 & 1) != 0) {
      uVar2 = uVar1 & 0xffffdfff;
      if (local_3e2 != '\0') {
        uVar2 = uVar1 | 0x2000;
      }
      *(uint *)(param_1 + 8) = uVar2;
    }
  }
  if (param_3 == 0) {
    if (this == (FunctionLiteral *)0x0) {
      PendingCompilationErrorHandler::ReportErrors
                ((PendingCompilationErrorHandler *)(param_1 + 0xb0),param_2,
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x70));
    }
    Parser::UpdateStatistics(aPStack_518,param_2,*(undefined8 *)(param_1 + 0x50));
  }
  Parser::~Parser(aPStack_518);
  *(undefined4 *)(param_2 + 0x2c60) = uVar3;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return this != (FunctionLiteral *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

