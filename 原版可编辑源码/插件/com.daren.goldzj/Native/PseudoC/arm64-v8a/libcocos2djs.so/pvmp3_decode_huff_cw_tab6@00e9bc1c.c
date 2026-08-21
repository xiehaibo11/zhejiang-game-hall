
ushort pvmp3_decode_huff_cw_tab6(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = getUpTo9bits(param_1,7);
  uVar2 = uVar2 & 0xffff;
  if (uVar2 < 0x18) {
    if (uVar2 >> 1 == 0) {
      uVar2 = uVar2 + 0x18;
    }
    else {
      uVar2 = (uVar2 >> 1) + 0xc;
    }
  }
  else {
    uVar2 = (uVar2 >> 3) - 3;
  }
  uVar1 = *(ushort *)(huffTable_6 + (ulong)uVar2 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -7;
  return uVar1 >> 8;
}

