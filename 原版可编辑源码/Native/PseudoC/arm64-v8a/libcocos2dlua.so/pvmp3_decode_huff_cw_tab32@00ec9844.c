
ushort pvmp3_decode_huff_cw_tab32(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = getUpTo9bits(param_1,6);
  if ((uVar2 & 0xffe0) == 0) {
    uVar1 = *(ushort *)(huffTable_32 + (ulong)(uVar2 & 0x1f) * 2) >> 8;
    *(uint *)(param_1 + 8) =
         *(int *)(param_1 + 8) + (*(ushort *)(huffTable_32 + (ulong)(uVar2 & 0x1f) * 2) & 0xff) + -6
    ;
  }
  else {
    uVar1 = 0;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -5;
  }
  return uVar1;
}

