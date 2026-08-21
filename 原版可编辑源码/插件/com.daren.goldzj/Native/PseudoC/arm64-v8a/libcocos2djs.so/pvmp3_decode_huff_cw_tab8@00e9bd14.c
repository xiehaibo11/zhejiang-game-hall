
ushort pvmp3_decode_huff_cw_tab8(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = getUpTo17bits(param_1,0xb);
  if (uVar2 < 0x100) {
    if (uVar2 < 0xa0) {
      if (uVar2 < 0xc) {
        uVar2 = uVar2 + 0x36;
      }
      else {
        uVar2 = (uVar2 >> 2) + 0xe;
      }
    }
    else {
      uVar2 = (uVar2 >> 5) + 9;
    }
  }
  else {
    uVar2 = (uVar2 >> 7) - 2;
  }
  uVar1 = *(ushort *)(huffTable_8 + (ulong)uVar2 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -0xb;
  return uVar1 >> 8;
}

