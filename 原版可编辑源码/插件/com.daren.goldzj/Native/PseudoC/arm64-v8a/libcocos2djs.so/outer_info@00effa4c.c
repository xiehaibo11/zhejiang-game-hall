
/* v8::internal::DebugEvaluate::ContextBuilder::outer_info() const */

void __thiscall v8::internal::DebugEvaluate::ContextBuilder::outer_info(ContextBuilder *this)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  pIVar2 = *(Isolate **)(this + 0x20);
  uVar3 = **(ulong **)(this + 0x60) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x60) + 0xb);
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

