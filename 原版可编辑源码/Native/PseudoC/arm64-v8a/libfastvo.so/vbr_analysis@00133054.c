
/* WARNING: Removing unreachable block (ram,0x00133440) */
/* WARNING: Removing unreachable block (ram,0x001334b4) */

void vbr_analysis(float param_1,float *param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  short *psVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar1 = param_4 >> 1;
  fVar16 = 0.0;
  fVar15 = 0.0;
  if (1 < param_4) {
    lVar8 = 0;
    fVar15 = 0.0;
    do {
      lVar2 = lVar8 * 2;
      lVar8 = lVar8 + 1;
      fVar11 = (float)(int)*(short *)(param_3 + lVar2);
      fVar15 = fVar15 + fVar11 * fVar11;
    } while (lVar8 < iVar1);
  }
  if (iVar1 < param_4) {
    lVar8 = (long)param_4 - (long)iVar1;
    fVar16 = 0.0;
    psVar9 = (short *)(param_3 + (long)iVar1 * 2);
    do {
      lVar8 = lVar8 + -1;
      fVar16 = fVar16 + (float)(int)*psVar9 * (float)(int)*psVar9;
      psVar9 = psVar9 + 1;
    } while (lVar8 != 0);
  }
  fVar14 = fVar15 + fVar16;
  dVar4 = log((double)(fVar14 + 6000.0));
  fVar17 = (float)dVar4;
  fVar11 = fVar17 - (float)*(undefined8 *)(param_2 + 6);
  fVar13 = fVar17 - (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
  param_2[0xc] = param_2[0xd] / param_2[0xe];
  fVar7 = param_1 + -0.4;
  fVar6 = fVar7 * 3.0 * ABS(fVar7);
  param_2[1] = fVar14 * *param_2 + (1.0 - *param_2) * param_2[1];
  fVar11 = ((fVar17 - param_2[3]) * (fVar17 - param_2[3]) + 0.0 +
            (fVar17 - param_2[4]) * (fVar17 - param_2[4]) +
            (fVar17 - param_2[5]) * (fVar17 - param_2[5]) + fVar11 * fVar11 + fVar13 * fVar13) /
           150.0;
  if (1.0 < fVar11) {
    fVar11 = 1.0;
  }
  dVar4 = pow((double)fVar14,0.3);
  fVar10 = param_2[0xe];
  fVar13 = (float)dVar4;
  if ((6000.0 < fVar14) && (fVar10 < 0.06)) {
    param_2[0xd] = fVar13 * 0.05;
  }
  if ((((0.3 <= fVar6) || (0.2 <= fVar11)) || (fVar12 = param_2[0xc], fVar12 * 1.2 <= fVar13)) &&
     (((0.3 <= fVar6 || (0.05 <= fVar11)) || (fVar12 = param_2[0xc], fVar12 * 1.5 <= fVar13)))) {
    if ((0.4 <= fVar6) || (0.05 <= fVar11)) {
      fVar12 = param_2[0xc];
      if ((0.0 <= fVar6) || (0.05 <= fVar11)) goto LAB_0013346c;
    }
    else {
      fVar12 = param_2[0xc];
      if ((0.0 <= fVar6) && (fVar12 * 1.2 <= fVar13)) {
LAB_0013346c:
        param_2[0xf] = 0.0;
        goto joined_r0x00133474;
      }
    }
  }
  fVar11 = param_2[0xf];
  param_2[0xf] = (float)((int)fVar11 + 1);
  if (2 < (int)fVar11) {
    fVar11 = fVar12 * 3.0;
    if (fVar13 <= fVar12 * 3.0) {
      fVar11 = fVar13;
    }
    fVar10 = fVar10 * 0.95 + 0.05;
    param_2[0xd] = fVar11 * 0.05 + param_2[0xd] * 0.95;
    param_2[0xe] = fVar10;
  }
joined_r0x00133474:
  if ((6000.0 < fVar14) && (fVar13 < fVar12)) {
    dVar4 = (double)fVar13 * 0.05 + (double)param_2[0xd] * 0.95;
    dVar5 = (double)fVar10 * 0.95 + 0.05;
    auVar3._8_4_ = SUB84(dVar5,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulong)dVar5 >> 0x20);
    *(ulong *)(param_2 + 0xd) = CONCAT44((float)auVar3._8_8_,(float)dVar4);
  }
  if (30000.0 <= fVar14) {
    dVar4 = log((double)((fVar14 + 1.0) / (param_2[2] + 1.0)));
    dVar5 = log((double)((fVar14 + 1.0) / (param_2[1] + 1.0)));
    fVar11 = (float)dVar5;
    if (fVar11 <= -5.0) {
      fVar11 = -5.0;
    }
    if (fVar11 <= 0.0) {
      fVar6 = 7.0;
    }
    else {
      fVar6 = fVar11 * 0.6 + 7.0;
    }
    if (fVar11 < 0.0) {
      fVar6 = fVar11 * 0.5 + fVar6;
    }
    if (0.0 < (float)dVar4) {
      fVar6 = (float)dVar4 * 0.5 + fVar6;
    }
    fVar11 = fVar6 + 0.5;
    if (fVar16 <= fVar15 * 1.6) {
      fVar11 = fVar6;
    }
  }
  else {
    fVar11 = *(float *)(&DAT_001373a8 + (ulong)(fVar14 < 10000.0) * 4);
    if (fVar14 < 3000.0) {
      fVar11 = *(float *)(&DAT_001373a8 + (ulong)(fVar14 < 10000.0) * 4) + -0.7;
    }
  }
  fVar15 = param_1 * 0.4 + param_2[10] * 0.6;
  fVar11 = (fVar7 + fVar15 + -0.4) * 2.2 + fVar11;
  param_2[2] = fVar14;
  param_2[10] = fVar15;
  if (fVar11 < param_2[0xb]) {
    fVar11 = param_2[0xb] * 0.5 + fVar11 * 0.5;
  }
  fVar15 = param_2[0xf];
  if (fVar11 <= 4.0) {
    fVar11 = 4.0;
  }
  if (10.0 < fVar11) {
    fVar11 = 10.0;
  }
  fVar16 = 4.0;
  if ((int)fVar15 < 3) {
    fVar16 = fVar11;
  }
  if (fVar15 != 0.0) {
    dVar4 = log((double)(int)fVar15 + 3.0);
    fVar16 = (float)((double)fVar16 - (dVar4 + -1.0986122886681098));
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar14 < 60000.0) {
    if (2 < (int)param_2[0xf]) {
      dVar4 = log((double)(int)param_2[0xf] + 3.0);
      fVar16 = (float)((double)fVar16 + (dVar4 + -1.0986122886681098) * -0.5);
    }
    if ((fVar14 < 10000.0) && (2 < (int)param_2[0xf])) {
      dVar4 = log((double)(int)param_2[0xf] + 3.0);
      fVar16 = (float)((double)fVar16 + (dVar4 + -1.0986122886681098) * -0.5);
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    dVar4 = log((double)fVar14 / 60000.0 + 0.0001);
    fVar16 = (float)(dVar4 * 0.3 + (double)fVar16);
  }
  param_2[9] = param_1;
  param_2[0xb] = fVar16;
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_2 + 5);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_2 + 3);
  param_2[3] = fVar17;
  return;
}

