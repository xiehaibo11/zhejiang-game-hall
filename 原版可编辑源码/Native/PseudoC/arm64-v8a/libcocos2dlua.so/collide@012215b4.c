
/* SphereTriangleDetector::collide(btVector3 const&, btVector3&, btVector3&, float&, float&, float)
    */

undefined8
SphereTriangleDetector::collide
          (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,float *param_4,float *param_5,
          float param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  SphereTriangleDetector *extraout_x0;
  SphereTriangleDetector *this;
  ulong uVar5;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  lVar1 = *(long *)(param_1 + 0x10);
  fVar6 = *(float *)(lVar1 + 0x48);
  fVar8 = *(float *)(lVar1 + 0x58) - fVar6;
  fVar9 = *(float *)(lVar1 + 0x5c) - *(float *)(lVar1 + 0x4c);
  fVar6 = *(float *)(lVar1 + 0x68) - fVar6;
  fVar11 = *(float *)(lVar1 + 0x6c) - *(float *)(lVar1 + 0x4c);
  fVar10 = *(float *)(lVar1 + 0x60) - *(float *)(lVar1 + 0x50);
  fVar12 = *(float *)(lVar1 + 0x70) - *(float *)(lVar1 + 0x50);
  fVar17 = fVar9 * fVar12 - fVar10 * fVar11;
  fVar10 = fVar10 * fVar6 - fVar8 * fVar12;
  fVar11 = fVar8 * fVar11 - fVar9 * fVar6;
  fVar8 = fVar11 * fVar11 + fVar17 * fVar17 + fVar10 * fVar10;
  fVar6 = SQRT(fVar8);
  fVar9 = *(float *)(*(long *)(param_1 + 8) + 0x28) * *(float *)(*(long *)(param_1 + 8) + 0x18);
  this = (SphereTriangleDetector *)param_1;
  if (NAN(fVar6)) {
    fVar6 = sqrtf(fVar8);
    this = extraout_x0;
  }
  fVar8 = *(float *)param_2;
  fVar12 = *(float *)(param_2 + 4);
  fVar18 = *(float *)(param_2 + 8);
  fVar6 = 1.0 / fVar6;
  fVar17 = fVar6 * fVar17;
  fVar10 = fVar6 * fVar10;
  fVar6 = fVar6 * fVar11;
  fVar11 = (fVar8 - *(float *)(lVar1 + 0x48)) * fVar17 +
           fVar10 * (fVar12 - *(float *)(lVar1 + 0x4c)) +
           fVar6 * (fVar18 - *(float *)(lVar1 + 0x50));
  fVar16 = fVar9 + param_6;
  if (fVar11 < 0.0) {
    fVar11 = -fVar11;
    fVar17 = -fVar17;
    fVar10 = -fVar10;
    fVar6 = -fVar6;
  }
  if (fVar16 <= fVar11) {
    return 0;
  }
  uStack_98 = *(undefined8 *)(param_2 + 8);
  local_a0 = *(undefined8 *)param_2;
  local_a4 = 0;
  local_b0 = fVar17;
  fStack_ac = fVar10;
  local_a8 = fVar6;
  uVar5 = pointInTriangle(this,(btVector3 *)(lVar1 + 0x48),(btVector3 *)&local_b0,
                          (btVector3 *)&local_a0);
  if ((uVar5 & 1) == 0) {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 200))();
    if (iVar3 < 1) {
      return 0;
    }
    bVar2 = false;
    iVar3 = 0;
    fVar7 = fVar6;
    do {
      (**(code **)(**(long **)(param_1 + 0x10) + 0xd0))
                (*(long **)(param_1 + 0x10),iVar3,&local_a0,&local_b0);
      fVar19 = *(float *)param_2 - (float)local_a0;
      fVar14 = *(float *)(param_2 + 4) - local_a0._4_4_;
      fVar11 = local_b0 - (float)local_a0;
      fVar18 = fStack_ac - local_a0._4_4_;
      fVar13 = *(float *)(param_2 + 8) - (float)uStack_98;
      fVar15 = local_a8 - (float)uStack_98;
      fVar21 = fVar19 * fVar11 + fVar14 * fVar18 + fVar13 * fVar15;
      fVar20 = 0.0;
      if (0.0 < fVar21) {
        fVar20 = fVar11 * fVar11 + fVar18 * fVar18 + fVar15 * fVar15;
        if (fVar20 <= fVar21) {
          fVar19 = fVar19 - fVar11;
          fVar14 = fVar14 - fVar18;
          fVar13 = fVar13 - fVar15;
          fVar20 = 1.0;
        }
        else {
          fVar20 = fVar21 / fVar20;
          fVar19 = fVar19 - fVar11 * fVar20;
          fVar14 = fVar14 - fVar18 * fVar20;
          fVar13 = fVar13 - fVar15 * fVar20;
        }
      }
      if (fVar19 * fVar19 + fVar14 * fVar14 + fVar13 * fVar13 < fVar16 * fVar16) {
        fVar7 = (float)uStack_98 + fVar15 * fVar20;
        fVar8 = local_a0._4_4_ + fVar18 * fVar20;
        fVar12 = (float)local_a0 + fVar11 * fVar20;
        bVar2 = true;
      }
      iVar3 = iVar3 + 1;
      iVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 200))();
    } while (iVar3 < iVar4);
    if (!bVar2) {
      return 0;
    }
    fVar15 = *(float *)param_2;
    fVar11 = *(float *)(param_2 + 4);
    fVar18 = *(float *)(param_2 + 8);
  }
  else {
    fVar13 = fVar8 - fVar11 * fVar17;
    fVar7 = fVar18 - fVar11 * fVar6;
    fVar15 = fVar8;
    fVar8 = fVar12 - fVar11 * fVar10;
    fVar11 = fVar12;
    fVar12 = fVar13;
  }
  fVar15 = fVar15 - fVar12;
  fVar11 = fVar11 - fVar8;
  fVar18 = fVar18 - fVar7;
  fVar13 = fVar15 * fVar15 + fVar11 * fVar11 + fVar18 * fVar18;
  if (fVar16 * fVar16 <= fVar13) {
    return 0;
  }
  if (fVar13 <= 1.1920929e-07) {
    *param_4 = fVar17;
    param_4[1] = fVar10;
    param_4[2] = fVar6;
    param_4[3] = 0.0;
  }
  else {
    fVar10 = SQRT(fVar13);
    fVar6 = fVar10;
    if (NAN(fVar10)) {
      fVar6 = sqrtf(fVar13);
    }
    *param_4 = fVar15;
    param_4[1] = fVar11;
    param_4[2] = fVar18;
    param_4[3] = 0.0;
    if (NAN(fVar10)) {
      fVar10 = sqrtf(fVar13);
    }
    fVar10 = 1.0 / fVar10;
    *param_4 = fVar10 * *param_4;
    param_4[1] = fVar10 * param_4[1];
    param_4[2] = fVar10 * param_4[2];
    fVar9 = fVar9 - fVar6;
  }
  *(float *)param_3 = fVar12;
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(float *)(param_3 + 4) = fVar8;
  *(float *)(param_3 + 8) = fVar7;
  *param_5 = -fVar9;
  return 1;
}

