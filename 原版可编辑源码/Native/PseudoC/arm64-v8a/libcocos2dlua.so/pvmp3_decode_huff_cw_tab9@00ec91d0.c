
ushort pvmp3_decode_huff_cw_tab9(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = getUpTo9bits(param_1,9);
  uVar2 = uVar2 & 0xffff;
  if (uVar2 < 0xa0) {
    if (uVar2 < 0x30) {
      if (uVar2 < 8) {
        uVar2 = uVar2 + 0x2d;
      }
      else {
        uVar2 = (uVar2 >> 1) + 0x15;
      }
    }
    else {
      uVar2 = (uVar2 >> 3) + 5;
    }
  }
  else {
    uVar2 = (uVar2 >> 5) - 5;
  }
  uVar1 = *(ushort *)(huffTable_9 + (ulong)uVar2 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -9;
  return uVar1 >> 8;
}

