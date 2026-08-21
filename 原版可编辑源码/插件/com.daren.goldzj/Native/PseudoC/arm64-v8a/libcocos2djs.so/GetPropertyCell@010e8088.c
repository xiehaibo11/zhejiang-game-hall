
/* v8::internal::LookupIterator::GetPropertyCell() const */

ulong * __thiscall v8::internal::LookupIterator::GetPropertyCell(LookupIterator *this)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  
  pIVar2 = *(Isolate **)(this + 0x18);
  uVar1 = *(uint *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(**(long **)(this + 0x38) + 3) +
                   (long)(*(int *)(this + 0x50) * 4 + 0x14));
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = (ulong)(pIVar2 + uVar1);
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),(ulong)(pIVar2 + uVar1)
                                );
  }
  return puVar3;
}

