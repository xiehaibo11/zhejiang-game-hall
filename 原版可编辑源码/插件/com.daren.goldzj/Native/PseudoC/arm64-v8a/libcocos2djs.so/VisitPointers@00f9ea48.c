
/* v8::internal::SlotVerifyingVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::SlotVerifyingVisitor::VisitPointers
          (SlotVerifyingVisitor *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  ulong uVar1;
  long *plVar2;
  
  while( true ) {
    if (param_4 <= param_3) {
      return;
    }
    uVar1 = (**(code **)(*(long *)this + 0x88))
                      (this,param_2,(ulong)param_3 & 0xffffffff00000000 | (ulong)*param_3);
    if ((uVar1 & 1) != 0) break;
LAB_00f9ea74:
    param_3 = param_3 + 1;
  }
  plVar2 = *(long **)(*(long *)(this + 8) + 8);
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","untyped_->count(slot.address()) > 0");
    }
    if ((uint *)plVar2[4] <= param_3) {
      if (param_3 <= (uint *)plVar2[4]) goto LAB_00f9ea74;
      plVar2 = plVar2 + 1;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}

