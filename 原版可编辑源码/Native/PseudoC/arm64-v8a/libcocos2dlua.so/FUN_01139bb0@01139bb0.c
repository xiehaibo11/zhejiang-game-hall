
void FUN_01139bb0(long param_1,float *param_2,long param_3)

{
  uint uVar1;
  short sVar2;
  short *psVar3;
  double dVar4;
  double dVar5;
  
  if (0 < param_3) {
    param_3 = param_3 + 1;
    psVar3 = *(short **)(param_1 + 0x10);
    do {
      sVar2 = *psVar3;
      uVar1 = (int)sVar2 & 0x7fff;
      if (uVar1 == 0) {
        dVar5 = 0.0;
      }
      else {
        dVar4 = exp(((double)uVar1 + 0.5) * 0.0027076061740622863 + -44.3614195558365);
                    /* try { // try from 01139c14 to 01239c23 has its CatchHandler @ 01139f3c */
        dVar5 = -dVar4;
        if (((int)sVar2 & 0x8000U) == 0) {
          dVar5 = dVar4;
        }
      }
      param_3 = param_3 + -1;
      *param_2 = (float)dVar5;
      param_2 = param_2 + 1;
      psVar3 = psVar3 + 1;
    } while (1 < param_3);
  }
                    /* try { // try from 01139c4c to 01239c63 has its CatchHandler @ 01139f20 */
  return;
}

