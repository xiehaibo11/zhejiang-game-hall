
/* v8::internal::CombinedHeapObjectIterator::CombinedHeapObjectIterator(v8::internal::Heap*,
   v8::internal::HeapObjectIterator::HeapObjectsFiltering) */

void __thiscall
v8::internal::CombinedHeapObjectIterator::CombinedHeapObjectIterator
          (CombinedHeapObjectIterator *this,long param_1)

{
  HeapObjectIterator::HeapObjectIterator();
  ReadOnlyHeapObjectIterator::ReadOnlyHeapObjectIterator
            ((ReadOnlyHeapObjectIterator *)(this + 0x28),*(ReadOnlyHeap **)(param_1 + 0xc28));
  return;
}

