
/* v8::internal::Compiler::ParseAndAnalyze(v8::internal::ParseInfo*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>, v8::internal::Isolate*) */

uint v8::internal::Compiler::ParseAndAnalyze(ParseInfo *param_1)

{
  uint uVar1;
  ulong uVar2;
  RuntimeCallStats *pRVar3;
  undefined4 uVar4;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar2 = parsing::ParseAny();
  uVar1 = 0;
  if ((uVar2 & 1) != 0) {
    pRVar3 = *(RuntimeCallStats **)(param_1 + 0x88);
    local_40 = 0;
    uStack_58 = 0;
    local_60 = (RuntimeCallStats *)0x0;
    uStack_48 = 0;
    uStack_50 = 0;
    if ((pRVar3 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
      uVar4 = 0x42f;
      if (*(int *)(pRVar3 + 0x14) == 1) {
        uVar4 = 0x430;
      }
      local_60 = pRVar3;
      RuntimeCallStats::Enter(pRVar3,(RuntimeCallTimer *)((ulong)&local_60 | 8),uVar4);
    }
    uVar2 = Rewriter::Rewrite(param_1);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = DeclarationScope::Analyze(param_1);
    }
    if (local_60 != (RuntimeCallStats *)0x0) {
      RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
    }
  }
  return uVar1 & 1;
}

