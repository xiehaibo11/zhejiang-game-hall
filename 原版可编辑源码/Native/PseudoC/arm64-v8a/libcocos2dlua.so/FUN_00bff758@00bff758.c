
undefined8 * FUN_00bff758(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar3 = (undefined1 *)*param_1;
  if ((uint)((int)param_1[1] - (int)puVar3) < 0x12) {
    puVar3 = (undefined1 *)FUN_00c1a4a8(param_1,0x12);
  }
  if (param_2 != 0) {
    if ((long)param_2 >> 0x20 == 0) {
      uVar5 = 10;
      uVar2 = 9;
    }
    else {
      uVar1 = ((((uint)LZCOUNT((int)(param_2 >> 0x20)) ^ 0x1f) >> 3) + 6) * 2;
      uVar5 = (ulong)uVar1;
      uVar2 = (ulong)(uVar1 - 1);
    }
    *puVar3 = 0x30;
    puVar3[1] = 0x78;
    do {
      uVar4 = param_2 & 0xf;
      param_2 = (long)param_2 >> 4;
      puVar3[uVar2] = "0123456789abcdef"[uVar4];
      uVar1 = (int)uVar2 - 1;
      uVar2 = (ulong)uVar1;
    } while (uVar1 != 1);
    *param_1 = puVar3 + uVar5;
    return param_1;
  }
  *puVar3 = 0x4e;
  puVar3[2] = 0x4c;
  puVar3[3] = 0x4c;
  puVar3[1] = 0x55;
  *param_1 = puVar3 + 4;
  return param_1;
}

