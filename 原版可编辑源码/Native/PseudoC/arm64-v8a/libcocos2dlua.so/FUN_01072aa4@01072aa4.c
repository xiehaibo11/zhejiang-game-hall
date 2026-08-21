
long FUN_01072aa4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (-1 < param_2) {
    lVar2 = *(long *)(param_1 + 0x348);
                    /* try { // try from 01072ab8 to 01172abf has its CatchHandler @ 01072bd0 */
    lVar1 = (((param_3 + param_2) - lVar2) + *(long *)(param_1 + 0x350) &
            -*(long *)(param_1 + 0x340)) + lVar2;
                    /* try { // try from 01072acc to 01172ad7 has its CatchHandler @ 01072ba8 */
    if (-1 < lVar1) {
      lVar2 = lVar1;
    }
    return lVar2;
  }
  lVar3 = *(long *)(param_1 + 0x348);
                    /* try { // try from 01072af4 to 01172afb has its CatchHandler @ 01072bcc */
  lVar1 = (((param_3 - param_2) + *(long *)(param_1 + 0x350)) - lVar3 & -*(long *)(param_1 + 0x340))
          + lVar3;
  lVar2 = -lVar1;
  if (lVar1 != 0 && -1 < lVar2) {
    lVar2 = -lVar3;
  }
                    /* try { // try from 01072b08 to 01172b2b has its CatchHandler @ 01072bec */
  return lVar2;
}

