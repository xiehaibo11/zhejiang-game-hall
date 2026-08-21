
int FUN_01075b40(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int local_38;
  int local_34;
  
                    /* try { // try from 01075b44 to 01175b6f has its CatchHandler @ 01075cc0 */
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_3 + 0xe8);
    *(undefined4 *)((long)param_1 + 0x2c4) = *(undefined4 *)(param_3 + 0xec);
    *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_3 + 0xf8);
                    /* try { // try from 01075b8c to 01175b93 has its CatchHandler @ 01075d0c */
    *(undefined4 *)((long)param_1 + 0x2d4) = *(undefined4 *)(param_3 + 0xfc);
    param_1[0x59] = *(long *)(param_3 + 0xf0);
    param_1[0x5b] = *(long *)(param_3 + 0x100);
    memcpy(param_1 + 0x38,(void *)(param_3 + 0x90),0x50);
    param_1[0x37] = *(long *)(param_3 + 0x88);
    lVar2 = *(long *)(param_3 + 0x78);
    param_1[0x36] = *(long *)(param_3 + 0x80);
    param_1[0x35] = lVar2;
    lVar2 = *(long *)(param_3 + 0x68);
    param_1[0x34] = *(long *)(param_3 + 0x70);
    param_1[0x33] = lVar2;
    lVar2 = *(long *)(param_3 + 0x58);
    param_1[0x32] = *(long *)(param_3 + 0x60);
    param_1[0x31] = lVar2;
                    /* try { // try from 01075be4 to 01175be7 has its CatchHandler @ 01075cbc */
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_3 + 0x108);
    *(undefined4 *)((long)param_1 + 0x2e4) = *(undefined4 *)(param_3 + 0x10c);
    lVar2 = *(long *)(param_3 + 0x110);
    param_1[0x61] = *(long *)(param_3 + 0x118);
    param_1[0x60] = lVar2;
    lVar2 = *(long *)(param_3 + 0x120);
    param_1[99] = *(long *)(param_3 + 0x128);
    param_1[0x62] = lVar2;
    lVar2 = *(long *)(param_3 + 0x130);
    param_1[0x65] = *(long *)(param_3 + 0x138);
    param_1[100] = lVar2;
    memcpy(param_1 + 0x42,(void *)(param_3 + 0x140),0x60);
                    /* try { // try from 01075c0c to 01175c1b has its CatchHandler @ 01075cd0 */
    lVar2 = *(long *)(param_3 + 0x1a0);
                    /* try { // try from 01075c1c to 01175d77 has its CatchHandler @ 01075ae4 */
    param_1[0x55] = *(long *)(param_3 + 0x1a8);
    param_1[0x54] = lVar2;
    *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_3 + 0x1b0);
    param_1[0x67] = *(long *)(param_3 + 0x1b8);
    lVar2 = *(long *)(param_3 + 0x1f0);
    param_1[0x30] = *(long *)(param_3 + 0x1f8);
    param_1[0x2f] = lVar2;
    lVar2 = *(long *)(param_3 + 0x1e0);
    param_1[0x2e] = *(long *)(param_3 + 0x1e8);
    param_1[0x2d] = lVar2;
    lVar2 = *(long *)(param_3 + 0x1d0);
    param_1[0x2c] = *(long *)(param_3 + 0x1d8);
    param_1[0x2b] = lVar2;
    lVar2 = *(long *)(param_3 + 0x1c0);
    param_1[0x2a] = *(long *)(param_3 + 0x1c8);
    param_1[0x29] = lVar2;
    memset(param_1 + 9,0,0xc0);
  }
  uVar5 = *(uint *)(param_1 + 5);
  lVar2 = param_1[2];
  uVar1 = (ulong)*(ushort *)(param_2 + 0x1e4) + 0x20;
  if (uVar5 < uVar1) {
    lVar2 = ft_mem_realloc(lVar2,1,(ulong)uVar5 << 3,uVar1 * 8,param_1[6],&local_38);
    param_1[6] = lVar2;
    if (local_38 != 0) {
      *(uint *)(param_1 + 5) = uVar5;
      return local_38;
    }
    lVar2 = param_1[2];
    uVar5 = (uint)uVar1;
  }
  *(uint *)(param_1 + 5) = uVar5;
  uVar5 = *(uint *)(param_1 + 0x56);
  uVar3 = (uint)*(ushort *)(param_2 + 0x1e6);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01075be4 with catch @ 01075cbc
                        */
  uVar4 = uVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01075b44 with catch @ 01075cc0
                        */
  if (uVar5 < uVar3) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01075c0c with catch @ 01075cd0
                        */
    lVar2 = ft_mem_realloc(lVar2,1,uVar5,uVar3,param_1[0x57],&local_34);
    param_1[0x57] = lVar2;
    uVar4 = uVar3;
    if (local_34 != 0) {
      *(uint *)(param_1 + 0x56) = uVar5 & 0xffff;
      return local_34;
    }
  }
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(uint *)(param_1 + 0x56) = uVar4 & 0xffff;
  lVar2 = param_1[0x27];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01075b8c with catch @ 01075d0c
                        */
  param_1[0x18] = param_1[0x28];
  param_1[0x17] = lVar2;
  lVar6 = param_1[0x25];
  param_1[0x16] = param_1[0x26];
  param_1[0x15] = lVar6;
  lVar7 = param_1[0x23];
  param_1[0x14] = param_1[0x24];
  param_1[0x13] = lVar7;
  lVar8 = param_1[0x21];
  param_1[0x20] = param_1[0x28];
  param_1[0x1f] = lVar2;
  param_1[0x1e] = param_1[0x26];
  param_1[0x1d] = lVar6;
  param_1[0x1c] = param_1[0x24];
  param_1[0x1b] = lVar7;
  param_1[0x12] = param_1[0x22];
  param_1[0x11] = lVar8;
  param_1[0x1a] = param_1[0x22];
  param_1[0x19] = lVar8;
  param_1[0x10] = param_1[0x28];
  param_1[0xf] = param_1[0x27];
  param_1[0xe] = param_1[0x26];
  param_1[0xd] = param_1[0x25];
  param_1[0xc] = param_1[0x24];
  param_1[0xb] = param_1[0x23];
  *(undefined1 *)(param_1 + 0x6b) = 0;
  param_1[10] = param_1[0x22];
  param_1[9] = param_1[0x21];
  return 0;
}

