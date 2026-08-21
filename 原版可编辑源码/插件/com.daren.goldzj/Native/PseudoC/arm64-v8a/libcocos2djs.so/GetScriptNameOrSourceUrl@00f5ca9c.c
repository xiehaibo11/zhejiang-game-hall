
/* v8::internal::AsmJsWasmStackFrame::GetScriptNameOrSourceUrl() */

ulong * __thiscall
v8::internal::AsmJsWasmStackFrame::GetScriptNameOrSourceUrl(AsmJsWasmStackFrame *this)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  pIVar2 = *(Isolate **)(this + 8);
  uVar4 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(**(ulong **)(this + 0x10) + 0x6f)) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar4);
    uVar4 = *puVar1;
  }
  pIVar2 = *(Isolate **)(this + 8);
  uVar3 = uVar4 & 0xffffffff00000000;
  if (((*(uint *)(uVar4 + 0x33) & 1) == 0) ||
     (uVar5 = uVar3 | *(uint *)(uVar4 + 0x33),
     0x3f < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)))) {
    uVar5 = uVar3 | *(uint *)(uVar4 + 7);
  }
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar5;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar5);
  }
  return puVar1;
}

