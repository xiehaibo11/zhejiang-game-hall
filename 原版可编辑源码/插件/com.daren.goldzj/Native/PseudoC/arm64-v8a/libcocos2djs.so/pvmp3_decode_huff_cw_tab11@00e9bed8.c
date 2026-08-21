
ushort pvmp3_decode_huff_cw_tab11(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = getUpTo17bits(param_1,0xb);
  if (uVar2 < 0x300) {
    if (uVar2 < 0x1c0) {
      if (uVar2 < 0x100) {
        if (uVar2 < 0x28) {
          if (uVar2 < 0x10) {
            uVar2 = (uVar2 & 0xff) + 100;
          }
          else {
            uVar2 = (uVar2 >> 1) + 0x50;
          }
        }
        else {
          uVar2 = (uVar2 >> 2) + 0x18;
        }
      }
      else {
        uVar2 = (uVar2 >> 3) - 0x16;
      }
    }
    else {
      uVar2 = (uVar2 >> 6) - 2;
    }
  }
  else {
    uVar2 = (uVar2 >> 8) - 3;
  }
  uVar1 = *(ushort *)(huffTable_11 + (ulong)uVar2 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -0xb;
  return uVar1 >> 8;
}

