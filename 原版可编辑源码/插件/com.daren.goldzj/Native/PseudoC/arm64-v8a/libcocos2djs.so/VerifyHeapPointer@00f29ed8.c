
/* v8::internal::HeapObject::VerifyHeapPointer(v8::internal::Isolate*, v8::internal::Object) */

void v8::internal::HeapObject::VerifyHeapPointer(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","p.IsHeapObject()");
  }
  uVar1 = ReadOnlyHeap::Contains(param_2);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = Heap::Contains((Heap *)(param_1 + 0x8850),param_2), (uVar1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
  }
  return;
}

