
undefined8 FUN_00a158bc(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  
                    /* try { // try from 00a158bc to 00b15983 has its CatchHandler @ 00a15784 */
  if (param_4 < 2) {
    return 0xfffffffe;
  }
  if (param_3 < 0x460) {
    uVar2 = param_3 >> 4;
    puVar4 = &DAT_013167c6;
  }
  else if (param_3 - 0x2000 < 0x650) {
    uVar2 = (param_3 >> 4) - 0x200;
    puVar4 = &UNK_013168de;
  }
  else if (param_3 - 0x3000 < 0x230) {
    uVar2 = (param_3 >> 4) - 0x300;
    puVar4 = &UNK_01316a72;
  }
  else if (param_3 - 0x4e00 >> 4 < 0x4ef) {
    uVar2 = (param_3 >> 4) - 0x4e0;
    puVar4 = &UNK_01316afe;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a15844 with catch @ 00a15948
                        */
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a158a0 with catch @ 00a1594c
                        */
    if (param_3 - 0x9e00 < 0x1b0) {
      uVar2 = (param_3 >> 4) - 0x9e0;
      puVar4 = &UNK_01317eba;
    }
    else {
      if (0xef < param_3 - 0xff00) {
        return 0xffffffff;
      }
                    /* try { // try from 00a15984 to 00b15987 has its CatchHandler @ 00a15988 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a15984 with catch @ 00a15988
                        */
      uVar2 = (param_3 >> 4) - 0xff0;
                    /* try { // try from 00a1598c to 00b1598f has its CatchHandler @ 00a15998 */
      puVar4 = &UNK_01317f26;
    }
  }
                    /* try { // try from 00a15990 to 00b1599b has its CatchHandler @ 00a15784 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a1598c with catch @ 00a15998
                        */
  uVar1 = 1 << (ulong)(param_3 & 0xf);
  uVar3 = (uint)*(ushort *)((long)(puVar4 + (ulong)uVar2 * 4) + 2);
  if ((uVar1 & uVar3) == 0) {
    return 0xffffffff;
  }
  uVar3 = uVar3 & uVar1 - 1;
  uVar3 = (uVar3 >> 1 & 0x55555555) + (uVar3 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar3 = (uVar3 >> 4 & 0xffffff0f) + (uVar3 & 0xf0f0f0f);
  *param_2 = *(ushort *)
              (&DAT_01317f62 +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) >> 8 |
             *(ushort *)
              (&DAT_01317f62 +
              ((ulong)*(ushort *)(puVar4 + (ulong)uVar2 * 4) + (ulong)((uVar3 & 0xf) + (uVar3 >> 8))
              ) * 2) << 8;
  return 2;
}

