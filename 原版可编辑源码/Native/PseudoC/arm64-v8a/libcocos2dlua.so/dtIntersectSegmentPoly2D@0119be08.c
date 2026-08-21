
/* dtIntersectSegmentPoly2D(float const*, float const*, float const*, int, float&, float&, int&,
   int&) */

undefined8
dtIntersectSegmentPoly2D
          (float *param_1,float *param_2,float *param_3,int param_4,float *param_5,float *param_6,
          int *param_7,int *param_8)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
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
  
  iVar2 = param_4 + -1;
  *param_5 = 0.0;
  *param_6 = 1.0;
  *param_7 = -1;
  *param_8 = -1;
  if (param_4 < 1) {
    return 1;
  }
  fVar7 = *param_1;
  fVar9 = param_1[2];
  uVar1 = 0;
  lVar3 = 0;
  fVar6 = 1.0;
  fVar4 = *param_2 - fVar7;
  fVar5 = param_2[2] - fVar9;
  while( true ) {
    fVar13 = param_3[iVar2 * 3];
    fVar14 = (param_3 + iVar2 * 3)[2];
    fVar10 = param_3[uVar1 & 0xffffffff] - fVar13;
    fVar12 = (param_3 + (uVar1 & 0xffffffff))[2] - fVar14;
    fVar8 = fVar5 * fVar10;
    fVar11 = fVar4 * fVar12;
    fVar7 = fVar12 * (fVar7 - fVar13) - fVar10 * (fVar9 - fVar14);
    if (1e-08 <= ABS(fVar8 - fVar11)) {
      fVar8 = fVar8 - fVar11;
      fVar7 = fVar7 / fVar8;
      if (0.0 <= fVar8) {
        if (fVar7 < fVar6) {
          *param_6 = fVar7;
          *param_8 = iVar2;
          fVar6 = fVar7;
          if (fVar7 < *param_5) {
            return 0;
          }
        }
      }
      else if (*param_5 < fVar7) {
        *param_5 = fVar7;
        *param_7 = iVar2;
        fVar6 = *param_6;
        if (*param_6 < fVar7) {
          return 0;
        }
      }
    }
    else if (fVar7 < 0.0) {
      return 0;
    }
    if ((ulong)(uint)param_4 - 1 == lVar3) break;
    fVar7 = *param_1;
    fVar9 = param_1[2];
    iVar2 = (int)lVar3;
    lVar3 = lVar3 + 1;
    uVar1 = uVar1 + 3;
  }
  return 1;
}

