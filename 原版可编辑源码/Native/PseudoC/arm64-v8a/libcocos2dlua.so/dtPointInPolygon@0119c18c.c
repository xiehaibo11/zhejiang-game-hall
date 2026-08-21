
/* dtPointInPolygon(float const*, float const*, int) */

uint dtPointInPolygon(float *param_1,float *param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = param_3 + -1;
  if (0 < param_3) {
    fVar5 = param_1[2];
    uVar2 = 0;
    uVar4 = 0;
    uVar1 = 0;
    do {
      fVar6 = (param_2 + (uVar2 & 0xffffffff))[2];
      fVar7 = (param_2 + iVar3 * 3)[2];
      if ((fVar5 < fVar6 != fVar5 < fVar7) &&
         (fVar8 = param_2[uVar2 & 0xffffffff],
         *param_1 < fVar8 + ((fVar5 - fVar6) * (param_2[iVar3 * 3] - fVar8)) / (fVar7 - fVar6))) {
        uVar1 = uVar1 ^ 1;
      }
      iVar3 = (int)uVar4;
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 + 3;
    } while ((uint)param_3 != uVar4);
    return uVar1;
  }
  return 0;
}

