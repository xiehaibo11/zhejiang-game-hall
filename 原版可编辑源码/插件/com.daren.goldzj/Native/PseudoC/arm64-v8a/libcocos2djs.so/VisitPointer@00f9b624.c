
/* v8::internal::ObjectVisitor::VisitPointer(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot) */

void v8::internal::ObjectVisitor::VisitPointer(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f9b630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

