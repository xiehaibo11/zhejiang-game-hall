
long FUN_01072b0c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (-1 < param_2) {
    lVar1 = *(long *)(param_1 + 0x348);
    lVar3 = *(long *)(param_1 + 0x340);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = (((param_3 + param_2) - lVar1) + *(long *)(param_1 + 0x350)) / lVar3;
    }
    lVar2 = lVar1 + lVar2 * lVar3;
                    /* try { // try from 01072b34 to 01172b3f has its CatchHandler @ 01072ba4 */
    if (-1 < lVar2) {
      lVar1 = lVar2;
    }
    return lVar1;
  }
                    /* try { // try from 01072b40 to 01172c43 has its CatchHandler @ 01072434 */
  lVar3 = *(long *)(param_1 + 0x340);
  lVar1 = (param_3 - param_2) + *(long *)(param_1 + 0x350);
  lVar4 = lVar1 - *(long *)(param_1 + 0x348);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = lVar4 / lVar3;
  }
  lVar1 = (lVar4 - lVar2 * lVar3) - lVar1;
  if (0 < lVar1) {
    lVar1 = -*(long *)(param_1 + 0x348);
  }
  return lVar1;
}

