
ushort pvmp3_decode_huff_cw_tab3(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
                    /* catch() { ... } // from try @ 00ec8fb0 with catch @ 00ec8f84 */
  uVar3 = getUpTo9bits(param_1,6);
                    /* try { // try from 00ec8fa8 to 00fc8faf has its CatchHandler @ 00ec8ff4 */
  uVar2 = uVar3 >> 3 & 0x1fff;
                    /* try { // try from 00ec8fb0 to 00fc900f has its CatchHandler @ 00ec8f84 */
  uVar3 = (uVar3 & 0xffff) + 7;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  uVar1 = *(ushort *)(huffTable_3 + (ulong)uVar3 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -6;
  return uVar1 >> 8;
}

