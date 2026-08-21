
/* cullPoints2(int, float*, int, int, int*) */

void cullPoints2(int param_1,float *param_2,int param_3,int param_4,int *param_5)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_a0 [2];
  undefined8 auStack_98 [3];
  float local_80 [8];
  
  uVar2 = (ulong)(param_1 - 1U);
  if (param_1 - 1U == 0) {
    uVar2 = *(ulong *)param_2;
    fVar15 = (float)(uVar2 >> 0x20);
  }
  else if (param_1 == 2) {
    fVar15 = ((float)((ulong)*(undefined8 *)param_2 >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20)) * 0.5;
    uVar2 = CONCAT44(fVar15,((float)*(undefined8 *)param_2 + (float)*(undefined8 *)(param_2 + 2)) *
                            0.5);
  }
  else {
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar13 = 0.0;
    if (1 < param_1) {
      fVar13 = 0.0;
      fVar16 = 0.0;
      fVar15 = 0.0;
      pfVar10 = param_2;
      do {
        fVar14 = pfVar10[2];
        uVar2 = uVar2 - 1;
        fVar17 = *pfVar10 * pfVar10[3] - fVar14 * pfVar10[1];
        fVar15 = fVar15 + fVar17;
        fVar16 = fVar16 + (*pfVar10 + fVar14) * fVar17;
        fVar13 = fVar13 + (pfVar10[3] + pfVar10[1]) * fVar17;
        pfVar10 = pfVar10 + 2;
      } while (uVar2 != 0);
    }
    fVar14 = param_2[(long)(param_1 << 1) + -2] * param_2[1] -
             *param_2 * param_2[(long)param_1 * 2 + -1];
    if (ABS(fVar15 + fVar14) <= 1.1920929e-07) {
      fVar15 = 1e+18;
    }
    else {
      fVar15 = 1.0 / ((fVar15 + fVar14) * 3.0);
    }
    if (param_1 < 1) {
      bVar1 = false;
      goto LAB_0123d808;
    }
    uVar2 = (ulong)(uint)(fVar15 * (fVar16 + fVar14 * (param_2[(long)(param_1 << 1) + -2] + *param_2
                                                      )));
    fVar15 = fVar15 * (fVar13 + fVar14 * (param_2[(long)param_1 * 2 + -1] + param_2[1]));
  }
  uVar9 = (ulong)(uint)param_1;
  pfVar10 = param_2 + 1;
  pfVar11 = local_80;
  uVar12 = uVar9;
  do {
    fVar13 = atan2f(*pfVar10 - fVar15,pfVar10[-1] - (float)uVar2);
    *pfVar11 = fVar13;
    uVar12 = uVar12 - 1;
    pfVar10 = pfVar10 + 2;
    pfVar11 = pfVar11 + 1;
  } while (uVar12 != 0);
  if ((uint)param_1 < 8) {
    lVar3 = 0;
  }
  else {
    lVar3 = uVar9 - (param_1 & 7U);
    if (lVar3 != 0) {
      puVar6 = auStack_98 + 1;
      lVar7 = lVar3;
      do {
        puVar6[-1] = 0x100000001;
        puVar6[-2] = 0x100000001;
        puVar6[1] = 0x100000001;
        *puVar6 = 0x100000001;
        lVar7 = lVar7 + -8;
        puVar6 = puVar6 + 4;
      } while (lVar7 != 0);
      if ((param_1 & 7U) == 0) {
        bVar1 = true;
        goto LAB_0123d808;
      }
    }
  }
  lVar7 = uVar9 - lVar3;
  bVar1 = true;
  piVar4 = local_a0 + lVar3;
  do {
    lVar7 = lVar7 + -1;
    *piVar4 = 1;
    piVar4 = piVar4 + 1;
  } while (lVar7 != 0);
LAB_0123d808:
  local_a0[param_4] = 0;
  piVar4 = param_5 + 1;
  *param_5 = param_4;
  if (1 < param_3) {
    if (bVar1) {
      fVar15 = local_80[param_4];
      iVar5 = 1;
      do {
        fVar16 = (6.2831855 / (float)param_3) * (float)iVar5 + fVar15;
        uVar2 = 0;
        fVar13 = fVar16 + -6.2831855;
        if (fVar16 <= 3.1415927) {
          fVar13 = fVar16;
        }
        *piVar4 = param_4;
        iVar8 = param_4;
        fVar16 = 1e+09;
        do {
          if (local_a0[uVar2] != 0) {
            fVar17 = ABS(local_80[uVar2] - fVar13);
            fVar14 = 6.2831855 - fVar17;
            if (fVar17 <= 3.1415927) {
              fVar14 = fVar17;
            }
            if (fVar14 < fVar16) {
              iVar8 = (int)uVar2;
              *piVar4 = iVar8;
              fVar16 = fVar14;
            }
          }
          uVar2 = uVar2 + 1;
        } while ((uint)param_1 != uVar2);
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
        local_a0[iVar8] = 0;
      } while (iVar5 != param_3);
    }
    else {
      iVar5 = param_3 + -1;
      do {
        *piVar4 = param_4;
        iVar5 = iVar5 + -1;
        local_a0[param_4] = 0;
        piVar4 = piVar4 + 1;
      } while (iVar5 != 0);
    }
  }
  return;
}

