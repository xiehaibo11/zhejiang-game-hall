
bool FUN_00a4a2f4(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (uint)*param_1;
  if (*param_1 != 0) {
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_2;
      if (bVar3 == 0) break;
      uVar1 = uVar4 + 0xe0;
      if (0x19 < (uVar4 - 0x61 & 0xff)) {
        uVar1 = uVar4;
      }
                    /* catch() { ... } // from try @ 00a4a2c8 with catch @ 00a4a324 */
                    /* catch() { ... } // from try @ 00a4a270 with catch @ 00a4a328 */
      uVar2 = bVar3 + 0xe0;
      if (0x19 < bVar3 - 0x61) {
        uVar2 = (uint)bVar3;
      }
      if ((uVar1 & 0xff) != (uVar2 & 0xff)) break;
      uVar4 = (uint)*param_1;
      param_2 = param_2 + 1;
    } while (uVar4 != 0);
  }
  bVar3 = *param_2;
  uVar1 = uVar4 + 0xe0;
  if (0x19 < (uVar4 - 0x61 & 0xff)) {
    uVar1 = uVar4;
  }
  uVar4 = bVar3 + 0xe0;
  if (0x19 < bVar3 - 0x61) {
    uVar4 = (uint)bVar3;
  }
  return (uVar1 & 0xff) == (uVar4 & 0xff);
}

