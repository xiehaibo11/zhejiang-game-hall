
/* v8::internal::GCTracer::SampleAllocation(double, unsigned long, unsigned long, unsigned long) */

void __thiscall
v8::internal::GCTracer::SampleAllocation
          (GCTracer *this,double param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  double dVar2;
  long lVar3;
  long lVar4;
  
  dVar2 = *(double *)(this + 0xad0);
  if (dVar2 == 0.0) {
    *(double *)(this + 0xad0) = param_1;
    *(ulong *)(this + 0xad8) = param_2;
    *(ulong *)(this + 0xae0) = param_3;
    *(ulong *)(this + 0xae8) = param_4;
    return;
  }
  lVar4 = *(long *)(this + 0xae0);
  lVar3 = *(long *)(this + 0xad8);
  *(double *)(this + 0xad0) = param_1;
  lVar1 = *(long *)(this + 0xae8);
  *(ulong *)(this + 0xad8) = param_2;
  *(ulong *)(this + 0xae0) = param_3;
  *(ulong *)(this + 0xae8) = param_4;
  *(double *)(this + 0xaf0) = (param_1 - dVar2) + *(double *)(this + 0xaf0);
  *(ulong *)(this + 0xb00) = (param_3 - lVar4) + *(long *)(this + 0xb00);
  *(ulong *)(this + 0xaf8) = (param_2 - lVar3) + *(long *)(this + 0xaf8);
  *(ulong *)(this + 0xb08) = (param_4 - lVar1) + *(long *)(this + 0xb08);
  return;
}

