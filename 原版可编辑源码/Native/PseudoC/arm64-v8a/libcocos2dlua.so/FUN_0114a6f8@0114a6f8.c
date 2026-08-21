
void FUN_0114a6f8(undefined1 *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  
  bVar2 = param_1[0x1f];
  bVar3 = param_1[-0x21];
  bVar4 = param_1[-0x1f];
  bVar5 = param_1[-0x20];
  iVar1 = (byte)param_1[-1] + 2;
  param_1[0x60] =
       (char)((uint)bVar2 + (uint)(byte)param_1[0x3f] * 2 + (uint)(byte)param_1[0x5f] + 2 >> 2);
  uVar6 = (undefined1)(iVar1 + (uint)bVar2 * 2 + (uint)(byte)param_1[0x3f] >> 2);
  param_1[0x40] = uVar6;
  param_1[0x61] = uVar6;
  uVar6 = (undefined1)((uint)bVar2 + (uint)(byte)param_1[-1] * 2 + (uint)bVar3 + 2 >> 2);
  param_1[0x20] = uVar6;
  param_1[0x41] = uVar6;
  param_1[0x62] = uVar6;
  uVar6 = (undefined1)(iVar1 + (uint)bVar5 + (uint)bVar3 * 2 >> 2);
  *param_1 = uVar6;
  param_1[0x21] = uVar6;
  param_1[0x42] = uVar6;
  param_1[99] = uVar6;
  uVar6 = (undefined1)((uint)bVar3 + (uint)bVar4 + (uint)bVar5 * 2 + 2 >> 2);
  param_1[1] = uVar6;
  param_1[0x22] = uVar6;
  param_1[0x43] = uVar6;
  uVar6 = (undefined1)((uint)bVar5 + (uint)(byte)param_1[-0x1e] + (uint)bVar4 * 2 + 2 >> 2);
  param_1[2] = uVar6;
  param_1[0x23] = uVar6;
  param_1[3] = (char)((uint)bVar4 + (uint)(byte)param_1[-0x1d] + (uint)(byte)param_1[-0x1e] * 2 + 2
                     >> 2);
  return;
}

