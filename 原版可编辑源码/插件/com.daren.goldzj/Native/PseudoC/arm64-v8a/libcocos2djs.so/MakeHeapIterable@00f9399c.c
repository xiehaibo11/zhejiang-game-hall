
/* v8::internal::Heap::MakeHeapIterable() */

void __thiscall v8::internal::Heap::MakeHeapIterable(Heap *this)

{
  MarkCompactCollector::EnsureSweepingCompleted(*(MarkCompactCollector **)(this + 0x800));
  return;
}

