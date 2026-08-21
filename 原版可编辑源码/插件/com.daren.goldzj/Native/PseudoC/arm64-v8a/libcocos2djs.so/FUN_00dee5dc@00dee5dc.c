
void FUN_00dee5dc(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  
  bVar6 = param_1[-0x20];
  bVar7 = param_1[-1];
  bVar8 = param_1[-0x21];
  bVar4 = param_1[0x1f];
  bVar5 = param_1[0x3f];
  iVar1 = bVar7 + 2;
  iVar2 = bVar4 + 2;
  iVar3 = bVar7 + 1;
  uVar9 = (undefined1)((uint)bVar4 + (uint)bVar5 + 1 >> 1);
  param_1[0x62] = uVar9;
  param_1[0x40] = uVar9;
  param_1[0x60] = (char)((uint)bVar5 + (uint)(byte)param_1[0x5f] + 1 >> 1);
  uVar9 = (undefined1)(iVar3 + (uint)bVar8 >> 1);
  param_1[0x22] = uVar9;
  *param_1 = uVar9;
  uVar9 = (undefined1)(iVar3 + (uint)bVar4 >> 1);
  param_1[0x42] = uVar9;
  param_1[0x20] = uVar9;
  param_1[3] = (char)((uint)bVar6 + (uint)(byte)param_1[-0x1f] * 2 + (uint)(byte)param_1[-0x1e] + 2
                     >> 2);
  param_1[2] = (char)((uint)bVar8 + (uint)bVar6 * 2 + (uint)(byte)param_1[-0x1f] + 2 >> 2);
  uVar9 = (undefined1)(iVar1 + (uint)bVar8 * 2 + (uint)bVar6 >> 2);
  param_1[0x23] = uVar9;
  param_1[1] = uVar9;
  uVar9 = (undefined1)(iVar2 + (uint)bVar7 * 2 + (uint)bVar8 >> 2);
  param_1[0x43] = uVar9;
  param_1[0x21] = uVar9;
  uVar9 = (undefined1)(iVar1 + (uint)bVar5 + (uint)bVar4 * 2 >> 2);
  param_1[99] = uVar9;
  param_1[0x41] = uVar9;
  param_1[0x61] = (char)(iVar2 + (uint)(byte)param_1[0x5f] + (uint)bVar5 * 2 >> 2);
  return;
}

