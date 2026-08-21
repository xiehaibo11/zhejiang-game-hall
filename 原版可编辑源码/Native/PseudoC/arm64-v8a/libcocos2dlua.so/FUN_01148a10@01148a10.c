
void FUN_01148a10(byte *param_1,byte *param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  
  if (0 < (int)param_3) {
    uVar3 = (ulong)param_3;
    if (param_4 == 0) {
      do {
        bVar1 = *param_2;
        if (bVar1 != 0xff) {
          if (bVar1 == 0) {
            *param_1 = 0;
          }
          else {
            *param_1 = (byte)((uint)bVar1 * (uint)*param_1 * 0x10101 + 0x800000 >> 0x18);
          }
        }
        param_2 = param_2 + 1;
        uVar3 = uVar3 - 1;
        param_1 = param_1 + 1;
      } while (uVar3 != 0);
    }
    else {
      do {
        bVar1 = *param_2;
        if (bVar1 != 0xff) {
          if (bVar1 == 0) {
            *param_1 = 0;
          }
          else {
            uVar2 = 0;
            if (bVar1 != 0) {
              uVar2 = 0xff000000 / bVar1;
            }
            *param_1 = (byte)(uVar2 * *param_1 + 0x800000 >> 0x18);
          }
        }
        param_2 = param_2 + 1;
        uVar3 = uVar3 - 1;
        param_1 = param_1 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

