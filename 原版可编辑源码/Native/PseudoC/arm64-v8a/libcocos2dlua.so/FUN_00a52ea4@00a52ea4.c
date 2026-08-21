
undefined8 FUN_00a52ea4(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int local_24;
  
  local_24 = 0;
  uVar2 = FUN_00a5823c(param_1 + 0xd4,param_1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
                    /* catch() { ... } // from try @ 00a52da4 with catch @ 00a52f24
                       catch() { ... } // from try @ 00a52f08 with catch @ 00a52f24 */
    *(undefined4 *)(param_1 + 0xd1) = 0;
  }
  else {
    if (((*(uint *)(param_1 + 0xd8) & *(uint *)((long)param_1 + 0x6c4)) >> 2 & 1) != 0) {
                    /* try { // try from 00a52ef0 to 00b52ef7 has its CatchHandler @ 00a52f2c */
      uVar3 = FUN_00a5825c(param_1 + 0xd4,param_1,0,&local_24);
      iVar4 = local_24;
      if (((int)uVar3 == 0) && (local_24 == 1)) {
                    /* try { // try from 00a52f08 to 00b52f0f has its CatchHandler @ 00a52f24 */
        uVar3 = 0;
        *(undefined4 *)(param_1 + 0xd1) = 5;
                    /* try { // try from 00a52f10 to 00b52f87 has its CatchHandler @ 00a52c80 */
        iVar4 = 1;
      }
      if (iVar4 != 0 || (int)uVar3 != 0) {
        return uVar3;
      }
    }
                    /* catch() { ... } // from try @ 00a52ce8 with catch @ 00a52f48 */
    uVar5 = *(uint *)((long)param_1 + 0x6c4) & *(uint *)(param_1 + 0xd8);
    if ((uVar5 >> 1 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a52d40 with catch @ 00a52f68 */
        FUN_00a38740(*param_1,"No known authentication mechanisms supported!\n");
                    /* catch() { ... } // from try @ 00a52cc4 with catch @ 00a52f6c */
        uVar3 = 0x43;
      }
      else {
        uVar5 = (uint)*(byte *)(param_1 + 0x78);
        if (*(byte *)(param_1 + 0x78) != 0) {
                    /* try { // try from 00a52f88 to 00b52fdf has its CatchHandler @ 00a52f88
                       catch() { ... } // from try @ 00a52f88 with catch @ 00a52f88
                       catch() { ... } // from try @ 00a52fe4 with catch @ 00a52f88 */
          puVar1 = &DAT_013c996e;
          if ((undefined1 *)param_1[0x43] != (undefined1 *)0x0) {
            puVar1 = (undefined1 *)param_1[0x43];
          }
          uVar3 = FUN_00a54d8c(param_1 + 0xc3,"USER %s",puVar1);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar5 = 7;
        }
        uVar3 = 0;
        *(uint *)(param_1 + 0xd1) = uVar5;
      }
    }
    else {
      uVar3 = FUN_00a52fc0(param_1);
    }
  }
                    /* catch() { ... } // from try @ 00a52d80 with catch @ 00a52f28 */
                    /* catch() { ... } // from try @ 00a52d04 with catch @ 00a52f2c
                       catch() { ... } // from try @ 00a52ef0 with catch @ 00a52f2c */
                    /* catch() { ... } // from try @ 00a52e78 with catch @ 00a52f30 */
                    /* catch() { ... } // from try @ 00a52e28 with catch @ 00a52f34 */
  return uVar3;
}

