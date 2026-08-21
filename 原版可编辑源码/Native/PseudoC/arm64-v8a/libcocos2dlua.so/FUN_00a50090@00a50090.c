
ulong FUN_00a50090(long param_1,undefined1 *param_2)

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
  
                    /* try { // try from 00a500ac to 00b500eb has its CatchHandler @ 00a502e8 */
  *param_2 = 0;
  FUN_00a26ce8(param_1,0);
  *(long *)(param_1 + 0x670) = param_1;
  *(undefined8 *)(param_1 + 0x668) = 1800000;
  *(code **)(param_1 + 0x678) = FUN_00a50460;
  *(code **)(param_1 + 0x680) = FUN_00a51250;
  *(undefined4 *)(param_1 + 0x6b0) = 0xffffffff;
  FUN_00a5821c(param_1 + 0x690,&PTR_DAT_016a4190);
  FUN_00a54bf8(param_1 + 0x618);
  pbVar5 = *(byte **)(param_1 + 0x228);
                    /* try { // try from 00a50110 to 00b50127 has its CatchHandler @ 00a502e4 */
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
                    /* try { // try from 00a50134 to 00b5014b has its CatchHandler @ 00a502e0 */
        uVar6 = (ulong)*pbVar9;
      }
                    /* try { // try from 00a50150 to 00b50193 has its CatchHandler @ 00a502dc */
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
      iVar3 = FUN_00a4a220(pbVar5,"AUTH=",5);
      if (iVar3 == 0) {
        uVar6 = 3;
      }
      else {
        uVar6 = FUN_00a5817c(param_1 + 0x690,pbVar9,(long)(pbVar11 + -1) - (long)pbVar9);
        uVar6 = uVar6 & 0xffffffff;
      }
      pbVar5 = pbVar11;
      if (pbVar11[-1] != 0x3b) {
        pbVar5 = pbVar11 + -1;
      }
      if (((int)uVar6 != 0) || (pbVar5 == (byte *)0x0)) break;
    }
  }
                    /* try { // try from 00a501bc to 00b501d3 has its CatchHandler @ 00a502cc */
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
    uVar4 = FUN_00a2d674(param_1,0,pcVar8);
                    /* try { // try from 00a50254 to 00b50323 has its CatchHandler @ 00a50030 */
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
    if (*pcVar8 == '\0') {
      return 0;
    }
  }
  uVar6 = FUN_00a54a20(param_1 + 0x618,0);
  *param_2 = *(int *)(param_1 + 0x688) == 0;
                    /* try { // try from 00a5023c to 00b50253 has its CatchHandler @ 00a502c8 */
  return uVar6;
}

