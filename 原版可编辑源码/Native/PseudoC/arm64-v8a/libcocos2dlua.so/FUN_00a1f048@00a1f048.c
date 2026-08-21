
undefined8 FUN_00a1f048(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined *puVar6;
  
  uVar4 = (uint)*param_3;
  if (-1 < (char)*param_3) {
    *param_2 = uVar4;
    return 1;
  }
  uVar3 = 0xffffffff;
                    /* try { // try from 00a1f070 to 00b1f093 has its CatchHandler @ 00a1ef50 */
  if ((0xa0 < uVar4) && (uVar4 != 0xff)) {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar1 = param_3[1];
    if (bVar1 < 0xa1) {
      return 0xffffffff;
    }
                    /* try { // try from 00a1f094 to 00b1f09f has its CatchHandler @ 00a1f10c */
    if (bVar1 == 0xff) {
      return 0xffffffff;
    }
                    /* try { // try from 00a1f0b4 to 00b1f0bf has its CatchHandler @ 00a1f13c */
                    /* try { // try from 00a1f0c0 to 00b1f103 has its CatchHandler @ 00a1ef50 */
    if (0x33 < (uVar4 + 0x36 & 0xff) &&
        (0xb < (uVar4 + 0x5f & 0xff) && 0x18 < (uVar4 + 0x50 & 0xff))) {
      return 0xffffffff;
    }
    if (0x5d < (bVar1 + 0x5f & 0xff)) {
      return 0xffffffff;
    }
    iVar2 = (bVar1 ^ 0x80) + (uVar4 ^ 0x80) * 0x5e;
    uVar4 = iVar2 - 0xc3f;
                    /* try { // try from 00a1f104 to 00b1f10b has its CatchHandler @ 00a1f13c */
    if (uVar4 < 0x582) {
                    /* catch() { ... } // from try @ 00a1f094 with catch @ 00a1f10c
                       try { // try from 00a1f10c to 00b1f157 has its CatchHandler @ 00a1ef50 */
      if (0x45a < uVar4) {
        return 0xffffffff;
      }
      puVar5 = (ushort *)(&DAT_0131dd04 + (ulong)uVar4 * 2);
    }
    else {
      if (uVar4 < 0xf0e) {
        if (0xeaf < uVar4) {
          return 0xffffffff;
        }
        uVar4 = iVar2 - 0x11c1;
                    /* catch() { ... } // from try @ 00a1efa8 with catch @ 00a1f13c
                       catch() { ... } // from try @ 00a1f00c with catch @ 00a1f13c
                       catch() { ... } // from try @ 00a1f0b4 with catch @ 00a1f13c
                       catch() { ... } // from try @ 00a1f104 with catch @ 00a1f13c */
        puVar6 = &DAT_0131e5ba;
      }
      else {
        if (0x2225 < uVar4) {
          return 0xffffffff;
        }
        uVar4 = iVar2 - 0x1b4d;
                    /* try { // try from 00a1f158 to 00b1f1cb has its CatchHandler @ 00a1f158
                       catch() { ... } // from try @ 00a1f158 with catch @ 00a1f158
                       catch() { ... } // from try @ 00a1f1d8 with catch @ 00a1f158 */
        puVar6 = &DAT_0131f816;
      }
      puVar5 = (ushort *)(puVar6 + (ulong)uVar4 * 2);
    }
    if (*puVar5 == 0xfffd) {
      return 0xffffffff;
    }
    uVar3 = 2;
    *param_2 = (uint)*puVar5;
  }
  return uVar3;
}

