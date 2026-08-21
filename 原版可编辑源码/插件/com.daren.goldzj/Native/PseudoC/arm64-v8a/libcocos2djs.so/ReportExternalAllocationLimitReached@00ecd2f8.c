
/* v8::Isolate::ReportExternalAllocationLimitReached() */

void __thiscall v8::Isolate::ReportExternalAllocationLimitReached(Isolate *this)

{
  if (*(int *)(this + 0x89c8) != 0) {
    return;
  }
  internal::Heap::ReportExternalMemoryPressure((Heap *)(this + 0x8850));
  return;
}

