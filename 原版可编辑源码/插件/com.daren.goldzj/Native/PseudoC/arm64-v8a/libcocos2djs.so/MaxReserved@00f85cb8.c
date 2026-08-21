
/* v8::internal::Heap::MaxReserved() */

long __thiscall v8::internal::Heap::MaxReserved(Heap *this)

{
  return *(long *)(this + 0x40) * 3 + *(long *)(this + 0x58);
}

