
/* v8::internal::MarkCompactCollector::MarkDescriptorArrayFromWriteBarrier(v8::internal::HeapObject,
   v8::internal::DescriptorArray, int) */

void v8::internal::MarkCompactCollector::MarkDescriptorArrayFromWriteBarrier(long param_1)

{
  MainMarkingVisitor<v8::internal::MajorMarkingState>::MarkDescriptorArrayFromWriteBarrier
            (*(MainMarkingVisitor<v8::internal::MajorMarkingState> **)(param_1 + 0x2690));
  return;
}

