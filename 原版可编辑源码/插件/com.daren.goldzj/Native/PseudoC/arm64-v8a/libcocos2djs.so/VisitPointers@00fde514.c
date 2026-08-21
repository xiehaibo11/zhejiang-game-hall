
/* v8::internal::PointersUpdatingVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::PointersUpdatingVisitor::VisitPointers
          (undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  
  do {
    if (param_4 <= param_3) {
      return;
    }
    uVar2 = (ulong)*param_3;
    if ((*param_3 == 3) || ((uVar2 & 3) != 3)) {
      if (((uVar2 & 3) == 1) &&
         (uVar1 = *(uint *)(((ulong)param_3 & 0xffffffff00000000 | uVar2) - 1), (uVar1 & 1) == 0)) {
        uVar1 = uVar1 + 1;
        goto LAB_00fde520;
      }
    }
    else {
      uVar1 = *(uint *)(((ulong)param_3 & 0xffffffff00000000 | uVar2 & 0xfffffffffffffffd) - 1);
      if ((uVar1 & 1) == 0) {
        uVar1 = uVar1 + 1 | 2;
LAB_00fde520:
        *param_3 = uVar1;
      }
    }
    param_3 = param_3 + 1;
  } while( true );
}

