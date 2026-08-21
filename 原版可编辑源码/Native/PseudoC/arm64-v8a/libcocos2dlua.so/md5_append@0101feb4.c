
void md5_append(uint *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
                    /* try { // try from 0101fec8 to 0111ffab has its CatchHandler @ 0101fe00 */
  if (0 < (int)param_3) {
    uVar2 = *param_1;
    uVar4 = (ulong)(uVar2 >> 3) & 0x3f;
    uVar1 = param_1[1] + (param_3 >> 0x1d);
    *param_1 = uVar2 + param_3 * 8;
    param_1[1] = uVar1;
    if (CARRY4(uVar2,param_3 * 8)) {
      param_1[1] = uVar1 + 1;
    }
    iVar3 = (int)uVar4;
    if (iVar3 != 0) {
      uVar1 = 0x40 - iVar3;
      if ((int)(iVar3 + param_3) < 0x41) {
        uVar1 = param_3;
      }
      memcpy((void *)((long)param_1 + uVar4 + 0x18),param_2,(long)(int)uVar1);
      if ((int)(uVar1 + iVar3) < 0x40) {
        return;
      }
                    /* catch() { ... } // from try @ 0101fe7c with catch @ 0101ff3c */
      param_2 = (void *)((long)param_2 + (long)(int)uVar1);
      param_3 = param_3 - uVar1;
      FUN_0101ffb4(param_1,param_1 + 6);
    }
                    /* catch() { ... } // from try @ 0101fea8 with catch @ 0101ff54 */
    uVar1 = param_3;
    if (0x3f < (int)param_3) {
      do {
        FUN_0101ffb4(param_1,param_2);
        uVar1 = uVar1 - 0x40;
        param_2 = (void *)((long)param_2 + 0x40);
      } while (0x3f < (int)uVar1);
      param_3 = param_3 & 0x3f;
    }
    if (param_3 != 0) {
      memcpy(param_1 + 6,param_2,(long)(int)param_3);
      return;
    }
  }
                    /* try { // try from 0101ffac to 01120003 has its CatchHandler @ 0101ffac
                       catch() { ... } // from try @ 0101ffac with catch @ 0101ffac
                       catch() { ... } // from try @ 01020050 with catch @ 0101ffac */
  return;
}

