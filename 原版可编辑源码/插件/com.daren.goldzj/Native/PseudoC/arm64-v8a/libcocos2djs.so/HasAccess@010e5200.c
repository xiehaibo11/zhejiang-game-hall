
/* v8::internal::LookupIterator::HasAccess() const */

void __thiscall v8::internal::LookupIterator::HasAccess(LookupIterator *this)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  pIVar2 = *(Isolate **)(this + 0x18);
  uVar3 = *(ulong *)(pIVar2 + 0x2bc8);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar3);
  }
  Isolate::MayAccess(pIVar2,puVar1,*(undefined8 *)(this + 0x38));
  return;
}

