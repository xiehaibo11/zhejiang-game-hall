
/* v8::internal::LookupIterator::GetFieldType() const */

void __thiscall v8::internal::LookupIterator::GetFieldType(LookupIterator *this)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 0x18);
  uVar3 = Map::UnwrapFieldType
                    (uVar3 + *(uint *)((uVar3 | 7) +
                                       (ulong)*(uint *)((uVar3 | 0x17) +
                                                       (ulong)*(uint *)(**(long **)(this + 0x38) +
                                                                       -1)) +
                                      (*(long *)(this + 0x50) * 0xc00000000 + 0x1000000000 >> 0x20))
                    );
  pIVar2 = *(Isolate **)(this + 0x18);
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

