
undefined8 FUN_00a20a78(uint *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = *param_2;
  uVar3 = (uint)bVar1;
  if (((((byte)(bVar1 + 0x3a) < 3) || ((bVar1 & 0xfc) == 0x88)) || ((uVar3 + 0x73 & 0xff) < 0x14))
     || ((uVar2 = 0xffffffff, 0xf8 < uVar3 && (uVar3 != 0xff)))) {
    if (param_3 < 2) {
      return 0xfffffffe;
    }
    bVar1 = param_2[1];
    uVar5 = (uint)bVar1;
    if (0x3e < bVar1 - 0x40) {
      if (bVar1 < 0xa1) {
        return 0xffffffff;
      }
      if (uVar5 == 0xff) {
        return 0xffffffff;
      }
    }
    iVar6 = 0x62;
    if (uVar5 < 0xa1) {
      iVar6 = 0x40;
    }
    iVar6 = (uVar5 - iVar6) + uVar3 * 0x9d;
    uVar3 = iVar6 - 0x4e80;
    if (uVar3 < 0x7f9) {
      if (0x75a < uVar3) {
        return 0xffffffff;
      }
      uVar3 = iVar6 - 0x5368;
      puVar4 = &DAT_01393a68;
    }
    else if (uVar3 < 0x2aee) {
      if (0x143c < uVar3) {
        return 0xffffffff;
      }
      uVar3 = iVar6 - 0x5679;
      puVar4 = &DAT_01394e84;
    }
    else {
                    /* try { // try from 00a20b60 to 00b20b9b has its CatchHandler @ 00a20b60
                       catch() { ... } // from try @ 00a20b60 with catch @ 00a20b60
                       catch() { ... } // from try @ 00a20c0c with catch @ 00a20b60
                       catch() { ... } // from try @ 00a20c84 with catch @ 00a20b60 */
      if (uVar3 < 0x4a35) {
        if (0x2cc4 < uVar3) {
          return 0xffffffff;
        }
        uVar3 = iVar6 - 0x796e;
        puVar4 = &DAT_0139670c;
      }
      else {
        if (0x4de2 < uVar3) {
          return 0xffffffff;
        }
                    /* try { // try from 00a20b9c to 00b20bb3 has its CatchHandler @ 00a20c98 */
        uVar3 = iVar6 - 0x98b5;
        puVar4 = &DAT_01396aba;
      }
    }
                    /* try { // try from 00a20bb8 to 00b20bc7 has its CatchHandler @ 00a20c90 */
    uVar3 = *(ushort *)(puVar4 + (ulong)uVar3 * 2) & 0x3f |
            *(uint *)(&DAT_01393f50 + ((ulong)(*(ushort *)(puVar4 + (ulong)uVar3 * 2) >> 4) & 0xffc)
                     );
                    /* try { // try from 00a20bcc to 00b20bdb has its CatchHandler @ 00a20c8c */
    if (uVar3 == 0xfffd) {
                    /* try { // try from 00a20be0 to 00b20c0b has its CatchHandler @ 00a20c94 */
      return 0xffffffff;
    }
    *param_1 = uVar3;
    uVar2 = 2;
  }
  return uVar2;
}

