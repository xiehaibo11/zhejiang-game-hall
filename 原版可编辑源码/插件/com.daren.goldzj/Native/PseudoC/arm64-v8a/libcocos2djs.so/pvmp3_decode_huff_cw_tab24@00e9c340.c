
ushort pvmp3_decode_huff_cw_tab24(long param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = getUpTo17bits(param_1,0xc);
  if (uVar2 < 0xa40) {
    if (uVar2 < 0x6d0) {
      if (uVar2 < 0x540) {
        if (uVar2 < 0x410) {
          if (uVar2 < 0x400) {
            if (uVar2 < 0x2c0) {
              uVar3 = (uVar2 >> 4 & 0x3f) + 0x1b2;
            }
            else {
              uVar3 = 0x1b1;
              if ((uVar2 & 0xffffff00) != 0x300) {
                uVar3 = (uVar2 >> 1) + 0x31;
              }
            }
          }
          else {
            uVar3 = uVar2 - 0x27f;
          }
        }
        else {
          uVar3 = (uVar2 >> 1) - 0x11f;
        }
      }
      else {
        uVar3 = (uVar2 >> 2) - 0xcb;
      }
    }
    else {
      uVar3 = (uVar2 >> 3) - 0xc3;
    }
  }
  else {
    uVar3 = (uVar2 >> 6) - 0x29;
  }
  uVar1 = *(ushort *)(huffTable_24 + (ulong)uVar3 * 2);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -0xc;
  return uVar1 >> 8;
}

