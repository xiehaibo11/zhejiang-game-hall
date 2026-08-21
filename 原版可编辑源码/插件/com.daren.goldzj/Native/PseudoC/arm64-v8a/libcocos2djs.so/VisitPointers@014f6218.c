
/* v8::internal::ConcurrentMarkingVisitor::SlotSnapshottingVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::ConcurrentMarkingVisitor::SlotSnapshottingVisitor::VisitPointers
          (SlotSnapshottingVisitor *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    uVar1 = *param_3;
    piVar3 = *(int **)(this + 8);
    iVar2 = *piVar3;
    *piVar3 = iVar2 + 1;
    *(uint **)(piVar3 + (long)iVar2 * 4 + 2) = param_3;
    *(ulong *)(piVar3 + (long)iVar2 * 4 + 4) = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar1;
  }
  return;
}

