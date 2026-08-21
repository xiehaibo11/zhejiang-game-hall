
void FUN_0113923c(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (0 < param_3) {
    pfVar4 = (float *)(param_2 + 8);
    param_3 = param_3 + 1;
    puVar3 = *(uint **)(param_1 + 0x10);
    do {
      uVar2 = *puVar3;
      uVar1 = (int)uVar2 >> 0x10 & 0x7fff;
      if (uVar1 == 0) {
LAB_01139354:
        *pfVar4 = 0.0;
        pfVar4[-2] = 0.0;
        pfVar4[-1] = 0.0;
      }
      else {
        dVar5 = exp(((double)uVar1 + 0.5) * 0.0027076061740622863 + -44.3614195558365);
        dVar6 = -dVar5;
        if (((int)uVar2 >> 0x10 & 0x8000U) == 0) {
          dVar6 = dVar5;
        }
        if (dVar6 <= 0.0) goto LAB_01139354;
        dVar5 = ((double)(uVar2 >> 8 & 0xff) + 0.5) * 0.0024390243902439024;
        dVar7 = ((double)(uVar2 & 0xff) + 0.5) * 0.0024390243902439024;
        dVar8 = 1.0 / (dVar5 * 6.0 + dVar7 * -16.0 + 12.0);
        dVar5 = dVar5 * 9.0 * dVar8;
        dVar8 = dVar7 * 4.0 * dVar8;
        pfVar4[-2] = (float)((dVar5 / dVar8) * dVar6);
        pfVar4[-1] = (float)dVar6;
        *pfVar4 = (float)((((1.0 - dVar5) - dVar8) / dVar8) * dVar6);
      }
      param_3 = param_3 + -1;
      pfVar4 = pfVar4 + 3;
      puVar3 = puVar3 + 1;
    } while (1 < param_3);
  }
  return;
}

