
/* v8::internal::GCTracer::RecordMutatorUtilization(double, double) */

void __thiscall
v8::internal::GCTracer::RecordMutatorUtilization(GCTracer *this,double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  if (*(double *)(this + 0xb38) != 0.0) {
    dVar1 = param_1 - *(double *)(this + 0xb38);
    dVar2 = dVar1 - param_2;
    if ((*(double *)(this + 0xb28) == 0.0) && (*(double *)(this + 0xb20) == 0.0)) {
      *(double *)(this + 0xb28) = param_2;
      *(double *)(this + 0xb20) = dVar2;
    }
    else {
      *(double *)(this + 0xb28) = (*(double *)(this + 0xb28) + param_2) * 0.5;
      *(double *)(this + 0xb20) = (dVar2 + *(double *)(this + 0xb20)) * 0.5;
    }
    dVar2 = dVar2 / dVar1;
    if (dVar1 == 0.0) {
      dVar2 = 0.0;
    }
    *(double *)(this + 0xb30) = dVar2;
    *(double *)(this + 0xb38) = param_1;
    return;
  }
  *(double *)(this + 0xb38) = param_1;
  return;
}

