
undefined8 FUN_00a115a0(undefined8 param_1,byte *param_2,uint param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 < 0x80) {
    *param_2 = (byte)param_3;
    return 1;
  }
  if (param_3 >> 0x10 == 0) {
    if (5 < param_4) {
      uVar3 = param_3 >> 0xc & 0xf;
      param_2[0] = 0x5c;
      param_2[1] = 0x75;
      uVar4 = param_3 >> 8 & 0xf;
      bVar1 = (byte)(param_3 >> 0xc) & 0xf | 0x30;
      if (9 < uVar3) {
        bVar1 = (char)uVar3 + 0x57;
      }
      param_2[2] = bVar1;
      uVar3 = param_3 >> 4 & 0xf;
      bVar1 = (byte)(param_3 >> 8) & 0xf | 0x30;
      if (9 < uVar4) {
        bVar1 = (char)uVar4 + 0x57;
      }
      param_2[3] = bVar1;
      bVar1 = (byte)(param_3 >> 4) & 0xf | 0x30;
      if (9 < uVar3) {
        bVar1 = (char)uVar3 + 0x57;
      }
      bVar2 = (byte)param_3 & 0xf | 0x30;
      if (9 < (param_3 & 0xf)) {
        bVar2 = (char)(param_3 & 0xf) + 0x57;
      }
      param_2[4] = bVar1;
      param_2[5] = bVar2;
      return 6;
    }
  }
  else {
    if (0x10 < param_3 >> 0x10) {
      return 0xffffffff;
    }
    if (0xb < param_4) {
      param_2[0] = 0x5c;
      param_2[1] = 0x75;
      param_2[6] = 0x5c;
      param_2[7] = 0x75;
      param_3 = param_3 - 0x10000;
      param_2[8] = 100;
      uVar3 = (param_3 >> 10) + 0xd800;
      param_2[9] = ((byte)(param_3 >> 8) & 3 | 0xc) + 0x57;
      uVar4 = uVar3 >> 0xc & 0xf;
      bVar1 = (byte)(uVar3 >> 0xc) & 0xf | 0x30;
      if (9 < uVar4) {
        bVar1 = (char)uVar4 + 0x57;
      }
      param_2[2] = bVar1;
      uVar4 = uVar3 >> 8 & 0xf;
      bVar1 = (byte)(uVar3 >> 8) & 0xf | 0x30;
      if (9 < uVar4) {
        bVar1 = (char)uVar4 + 0x57;
      }
      param_2[3] = bVar1;
      uVar4 = uVar3 >> 4 & 0xf;
      bVar1 = (byte)(uVar3 >> 4) & 0xf | 0x30;
      if (9 < uVar4) {
        bVar1 = (char)uVar4 + 0x57;
      }
      param_2[4] = bVar1;
      uVar4 = param_3 >> 4 & 0xf;
      bVar1 = (byte)uVar3 & 0xf | 0x30;
      if (9 < (uVar3 & 0xf)) {
        bVar1 = (char)(uVar3 & 0xf) + 0x57;
      }
      param_2[5] = bVar1;
      bVar1 = (byte)(param_3 >> 4) & 0xf | 0x30;
      if (9 < uVar4) {
        bVar1 = (char)uVar4 + 0x57;
      }
      bVar2 = (byte)param_3 & 0xf | 0x30;
      if (9 < (param_3 & 0xf)) {
        bVar2 = (char)(param_3 & 0xf) + 0x57;
      }
      param_2[10] = bVar1;
      param_2[0xb] = bVar2;
      return 0xc;
    }
  }
  return 0xfffffffe;
}

