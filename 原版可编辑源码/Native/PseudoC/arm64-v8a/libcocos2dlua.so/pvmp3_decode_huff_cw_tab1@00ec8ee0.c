
ushort pvmp3_decode_huff_cw_tab1(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar2 = getUpTo9bits(param_1,3);
                    /* catch() { ... } // from try @ 00ec8f24 with catch @ 00ec8ef8 */
  uVar1 = *(ushort *)(huffTable_1 + (uVar2 & 0xffff) * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -3;
                    /* try { // try from 00ec8f1c to 00fc8f23 has its CatchHandler @ 00ec8f68 */
                    /* try { // try from 00ec8f24 to 00fc8f83 has its CatchHandler @ 00ec8ef8 */
  return uVar1 >> 8;
}

