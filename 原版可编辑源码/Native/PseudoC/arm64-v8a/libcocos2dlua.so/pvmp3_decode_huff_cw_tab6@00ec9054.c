
ushort pvmp3_decode_huff_cw_tab6(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
                    /* try { // try from 00ec905c to 00fc906b has its CatchHandler @ 00ec90bc */
  uVar2 = getUpTo9bits(param_1,7);
  uVar2 = uVar2 & 0xffff;
  if (uVar2 < 0x18) {
                    /* try { // try from 00ec9084 to 00fc90e7 has its CatchHandler @ 00ec9010 */
    if (uVar2 >> 1 == 0) {
      uVar2 = uVar2 + 0x18;
    }
    else {
      uVar2 = (uVar2 >> 1) + 0xc;
    }
  }
  else {
                    /* try { // try from 00ec9078 to 00fc9083 has its CatchHandler @ 00ec909c */
    uVar2 = (uVar2 >> 3) - 3;
  }
                    /* catch() { ... } // from try @ 00ec9078 with catch @ 00ec909c */
  uVar1 = *(ushort *)(huffTable_6 + (ulong)uVar2 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -7;
                    /* catch() { ... } // from try @ 00ec905c with catch @ 00ec90bc */
  return uVar1 >> 8;
}

