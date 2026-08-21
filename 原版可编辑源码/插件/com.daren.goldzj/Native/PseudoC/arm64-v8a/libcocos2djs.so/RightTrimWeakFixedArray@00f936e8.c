
/* v8::internal::Heap::RightTrimWeakFixedArray(v8::internal::WeakFixedArray, int) */

void v8::internal::Heap::RightTrimWeakFixedArray(void)

{
  CreateFillerForArray<v8::internal::WeakFixedArray>();
  return;
}

