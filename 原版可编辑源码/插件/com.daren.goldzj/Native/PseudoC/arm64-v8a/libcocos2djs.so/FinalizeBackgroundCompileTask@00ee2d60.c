
/* v8::internal::Compiler::FinalizeBackgroundCompileTask(v8::internal::BackgroundCompileTask*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>, v8::internal::Isolate*,
   v8::internal::Compiler::ClearExceptionFlag) */

undefined4
v8::internal::Compiler::FinalizeBackgroundCompileTask
          (undefined8 *param_1,ulong *param_2,Isolate *param_3,int param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  byte *pbVar3;
  RuntimeCallStats *pRVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined4 uVar9;
  ParseInfo *pPVar10;
  ulong uVar11;
  RuntimeCallStats *local_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  byte **local_80;
  byte *local_78;
  char *local_70;
  undefined8 local_68;
  
  if (DAT_01d3ebd8 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ebd8 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.compile");
  }
  pbVar3 = DAT_01d3ebd8;
  local_80 = (byte **)0x0;
  if ((*DAT_01d3ebd8 & 5) != 0) {
    local_b0 = (RuntimeCallStats *)0x0;
    plStack_a8 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.FinalizeBackgroundCompileTask",0,0,0,0,0,0,0,&local_b0
                       ,0);
    plVar5 = plStack_a8;
    plStack_a8 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    pRVar4 = local_b0;
    local_b0 = (RuntimeCallStats *)0x0;
    if (pRVar4 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar4 + 8))();
    }
    local_80 = &local_78;
    local_70 = "V8.FinalizeBackgroundCompileTask";
    local_78 = pbVar3;
    local_68 = uVar6;
  }
  local_90 = 0;
  plStack_a8 = (long *)0x0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_b0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_b0,(ulong)&local_b0 | 8,0x79);
  }
  puVar1 = *(ulong **)(param_3 + 0x95a0);
  puVar2 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  pPVar10 = (ParseInfo *)*param_1;
  uVar8 = *param_2 & 0xffffffff00000000;
  uVar11 = uVar8 | *(uint *)(*param_2 + 0xf);
  if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x5b) {
    uVar11 = uVar8 | *(uint *)(uVar11 + 0xb);
  }
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = puVar1;
    if (puVar2 == puVar1) {
      puVar7 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar11;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
  }
  ParseInfo::set_script(pPVar10,puVar7);
  Parser::UpdateStatistics((Parser *)param_1[1],param_3,puVar7);
  Parser::HandleSourceURLComments((Parser *)param_1[1],param_3,puVar7);
  if ((*(long *)(pPVar10 + 0xa8) != 0) && (param_1[2] != 0)) {
    AstValueFactory::Internalize(*(AstValueFactory **)(pPVar10 + 0x70),param_3);
    uVar8 = FUN_00ee1730(pPVar10,param_3,param_2,param_1[2],param_1 + 3);
    if ((uVar8 & 1) != 0) {
      uVar9 = 1;
      goto LAB_00ee2fc0;
    }
  }
  if (param_4 == 1) {
    uVar9 = 0;
    *(undefined8 *)(param_3 + 0x2bd8) = *(undefined8 *)(param_3 + 0xa8);
  }
  else {
    if (((*(ulong *)(param_3 + 0x2bd8) & 1) != 0) &&
       ((int)*(ulong *)(param_3 + 0x2bd8) == *(int *)(param_3 + 0xa8))) {
      if (*(PendingCompilationErrorHandler *)(pPVar10 + 0xb0) == (PendingCompilationErrorHandler)0x0
         ) {
        Isolate::StackOverflow(param_3);
      }
      else {
        PendingCompilationErrorHandler::ReportErrors
                  ((PendingCompilationErrorHandler *)(pPVar10 + 0xb0),param_3,
                   *(undefined8 *)(pPVar10 + 0x50),*(undefined8 *)(pPVar10 + 0x70));
      }
    }
    uVar9 = 0;
  }
LAB_00ee2fc0:
  *(ulong **)(param_3 + 0x95a0) = puVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar2) {
    *(ulong **)(param_3 + 0x95a8) = puVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  if (local_b0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
  }
  if ((local_80 != (byte **)0x0) && (*local_78 != 0)) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_78,local_70,local_68);
  }
  return uVar9;
}

