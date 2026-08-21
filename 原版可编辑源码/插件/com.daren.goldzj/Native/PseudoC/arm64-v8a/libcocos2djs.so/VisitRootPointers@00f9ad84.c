
/* non-virtual thunk to v8::internal::VerifyPointersVisitor::VisitRootPointers(v8::internal::Root,
   char const*, v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::VerifyPointersVisitor::VisitRootPointers
          (VerifyPointersVisitor *this,undefined8 param_2,undefined8 param_3,ulong *param_4,
          ulong *param_5)

{
  ulong uVar1;
  ulong uVar2;
  Heap *pHVar3;
  
  if (param_4 < param_5) {
    uVar2 = *param_4;
    while( true ) {
      if ((uVar2 & 1) != 0) {
        pHVar3 = *(Heap **)(this + 8);
        uVar1 = ReadOnlyHeap::Contains(uVar2);
        if (((uVar1 & 1) == 0) && (uVar1 = Heap::Contains(pHVar3,uVar2), (uVar1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsValidHeapObject(heap_, heap_object)");
        }
        if (*(short *)((uVar2 & 0xffffffff00000000 | 7) +
                      (ulong)*(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) -
                                      1)) != 0xa2) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","heap_object.map().IsMap()");
        }
      }
      param_4 = param_4 + 1;
      if (param_5 <= param_4) break;
      uVar2 = *param_4;
    }
  }
  return;
}

