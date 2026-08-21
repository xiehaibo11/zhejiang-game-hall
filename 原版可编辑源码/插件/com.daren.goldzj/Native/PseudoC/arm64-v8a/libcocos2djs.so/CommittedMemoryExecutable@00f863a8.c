
/* v8::internal::Heap::CommittedMemoryExecutable() */

undefined8 __thiscall v8::internal::Heap::CommittedMemoryExecutable(Heap *this)

{
  if (*(long *)(this + 0xe8) != 0) {
    return *(undefined8 *)(*(long *)(this + 0x820) + 0x58);
  }
  return 0;
}

