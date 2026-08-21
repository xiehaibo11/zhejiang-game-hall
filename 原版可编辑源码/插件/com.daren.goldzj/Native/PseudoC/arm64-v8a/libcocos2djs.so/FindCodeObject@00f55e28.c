
/* v8::internal::Isolate::FindCodeObject(unsigned long) */

void __thiscall v8::internal::Isolate::FindCodeObject(Isolate *this,ulong param_1)

{
  Heap::GcSafeFindCodeForInnerPointer((Heap *)(this + 0x8850),param_1);
  return;
}

