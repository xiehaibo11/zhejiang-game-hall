
/* v8::internal::Heap::IncrementDeferredCount(v8::Isolate::UseCounterFeature) */

void __thiscall v8::internal::Heap::IncrementDeferredCount(Heap *this,uint param_2)

{
  *(int *)(this + (ulong)param_2 * 4 + 0x630) = *(int *)(this + (ulong)param_2 * 4 + 0x630) + 1;
  return;
}

