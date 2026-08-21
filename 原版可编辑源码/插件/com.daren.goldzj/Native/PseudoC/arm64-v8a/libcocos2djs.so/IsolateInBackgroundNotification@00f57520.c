
/* v8::internal::Isolate::IsolateInBackgroundNotification() */

void __thiscall v8::internal::Isolate::IsolateInBackgroundNotification(Isolate *this)

{
  this[0xb6bc] = (Isolate)0x1;
  Heap::ActivateMemoryReducerIfNeeded((Heap *)(this + 0x8850));
  return;
}

