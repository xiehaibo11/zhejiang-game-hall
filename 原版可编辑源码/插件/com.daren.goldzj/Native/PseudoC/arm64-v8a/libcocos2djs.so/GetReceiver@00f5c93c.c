
/* v8::internal::AsmJsWasmStackFrame::GetReceiver() const */

void __thiscall v8::internal::AsmJsWasmStackFrame::GetReceiver(AsmJsWasmStackFrame *this)

{
  ulong uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  undefined8 local_18;
  
  pIVar3 = *(Isolate **)(this + 8);
  local_18 = *(undefined8 *)(pIVar3 + 0x2bc8);
  uVar1 = Context::global_proxy((Context *)&local_18);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar1);
  }
  return;
}

