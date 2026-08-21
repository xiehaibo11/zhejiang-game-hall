
void FUN_01169728(float param_1,float param_2,float param_3,float param_4,float param_5,long param_6
                 ,long *param_7)

{
  long lVar1;
  long lVar2;
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
  
  fVar5 = *(float *)(param_6 + 0xa0);
  fVar7 = *(float *)(param_6 + 0xa4);
  fVar8 = *(float *)(param_6 + 0xb0);
  fVar3 = *(float *)(param_6 + 0xb4);
  fVar9 = *(float *)(param_6 + 0xa8);
  fVar10 = *(float *)(param_6 + 0xac);
  fVar14 = (fVar5 - param_1) * fVar8 + fVar3 * (fVar7 - param_2);
  fVar11 = *(float *)(param_6 + 0xb8) + param_5;
  fVar6 = -fVar3;
  fVar4 = -fVar8;
  if (fVar14 <= 0.0) {
    fVar6 = fVar3;
    fVar4 = fVar8;
  }
  fVar15 = fVar4 * fVar11 - param_1;
  fVar12 = param_4 - param_2;
  fVar16 = fVar6 * fVar11 - param_2;
  fVar13 = param_3 - param_1;
  if (((fVar16 + fVar7) * fVar13 - (fVar15 + fVar5) * fVar12) *
      ((fVar16 + fVar10) * fVar13 - (fVar15 + fVar9) * fVar12) <= 0.0) {
    fVar5 = -fVar11;
    if (fVar14 <= 0.0) {
      fVar5 = fVar11;
    }
    fVar5 = fVar5 + fVar14;
    fVar3 = fVar8 * fVar13 + fVar12 * fVar3;
    if ((fVar3 - fVar5) * fVar5 <= -0.0) {
      return;
    }
    fVar5 = fVar5 / fVar3;
    *param_7 = param_6;
    *(float *)(param_7 + 2) = fVar4;
    *(float *)((long)param_7 + 0x14) = fVar6;
    *(float *)(param_7 + 1) = (fVar5 * param_3 - fVar4 * param_5) + param_1 * (1.0 - fVar5);
    *(float *)((long)param_7 + 0xc) = (fVar5 * param_4 - fVar6 * param_5) + param_2 * (1.0 - fVar5);
    goto LAB_01169a4c;
  }
  if (fVar11 == 0.0) {
    return;
  }
  fVar12 = param_1 - fVar5;
  fVar5 = param_3 - fVar5;
  fVar13 = param_2 - fVar7;
  fVar7 = param_4 - fVar7;
  fVar4 = fVar12 * fVar12 + fVar13 * fVar13;
  fVar6 = fVar5 * fVar12 + fVar13 * fVar7;
  fVar8 = fVar6 - fVar4;
  fVar3 = fVar5 * fVar5 + fVar7 * fVar7 + fVar4 + fVar6 * -2.0;
  fVar14 = (fVar11 * fVar11 - fVar4) * fVar3 + fVar8 * fVar8;
  fVar4 = param_3;
  fVar6 = param_4;
  if (0.0 <= fVar14) {
    fVar3 = (-fVar8 - SQRT(fVar14)) / fVar3;
    lVar1 = 0;
    fVar8 = 0.0;
    if (fVar3 < 0.0) {
      fVar14 = 1.0;
      fVar15 = 0.0;
    }
    else {
      fVar15 = 0.0;
      fVar14 = 1.0;
      if (fVar3 <= 1.0) {
        fVar6 = 1.0 - fVar3;
        fVar8 = fVar3 * fVar5 + fVar12 * fVar6;
        fVar4 = fVar3 * fVar7 + fVar13 * fVar6;
        fVar15 = 1.0 / (SQRT(fVar4 * fVar4 + fVar8 * fVar8) + 1.1754944e-38);
        fVar8 = fVar15 * fVar8;
        fVar15 = fVar15 * fVar4;
        lVar1 = param_6;
        fVar14 = fVar3;
        fVar4 = (fVar3 * param_3 + param_1 * fVar6) - param_5 * fVar8;
        fVar6 = (fVar3 * param_4 + param_2 * fVar6) - param_5 * fVar15;
      }
    }
  }
  else {
    fVar8 = 0.0;
    fVar15 = 0.0;
    lVar1 = 0;
    fVar14 = 1.0;
  }
  fVar12 = param_1 - fVar9;
  fVar9 = param_3 - fVar9;
  fVar13 = param_2 - fVar10;
  fVar10 = param_4 - fVar10;
  fVar7 = fVar12 * fVar12 + fVar13 * fVar13;
  fVar3 = fVar9 * fVar12 + fVar13 * fVar10;
  fVar5 = fVar3 - fVar7;
  fVar3 = fVar9 * fVar9 + fVar10 * fVar10 + fVar7 + fVar3 * -2.0;
  fVar7 = fVar3 * (fVar11 * fVar11 - fVar7) + fVar5 * fVar5;
  if (0.0 <= fVar7) {
    fVar3 = (-fVar5 - SQRT(fVar7)) / fVar3;
    fVar7 = 0.0;
    if (fVar3 < 0.0) goto joined_r0x01169a3c;
    fVar11 = 0.0;
    lVar2 = 0;
    fVar5 = 1.0;
    if (fVar3 <= 1.0) {
      fVar5 = 1.0 - fVar3;
      fVar11 = fVar3 * fVar9 + fVar12 * fVar5;
      fVar9 = fVar3 * fVar10 + fVar13 * fVar5;
      fVar7 = 1.0 / (SQRT(fVar9 * fVar9 + fVar11 * fVar11) + 1.1754944e-38);
      fVar11 = fVar7 * fVar11;
      fVar7 = fVar7 * fVar9;
      param_3 = (fVar3 * param_3 + param_1 * fVar5) - param_5 * fVar11;
      param_4 = (fVar3 * param_4 + param_2 * fVar5) - param_5 * fVar7;
      lVar2 = param_6;
      fVar5 = fVar3;
    }
    if (fVar14 < fVar5) goto LAB_01169a20;
  }
  else {
joined_r0x01169a3c:
    fVar11 = 0.0;
    fVar7 = 0.0;
    fVar5 = 1.0;
    lVar2 = 0;
    if (fVar14 < 1.0) {
LAB_01169a20:
      *param_7 = lVar1;
      *(float *)(param_7 + 1) = fVar4;
      *(float *)((long)param_7 + 0xc) = fVar6;
      *(float *)(param_7 + 2) = fVar8;
      *(float *)((long)param_7 + 0x14) = fVar15;
      *(float *)(param_7 + 3) = fVar14;
      return;
    }
  }
  *param_7 = lVar2;
  *(float *)(param_7 + 1) = param_3;
  *(float *)((long)param_7 + 0xc) = param_4;
  *(float *)(param_7 + 2) = fVar11;
  *(float *)((long)param_7 + 0x14) = fVar7;
LAB_01169a4c:
  *(float *)(param_7 + 3) = fVar5;
  return;
}

