
/* v8::internal::LookupIterator::GetFieldOwnerMap() const */

void __thiscall v8::internal::LookupIterator::GetFieldOwnerMap(LookupIterator *this)

{
  ulong uVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  long local_28;
  
  local_28 = (ulong)*(uint *)(**(long **)(this + 0x38) + -1) + *(long *)(this + 0x18);
  uVar1 = Map::FindFieldOwner((Map *)&local_28,*(long *)(this + 0x18),*(undefined8 *)(this + 0x50));
  pIVar3 = *(Isolate **)(this + 0x18);
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

