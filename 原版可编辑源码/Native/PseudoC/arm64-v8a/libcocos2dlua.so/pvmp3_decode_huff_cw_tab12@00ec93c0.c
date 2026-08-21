
ushort pvmp3_decode_huff_cw_tab12(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = getUpTo17bits(param_1,10);
  if (uVar2 < 0x280) {
    if (uVar2 < 0x180) {
      if (uVar2 < 0x110) {
        if (uVar2 < 0x80) {
          if (uVar2 < 0x20) {
            uVar2 = (uVar2 & 0x1f) + 0x66;
          }
          else {
            uVar2 = (uVar2 >> 1) + 0x26;
          }
        }
        else {
          uVar2 = (uVar2 >> 2) - 0xe;
        }
      }
      else {
        uVar2 = (uVar2 >> 4) - 6;
      }
    }
    else {
      uVar2 = (uVar2 >> 5) - 9;
    }
  }
  else {
    uVar2 = (uVar2 >> 7) - 5;
  }
  uVar1 = *(ushort *)(huffTable_12 + (ulong)uVar2 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -10;
  return uVar1 >> 8;
}

