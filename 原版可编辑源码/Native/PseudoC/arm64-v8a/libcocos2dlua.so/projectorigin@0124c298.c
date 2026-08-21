
/* gjkepa2_impl::GJK::projectorigin(btVector3 const&, btVector3 const&, btVector3 const&, float*,
   unsigned int&) */

float gjkepa2_impl::GJK::projectorigin
                (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,float *param_4,
                uint *param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar5 = *(float *)param_1;
  fVar6 = *(float *)(param_1 + 4);
  fVar18 = *(float *)param_2;
  fVar17 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar10 = *(float *)(param_2 + 8);
  fVar7 = *(float *)param_3;
  fVar8 = *(float *)(param_3 + 4);
  fVar4 = *(float *)(param_3 + 8);
  fVar19 = fVar5 - fVar18;
  fVar3 = fVar6 - fVar17;
  fVar22 = fVar2 - fVar10;
  fVar12 = fVar18 - fVar7;
  fVar11 = fVar17 - fVar8;
  fVar13 = fVar10 - fVar4;
  fVar14 = fVar3 * fVar13 - fVar22 * fVar11;
  fVar15 = fVar22 * fVar12 - fVar13 * fVar19;
  fVar16 = fVar11 * fVar19 - fVar3 * fVar12;
  fVar24 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
  if (fVar24 <= 0.0) {
    fVar3 = -1.0;
  }
  else {
    if (fVar5 * (fVar16 * fVar3 - fVar15 * fVar22) + fVar6 * (fVar14 * fVar22 - fVar16 * fVar19) +
        (fVar15 * fVar19 - fVar14 * fVar3) * fVar2 <= 0.0) {
      uVar1 = 0;
      fVar19 = 0.0;
      fVar22 = 0.0;
      fVar3 = -1.0;
    }
    else {
      fVar3 = fVar18 - fVar5;
      fVar20 = fVar17 - fVar6;
      fVar23 = fVar10 - fVar2;
      fVar22 = fVar3 * fVar3 + fVar20 * fVar20 + fVar23 * fVar23;
      if (fVar22 <= 0.0) {
        uVar1 = 0;
        fVar19 = 0.0;
        fVar22 = 0.0;
        fVar3 = -1.0;
      }
      else {
        fVar22 = -(fVar5 * fVar3 + fVar6 * fVar20 + fVar2 * fVar23) / fVar22;
        if (1.0 <= fVar22) {
          fVar19 = 0.0;
          fVar22 = 1.0;
          fVar3 = fVar18 * fVar18 + fVar17 * fVar17 + fVar10 * fVar10;
          uVar1 = 2;
        }
        else if (fVar22 <= 0.0) {
          fVar22 = 0.0;
          fVar19 = 1.0;
          fVar3 = fVar5 * fVar5 + fVar6 * fVar6 + fVar2 * fVar2;
          uVar1 = 1;
        }
        else {
          fVar19 = 1.0 - fVar22;
          fVar10 = fVar5 + fVar3 * fVar22;
          fVar3 = fVar6 + fVar20 * fVar22;
          fVar17 = fVar2 + fVar23 * fVar22;
          fVar3 = fVar17 * fVar17 + fVar10 * fVar10 + fVar3 * fVar3;
          uVar1 = 3;
        }
      }
      *param_5 = uVar1;
      *param_4 = fVar19;
      param_4[1] = fVar22;
      param_4[2] = 0.0;
      fVar18 = *(float *)param_2;
      fVar17 = *(float *)(param_2 + 4);
      fVar10 = *(float *)(param_2 + 8);
    }
    fVar7 = fVar7 - fVar5;
    fVar8 = fVar8 - fVar6;
    fVar4 = fVar4 - fVar2;
    if (0.0 < fVar18 * (fVar16 * fVar11 - fVar15 * fVar13) +
              fVar17 * (fVar14 * fVar13 - fVar16 * fVar12) +
              (fVar15 * fVar12 - fVar14 * fVar11) * fVar10) {
      fVar20 = *(float *)param_3;
      fVar23 = *(float *)(param_3 + 4);
      fVar9 = *(float *)(param_3 + 8);
      fVar6 = fVar20 - fVar18;
      fVar5 = fVar23 - fVar17;
      fVar2 = fVar9 - fVar10;
      fVar21 = fVar6 * fVar6 + fVar5 * fVar5 + fVar2 * fVar2;
      if (fVar21 <= 0.0) {
        fVar2 = -1.0;
      }
      else {
        fVar22 = -(fVar18 * fVar6 + fVar17 * fVar5 + fVar10 * fVar2) / fVar21;
        if (1.0 <= fVar22) {
          fVar19 = 0.0;
          fVar22 = 1.0;
          fVar2 = fVar20 * fVar20 + fVar23 * fVar23 + fVar9 * fVar9;
          uVar1 = 2;
        }
        else if (fVar22 <= 0.0) {
          fVar22 = 0.0;
          fVar19 = 1.0;
          fVar2 = fVar18 * fVar18 + fVar17 * fVar17 + fVar10 * fVar10;
          uVar1 = 1;
        }
        else {
          fVar18 = fVar18 + fVar6 * fVar22;
          fVar17 = fVar17 + fVar5 * fVar22;
          fVar10 = fVar10 + fVar2 * fVar22;
          fVar19 = 1.0 - fVar22;
          fVar2 = fVar10 * fVar10 + fVar18 * fVar18 + fVar17 * fVar17;
          uVar1 = 3;
        }
      }
      if ((fVar3 < 0.0) || (fVar2 < fVar3)) {
        *param_5 = uVar1 << 1;
        *param_4 = 0.0;
        param_4[1] = fVar19;
        param_4[2] = fVar22;
        fVar3 = fVar2;
      }
    }
    fVar2 = *(float *)param_3;
    fVar10 = *(float *)(param_3 + 4);
    fVar17 = *(float *)(param_3 + 8);
    if (0.0 < fVar2 * (fVar16 * fVar8 - fVar15 * fVar4) + fVar10 * (fVar14 * fVar4 - fVar16 * fVar7)
              + (fVar15 * fVar7 - fVar14 * fVar8) * fVar17) {
      fVar20 = *(float *)param_1;
      fVar23 = *(float *)(param_1 + 4);
      fVar9 = *(float *)(param_1 + 8);
      fVar6 = fVar20 - fVar2;
      fVar18 = fVar23 - fVar10;
      fVar5 = fVar9 - fVar17;
      fVar21 = fVar6 * fVar6 + fVar18 * fVar18 + fVar5 * fVar5;
      if (fVar21 <= 0.0) {
        fVar2 = -1.0;
      }
      else {
        fVar22 = -(fVar2 * fVar6 + fVar10 * fVar18 + fVar17 * fVar5) / fVar21;
        if (1.0 <= fVar22) {
          fVar19 = 0.0;
          fVar22 = 1.0;
          fVar2 = fVar20 * fVar20 + fVar23 * fVar23 + fVar9 * fVar9;
          uVar1 = 2;
        }
        else if (0.0 < fVar22) {
          fVar2 = fVar2 + fVar6 * fVar22;
          fVar10 = fVar10 + fVar18 * fVar22;
          fVar17 = fVar17 + fVar5 * fVar22;
          fVar19 = 1.0 - fVar22;
          fVar2 = fVar17 * fVar17 + fVar2 * fVar2 + fVar10 * fVar10;
          uVar1 = 3;
        }
        else {
          fVar22 = 0.0;
          fVar19 = 1.0;
          fVar2 = fVar2 * fVar2 + fVar10 * fVar10 + fVar17 * fVar17;
          uVar1 = 1;
        }
      }
      if ((fVar3 < 0.0) || (fVar2 < fVar3)) {
        *param_5 = uVar1 >> 1 | (uVar1 & 1) << 2;
        param_4[1] = 0.0;
        param_4[2] = fVar19;
        *param_4 = fVar22;
        fVar3 = fVar2;
      }
    }
    if (fVar3 < 0.0) {
      fVar2 = *(float *)param_1;
      fVar3 = *(float *)(param_1 + 4);
      fVar17 = *(float *)(param_1 + 8);
      fVar10 = SQRT(fVar24);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar24);
      }
      fVar24 = (fVar14 * fVar2 + fVar15 * fVar3 + fVar16 * fVar17) / fVar24;
      *param_5 = 7;
      fVar14 = fVar14 * fVar24;
      fVar15 = fVar15 * fVar24;
      fVar16 = fVar16 * fVar24;
      fVar3 = fVar11 * (*(float *)(param_2 + 8) - fVar16) -
              (*(float *)(param_2 + 4) - fVar15) * fVar13;
      fVar24 = (*(float *)param_2 - fVar14) * fVar13 - (*(float *)(param_2 + 8) - fVar16) * fVar12;
      fVar2 = (*(float *)(param_2 + 4) - fVar15) * fVar12 - (*(float *)param_2 - fVar14) * fVar11;
      fVar24 = fVar2 * fVar2 + fVar3 * fVar3 + fVar24 * fVar24;
      fVar2 = SQRT(fVar24);
      if (NAN(fVar2)) {
        fVar2 = sqrtf(fVar24);
      }
      *param_4 = fVar2 / fVar10;
      fVar3 = fVar8 * (*(float *)(param_3 + 8) - fVar16) -
              (*(float *)(param_3 + 4) - fVar15) * fVar4;
      fVar24 = (*(float *)param_3 - fVar14) * fVar4 - (*(float *)(param_3 + 8) - fVar16) * fVar7;
      fVar2 = (*(float *)(param_3 + 4) - fVar15) * fVar7 - (*(float *)param_3 - fVar14) * fVar8;
      fVar2 = fVar2 * fVar2 + fVar3 * fVar3 + fVar24 * fVar24;
      fVar24 = SQRT(fVar2);
      if (NAN(fVar24)) {
        fVar24 = sqrtf(fVar2);
      }
      fVar3 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
      param_4[1] = fVar24 / fVar10;
      param_4[2] = 1.0 - (fVar24 / fVar10 + *param_4);
    }
  }
  return fVar3;
}

