
/* v8::internal::Heap::PromotedExternalMemorySize() */

long __thiscall v8::internal::Heap::PromotedExternalMemorySize(Heap *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + -0x8830) - *(long *)(this + -0x8820);
  if (lVar1 == 0 || *(long *)(this + -0x8830) < *(long *)(this + -0x8820)) {
    lVar1 = 0;
  }
  return lVar1;
}

