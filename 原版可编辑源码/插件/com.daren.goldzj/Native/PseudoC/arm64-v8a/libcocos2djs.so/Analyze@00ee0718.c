
/* v8::internal::Compiler::Analyze(v8::internal::ParseInfo*) */

uint v8::internal::Compiler::Analyze(ParseInfo *param_1)

{
  uint uVar1;
  RuntimeCallStats *pRVar2;
  ulong uVar3;
  undefined4 uVar4;
  RuntimeCallStats *local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  pRVar2 = *(RuntimeCallStats **)(param_1 + 0x88);
  local_30 = 0;
  uStack_48 = 0;
  local_50 = (RuntimeCallStats *)0x0;
  uStack_38 = 0;
  uStack_40 = 0;
  if ((pRVar2 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    uVar4 = 0x42f;
    if (*(int *)(pRVar2 + 0x14) == 1) {
      uVar4 = 0x430;
    }
    local_50 = pRVar2;
    RuntimeCallStats::Enter(pRVar2,(RuntimeCallTimer *)((ulong)&local_50 | 8),uVar4);
  }
  uVar3 = Rewriter::Rewrite(param_1);
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = DeclarationScope::Analyze(param_1);
  }
  if (local_50 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_50,(RuntimeCallTimer *)((ulong)&local_50 | 8));
  }
  return uVar1 & 1;
}

