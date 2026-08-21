
ushort pvmp3_decode_huff_cw_tab7(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = getUpTo17bits(param_1,10);
  if (uVar2 < 0x100) {
    if (uVar2 < 0x70) {
      if (uVar2 < 4) {
        uVar2 = (uVar2 & 3) + 0x45;
      }
      else {
        uVar2 = (uVar2 >> 1) + 0xd;
      }
    }
    else {
      uVar2 = (uVar2 >> 4) - 1;
    }
  }
  else {
    uVar2 = (uVar2 >> 7) - 2;
  }
  uVar1 = *(ushort *)(huffTable_7 + (ulong)uVar2 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -10;
  return uVar1 >> 8;
}

