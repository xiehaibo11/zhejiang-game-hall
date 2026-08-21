
void FUN_00a3112c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  auVar4 = FUN_00a2e828();
  lVar2 = *(long *)(param_1 + 0x3a0);
                    /* try { // try from 00a31154 to 00b311af has its CatchHandler @ 00a31234 */
  *(long *)(param_1 + 0x960) = param_2;
  if (lVar2 < 1) {
    return;
  }
  if (*(long *)(param_1 + 0xa10) != 0 || *(long *)(param_1 + 0xa08) != 0) {
    lVar3 = param_2 - *(long *)(param_1 + 0xa18);
    if (lVar3 < lVar2) {
      return;
    }
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = (lVar3 * 1000) / lVar2;
    }
    lVar2 = FUN_00a2e888(auVar4._0_8_,auVar4._8_8_);
    if (lVar2 < lVar1) {
      return;
    }
  }
  *(undefined1 (*) [16])(param_1 + 0xa08) = auVar4;
  *(long *)(param_1 + 0xa18) = param_2;
                    /* try { // try from 00a311b0 to 00b311df has its CatchHandler @ 00a31104 */
  return;
}

