
ushort pvmp3_decode_huff_cw_tab10(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = getUpTo17bits(param_1,0xb);
  if ((uVar3 >> 10 & 0x3fffff) == 0) {
    uVar2 = (uint)uVar3;
    if (uVar2 < 0x180) {
      if (uVar2 < 0x100) {
        if (uVar2 < 0x90) {
                    /* catch() { ... } // from try @ 00ec9308 with catch @ 00ec92c0 */
          if (uVar2 < 0x60) {
            if (uVar2 < 0x18) {
              uVar2 = uVar2 + 0x48;
            }
            else {
              uVar2 = (uVar2 >> 1) + 0x18;
            }
          }
          else {
            uVar2 = uVar2 >> 2;
          }
        }
        else {
          uVar2 = (uVar2 >> 3) - 8;
        }
      }
      else {
        uVar2 = (uVar2 >> 5) - 2;
      }
    }
    else {
      uVar2 = ((uint)(uVar3 >> 7) & 0x1ffffff) - 2;
    }
  }
  else {
    uVar2 = ((uint)(uVar3 >> 10) & 0x3fffff) - 1;
  }
  uVar1 = *(ushort *)(huffTable_10 + (ulong)uVar2 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -0xb;
                    /* try { // try from 00ec9300 to 00fc9307 has its CatchHandler @ 00ec9370 */
                    /* try { // try from 00ec9308 to 00fc938b has its CatchHandler @ 00ec92c0 */
  return uVar1 >> 8;
}

