
/* v8::internal::GCTracer::ContextDisposalRateInMilliseconds() const */

undefined1  [16] __thiscall
v8::internal::GCTracer::ContextDisposalRateInMilliseconds(GCTracer *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  
  dVar5 = 0.0;
  if (9 < *(int *)(this + 0x10d4)) {
    dVar5 = (double)Heap::MonotonicallyIncreasingTimeInMs();
    iVar2 = *(int *)(this + 0x10d4);
    if (iVar2 < 1) {
      dVar7 = 0.0;
    }
    else {
      iVar4 = iVar2 + *(int *)(this + 0x10d0) + -1;
      iVar1 = iVar2 + *(int *)(this + 0x10d0) + -0xb;
      iVar3 = iVar2;
      if (iVar4 < 10) {
        iVar1 = iVar4;
      }
      do {
        iVar4 = iVar1;
        iVar1 = 9;
        if (iVar4 != 0) {
          iVar1 = iVar4 + -1;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      dVar7 = *(double *)(this + (long)iVar4 * 8 + 0x1080);
    }
    dVar5 = (dVar5 - dVar7) / (double)iVar2;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar5;
  return auVar6;
}

