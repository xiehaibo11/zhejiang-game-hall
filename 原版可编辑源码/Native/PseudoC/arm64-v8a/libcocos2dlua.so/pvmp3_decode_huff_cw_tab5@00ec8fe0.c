
ushort pvmp3_decode_huff_cw_tab5(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
                    /* catch() { ... } // from try @ 00ec8fa8 with catch @ 00ec8ff4 */
  uVar2 = getUpTo9bits(param_1,8);
  uVar3 = uVar2 >> 5 & 0x7ff;
  if (uVar3 == 0) {
                    /* try { // try from 00ec9010 to 00fc9047 has its CatchHandler @ 00ec9010
                       catch() { ... } // from try @ 00ec9010 with catch @ 00ec9010
                       catch() { ... } // from try @ 00ec9084 with catch @ 00ec9010 */
    if ((uVar2 & 0xffff) < 4) {
      uVar3 = (uVar2 & 3) + 0x15;
    }
    else {
      uVar3 = ((uVar2 & 0xffff) >> 1) + 5;
    }
  }
  else {
    uVar3 = uVar3 - 1;
  }
  uVar1 = *(ushort *)(huffTable_5 + (ulong)uVar3 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -8;
                    /* try { // try from 00ec9048 to 00fc9057 has its CatchHandler @ 00ec90d4 */
  return uVar1 >> 8;
}

