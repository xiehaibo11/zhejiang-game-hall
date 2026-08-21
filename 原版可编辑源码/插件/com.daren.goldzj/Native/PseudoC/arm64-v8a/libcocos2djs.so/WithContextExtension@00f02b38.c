
/* v8::internal::ScopeIterator::WithContextExtension() */

void __thiscall v8::internal::ScopeIterator::WithContextExtension(ScopeIterator *this)

{
  ulong uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  undefined8 local_28;
  
  local_28 = **(undefined8 **)(this + 0x28);
  uVar1 = Context::extension_receiver((Context *)&local_28);
  if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0xa9) {
    Factory::NewJSObjectWithNullProto(*(Factory **)this);
  }
  else {
    local_28 = **(undefined8 **)(this + 0x28);
    uVar1 = Context::extension_receiver((Context *)&local_28);
    pIVar3 = *(Isolate **)this;
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
  }
  return;
}

