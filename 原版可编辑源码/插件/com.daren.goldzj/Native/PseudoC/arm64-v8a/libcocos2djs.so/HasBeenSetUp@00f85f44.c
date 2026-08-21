
/* v8::internal::Heap::HasBeenSetUp() */

bool __thiscall v8::internal::Heap::HasBeenSetUp(Heap *this)

{
  return *(long *)(this + 0xe8) != 0;
}

