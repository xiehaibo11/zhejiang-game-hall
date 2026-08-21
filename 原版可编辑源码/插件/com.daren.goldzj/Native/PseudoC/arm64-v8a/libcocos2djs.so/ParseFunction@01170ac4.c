
/* v8::internal::parsing::ParseFunction(v8::internal::ParseInfo*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>, v8::internal::Isolate*,
   v8::internal::parsing::ReportErrorsAndStatisticsMode) */

bool v8::internal::parsing::ParseFunction
               (ParseInfo *param_1,undefined8 *param_2,Isolate *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong *puVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  long *local_528;
  undefined8 local_520;
  undefined8 local_518 [38];
  char local_3e2;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar10 = **(ulong **)(param_1 + 0x50) & 0xffffffff00000000 |
           (ulong)*(uint *)(**(ulong **)(param_1 + 0x50) + 3);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(param_3 + 0x95a0);
    if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar10;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
    uVar10 = *puVar8;
  }
  lVar11 = *(long *)(param_3 + 0x9520);
  iVar3 = *(int *)(uVar10 + 7);
  if (*(char *)(lVar11 + 0x1998) == '\0') {
    *(char *)(lVar11 + 0x1998) = '\x01';
    piVar9 = (int *)StatsCounterBase::FindLocationInStatsTable
                              ((StatsCounterBase *)(lVar11 + 0x1980));
    *(int **)(lVar11 + 0x1990) = piVar9;
  }
  else {
    piVar9 = *(int **)(lVar11 + 0x1990);
  }
  if (piVar9 != (int *)0x0) {
    *piVar9 = *piVar9 + iVar3;
  }
  local_518[0] = *param_2;
  uVar6 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)local_518);
  local_520 = *param_2;
  uVar7 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_520);
  local_528 = (long *)ScannerStream::For(param_3,puVar8,uVar6,uVar7);
  ParseInfo::set_character_stream(param_1,&local_528);
  plVar5 = local_528;
  local_528 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  uVar6 = *(undefined4 *)(param_3 + 0x2c60);
  *(undefined4 *)(param_3 + 0x2c60) = 2;
  Parser::Parser((Parser *)local_518,param_1);
  lVar11 = Parser::ParseFunction((Parser *)local_518,param_3,param_1,param_2);
  *(long *)(param_1 + 0xa8) = lVar11;
  if (lVar11 != 0) {
    AstValueFactory::Internalize(*(AstValueFactory **)(param_1 + 0x70),param_3);
    uVar2 = *(uint *)(param_1 + 8);
    if ((uVar2 >> 2 & 1) != 0) {
      uVar1 = uVar2 & 0xffffdfff;
      if (local_3e2 != '\0') {
        uVar1 = uVar2 | 0x2000;
      }
      *(uint *)(param_1 + 8) = uVar1;
    }
  }
  if (param_4 == 0) {
    if (lVar11 == 0) {
      PendingCompilationErrorHandler::ReportErrors
                ((PendingCompilationErrorHandler *)(param_1 + 0xb0),param_3,
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x70));
    }
    Parser::UpdateStatistics((Parser *)local_518,param_3,*(undefined8 *)(param_1 + 0x50));
  }
  Parser::~Parser((Parser *)local_518);
  *(undefined4 *)(param_3 + 0x2c60) = uVar6;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return lVar11 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

