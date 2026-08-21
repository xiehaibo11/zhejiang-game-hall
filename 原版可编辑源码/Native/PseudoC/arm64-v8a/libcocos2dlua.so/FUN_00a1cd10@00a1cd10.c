
undefined8 FUN_00a1cd10(undefined8 param_1,uint *param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar3 = (uint)*param_3;
  if (-1 < (char)*param_3) {
    *param_2 = uVar3;
    return 1;
  }
                    /* try { // try from 00a1cd30 to 00b1cd5f has its CatchHandler @ 00a1cc64 */
  if ((0xa0 < uVar3) && (uVar3 != 0xff)) {
    if (param_4 < 2) {
      return 0xfffffffe;
    }
    bVar1 = param_3[1];
    uVar2 = bVar1 - 0x40;
                    /* try { // try from 00a1cd60 to 00b1cd73 has its CatchHandler @ 00a1cdb8 */
    if ((uVar2 < 0x3f) || ((0xa0 < bVar1 && (bVar1 != 0xff)))) {
                    /* try { // try from 00a1cd74 to 00b1cdd3 has its CatchHandler @ 00a1cc64 */
      if ((((uVar3 + 0x5f & 0xff) < 0x27) || ((uVar3 + 0x37 & 0xff) < 0x31)) &&
         ((0xa0 < bVar1 || ((uVar2 & 0xff) < 0x3f)))) {
        iVar5 = 0x62;
        if (bVar1 < 0xa1) {
          iVar5 = 0x40;
        }
                    /* catch() { ... } // from try @ 00a1ccb8 with catch @ 00a1cdb8
                       catch() { ... } // from try @ 00a1cd60 with catch @ 00a1cdb8 */
        iVar5 = ((uint)bVar1 - iVar5) + uVar3 * 0x9d;
        uVar3 = iVar5 - 0x62bd;
        if (uVar3 >> 3 < 0x311) {
                    /* try { // try from 00a1cdd4 to 00b1ce2b has its CatchHandler @ 00a1cdd4
                       catch() { ... } // from try @ 00a1cdd4 with catch @ 00a1cdd4
                       catch() { ... } // from try @ 00a1ce44 with catch @ 00a1cdd4
                       catch() { ... } // from try @ 00a1cef4 with catch @ 00a1cdd4
                       catch() { ... } // from try @ 00a1cf44 with catch @ 00a1cdd4
                       catch() { ... } // from try @ 00a1cf90 with catch @ 00a1cdd4 */
          if (0x17e8 < uVar3) {
            return 0xffffffff;
          }
          puVar4 = &DAT_0138474c;
        }
        else {
          if (0xd9a < uVar3 >> 2) {
            return 0xffffffff;
          }
          uVar3 = iVar5 - 0x7b45;
          puVar4 = &DAT_0138771e;
        }
        if (*(ushort *)(puVar4 + (ulong)uVar3 * 2) != 0xfffd) {
          *param_2 = (uint)*(ushort *)(puVar4 + (ulong)uVar3 * 2);
          return 2;
        }
      }
      return 0xffffffff;
    }
  }
                    /* try { // try from 00a1ce2c to 00b1ce43 has its CatchHandler @ 00a1cfc0 */
  return 0xffffffff;
}

