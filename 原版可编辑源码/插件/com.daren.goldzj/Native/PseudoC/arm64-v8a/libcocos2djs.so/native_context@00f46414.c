
/* v8::internal::FrameSummary::JavaScriptFrameSummary::native_context() const */

void __thiscall
v8::internal::FrameSummary::JavaScriptFrameSummary::native_context(JavaScriptFrameSummary *this)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  uVar3 = **(ulong **)(this + 0x18) & 0xffffffff00000000;
  pIVar2 = *(Isolate **)this;
  uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(**(ulong **)(this + 0x18) + 0xf))
                                              - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar3);
  }
  return;
}

