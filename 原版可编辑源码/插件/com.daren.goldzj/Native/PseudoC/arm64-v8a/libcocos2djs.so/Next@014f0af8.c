
/* v8::internal::CombinedHeapObjectIterator::Next() */

void __thiscall v8::internal::CombinedHeapObjectIterator::Next(CombinedHeapObjectIterator *this)

{
  int iVar1;
  
  iVar1 = ReadOnlyHeapObjectIterator::Next((ReadOnlyHeapObjectIterator *)(this + 0x28));
  if (iVar1 != 0) {
    return;
  }
  HeapObjectIterator::Next((HeapObjectIterator *)this);
  return;
}

