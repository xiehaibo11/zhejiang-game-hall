
ushort pvmp3_decode_huff_cw_tab1(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  
  uVar2 = getUpTo9bits(param_1,3);
  uVar1 = *(ushort *)(huffTable_1 + (uVar2 & 0xffff) * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -3;
  return uVar1 >> 8;
}

