
/* v8::internal::Isolate::SetUpFromReadOnlyHeap(v8::internal::ReadOnlyHeap*) */

void __thiscall v8::internal::Isolate::SetUpFromReadOnlyHeap(Isolate *this,ReadOnlyHeap *param_1)

{
  *(ReadOnlyHeap **)(this + 0x9478) = param_1;
  Heap::SetUpFromReadOnlyHeap((Heap *)(this + 0x8850),param_1);
  return;
}

