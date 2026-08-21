
/* v8::internal::Heap::SetUpFromReadOnlyHeap(v8::internal::ReadOnlyHeap*) */

void __thiscall v8::internal::Heap::SetUpFromReadOnlyHeap(Heap *this,ReadOnlyHeap *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x120) = uVar1;
  *(undefined8 *)(this + 0x128) = uVar1;
  return;
}

