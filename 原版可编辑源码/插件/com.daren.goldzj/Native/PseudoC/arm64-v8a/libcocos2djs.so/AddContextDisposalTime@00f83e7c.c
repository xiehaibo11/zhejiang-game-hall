
/* v8::internal::GCTracer::AddContextDisposalTime(double) */

void __thiscall v8::internal::GCTracer::AddContextDisposalTime(GCTracer *this,double param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10d4);
  if (iVar1 == 10) {
    iVar1 = *(int *)(this + 0x10d0);
    *(int *)(this + 0x10d0) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8 + 0x1080) = param_1;
    if (*(int *)(this + 0x10d0) == 10) {
      *(undefined4 *)(this + 0x10d0) = 0;
      return;
    }
  }
  else {
    *(int *)(this + 0x10d4) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8 + 0x1080) = param_1;
  }
  return;
}

