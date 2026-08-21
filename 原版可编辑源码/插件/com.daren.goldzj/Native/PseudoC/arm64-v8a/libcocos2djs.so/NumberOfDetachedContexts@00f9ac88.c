
/* v8::internal::Heap::NumberOfDetachedContexts() */

long __thiscall v8::internal::Heap::NumberOfDetachedContexts(Heap *this)

{
  uint uVar1;
  
  uVar1 = *(int *)(*(long *)(this + -0x78e8) + 7) >> 1;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 1;
  }
  return (long)((ulong)uVar1 << 0x20) >> 0x21;
}

