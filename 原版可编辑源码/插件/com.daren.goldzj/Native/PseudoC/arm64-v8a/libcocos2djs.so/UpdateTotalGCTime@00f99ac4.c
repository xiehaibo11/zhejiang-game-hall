
/* v8::internal::Heap::UpdateTotalGCTime(double) */

void __thiscall v8::internal::Heap::UpdateTotalGCTime(Heap *this,double param_1)

{
  if (FLAG_trace_gc_verbose != '\0') {
    *(double *)(this + 0x7e0) = *(double *)(this + 0x7e0) + param_1;
  }
  return;
}

