
/* v8::internal::PointersUpdatingVisitor::VisitPointer(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::PointersUpdatingVisitor::VisitPointer
          (undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*param_3;
  if ((*param_3 == 3) || ((uVar2 & 3) != 3)) {
    if ((uVar2 & 3) != 1) {
      return;
    }
    uVar1 = *(uint *)(((ulong)param_3 & 0xffffffff00000000 | uVar2) - 1);
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar1 = uVar1 + 1;
  }
  else {
    uVar1 = *(uint *)(((ulong)param_3 & 0xffffffff00000000 | uVar2 & 0xfffffffffffffffd) - 1);
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar1 = uVar1 + 1 | 2;
  }
  *param_3 = uVar1;
  return;
}

