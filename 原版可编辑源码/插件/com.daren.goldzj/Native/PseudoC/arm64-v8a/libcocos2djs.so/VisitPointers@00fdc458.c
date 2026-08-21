
/* v8::internal::RecordMigratedSlotVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::RecordMigratedSlotVisitor::VisitPointers
          (RecordMigratedSlotVisitor *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    (**(code **)(*(long *)this + 0x88))
              (this,param_2,(ulong)param_3 & 0xffffffff00000000 | (ulong)*param_3);
  }
  return;
}

