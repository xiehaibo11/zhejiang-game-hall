
/* v8::internal::LookupIterator::TryLookupCachedProperty() */

undefined8 __thiscall v8::internal::LookupIterator::TryLookupCachedProperty(LookupIterator *this)

{
  ulong *puVar1;
  undefined8 uVar2;
  
  if (*(int *)(this + 4) == 5) {
    puVar1 = (ulong *)FetchValue(this);
    if (((*puVar1 & 1) != 0) &&
       (*(short *)((*(ulong *)(this + 0x18) | 7) + (ulong)*(uint *)(*puVar1 - 1)) == 0x52)) {
      uVar2 = LookupCachedProperty(this);
      return uVar2;
    }
  }
  return 0;
}

