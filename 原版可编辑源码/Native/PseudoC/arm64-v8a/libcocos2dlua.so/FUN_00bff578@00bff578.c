
undefined1 * FUN_00bff578(undefined1 *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    if ((long)param_2 >> 0x20 == 0) {
      uVar2 = 10;
      uVar3 = 9;
    }
    else {
      uVar1 = ((((uint)LZCOUNT((int)(param_2 >> 0x20)) ^ 0x1f) >> 3) + 6) * 2;
      uVar2 = (ulong)uVar1;
      uVar3 = (ulong)(uVar1 - 1);
    }
    *param_1 = 0x30;
    param_1[1] = 0x78;
    do {
      uVar4 = param_2 & 0xf;
      param_2 = (long)param_2 >> 4;
      param_1[uVar3] = "0123456789abcdef"[uVar4];
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
    } while (uVar1 != 1);
    return param_1 + uVar2;
  }
  *param_1 = 0x4e;
  param_1[1] = 0x55;
  param_1[2] = 0x4c;
  param_1[3] = 0x4c;
  return param_1 + 4;
}

