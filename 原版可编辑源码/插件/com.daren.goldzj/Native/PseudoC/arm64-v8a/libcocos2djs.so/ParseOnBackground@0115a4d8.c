
/* v8::internal::Parser::ParseOnBackground(v8::internal::ParseInfo*) */

void __thiscall v8::internal::Parser::ParseOnBackground(Parser *this,ParseInfo *param_1)

{
  RuntimeCallStats *pRVar1;
  long lVar2;
  ulong uVar3;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  pRVar1 = *(RuntimeCallStats **)(this + 0x90);
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (RuntimeCallStats *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  if ((pRVar1 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    local_60 = pRVar1;
    RuntimeCallStats::Enter(pRVar1,(RuntimeCallTimer *)((ulong)&local_60 | 8),0x4aa);
  }
  this[0xa0] = (Parser)0x0;
  *(undefined4 *)(this + 0x104) = *(undefined4 *)(param_1 + 0x34);
  Scanner::Initialize((Scanner *)(this + 0x140));
  if (((byte)param_1[8] & 1) == 0) {
    lVar2 = DoParseFunction(this,(Isolate *)0x0,param_1,*(AstRawString **)(param_1 + 0x80));
  }
  else {
    lVar2 = DoParseProgram(this,(Isolate *)0x0,param_1);
  }
  if ((-1 < (char)param_1[9]) ||
     ((FLAG_stress_validate_asm == '\0' &&
      ((lVar2 == 0 ||
       (uVar3 = Scope::ContainsAsmModule(*(Scope **)(lVar2 + 0x28)), (uVar3 & 1) == 0)))))) {
    ParseInfo::ResetCharacterStream(param_1);
  }
  *(long *)(param_1 + 0xa8) = lVar2;
  if (local_60 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return;
}

