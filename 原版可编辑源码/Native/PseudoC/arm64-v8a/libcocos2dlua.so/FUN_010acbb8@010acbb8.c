
int FUN_010acbb8(long param_1,long param_2,uint param_3,int param_4,undefined4 param_5,
                undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  int local_5c;
  int local_58;
  int local_54;
  
  uVar10 = *(uint *)(param_1 + 0x10);
  if (uVar10 != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar10 * 0x18 + -8) = param_5;
  }
  uVar7 = *(uint *)(param_1 + 0x14);
  uVar1 = uVar10 + 1;
  if (uVar7 < uVar1) {
    local_5c = 0;
    uVar10 = uVar10 + 8 & 0xfffffff8;
                    /* catch() { ... } // from try @ 010acb94 with catch @ 010acc28 */
                    /* catch() { ... } // from try @ 010acb70 with catch @ 010acc2c */
                    /* catch() { ... } // from try @ 010acb44 with catch @ 010acc30 */
    piVar5 = (int *)ft_mem_realloc(param_6,0x18,uVar7,uVar10,*(undefined8 *)(param_1 + 0x18),
                                   &local_5c);
    *(int **)(param_1 + 0x18) = piVar5;
    if (local_5c != 0) {
      return local_5c;
    }
    *(uint *)(param_1 + 0x14) = uVar10;
    uVar7 = uVar10;
  }
  else {
    piVar5 = *(int **)(param_1 + 0x18);
  }
  piVar5[(ulong)uVar1 * 6 + -6] = 0;
  piVar5[(ulong)uVar1 * 6 + -2] = 0;
  *(uint *)(param_1 + 0x10) = uVar1;
  if (uVar1 == 0) {
    if (uVar7 == 0) {
      local_58 = 0;
      piVar5 = (int *)ft_mem_realloc(param_6,0x18,0,8,piVar5,&local_58);
      *(int **)(param_1 + 0x18) = piVar5;
      if (local_58 != 0) {
        return local_58;
      }
      *(undefined4 *)(param_1 + 0x14) = 8;
                    /* catch() { ... } // from try @ 010acd20 with catch @ 010acdc4 */
    }
    *piVar5 = 0;
    piVar5[4] = 0;
                    /* try { // try from 010acc90 to 011accd3 has its CatchHandler @ 010acc90
                       catch() { ... } // from try @ 010acc90 with catch @ 010acc90
                       catch() { ... } // from try @ 010acd44 with catch @ 010acc90 */
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    piVar5 = piVar5 + (ulong)uVar1 * 6 + -6;
  }
  uVar10 = param_4 + 7U >> 3;
  local_54 = 0;
  uVar1 = piVar5[1] + 7U >> 3;
  if (uVar1 < uVar10) {
    uVar10 = uVar10 + 7 & 0x3ffffff8;
                    /* try { // try from 010accd4 to 011accdf has its CatchHandler @ 010acdd0 */
    pbVar6 = (byte *)ft_mem_realloc(param_6,1,uVar1,uVar10,*(undefined8 *)(piVar5 + 2),&local_54);
    *(byte **)(piVar5 + 2) = pbVar6;
    if (local_54 != 0) {
      return local_54;
    }
    piVar5[1] = uVar10 << 3;
    *piVar5 = param_4;
  }
  else {
    pbVar6 = *(byte **)(piVar5 + 2);
                    /* try { // try from 010accfc to 011accff has its CatchHandler @ 010acdc8 */
    *piVar5 = param_4;
  }
  if (param_4 != 0) {
    uVar10 = 0x80 >> (ulong)(param_3 & 7);
    pbVar8 = (byte *)(param_2 + (ulong)(param_3 >> 3));
    iVar9 = 0x80;
    do {
                    /* try { // try from 010acd20 to 011acd23 has its CatchHandler @ 010acdc4 */
                    /* try { // try from 010acd2c to 011acd43 has its CatchHandler @ 010acdcc */
      param_4 = param_4 + -1;
      uVar1 = (int)uVar10 >> 1;
      iVar2 = iVar9 >> 1;
      bVar3 = *pbVar6 & ((byte)iVar9 ^ 0xff);
                    /* try { // try from 010acd44 to 011ace2f has its CatchHandler @ 010acc90 */
      if ((uVar10 & *pbVar8) != 0) {
        bVar3 = (byte)iVar9 | *pbVar6;
      }
      *pbVar6 = bVar3;
      uVar10 = 0x80;
      pbVar4 = pbVar8 + 1;
      if (uVar1 != 0) {
        uVar10 = uVar1;
        pbVar4 = pbVar8;
      }
      pbVar8 = pbVar4;
      pbVar4 = pbVar6 + 1;
      if (iVar2 != 0) {
        pbVar4 = pbVar6;
      }
      iVar9 = 0x80;
      if (iVar2 != 0) {
        iVar9 = iVar2;
      }
      pbVar6 = pbVar4;
    } while (param_4 != 0);
  }
  return 0;
}

