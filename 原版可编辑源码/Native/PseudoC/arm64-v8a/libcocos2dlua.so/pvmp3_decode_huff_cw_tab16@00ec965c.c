
ushort pvmp3_decode_huff_cw_tab16(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = getUpTo17bits(param_1,0x11);
  if ((uVar2 & 0xffff0000) == 0) {
    if (uVar2 < 0x8000) {
      if (uVar2 >> 10 < 0x13) {
        if (uVar2 >> 8 < 0x2f) {
          if (uVar2 >> 6 < 0x6b) {
            if (uVar2 >> 9 < 0xb) {
              if (uVar2 < 0xe00) {
                if (uVar2 < 0xd80) {
                  uVar2 = (uVar2 >> 6 & 0x3f) + 0x19b;
                }
                else if (uVar2 < 0xd90) {
                  uVar2 = uVar2 - 0xc11;
                }
                else {
                  uVar2 = (uVar2 >> 2) - 0x1e5;
                }
              }
              else {
                uVar2 = (uVar2 >> 8) + 0x159;
              }
            }
            else if (uVar2 >> 0xb < 3) {
              uVar2 = (uVar2 >> 3) - 0x1c5;
            }
            else {
              uVar2 = (uVar2 >> 4) - 0x45;
            }
          }
          else {
            uVar2 = (uVar2 >> 5) - 0x7d;
          }
        }
        else {
          uVar2 = (uVar2 >> 7) - 0x3f;
        }
      }
      else {
        uVar2 = (uVar2 >> 9) - 0x21;
      }
    }
    else {
      uVar2 = (uVar2 >> 0xd) - 3;
    }
  }
  else {
    uVar2 = 0;
  }
  uVar1 = (&huffTable_16)[uVar2];
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -0x11;
  return uVar1 >> 8;
}

