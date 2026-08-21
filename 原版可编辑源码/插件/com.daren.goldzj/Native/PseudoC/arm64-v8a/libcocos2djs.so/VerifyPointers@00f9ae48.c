
/* v8::internal::VerifyPointersVisitor::VerifyPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::VerifyPointersVisitor::VerifyPointers
          (VerifyPointersVisitor *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  Heap *pHVar4;
  ulong uVar5;
  
  do {
    if (param_4 <= param_3) {
      return;
    }
    uVar1 = *param_3;
    if ((uVar1 == 3) || ((uVar1 & 1) == 0)) {
      if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","object.IsSmi() || object.IsCleared()");
      }
    }
    else {
      pHVar4 = *(Heap **)(this + 0x10);
      uVar5 = (ulong)param_3 & 0xffffffff00000000;
      uVar3 = (ulong)uVar1 & 0xfffffffffffffffd | uVar5;
      uVar2 = ReadOnlyHeap::Contains(uVar3);
      if (((uVar2 & 1) == 0) && (uVar2 = Heap::Contains(pHVar4,uVar3), (uVar2 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsValidHeapObject(heap_, heap_object)");
      }
      if (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | *(uint *)(uVar3 - 1)) - 1)) != 0xa2) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","heap_object.map().IsMap()");
      }
    }
    param_3 = param_3 + 1;
  } while( true );
}

