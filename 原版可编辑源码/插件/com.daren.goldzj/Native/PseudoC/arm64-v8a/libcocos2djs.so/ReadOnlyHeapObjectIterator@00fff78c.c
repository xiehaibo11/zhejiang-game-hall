
/* v8::internal::ReadOnlyHeapObjectIterator::ReadOnlyHeapObjectIterator(v8::internal::ReadOnlyHeap*)
    */

void __thiscall
v8::internal::ReadOnlyHeapObjectIterator::ReadOnlyHeapObjectIterator
          (ReadOnlyHeapObjectIterator *this,ReadOnlyHeap *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(long *)this = lVar1;
  lVar1 = *(long *)(lVar1 + 0x20);
  *(long *)(this + 8) = lVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar1 + 0x20);
  return;
}

