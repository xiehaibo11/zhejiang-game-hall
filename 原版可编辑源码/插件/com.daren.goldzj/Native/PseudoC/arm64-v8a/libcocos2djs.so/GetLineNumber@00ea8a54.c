
/* v8::UnboundScript::GetLineNumber(int) */

undefined4 __thiscall v8::UnboundScript::GetLineNumber(UnboundScript *this,int param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  Isolate *pIVar5;
  ulong uVar6;
  Logger *this_00;
  RuntimeCallStats *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = 0;
  uStack_58 = 0;
  local_60 = (RuntimeCallStats *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pIVar5 = (Isolate *)((ulong)*(uint *)(this + 4) << 0x20);
  if (internal::TracingFlags::runtime_stats != 0) {
    local_60 = (RuntimeCallStats *)(*(long *)(pIVar5 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x3e9);
  }
  this_00 = *(Logger **)(pIVar5 + 0x9558);
  uVar2 = internal::Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::UnboundScript::GetLineNumber");
  }
  uVar4 = *(ulong *)this & 0xffffffff00000000;
  uVar6 = uVar4 | *(uint *)(*(ulong *)this + 0xf);
  uVar2 = uVar6;
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x5b) {
    uVar2 = uVar4 | *(uint *)(uVar6 + 0xb);
  }
  if (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x65) {
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x5b) {
      uVar6 = uVar4 | *(uint *)(uVar6 + 0xb);
    }
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar3 = (ulong *)internal::HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar6;
    }
    else {
      puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar6);
    }
    uVar1 = internal::Script::GetLineNumber(puVar3,param_1);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_60 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return uVar1;
}

