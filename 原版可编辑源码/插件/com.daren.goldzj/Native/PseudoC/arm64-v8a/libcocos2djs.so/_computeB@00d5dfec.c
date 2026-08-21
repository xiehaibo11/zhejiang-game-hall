
/* dragonBones::IKConstraint::_computeB() */

void __thiscall dragonBones::IKConstraint::_computeB(IKConstraint *this)

{
  long lVar1;
  long lVar2;
  IKConstraint IVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  
  lVar5 = *(long *)(this + 0x30);
  lVar1 = *(long *)(this + 0x18);
  lVar2 = *(long *)(this + 0x20);
  fVar6 = *(float *)(lVar5 + 0x34);
  fVar9 = *(float *)(*(long *)(lVar5 + 0xa8) + 0x14);
  fVar18 = *(float *)(lVar2 + 0x28);
  fVar17 = *(float *)(lVar2 + 0x2c);
  fVar7 = *(float *)(lVar2 + 0x34);
  fVar10 = (float)*(undefined8 *)(lVar5 + 0x10) * fVar9;
  fVar9 = (float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20) * fVar9;
  fVar15 = fVar10 * fVar10 + fVar9 * fVar9;
  fVar10 = *(float *)(lVar5 + 0x28) - fVar18;
  fVar9 = *(float *)(lVar5 + 0x2c) - fVar17;
  fVar13 = fVar10 * fVar10 + fVar9 * fVar9;
  fVar14 = SQRT(fVar15);
  fVar16 = SQRT(fVar13);
  fVar9 = atan2f(fVar9,fVar10);
  fVar8 = *(float *)(lVar1 + 0x28) - fVar18;
  fVar10 = *(float *)(lVar1 + 0x2c) - fVar17;
  fVar11 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar12 = SQRT(fVar11);
  if (((fVar16 + fVar12 <= fVar14) || (fVar14 + fVar16 <= fVar12)) || (fVar14 + fVar12 <= fVar16)) {
    fVar10 = atan2f(fVar10,fVar8);
    if ((fVar16 < fVar14) && (fVar12 < fVar14 + fVar16)) {
      fVar10 = fVar10 + 3.1415927;
    }
  }
  else {
    fVar14 = ((fVar13 - fVar15) + fVar11) / (fVar11 + fVar11);
    lVar4 = *(long *)(lVar2 + 0xc0);
    fVar12 = SQRT(fVar13 - fVar11 * fVar14 * fVar14) / fVar12;
    IVar3 = (IKConstraint)0x0;
    if (lVar4 != 0) {
      IVar3 = (IKConstraint)
              (*(float *)(lVar4 + 0x10) * *(float *)(lVar4 + 0x1c) -
               *(float *)(lVar4 + 0x14) * *(float *)(lVar4 + 0x18) < 0.0);
    }
    fVar18 = fVar18 + fVar8 * fVar14;
    fVar17 = fVar17 + fVar10 * fVar14;
    fVar10 = fVar10 * fVar12;
    fVar8 = fVar8 * fVar12;
    if (IVar3 == this[0x38]) {
      fVar10 = fVar18 - fVar10;
      fVar8 = fVar17 + fVar8;
      *(float *)(lVar5 + 0x28) = fVar10;
    }
    else {
      fVar10 = fVar18 + fVar10;
      *(float *)(lVar5 + 0x28) = fVar10;
      fVar8 = fVar17 - fVar8;
    }
    *(float *)(lVar5 + 0x2c) = fVar8;
    fVar18 = *(float *)(lVar2 + 0x28);
    fVar17 = *(float *)(lVar2 + 0x2c);
    fVar10 = atan2f(fVar8 - fVar17,fVar10 - fVar18);
  }
  fVar8 = fmodf((fVar10 - fVar9) + 3.1415927,6.2831855);
  fVar10 = -3.1415927;
  if (fVar8 <= 0.0) {
    fVar10 = 3.1415927;
  }
  fVar8 = fVar8 + fVar10;
  fVar12 = fVar7 + *(float *)(this + 0x3c) * fVar8;
  *(float *)(lVar2 + 0x34) = fVar12;
  sincosf(fVar12,&fStack_84,&local_88);
  fVar10 = 0.0;
  fVar11 = 1.0;
  if (fVar12 != 0.0) {
    fVar10 = fStack_84;
    fVar11 = local_88;
  }
  *(float *)(lVar2 + 0x10) = fVar11;
  *(float *)(lVar2 + 0x14) = fVar10;
  fVar13 = fVar11;
  fVar14 = fVar10;
  if (*(float *)(lVar2 + 0x30) != 0.0) {
    sincosf(*(float *)(lVar2 + 0x30) + fVar12,&fStack_8c,&local_90);
    fVar13 = local_90;
    fVar14 = fStack_8c;
  }
  fVar15 = *(float *)(lVar2 + 0x38);
  *(float *)(lVar2 + 0x18) = -fVar14;
  *(float *)(lVar2 + 0x1c) = fVar13;
  if (fVar15 != 1.0) {
    *(float *)(lVar2 + 0x10) = fVar11 * fVar15;
    *(float *)(lVar2 + 0x14) = fVar10 * fVar15;
  }
  fVar10 = *(float *)(lVar2 + 0x3c);
  if (fVar10 != 1.0) {
    *(float *)(lVar2 + 0x18) = fVar10 * -fVar14;
    *(float *)(lVar2 + 0x1c) = fVar13 * fVar10;
  }
  *(float *)(lVar2 + 0x20) = fVar18;
  *(float *)(lVar2 + 0x24) = fVar17;
  fVar11 = *(float *)(this + 0x3c);
  sincosf(fVar9 + fVar8 * fVar11,&fStack_94,&local_98);
  fVar18 = fVar18 + fVar16 * local_98;
  fVar17 = fVar17 + fVar16 * fStack_94;
  *(float *)(lVar5 + 0x28) = fVar18;
  *(float *)(lVar5 + 0x2c) = fVar17;
  fVar10 = atan2f(*(float *)(lVar1 + 0x2c) - fVar17,*(float *)(lVar1 + 0x28) - fVar18);
  fVar13 = *(float *)(lVar5 + 0x38);
  fVar9 = fVar10 + 3.1415927;
  if (0.0 <= fVar13) {
    fVar9 = fVar10;
  }
  fVar10 = fmodf(((fVar9 - fVar8) - fVar6) + 3.1415927,6.2831855);
  fVar9 = -3.1415927;
  if (fVar10 <= 0.0) {
    fVar9 = 3.1415927;
  }
  fVar8 = ((fVar6 + fVar12) - fVar7) + fVar11 * (fVar10 + fVar9);
  *(float *)(lVar5 + 0x34) = fVar8;
  sincosf(fVar8,&fStack_9c,&local_a0);
  fVar9 = 0.0;
  fVar10 = 1.0;
  if (fVar8 != 0.0) {
    fVar9 = fStack_9c;
    fVar10 = local_a0;
  }
  *(float *)(lVar5 + 0x10) = fVar10;
  *(float *)(lVar5 + 0x14) = fVar9;
  fVar6 = fVar10;
  fVar7 = fVar9;
  if (*(float *)(lVar5 + 0x30) != 0.0) {
    sincosf(*(float *)(lVar5 + 0x30) + fVar8,&fStack_a4,&local_a8);
    fVar6 = local_a8;
    fVar7 = fStack_a4;
  }
  *(float *)(lVar5 + 0x18) = -fVar7;
  *(float *)(lVar5 + 0x1c) = fVar6;
  if (fVar13 != 1.0) {
    *(float *)(lVar5 + 0x10) = fVar10 * fVar13;
    *(float *)(lVar5 + 0x14) = fVar9 * fVar13;
  }
  fVar9 = *(float *)(lVar5 + 0x3c);
  if (fVar9 != 1.0) {
    *(float *)(lVar5 + 0x18) = fVar9 * -fVar7;
    *(float *)(lVar5 + 0x1c) = fVar6 * fVar9;
  }
  *(float *)(lVar5 + 0x20) = fVar18;
  *(float *)(lVar5 + 0x24) = fVar17;
  return;
}

