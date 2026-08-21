
/* v8::internal::GCTracer::RecordIncrementalMarkingSpeed(unsigned long, double) */

void __thiscall
v8::internal::GCTracer::RecordIncrementalMarkingSpeed(GCTracer *this,ulong param_1,double param_2)

{
  double dVar1;
  
  if ((param_1 != 0) && (param_2 != 0.0)) {
    dVar1 = (double)param_1 / param_2;
    if (*(double *)(this + 0x9d0) != 0.0) {
      dVar1 = ((double)param_1 / param_2 + *(double *)(this + 0x9d0)) * 0.5;
    }
    *(double *)(this + 0x9d0) = dVar1;
  }
  return;
}

