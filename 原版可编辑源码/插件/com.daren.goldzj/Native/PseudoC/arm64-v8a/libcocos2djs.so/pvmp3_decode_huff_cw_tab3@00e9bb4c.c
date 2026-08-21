
ushort pvmp3_decode_huff_cw_tab3(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = getUpTo9bits(param_1,6);
  uVar2 = uVar3 >> 3 & 0x1fff;
  uVar3 = (uVar3 & 0xffff) + 7;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  uVar1 = *(ushort *)(huffTable_3 + (ulong)uVar3 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -6;
  return uVar1 >> 8;
}

