
/* v8::internal::GCTracer::RecordGCPhasesHistograms(v8::internal::TimedHistogram*) */

void __thiscall
v8::internal::GCTracer::RecordGCPhasesHistograms(GCTracer *this,TimedHistogram *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)this + 0xcd0);
  iVar1 = (int)lVar3;
  if ((TimedHistogram *)(lVar3 + 0xca0) == param_1) {
    Histogram::AddSample(iVar1 + 0x198);
    Histogram::AddSample(iVar1 + 0x1c0);
    Histogram::AddSample(iVar1 + 0x1e8);
    Histogram::AddSample(iVar1 + 0x210);
    Histogram::AddSample(iVar1 + 0x238);
    Histogram::AddSample(iVar1 + 0x260);
    Histogram::AddSample(iVar1 + 0x288);
    if (0.0 < *(double *)(this + 0x9c0)) {
      Histogram::AddSample((int)*(undefined8 *)(*(long *)this + 0xcd0) + 0x148);
    }
    Histogram::AddSample((int)*(undefined8 *)(*(long *)this + 0xcd0) + 0x328);
    uVar2 = base::TimeTicks::IsHighResolution();
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar2 = Heap::SizeOfObjects(*(Heap **)this);
    if (uVar2 < 0x100001) {
      return;
    }
    Heap::SizeOfObjects(*(Heap **)this);
    iVar1 = (int)*(undefined8 *)(*(long *)this + 0xcd0) + 0x350;
  }
  else {
    if ((TimedHistogram *)(lVar3 + 0xdc0) != param_1) {
      return;
    }
    Histogram::AddSample(iVar1 + 0x2b0);
    iVar1 = iVar1 + 0x2d8;
  }
  Histogram::AddSample(iVar1);
  return;
}

