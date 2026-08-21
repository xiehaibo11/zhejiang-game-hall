
/* v8::Isolate::CheckMemoryPressure() */

void __thiscall v8::Isolate::CheckMemoryPressure(Isolate *this)

{
  if (*(int *)(this + 0x89c8) != 0) {
    return;
  }
  internal::Heap::CheckMemoryPressure((Heap *)(this + 0x8850));
  return;
}

