
/* dtOverlapPolyPoly2D(float const*, int, float const*, int) */

undefined4 dtOverlapPolyPoly2D(float *param_1,int param_2,float *param_3,int param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar4 = param_2 + -1;
  if (0 < param_2) {
    uVar5 = 0;
    do {
      iVar2 = iVar4 * 3;
      iVar4 = (int)uVar5;
      fVar9 = (param_1 + (uint)(iVar4 * 3))[2] - (param_1 + iVar2)[2];
      fVar7 = param_1[(uint)(iVar4 * 3)] - param_1[iVar2];
      fVar10 = -fVar7;
      fVar8 = fVar9 * *param_1 - param_1[2] * fVar7;
      fVar7 = fVar8;
      if (param_2 != 1) {
        uVar3 = 3;
        lVar6 = (ulong)(uint)param_2 - 1;
        do {
          uVar1 = uVar3 & 0xffffffff;
          uVar3 = uVar3 + 3;
          fVar12 = fVar9 * param_1[uVar1] + (param_1 + uVar1)[2] * fVar10;
          if (fVar12 <= fVar7) {
            fVar7 = fVar12;
          }
          if (fVar8 <= fVar12) {
            fVar8 = fVar12;
          }
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      fVar11 = fVar9 * *param_3 + param_3[2] * fVar10;
      fVar12 = fVar11;
      if (1 < param_4) {
        uVar3 = 3;
        lVar6 = (ulong)(uint)param_4 - 1;
        do {
          uVar1 = uVar3 & 0xffffffff;
          uVar3 = uVar3 + 3;
          fVar13 = fVar9 * param_3[uVar1] + (param_3 + uVar1)[2] * fVar10;
          if (fVar13 <= fVar12) {
            fVar12 = fVar13;
          }
          if (fVar11 <= fVar13) {
            fVar11 = fVar13;
          }
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (fVar11 < fVar7 + 0.0001) {
        return 0;
      }
      if (fVar8 + -0.0001 < fVar12) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != (uint)param_2);
  }
  iVar4 = param_4 + -1;
  if (0 < param_4) {
    uVar5 = 0;
    do {
      iVar2 = iVar4 * 3;
      iVar4 = (int)uVar5;
      fVar9 = (param_3 + (uint)(iVar4 * 3))[2] - (param_3 + iVar2)[2];
      fVar7 = param_3[(uint)(iVar4 * 3)] - param_3[iVar2];
      fVar10 = -fVar7;
      fVar8 = fVar9 * *param_1 - param_1[2] * fVar7;
      fVar7 = fVar8;
      if (1 < param_2) {
        uVar3 = 3;
        lVar6 = (ulong)(uint)param_2 - 1;
        do {
          uVar1 = uVar3 & 0xffffffff;
          uVar3 = uVar3 + 3;
          fVar12 = fVar9 * param_1[uVar1] + (param_1 + uVar1)[2] * fVar10;
          if (fVar12 <= fVar7) {
            fVar7 = fVar12;
          }
          if (fVar8 <= fVar12) {
            fVar8 = fVar12;
          }
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      fVar11 = fVar9 * *param_3 + param_3[2] * fVar10;
      fVar12 = fVar11;
      if (param_4 != 1) {
        uVar3 = 3;
        lVar6 = (ulong)(uint)param_4 - 1;
        do {
          uVar1 = uVar3 & 0xffffffff;
          uVar3 = uVar3 + 3;
          fVar13 = fVar9 * param_3[uVar1] + (param_3 + uVar1)[2] * fVar10;
          if (fVar13 <= fVar12) {
            fVar12 = fVar13;
          }
          if (fVar11 <= fVar13) {
            fVar11 = fVar13;
          }
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (fVar8 + -0.0001 < fVar12) {
        return 0;
      }
      if (fVar11 < fVar7 + 0.0001) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != (uint)param_4);
  }
  return 1;
}

