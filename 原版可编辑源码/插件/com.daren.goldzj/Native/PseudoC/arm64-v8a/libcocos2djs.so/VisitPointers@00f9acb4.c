
/* v8::internal::VerifyPointersVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void v8::internal::VerifyPointersVisitor::VisitPointers(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f9acbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}

