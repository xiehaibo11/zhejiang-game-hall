
/* v8::internal::Deoptimizer::function() const */

void __thiscall v8::internal::Deoptimizer::function(Deoptimizer *this)

{
  Isolate *pIVar1;
  ulong uVar2;
  ulong *puVar3;
  
  pIVar1 = *(Isolate **)this;
  uVar2 = *(ulong *)(this + 8);
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar2);
  }
  return;
}

