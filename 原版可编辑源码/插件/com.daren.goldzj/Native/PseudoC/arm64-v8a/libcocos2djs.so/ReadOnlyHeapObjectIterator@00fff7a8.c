
/* v8::internal::ReadOnlyHeapObjectIterator::ReadOnlyHeapObjectIterator(v8::internal::ReadOnlySpace*)
    */

void __thiscall
v8::internal::ReadOnlyHeapObjectIterator::ReadOnlyHeapObjectIterator
          (ReadOnlyHeapObjectIterator *this,ReadOnlySpace *param_1)

{
  long lVar1;
  
  *(ReadOnlySpace **)this = param_1;
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(this + 8) = lVar1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar1 + 0x20);
  return;
}

