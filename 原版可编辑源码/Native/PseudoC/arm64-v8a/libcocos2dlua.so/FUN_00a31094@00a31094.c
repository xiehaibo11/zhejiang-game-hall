
void FUN_00a31094(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  auVar4 = FUN_00a2e828();
  lVar2 = *(long *)(param_1 + 0x3a8);
  *(long *)(param_1 + 0x958) = param_2;
  if (lVar2 < 1) {
    return;
  }
  if (*(long *)(param_1 + 0xa28) != 0 || *(long *)(param_1 + 0xa20) != 0) {
    lVar3 = param_2 - *(long *)(param_1 + 0xa30);
    if (lVar3 < lVar2) {
      return;
    }
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = (lVar3 * 1000) / lVar2;
    }
    lVar2 = FUN_00a2e888(auVar4._0_8_,auVar4._8_8_);
                    /* try { // try from 00a31104 to 00b31153 has its CatchHandler @ 00a31104
                       catch() { ... } // from try @ 00a31104 with catch @ 00a31104
                       catch() { ... } // from try @ 00a311b0 with catch @ 00a31104
                       catch() { ... } // from try @ 00a311f4 with catch @ 00a31104 */
    if (lVar2 < lVar1) {
      return;
    }
  }
  *(undefined1 (*) [16])(param_1 + 0xa20) = auVar4;
  *(long *)(param_1 + 0xa30) = param_2;
  return;
}

