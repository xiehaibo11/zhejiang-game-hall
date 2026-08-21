
/* v8::internal::PointersUpdatingVisitor::VisitPointer(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::PointersUpdatingVisitor::VisitPointer
          (undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  
  if (((*param_3 & 1) != 0) &&
     (uVar1 = *(uint *)(((ulong)param_3 & 0xffffffff00000000 | (ulong)*param_3) - 1),
     (uVar1 & 1) == 0)) {
    *param_3 = uVar1 + 1;
  }
  return;
}

