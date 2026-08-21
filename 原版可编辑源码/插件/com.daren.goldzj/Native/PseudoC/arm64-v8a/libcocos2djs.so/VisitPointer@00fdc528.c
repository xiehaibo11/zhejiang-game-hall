
/* v8::internal::RecordMigratedSlotVisitor::VisitPointer(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::RecordMigratedSlotVisitor::VisitPointer
          (RecordMigratedSlotVisitor *this,undefined8 param_2,uint *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00fdc540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x88))
            (this,param_2,(ulong)param_3 & 0xffffffff00000000 | (ulong)*param_3,param_3);
  return;
}

