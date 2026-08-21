
void FUN_00dee324(undefined1 *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar2 = param_1[-0x1e];
  bVar3 = param_1[-0x1f];
  bVar4 = param_1[-0x21];
  bVar5 = param_1[-0x20];
  iVar1 = (byte)param_1[-1] + 2;
  uVar8 = (uint)bVar3;
  uVar7 = (uint)bVar5;
  uVar6 = (undefined1)((uint)bVar4 + (uint)bVar5 + 1 >> 1);
  param_1[0x41] = uVar6;
  *param_1 = uVar6;
  uVar6 = (undefined1)(uVar8 + bVar2 + 1 >> 1);
  param_1[0x43] = uVar6;
  param_1[2] = uVar6;
  uVar6 = (undefined1)(uVar7 + uVar8 + 1 >> 1);
  param_1[0x42] = uVar6;
  param_1[1] = uVar6;
  param_1[3] = (char)((uint)bVar2 + (uint)(byte)param_1[-0x1d] + 1 >> 1);
  param_1[0x60] = (char)(iVar1 + (uint)(byte)param_1[0x3f] + (uint)(byte)param_1[0x1f] * 2 >> 2);
  param_1[0x40] =
       (char)((uint)(byte)param_1[0x1f] + (uint)(byte)param_1[-1] * 2 + (uint)bVar4 + 2 >> 2);
  uVar6 = (undefined1)(iVar1 + (uint)bVar4 * 2 + uVar7 >> 2);
  param_1[0x61] = uVar6;
  param_1[0x20] = uVar6;
  uVar6 = (undefined1)((uint)bVar4 + uVar7 * 2 + uVar8 + 2 >> 2);
  param_1[0x62] = uVar6;
  param_1[0x21] = uVar6;
  uVar6 = (undefined1)((uint)bVar5 + (uint)bVar3 * 2 + (uint)bVar2 + 2 >> 2);
  param_1[99] = uVar6;
  param_1[0x22] = uVar6;
  param_1[0x23] = (char)((uint)bVar3 + (uint)bVar2 * 2 + (uint)(byte)param_1[-0x1d] + 2 >> 2);
  return;
}

