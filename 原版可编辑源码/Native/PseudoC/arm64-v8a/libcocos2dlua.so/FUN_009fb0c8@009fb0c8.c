
undefined8 FUN_009fb0c8(byte *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  
  uVar2 = (uint)(param_2 >> 0x20);
  uVar1 = (uint)param_2;
  if (param_2 >> 7 == 0) {
    bVar4 = (byte)param_2 & 0x7f;
    uVar3 = 1;
  }
  else {
    *param_1 = (byte)param_2 | 0x80;
    if (param_2 >> 0xe == 0) {
      bVar4 = (byte)(uVar1 >> 7) & 0x7f;
      uVar3 = 2;
      param_1 = param_1 + 1;
    }
    else {
      param_1[1] = (byte)(param_2 >> 7) | 0x80;
      if (param_2 >> 0x15 == 0) {
        bVar4 = (byte)(uVar1 >> 0xe) & 0x7f;
        uVar3 = 3;
        param_1 = param_1 + 2;
      }
      else {
        param_1[2] = (byte)(param_2 >> 0xe) | 0x80;
        if (param_2 >> 0x1c == 0) {
          bVar4 = (byte)(uVar1 >> 0x15) & 0x7f;
          uVar3 = 4;
          param_1 = param_1 + 3;
        }
        else {
          param_1[3] = (byte)(param_2 >> 0x15) | 0x80;
          if (uVar2 >> 3 == 0) {
            bVar4 = (byte)(param_2 >> 0x1c) & 0x7f;
            uVar3 = 5;
            param_1 = param_1 + 4;
          }
          else {
            param_1[4] = (byte)(param_2 >> 0x1c) | 0x80;
            if (uVar2 >> 10 == 0) {
              bVar4 = (byte)(uVar2 >> 3) & 0x7f;
              uVar3 = 6;
              param_1 = param_1 + 5;
            }
            else {
              param_1[5] = (byte)(uVar2 >> 3) | 0x80;
              if (uVar2 >> 0x11 == 0) {
                bVar4 = (byte)(uVar2 >> 10) & 0x7f;
                uVar3 = 7;
                param_1 = param_1 + 6;
              }
              else {
                param_1[6] = (byte)(uVar2 >> 10) | 0x80;
                if (uVar2 >> 0x18 == 0) {
                  bVar4 = (byte)(uVar2 >> 0x11) & 0x7f;
                  uVar3 = 8;
                  param_1 = param_1 + 7;
                }
                else {
                  param_1[7] = (byte)(uVar2 >> 0x11) | 0x80;
                  bVar4 = (byte)(param_2 >> 0x38);
                  if ((long)param_2 < 0) {
                    param_1[8] = bVar4 | 0x80;
                    uVar3 = 10;
                    bVar4 = 1;
                    param_1 = param_1 + 9;
                  }
                  else {
                    bVar4 = bVar4 & 0x7f;
                    uVar3 = 9;
                    param_1 = param_1 + 8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *param_1 = bVar4;
  return uVar3;
}

