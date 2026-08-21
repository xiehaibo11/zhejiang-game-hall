
bool FUN_00a33838(byte *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*param_1;
  if (*param_1 != 0) {
    do {
      param_1 = param_1 + 1;
      if (param_3 == 0) break;
      bVar2 = *param_2;
      if (bVar2 == 0) break;
      uVar4 = uVar3 + 0xe0;
      if (0x19 < (uVar3 - 0x61 & 0xff)) {
        uVar4 = uVar3;
      }
      uVar1 = bVar2 + 0xe0;
      if (0x19 < bVar2 - 0x61) {
        uVar1 = (uint)bVar2;
      }
      if ((uVar4 & 0xff) != (uVar1 & 0xff)) goto LAB_00a33898;
      uVar3 = (uint)*param_1;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
                    /* catch() { ... } // from try @ 00a336c8 with catch @ 00a33890 */
  if (param_3 == 0) {
    return true;
  }
                    /* catch() { ... } // from try @ 00a336bc with catch @ 00a33894 */
  bVar2 = *param_2;
LAB_00a33898:
                    /* catch() { ... } // from try @ 00a3369c with catch @ 00a33898 */
                    /* catch() { ... } // from try @ 00a336d4 with catch @ 00a338a8 */
  uVar4 = bVar2 + 0xe0;
  uVar1 = uVar3 + 0xe0;
  if (0x19 < (uVar3 - 0x61 & 0xff)) {
    uVar1 = uVar3;
  }
  if (0x19 < bVar2 - 0x61) {
    uVar4 = (uint)bVar2;
  }
  return (uVar1 & 0xff) == (uVar4 & 0xff);
}

