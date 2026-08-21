
/* v8::UnboundScript::GetScriptName() */

ulong * __thiscall v8::UnboundScript::GetScriptName(UnboundScript *this)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  Isolate *pIVar5;
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
    internal::RuntimeCallStats::Enter(local_60,(ulong)&local_60 | 8,0x3ea);
  }
  this_00 = *(Logger **)(pIVar5 + 0x9558);
  uVar1 = internal::Logger::is_logging(this_00);
  if ((uVar1 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::UnboundScript::GetName");
  }
  uVar4 = *(ulong *)this & 0xffffffff00000000;
  uVar3 = uVar4 | *(uint *)(*(ulong *)this + 0xf);
  uVar1 = uVar3;
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x5b) {
    uVar1 = uVar4 | *(uint *)(uVar3 + 0xb);
  }
  if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x65) {
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x5b) {
      uVar3 = uVar4 | *(uint *)(uVar3 + 0xb);
    }
    uVar1 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 7);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar2 = (ulong *)internal::HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar1;
    }
    else {
      puVar2 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar1);
    }
  }
  else {
    puVar2 = (ulong *)0x0;
  }
  if (local_60 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_60,(RuntimeCallTimer *)((ulong)&local_60 | 8));
  }
  return puVar2;
}

