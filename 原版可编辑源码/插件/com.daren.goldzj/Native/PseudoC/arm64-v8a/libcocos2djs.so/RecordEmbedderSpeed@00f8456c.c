
/* v8::internal::GCTracer::RecordEmbedderSpeed(unsigned long, double) */

void __thiscall
v8::internal::GCTracer::RecordEmbedderSpeed(GCTracer *this,ulong param_1,double param_2)

{
  double dVar1;
  
  if ((param_1 != 0) && (param_2 != 0.0)) {
    dVar1 = (double)param_1 / param_2;
    if (*(double *)(this + 0x9d8) != 0.0) {
      dVar1 = ((double)param_1 / param_2 + *(double *)(this + 0x9d8)) * 0.5;
    }
    *(double *)(this + 0x9d8) = dVar1;
  }
  return;
}

