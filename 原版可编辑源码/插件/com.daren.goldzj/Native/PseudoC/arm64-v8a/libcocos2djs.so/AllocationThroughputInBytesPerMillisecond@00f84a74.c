
/* v8::internal::GCTracer::AllocationThroughputInBytesPerMillisecond(double) const */

undefined1  [16] __thiscall
v8::internal::GCTracer::AllocationThroughputInBytesPerMillisecond(GCTracer *this,double param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  
  iVar5 = *(int *)(this + 0xf2c);
  uVar4 = *(ulong *)(this + 0xaf8);
  dVar2 = *(double *)(this + 0xaf0);
  dVar3 = dVar2;
  if (0 < iVar5) {
    iVar1 = iVar5 + *(int *)(this + 0xf28) + -1;
    dVar10 = dVar2;
    iVar6 = iVar5 + *(int *)(this + 0xf28) + -0xb;
    if (iVar1 < 10) {
      iVar6 = iVar1;
    }
    do {
      lVar7 = *(long *)(this + (long)iVar6 * 0x10 + 0xe88);
      dVar3 = *(double *)(this + (long)iVar6 * 0x10 + 0xe90) + dVar10;
      if (param_1 != 0.0 && param_1 <= dVar10) {
        lVar7 = 0;
        dVar3 = dVar10;
      }
      iVar1 = 9;
      if (iVar6 != 0) {
        iVar1 = iVar6 + -1;
      }
      iVar5 = iVar5 + -1;
      uVar4 = lVar7 + uVar4;
      dVar10 = dVar3;
      iVar6 = iVar1;
    } while (iVar5 != 0);
  }
  dVar10 = 0.0;
  if ((dVar3 != 0.0) && (dVar10 = (double)uVar4 / dVar3, 1073741824.0 <= dVar10)) {
    dVar10 = 1073741824.0;
  }
  iVar5 = *(int *)(this + 0xfd4);
  uVar4 = *(ulong *)(this + 0xb00);
  if (0 < iVar5) {
    iVar1 = iVar5 + *(int *)(this + 0xfd0) + -1;
    dVar3 = dVar2;
    iVar6 = iVar5 + *(int *)(this + 0xfd0) + -0xb;
    if (iVar1 < 10) {
      iVar6 = iVar1;
    }
    do {
      lVar7 = *(long *)(this + (long)iVar6 * 0x10 + 0xf30);
      dVar2 = *(double *)(this + (long)iVar6 * 0x10 + 0xf38) + dVar3;
      if (param_1 != 0.0 && param_1 <= dVar3) {
        lVar7 = 0;
        dVar2 = dVar3;
      }
      iVar1 = 9;
      if (iVar6 != 0) {
        iVar1 = iVar6 + -1;
      }
      iVar5 = iVar5 + -1;
      uVar4 = lVar7 + uVar4;
      dVar3 = dVar2;
      iVar6 = iVar1;
    } while (iVar5 != 0);
  }
  if (dVar2 != 0.0) {
    dVar2 = (double)uVar4 / dVar2;
    if (1073741824.0 <= dVar2) {
      dVar2 = 1073741824.0;
    }
    auVar9._0_8_ = dVar10 + dVar2;
    auVar9._8_8_ = 0;
    return auVar9;
  }
  auVar8._0_8_ = dVar10 + 0.0;
  auVar8._8_8_ = 0;
  return auVar8;
}

