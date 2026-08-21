
/* v8::internal::VerifyPointersVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void v8::internal::VerifyPointersVisitor::VisitPointers(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f9acb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}

