
void LogLuv32toXYZ(uint param_1,float *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = (int)param_1 >> 0x10 & 0x7fff;
  if (uVar1 != 0) {
    dVar2 = exp(((double)uVar1 + 0.5) * 0.0027076061740622863 + -44.3614195558365);
    dVar3 = -dVar2;
    if (((int)param_1 >> 0x10 & 0x8000U) == 0) {
      dVar3 = dVar2;
    }
    if (0.0 < dVar3) {
                    /* try { // try from 01137c90 to 01237c9b has its CatchHandler @ 01137cb8 */
                    /* try { // try from 01137c9c to 01237ccb has its CatchHandler @ 01137a34 */
      dVar2 = ((double)(param_1 >> 8 & 0xff) + 0.5) * 0.0024390243902439024;
      dVar5 = ((double)(param_1 & 0xff) + 0.5) * 0.0024390243902439024;
                    /* catch() { ... } // from try @ 01137c90 with catch @ 01137cb8 */
      dVar4 = 1.0 / (dVar2 * 6.0 + dVar5 * -16.0 + 12.0);
      dVar2 = dVar2 * 9.0 * dVar4;
      dVar4 = dVar5 * 4.0 * dVar4;
      *param_2 = (float)((dVar2 / dVar4) * dVar3);
      param_2[1] = (float)dVar3;
      param_2[2] = (float)((((1.0 - dVar2) - dVar4) / dVar4) * dVar3);
      return;
    }
  }
  param_2[2] = 0.0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  return;
}

