
ushort pvmp3_decode_huff_cw_tab5(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = getUpTo9bits(param_1,8);
  uVar3 = uVar2 >> 5 & 0x7ff;
  if (uVar3 == 0) {
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
  return uVar1 >> 8;
}

