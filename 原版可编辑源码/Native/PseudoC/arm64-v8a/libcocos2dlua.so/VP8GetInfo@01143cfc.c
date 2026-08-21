
undefined4 VP8GetInfo(byte *param_1,ulong param_2,ulong param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (((9 < param_2) && (param_1 != (byte *)0x0)) && (2 < param_2 - 3)) {
    if (param_1[3] != 0x9d) {
      return 0;
    }
    if (param_1[4] != 1) {
      return 0;
    }
    if (param_1[5] != 0x2a) {
      return 0;
    }
    bVar3 = *param_1;
    uVar4 = 0;
    if (((bVar3 & 0x11) == 0x10) && ((bVar3 & 8) < 7)) {
      if (param_3 <= (uint3)(CONCAT12(param_1[2],CONCAT11(param_1[1],bVar3)) >> 5)) {
        return 0;
      }
      uVar1 = (uint)param_1[6] | (param_1[7] & 0x3f) << 8;
      uVar4 = 0;
      if ((uVar1 != 0) && (uVar2 = (uint)param_1[8] | (param_1[9] & 0x3f) << 8, uVar2 != 0)) {
        if (param_4 != (uint *)0x0) {
          *param_4 = uVar1;
        }
        if (param_5 != (uint *)0x0) {
          *param_5 = uVar2;
        }
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

