
undefined8 FUN_0109abcc(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  pbVar7 = (byte *)(param_1 + 0x10);
  if (*(byte **)(param_2 + 0x108) < pbVar7) {
    ft_validator_error(param_2,8);
  }
                    /* try { // try from 0109ac48 to 0119ac4f has its CatchHandler @ 0109aeb0 */
  uVar5 = (ulong)*(byte *)(param_1 + 4) << 0x18 | (ulong)*(byte *)(param_1 + 5) << 0x10 |
          (ulong)*(byte *)(param_1 + 6) << 8 | (ulong)*(byte *)(param_1 + 7);
                    /* try { // try from 0109ac54 to 0119ac5b has its CatchHandler @ 0109aec8 */
  uVar6 = (ulong)*(byte *)(param_1 + 0xc) << 0x18 | (ulong)*(byte *)(param_1 + 0xd) << 0x10 |
          (ulong)*(byte *)(param_1 + 0xe) << 8 | (ulong)*(byte *)(param_1 + 0xf);
                    /* try { // try from 0109ac84 to 0119ac8b has its CatchHandler @ 0109ae9c */
  if (((uVar5 < 0x10) || ((ulong)(*(long *)(param_2 + 0x108) - param_1) < uVar5)) ||
     ((uVar5 - 0x10) / 0xc < uVar6)) {
                    /* try { // try from 0109ac90 to 0119acb7 has its CatchHandler @ 0109aedc */
    ft_validator_error(param_2,8);
  }
  if (uVar6 != 0) {
    uVar5 = 0;
    uVar9 = 0;
    do {
      bVar1 = pbVar7[8];
      bVar2 = pbVar7[9];
      bVar3 = pbVar7[10];
      bVar4 = pbVar7[0xb];
      uVar8 = (ulong)*pbVar7 << 0x18 | (ulong)pbVar7[1] << 0x10 | (ulong)pbVar7[2] << 8 |
              (ulong)pbVar7[3];
      uVar10 = (ulong)pbVar7[4] << 0x18 | (ulong)pbVar7[5] << 0x10 | (ulong)pbVar7[6] << 8 |
               (ulong)pbVar7[7];
      if (uVar10 < uVar8) {
        ft_validator_error(param_2,8);
      }
      if ((uVar5 != 0) && (uVar8 <= uVar9)) {
        ft_validator_error(param_2,8);
      }
      if ((*(int *)(param_2 + 0x110) != 0) &&
         (*(uint *)(param_2 + 0x118) <=
          ((uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4))) {
        ft_validator_error(param_2,0x10);
      }
      uVar5 = uVar5 + 1;
      pbVar7 = pbVar7 + 0xc;
      uVar9 = uVar10;
    } while (uVar6 != uVar5);
  }
  return 0;
}

