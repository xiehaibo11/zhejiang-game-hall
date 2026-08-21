
/* v8::internal::WasmInterpreterEntryFrame::NumberOfActiveFrames() const */

void __thiscall
v8::internal::WasmInterpreterEntryFrame::NumberOfActiveFrames(WasmInterpreterEntryFrame *this)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong local_18;
  
  pIVar1 = *(Isolate **)(this + 0x10);
  uVar3 = *(ulong *)(*(long *)(this + 0x20) + -0x10);
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
    uVar3 = *puVar2;
  }
  local_18 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x8b);
  WasmDebugInfo::NumberOfActiveFrames((WasmDebugInfo *)&local_18,*(ulong *)(this + 0x20));
  return;
}

