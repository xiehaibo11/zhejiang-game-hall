
undefined8 FUN_00a511ac(long *param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 local_40 [16];
  
  lVar4 = *param_1;
  *param_2 = '\0';
  FUN_00a22d58(lVar4,"Preparing for accepting server on data port\n");
  FUN_00a1b51c(lVar4,9);
  lVar3 = *(long *)(lVar4 + 0x368);
  if (lVar3 < 1) {
    lVar3 = 60000;
  }
  local_40 = FUN_00a18e40();
                    /* try { // try from 00a51204 to 00b512e7 has its CatchHandler @ 00a5101c */
  lVar1 = FUN_00a0f850(lVar4,local_40,0);
  if ((lVar1 == 0) || (lVar3 <= lVar1)) {
    lVar1 = FUN_00a18ea0(local_40._0_8_,local_40._8_8_,*(undefined8 *)(lVar4 + 0x9f8),
                         *(undefined8 *)(lVar4 + 0xa00));
    lVar1 = lVar3 - lVar1;
    if (lVar1 == 0) goto LAB_00a5126c;
  }
  if (-1 < lVar1) {
    uVar2 = FUN_00a5137c(param_1,param_2);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*param_2 != '\0') {
      uVar2 = FUN_00a5152c(param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_00a512b4(param_1);
      return uVar2;
    }
    lVar3 = *(long *)(lVar4 + 0x368);
    if (lVar3 < 1) {
      lVar3 = 60000;
    }
    FUN_00a11760(lVar4,lVar3);
    return 0;
  }
LAB_00a5126c:
                    /* catch() { ... } // from try @ 00a5109c with catch @ 00a51278 */
  FUN_00a23020(lVar4,"Accept timeout occurred while waiting server connect");
                    /* catch() { ... } // from try @ 00a51090 with catch @ 00a5127c */
                    /* catch() { ... } // from try @ 00a51070 with catch @ 00a51280 */
                    /* catch() { ... } // from try @ 00a510a8 with catch @ 00a51290 */
  return 0xc;
}

