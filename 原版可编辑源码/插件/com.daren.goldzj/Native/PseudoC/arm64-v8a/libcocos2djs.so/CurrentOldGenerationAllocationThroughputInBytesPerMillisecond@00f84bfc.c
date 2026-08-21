
/* v8::internal::GCTracer::CurrentOldGenerationAllocationThroughputInBytesPerMillisecond() const */

undefined1  [16] __thiscall
v8::internal::GCTracer::CurrentOldGenerationAllocationThroughputInBytesPerMillisecond
          (GCTracer *this)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  iVar5 = *(int *)(this + 0xfd4);
  uVar2 = *(ulong *)(this + 0xb00);
  dVar3 = *(double *)(this + 0xaf0);
  if (0 < iVar5) {
    iVar1 = iVar5 + *(int *)(this + 0xfd0) + -1;
    dVar4 = dVar3;
    iVar6 = iVar5 + *(int *)(this + 0xfd0) + -0xb;
    if (iVar1 < 10) {
      iVar6 = iVar1;
    }
    do {
      lVar7 = *(long *)(this + (long)iVar6 * 0x10 + 0xf30);
      dVar3 = *(double *)(this + (long)iVar6 * 0x10 + 0xf38) + dVar4;
      if (5000.0 <= dVar4) {
        lVar7 = 0;
        dVar3 = dVar4;
      }
      iVar1 = 9;
      if (iVar6 != 0) {
        iVar1 = iVar6 + -1;
      }
      iVar5 = iVar5 + -1;
      uVar2 = lVar7 + uVar2;
      dVar4 = dVar3;
      iVar6 = iVar1;
    } while (iVar5 != 0);
  }
  if (dVar3 != 0.0) {
    dVar3 = (double)uVar2 / dVar3;
    if (1073741824.0 <= dVar3) {
      dVar3 = 1073741824.0;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar3;
    return auVar8;
  }
  return ZEXT816(0);
}

