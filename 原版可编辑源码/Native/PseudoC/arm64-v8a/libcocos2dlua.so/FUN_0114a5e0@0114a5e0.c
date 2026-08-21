
void FUN_0114a5e0(undefined1 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  bVar1 = param_1[-0x1f];
  bVar2 = param_1[-0x1e];
  uVar3 = (undefined1)
          ((uint)(byte)param_1[-0x21] + (uint)(byte)param_1[-0x20] * 2 + (uint)bVar1 + 2 >> 2);
  *param_1 = uVar3;
  uVar4 = (undefined1)((uint)(byte)param_1[-0x20] + (uint)bVar1 * 2 + (uint)bVar2 + 2 >> 2);
  param_1[1] = uVar4;
  uVar5 = (undefined1)((uint)bVar1 + (uint)bVar2 * 2 + (uint)(byte)param_1[-0x1d] + 2 >> 2);
  param_1[2] = uVar5;
  uVar6 = (undefined1)
          ((uint)bVar2 + (uint)(byte)param_1[-0x1d] * 2 + (uint)(byte)param_1[-0x1c] + 2 >> 2);
  param_1[3] = uVar6;
  param_1[0x20] = uVar3;
  param_1[0x21] = uVar4;
  param_1[0x22] = uVar5;
  param_1[0x23] = uVar6;
  param_1[0x40] = uVar3;
  param_1[0x41] = uVar4;
  param_1[0x42] = uVar5;
  param_1[0x43] = uVar6;
  param_1[0x60] = uVar3;
  param_1[0x61] = uVar4;
  param_1[0x62] = uVar5;
  param_1[99] = uVar6;
  return;
}

