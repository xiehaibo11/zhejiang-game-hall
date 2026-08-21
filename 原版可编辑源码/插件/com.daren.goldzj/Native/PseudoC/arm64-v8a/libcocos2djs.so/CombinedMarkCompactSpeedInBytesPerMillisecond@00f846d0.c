
/* v8::internal::GCTracer::CombinedMarkCompactSpeedInBytesPerMillisecond() */

undefined1  [16] __thiscall
v8::internal::GCTracer::CombinedMarkCompactSpeedInBytesPerMillisecond(GCTracer *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  
  dVar8 = *(double *)(this + 0xb10);
  if (0.0 < dVar8) {
LAB_00f84798:
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar8;
    return auVar9;
  }
  iVar2 = *(int *)(this + 0xe84);
  iVar3 = iVar2 + *(int *)(this + 0xe80);
  iVar1 = iVar3 + -1;
  if (0 < iVar2) {
    uVar4 = 0;
    dVar8 = 0.0;
    iVar5 = iVar3 + -0xb;
    iVar6 = iVar2;
    if (iVar1 < 10) {
      iVar5 = iVar1;
    }
    do {
      iVar7 = 9;
      if (iVar5 != 0) {
        iVar7 = iVar5 + -1;
      }
      iVar6 = iVar6 + -1;
      dVar8 = dVar8 + *(double *)(this + (long)iVar5 * 0x10 + 0xde8);
      uVar4 = *(long *)(this + (long)iVar5 * 0x10 + 0xde0) + uVar4;
      iVar5 = iVar7;
    } while (iVar6 != 0);
    if (dVar8 != 0.0) {
      dVar8 = (double)uVar4 / dVar8;
      if (1073741824.0 <= dVar8) {
        *(undefined8 *)(this + 0xb10) = 0x41d0000000000000;
        return ZEXT816(0x41d0000000000000);
      }
      if (dVar8 <= 1.0) {
        dVar8 = 1.0;
      }
      *(double *)(this + 0xb10) = dVar8;
      if (0.0 < dVar8) goto LAB_00f84798;
      goto LAB_00f84744;
    }
  }
  *(undefined8 *)(this + 0xb10) = 0;
LAB_00f84744:
  dVar8 = *(double *)(this + 0x9d0);
  if (dVar8 == 0.0) {
    if (*(double *)(this + 0x9c0) == 0.0) {
      dVar8 = 131072.0;
    }
    else {
      dVar8 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x9b8));
      dVar8 = dVar8 / *(double *)(this + 0x9c0);
    }
  }
  iVar6 = *(int *)(this + 0xddc);
  if (0 < iVar6) {
    uVar4 = 0;
    dVar12 = 0.0;
    iVar5 = iVar6 + *(int *)(this + 0xdd8) + -1;
    iVar7 = iVar6 + *(int *)(this + 0xdd8) + -0xb;
    if (iVar5 < 10) {
      iVar7 = iVar5;
    }
    do {
      iVar5 = 9;
      if (iVar7 != 0) {
        iVar5 = iVar7 + -1;
      }
      iVar6 = iVar6 + -1;
      dVar12 = dVar12 + *(double *)(this + (long)iVar7 * 0x10 + 0xd40);
      uVar4 = *(long *)(this + (long)iVar7 * 0x10 + 0xd38) + uVar4;
      iVar7 = iVar5;
    } while (iVar6 != 0);
    if (dVar12 != 0.0) {
      dVar12 = (double)uVar4 / dVar12;
      if (1073741824.0 <= dVar12) {
        dVar12 = 1073741824.0;
      }
      if ((0.5 <= dVar8) && (0.5 <= dVar12)) {
        auVar10._0_8_ = (dVar8 * dVar12) / (dVar8 + dVar12);
        *(double *)(this + 0xb10) = auVar10._0_8_;
        auVar10._8_8_ = 0;
        return auVar10;
      }
    }
  }
  if (iVar2 < 1) {
    *(undefined8 *)(this + 0xb10) = 0;
    return ZEXT816(0);
  }
  uVar4 = 0;
  dVar8 = 0.0;
  iVar3 = iVar3 + -0xb;
  if (iVar1 < 10) {
    iVar3 = iVar1;
  }
  do {
    iVar1 = 9;
    if (iVar3 != 0) {
      iVar1 = iVar3 + -1;
    }
    iVar2 = iVar2 + -1;
    dVar8 = dVar8 + *(double *)(this + (long)iVar3 * 0x10 + 0xde8);
    uVar4 = *(long *)(this + (long)iVar3 * 0x10 + 0xde0) + uVar4;
    iVar3 = iVar1;
  } while (iVar2 != 0);
  if (dVar8 != 0.0) {
    dVar8 = (double)uVar4 / dVar8;
    if (1073741824.0 <= dVar8) {
      dVar8 = 1073741824.0;
    }
    *(double *)(this + 0xb10) = dVar8;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar8;
    return auVar11;
  }
  *(undefined8 *)(this + 0xb10) = 0;
  return ZEXT816(0);
}

