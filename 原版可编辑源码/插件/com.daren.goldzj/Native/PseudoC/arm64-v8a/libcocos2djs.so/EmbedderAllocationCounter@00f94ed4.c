
/* v8::internal::Heap::EmbedderAllocationCounter() const */

undefined8 __thiscall v8::internal::Heap::EmbedderAllocationCounter(Heap *this)

{
  if (*(long *)(this + 0x870) != 0) {
    return *(undefined8 *)(*(long *)(this + 0x870) + 0x28);
  }
  return 0;
}

