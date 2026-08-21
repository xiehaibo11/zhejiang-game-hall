
/* v8::internal::Heap::UpdateSurvivalStatistics(int) */

void __thiscall v8::internal::Heap::UpdateSurvivalStatistics(Heap *this,int param_1)

{
  double dVar1;
  double dVar2;
  
  if (param_1 != 0) {
    dVar2 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x7a0));
    dVar1 = (dVar2 / (double)param_1) * 100.0;
    *(double *)(this + 0x7a8) = dVar1;
    if (*(ulong *)(this + 0x7c0) == 0) {
      dVar2 = 0.0;
    }
    else {
      dVar2 = (dVar2 / (double)*(ulong *)(this + 0x7c0)) * 100.0;
    }
    *(double *)(this + 0x7b0) = dVar2;
    dVar2 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x7b8));
    dVar2 = (dVar2 / (double)param_1) * 100.0;
    *(double *)(this + 0x7c8) = dVar2;
    GCTracer::AddSurvivalRatio(*(GCTracer **)(this + 0x7f8),dVar1 + dVar2);
    return;
  }
  return;
}

