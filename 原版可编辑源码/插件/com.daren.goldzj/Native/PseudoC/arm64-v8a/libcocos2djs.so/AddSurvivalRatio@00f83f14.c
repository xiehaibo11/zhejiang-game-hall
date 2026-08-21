
/* v8::internal::GCTracer::AddSurvivalRatio(double) */

void __thiscall v8::internal::GCTracer::AddSurvivalRatio(GCTracer *this,double param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x112c);
  if (iVar1 == 10) {
    iVar1 = *(int *)(this + 0x1128);
    *(int *)(this + 0x1128) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8 + 0x10d8) = param_1;
    if (*(int *)(this + 0x1128) == 10) {
      *(undefined4 *)(this + 0x1128) = 0;
      return;
    }
  }
  else {
    *(int *)(this + 0x112c) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8 + 0x10d8) = param_1;
  }
  return;
}

