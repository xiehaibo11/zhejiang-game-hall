
ushort pvmp3_decode_huff_cw_tab15(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = getUpTo17bits(param_1,0xd);
  if (((uint)(uVar3 >> 10) & 0x3fffff) < 5) {
    uVar2 = (uint)uVar3;
    if (uVar2 < 0x9c0) {
      if (uVar2 < 0x3e0) {
        if (uVar2 < 0x1e0) {
          if (uVar2 < 0x100) {
            if (uVar2 < 0x40) {
              uVar2 = (uVar2 & 0x3f) + 0x165;
            }
            else {
              uVar2 = (uVar2 >> 1) + 0xe5;
            }
          }
          else {
            uVar2 = (uVar2 >> 2) + 0x8d;
          }
        }
        else {
          uVar2 = (uVar2 >> 3) + 0x51;
        }
      }
      else {
        uVar2 = (uVar2 >> 4) - 0xf;
      }
    }
    else {
      uVar2 = ((uint)(uVar3 >> 6) & 0x3ffffff) - 0x21;
    }
  }
  else {
    uVar2 = ((uint)(uVar3 >> 9) & 0x7fffff) - 10;
  }
  uVar1 = *(ushort *)(huffTable_15 + (ulong)uVar2 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -0xd;
  return uVar1 >> 8;
}

