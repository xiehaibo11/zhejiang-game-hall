
ulong FUN_00a396a8(long param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined4 uVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  *param_2 = 0;
  FUN_00a11300(param_1,0);
  *(long *)(param_1 + 0x670) = param_1;
  *(undefined8 *)(param_1 + 0x668) = 1800000;
  *(code **)(param_1 + 0x678) = FUN_00a39a78;
  *(code **)(param_1 + 0x680) = FUN_00a3a868;
  *(undefined4 *)(param_1 + 0x6b0) = 0xffffffff;
  FUN_00a41834(param_1 + 0x690,&PTR_DAT_01c6d9c0);
  FUN_00a3e210(param_1 + 0x618);
  pbVar5 = *(byte **)(param_1 + 0x228);
  *(undefined1 *)(param_1 + 0x6a8) = 1;
  if (pbVar5 == (byte *)0x0) {
    uVar6 = 0;
  }
  else {
    while (uVar6 = (ulong)*pbVar5, pbVar9 = pbVar5, *pbVar5 != 0) {
      while( true ) {
        pbVar9 = pbVar9 + 1;
        iVar3 = (int)uVar6;
        if ((iVar3 == 0x3d) || (iVar3 == 0)) break;
        uVar6 = (ulong)*pbVar9;
      }
      pbVar11 = pbVar9;
      if (iVar3 != 0) {
        do {
          if ((int)uVar6 == 0x3b) break;
          pbVar10 = pbVar11 + 1;
          bVar2 = *pbVar11;
          uVar6 = (ulong)bVar2;
          pbVar11 = pbVar10;
        } while (bVar2 != 0);
      }
      iVar3 = FUN_00a33838(pbVar5,"AUTH=",5);
      if (iVar3 == 0) {
        uVar6 = 3;
      }
      else {
        uVar6 = FUN_00a41794(param_1 + 0x690,pbVar9,(long)(pbVar11 + -1) - (long)pbVar9);
        uVar6 = uVar6 & 0xffffffff;
      }
      pbVar5 = pbVar11;
                    /* catch() { ... } // from try @ 00a39600 with catch @ 00a397bc */
      if (pbVar11[-1] != 0x3b) {
        pbVar5 = pbVar11 + -1;
      }
                    /* catch() { ... } // from try @ 00a395f4 with catch @ 00a397c0 */
                    /* catch() { ... } // from try @ 00a395d4 with catch @ 00a397c4 */
      if (((int)uVar6 != 0) || (pbVar5 == (byte *)0x0)) break;
    }
  }
                    /* catch() { ... } // from try @ 00a3960c with catch @ 00a397d4 */
  uVar7 = 2;
  if (*(int *)(param_1 + 0x6a0) == -0x21) {
    uVar7 = 0xffffffff;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x6a0) != 0) {
    uVar1 = uVar7;
  }
  *(undefined4 *)(param_1 + 0x6b0) = uVar1;
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  *(undefined4 *)(param_1 + 0x688) = 1;
  *(undefined2 *)(param_1 + 0x6b8) = 0x2a;
  if (((*(byte *)(*(long *)(param_1 + 0x400) + 0x7c) & 1) != 0) &&
     (pcVar8 = (char *)(param_1 + 0x68c), *pcVar8 == '\0')) {
    uVar4 = FUN_00a17c8c(param_1,0,pcVar8);
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
    if (*pcVar8 == '\0') {
      return 0;
    }
  }
                    /* try { // try from 00a3982c to 00b3987f has its CatchHandler @ 00a3982c
                       catch() { ... } // from try @ 00a3982c with catch @ 00a3982c
                       catch() { ... } // from try @ 00a39a0c with catch @ 00a3982c */
  uVar6 = FUN_00a3e038(param_1 + 0x618,0);
  *param_2 = *(int *)(param_1 + 0x688) == 0;
  return uVar6;
}

