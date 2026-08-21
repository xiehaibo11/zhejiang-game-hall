
/* dtCalcPolyCenter(float*, unsigned short const*, int, float const*) */

void dtCalcPolyCenter(float *param_1,ushort *param_2,int param_3,float *param_4)

{
  ulong uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if (param_3 < 1) {
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
  }
  else {
    uVar1 = (ulong)(uint)param_3;
    fVar3 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    do {
      uVar1 = uVar1 - 1;
      pfVar2 = param_4 + (ulong)*param_2 * 3;
      fVar5 = *pfVar2 + fVar5;
      *param_1 = fVar5;
      fVar4 = pfVar2[1] + fVar4;
      param_1[1] = fVar4;
      fVar3 = pfVar2[2] + fVar3;
      param_1[2] = fVar3;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  fVar6 = 1.0 / (float)param_3;
  *param_1 = fVar6 * fVar5;
  param_1[1] = fVar6 * fVar4;
  param_1[2] = fVar6 * fVar3;
  return;
}

