
/* v8::internal::Isolate::ClearKeptObjects() */

void __thiscall v8::internal::Isolate::ClearKeptObjects(Isolate *this)

{
  Heap::ClearKeptObjects((Heap *)(this + 0x8850));
  return;
}

