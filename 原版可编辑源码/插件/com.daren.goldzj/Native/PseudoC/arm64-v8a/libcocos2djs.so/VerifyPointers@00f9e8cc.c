
/* v8::internal::VerifyReadOnlyPointersVisitor::VerifyPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::VerifyReadOnlyPointersVisitor::VerifyPointers
          (VerifyReadOnlyPointersVisitor *this,ulong param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if ((int)param_2 != 0) {
    auVar3 = ReadOnlyHeap::Contains(param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
    param_2 = auVar3._8_8_;
    if ((auVar3._0_8_ & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","ReadOnlyHeap::Contains(host.map())");
    }
  }
  VerifyPointersVisitor::VerifyPointers((VerifyPointersVisitor *)this,param_2,param_3,param_4);
  while( true ) {
    if (param_4 <= param_3) {
      return;
    }
    uVar1 = *param_3;
    if (((uVar1 != 3) && ((uVar1 & 1) != 0)) &&
       (uVar2 = ReadOnlyHeap::Contains
                          ((ulong)uVar1 & 0xfffffffffffffffd | (ulong)param_3 & 0xffffffff00000000),
       (uVar2 & 1) == 0)) break;
    param_3 = param_3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","ReadOnlyHeap::Contains(heap_object)");
}

