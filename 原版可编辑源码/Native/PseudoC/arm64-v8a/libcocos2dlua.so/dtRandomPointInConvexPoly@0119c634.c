
/* dtRandomPointInConvexPoly(float const*, int, float*, float, float, float*) */

void dtRandomPointInConvexPoly
               (float *param_1,int param_2,float *param_3,float param_4,float param_5,float *param_6
               )

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (2 < param_2) {
    fVar6 = 0.0;
    uVar4 = 6;
    lVar5 = (ulong)(uint)param_2 - 2;
    pfVar3 = param_3 + 2;
    do {
      fVar7 = ((param_1 + (int)(uVar4 - 3))[2] - param_1[2]) * (param_1[uVar4] - *param_1) -
              (param_1[(int)(uVar4 - 3)] - *param_1) * ((param_1 + uVar4)[2] - param_1[2]);
      *pfVar3 = fVar7;
      if (fVar7 <= 0.001) {
        fVar7 = 0.001;
      }
      lVar5 = lVar5 + -1;
      fVar6 = fVar6 + fVar7;
      uVar4 = uVar4 + 3;
      pfVar3 = pfVar3 + 1;
    } while (lVar5 != 0);
    if (2 < param_2) {
      fVar6 = fVar6 * param_4;
      pfVar3 = param_3 + 2;
      lVar5 = (ulong)(uint)param_2 - 2;
      iVar2 = 6;
      fVar7 = 0.0;
      do {
        fVar8 = fVar7 + *pfVar3;
        if ((fVar7 <= fVar6) && (fVar6 < fVar8)) {
          fVar6 = (fVar6 - fVar7) / *pfVar3;
          goto LAB_0119c714;
        }
        iVar2 = iVar2 + 3;
        lVar5 = lVar5 + -1;
        pfVar3 = pfVar3 + 1;
        fVar7 = fVar8;
      } while (lVar5 != 0);
    }
  }
  iVar2 = 0;
  fVar6 = 0.0;
LAB_0119c714:
  pfVar3 = param_1 + iVar2;
  pfVar1 = param_1 + (iVar2 + -3);
  fVar8 = SQRT(param_5);
  fVar9 = 1.0 - fVar8;
  fVar7 = fVar8 * fVar6;
  fVar8 = fVar8 * (1.0 - fVar6);
  *param_6 = fVar9 * *param_1 + fVar8 * *pfVar1 + fVar7 * *pfVar3;
  param_6[1] = fVar9 * param_1[1] + fVar8 * pfVar1[1] + fVar7 * pfVar3[1];
  param_6[2] = fVar9 * param_1[2] + fVar8 * pfVar1[2] + fVar7 * pfVar3[2];
  return;
}

