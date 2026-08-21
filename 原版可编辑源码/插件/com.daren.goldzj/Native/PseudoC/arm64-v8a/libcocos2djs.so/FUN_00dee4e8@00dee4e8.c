
void FUN_00dee4e8(undefined1 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar1 = param_1[-0x1f];
  bVar2 = param_1[-0x1e];
  bVar3 = param_1[-0x1d];
  bVar4 = param_1[-0x1c];
  bVar5 = param_1[-0x1b];
  uVar7 = (uint)bVar2;
  uVar8 = (uint)bVar3;
  *param_1 = (char)((uint)(byte)param_1[-0x20] + (uint)bVar1 + 1 >> 1);
  uVar6 = (undefined1)((uint)bVar1 + (uint)bVar2 + 1 >> 1);
  param_1[0x40] = uVar6;
  param_1[1] = uVar6;
  uVar6 = (undefined1)((uint)bVar2 + (uint)bVar3 + 1 >> 1);
  param_1[0x41] = uVar6;
  param_1[2] = uVar6;
  uVar6 = (undefined1)(uVar8 + bVar4 + 1 >> 1);
  param_1[0x42] = uVar6;
  param_1[3] = uVar6;
  param_1[0x20] = (char)((uint)(byte)param_1[-0x20] + (uint)bVar1 * 2 + uVar7 + 2 >> 2);
  uVar6 = (undefined1)((uint)bVar1 + uVar7 * 2 + uVar8 + 2 >> 2);
  param_1[0x60] = uVar6;
  param_1[0x21] = uVar6;
  uVar6 = (undefined1)(uVar7 + (uint)bVar3 * 2 + (uint)bVar4 + 2 >> 2);
  param_1[0x61] = uVar6;
  param_1[0x22] = uVar6;
  uVar6 = (undefined1)(uVar8 + (uint)bVar4 * 2 + (uint)bVar5 + 2 >> 2);
  param_1[0x62] = uVar6;
  param_1[0x23] = uVar6;
  param_1[0x43] = (char)((uint)bVar4 + (uint)bVar5 * 2 + (uint)(byte)param_1[-0x1a] + 2 >> 2);
  param_1[99] = (char)((uint)bVar5 + (uint)(byte)param_1[-0x1a] * 2 + (uint)(byte)param_1[-0x19] + 2
                      >> 2);
  return;
}

