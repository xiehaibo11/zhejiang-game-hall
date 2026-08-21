
/* v8::internal::WasmStackFrame::GetFunction() const */

void __thiscall v8::internal::WasmStackFrame::GetFunction(WasmStackFrame *this)

{
  int iVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  
  pIVar3 = *(Isolate **)(this + 8);
  iVar1 = *(int *)(this + 0x18);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
    *puVar2 = (long)iVar1 << 1;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar3 + 0x95b8),(long)iVar1 << 1);
  }
  return;
}

