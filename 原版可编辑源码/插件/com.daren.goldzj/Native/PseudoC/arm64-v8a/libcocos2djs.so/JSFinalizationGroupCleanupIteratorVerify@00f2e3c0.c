
/* v8::internal::JSFinalizationGroupCleanupIterator::JSFinalizationGroupCleanupIteratorVerify(v8::internal::Isolate*)
    */

void __thiscall
v8::internal::JSFinalizationGroupCleanupIterator::JSFinalizationGroupCleanupIteratorVerify
          (JSFinalizationGroupCleanupIterator *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(short *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
      != 0x42b) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSFinalizationGroupCleanupIterator()");
  }
  JSObject::JSObjectVerify((JSObject *)this,param_1);
  uVar1 = *(uint *)(*(ulong *)this + 0xb);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar1;
    uVar2 = ReadOnlyHeap::Contains(uVar3);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = Heap::Contains((Heap *)(param_1 + 0x8850),uVar3), (uVar2 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","p.IsHeapObject()");
}

