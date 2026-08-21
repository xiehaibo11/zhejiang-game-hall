
undefined8 FUN_0109a8e8(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
                    /* try { // try from 0109a8ec to 0119a92b has its CatchHandler @ 0109a8ec
                       catch() { ... } // from try @ 0109a8ec with catch @ 0109a8ec
                       catch() { ... } // from try @ 0109acb8 with catch @ 0109a8ec
                       catch() { ... } // from try @ 0109ae40 with catch @ 0109a8ec */
  pbVar7 = (byte *)(param_1 + 0x10);
  if (*(byte **)(param_2 + 0x108) < pbVar7) {
    ft_validator_error(param_2,8);
  }
                    /* try { // try from 0109a92c to 0119a93b has its CatchHandler @ 0109af5c */
                    /* try { // try from 0109a93c to 0119a94b has its CatchHandler @ 0109af4c */
                    /* try { // try from 0109a95c to 0119aa2f has its CatchHandler @ 0109af74 */
  uVar5 = (ulong)*(byte *)(param_1 + 4) << 0x18 | (ulong)*(byte *)(param_1 + 5) << 0x10 |
          (ulong)*(byte *)(param_1 + 6) << 8 | (ulong)*(byte *)(param_1 + 7);
  uVar6 = (ulong)*(byte *)(param_1 + 0xc) << 0x18 | (ulong)*(byte *)(param_1 + 0xd) << 0x10 |
          (ulong)*(byte *)(param_1 + 0xe) << 8 | (ulong)*(byte *)(param_1 + 0xf);
  if (((uVar5 < 0x10) || ((ulong)(*(long *)(param_2 + 0x108) - param_1) < uVar5)) ||
     ((uVar5 - 0x10) / 0xc < uVar6)) {
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
      uVar8 = (uint)*pbVar7 << 0x18 | (uint)pbVar7[1] << 0x10 | (uint)pbVar7[2] << 8 |
              (uint)pbVar7[3];
      uVar10 = (uint)pbVar7[4] << 0x18 | (uint)pbVar7[5] << 0x10 | (uint)pbVar7[6] << 8 |
               (uint)pbVar7[7];
      if (uVar10 < uVar8) {
        ft_validator_error(param_2,8);
      }
      if ((uVar5 != 0) && (uVar8 <= uVar9)) {
                    /* try { // try from 0109aa38 to 0119aa47 has its CatchHandler @ 0109af40 */
        ft_validator_error(param_2,8);
      }
                    /* try { // try from 0109aa48 to 0119aa53 has its CatchHandler @ 0109af00 */
                    /* try { // try from 0109aa64 to 0119aa73 has its CatchHandler @ 0109af74 */
      if ((*(int *)(param_2 + 0x110) != 0) &&
         ((*(uint *)(param_2 + 0x118) < uVar10 - uVar8 ||
          (*(uint *)(param_2 + 0x118) - (uVar10 - uVar8) <=
           ((uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 << 8 | (uint)bVar4))))) {
                    /* try { // try from 0109aa74 to 0119aa83 has its CatchHandler @ 0109af6c */
        ft_validator_error(param_2,0x10);
      }
      uVar5 = uVar5 + 1;
                    /* try { // try from 0109aa84 to 0119aa87 has its CatchHandler @ 0109af48 */
      pbVar7 = pbVar7 + 0xc;
      uVar9 = uVar10;
    } while (uVar6 != uVar5);
  }
                    /* try { // try from 0109aaa4 to 0119aaa7 has its CatchHandler @ 0109aee0 */
                    /* try { // try from 0109aaac to 0119aabb has its CatchHandler @ 0109af44 */
  return 0;
}

