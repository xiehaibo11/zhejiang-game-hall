
/* v8::internal::LookupIterator::HolderIsReceiverOrHiddenPrototype() const */

bool __thiscall
v8::internal::LookupIterator::HolderIsReceiverOrHiddenPrototype(LookupIterator *this)

{
  ulong uVar1;
  ulong uVar2;
  
  if (((byte)*this >> 1 & 1) != 0) {
    uVar1 = **(ulong **)(this + 0x30);
    if ((int)uVar1 != **(int **)(this + 0x38)) {
      if (((uVar1 & 1) != 0) &&
         (uVar2 = *(ulong *)(this + 0x18),
         *(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0xab)) {
        return *(int *)((uVar2 | 0xf) + (ulong)*(uint *)(uVar1 - 1)) + (int)uVar2 ==
               **(int **)(this + 0x38);
      }
      return false;
    }
  }
  return true;
}

