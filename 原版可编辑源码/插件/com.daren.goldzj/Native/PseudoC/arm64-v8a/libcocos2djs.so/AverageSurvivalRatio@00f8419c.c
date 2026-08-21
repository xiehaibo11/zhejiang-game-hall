
/* v8::internal::GCTracer::AverageSurvivalRatio() const */

undefined1  [16] __thiscall v8::internal::GCTracer::AverageSurvivalRatio(GCTracer *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  iVar1 = *(int *)(this + 0x112c);
  if (iVar1 == 0) {
    return ZEXT816(0);
  }
  if (iVar1 < 1) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = 0.0;
    iVar2 = *(int *)(this + 0x1128) + iVar1 + -1;
    iVar4 = *(int *)(this + 0x1128) + iVar1 + -0xb;
    iVar3 = iVar1;
    if (iVar2 < 10) {
      iVar4 = iVar2;
    }
    do {
      iVar2 = 9;
      if (iVar4 != 0) {
        iVar2 = iVar4 + -1;
      }
      iVar3 = iVar3 + -1;
      dVar5 = dVar5 + *(double *)(this + (long)iVar4 * 8 + 0x10d8);
      iVar4 = iVar2;
    } while (iVar3 != 0);
  }
  auVar6._0_8_ = dVar5 / (double)iVar1;
  auVar6._8_8_ = 0;
  return auVar6;
}

