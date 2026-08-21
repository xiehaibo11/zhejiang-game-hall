
ushort pvmp3_decode_huff_cw_tab13(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = getNbits(param_1,0x13);
  if ((uVar3 >> 0x12 & 0x3fff) == 0) {
    uVar2 = (uint)uVar3;
    if (uVar2 < 0x20000) {
      if (uVar2 < 0x10000) {
        if (uVar2 < 0x8000) {
          if (uVar2 < 0x4000) {
            if (uVar2 < 0x2000) {
              if (uVar2 < 0x800) {
                if (uVar2 < 0x400) {
                  if (uVar2 < 0x200) {
                    if (uVar2 < 0x100) {
                      if (uVar2 < 8) {
                        uVar2 = (uVar2 & 7) + 0x1e3;
                      }
                      else {
                        uVar2 = (uVar2 >> 2) + 0x1a3;
                      }
                    }
                    else {
                      uVar2 = (uVar2 >> 3) + 0x165;
                    }
                  }
                  else {
                    uVar2 = (uVar2 >> 4) + 0x145;
                  }
                }
                else {
                  uVar2 = (uVar2 >> 5) + 0x125;
                }
              }
              else {
                uVar2 = (uVar2 >> 6) + 0xc5;
              }
            }
            else {
              uVar2 = (uVar2 >> 7) + 0x65;
            }
          }
          else {
            uVar2 = (uVar2 >> 8) + 0x25;
          }
        }
        else {
          uVar2 = (uVar2 >> 9) - 0x1b;
        }
      }
      else {
        uVar2 = (uVar2 >> 0xb) - 0x1b;
      }
    }
    else {
      uVar2 = ((uint)(uVar3 >> 0xf) & 0x1ffff) - 3;
    }
  }
  else {
    uVar2 = 0;
  }
  uVar1 = (&huffTable_13)[uVar2];
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + (uVar1 & 0xff) + -0x13;
  return uVar1 >> 8;
}

