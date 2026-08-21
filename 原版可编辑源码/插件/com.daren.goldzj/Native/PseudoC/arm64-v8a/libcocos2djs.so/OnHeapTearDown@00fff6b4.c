
/* v8::internal::ReadOnlyHeap::OnHeapTearDown() */

void __thiscall v8::internal::ReadOnlyHeap::OnHeapTearDown(ReadOnlyHeap *this)

{
  void *pvVar1;
  
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}

