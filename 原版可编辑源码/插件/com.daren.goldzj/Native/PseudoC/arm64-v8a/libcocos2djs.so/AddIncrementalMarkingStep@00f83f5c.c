
/* v8::internal::GCTracer::AddIncrementalMarkingStep(double, unsigned long) */

void __thiscall
v8::internal::GCTracer::AddIncrementalMarkingStep(GCTracer *this,double param_1,ulong param_2)

{
  if (param_2 != 0) {
    *(ulong *)(this + 0x9b8) = *(long *)(this + 0x9b8) + param_2;
    *(double *)(this + 0x9c0) = *(double *)(this + 0x9c0) + param_1;
  }
  return;
}

