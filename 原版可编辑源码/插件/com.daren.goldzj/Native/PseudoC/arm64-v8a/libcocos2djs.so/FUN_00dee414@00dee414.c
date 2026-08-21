
void FUN_00dee414(undefined1 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 uVar7;
  
  bVar1 = param_1[-0x1e];
  bVar2 = param_1[-0x1d];
  bVar3 = param_1[-0x1c];
  bVar4 = param_1[-0x1b];
  bVar5 = param_1[-0x1a];
  bVar6 = param_1[-0x19];
  *param_1 = (char)((uint)(byte)param_1[-0x20] + (uint)(byte)param_1[-0x1f] * 2 + (uint)bVar1 + 2 >>
                   2);
  uVar7 = (undefined1)((uint)(byte)param_1[-0x1f] + (uint)bVar1 * 2 + (uint)bVar2 + 2 >> 2);
  param_1[0x20] = uVar7;
  param_1[1] = uVar7;
  uVar7 = (undefined1)((uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 + 2 >> 2);
  param_1[0x40] = uVar7;
  param_1[0x21] = uVar7;
  param_1[2] = uVar7;
  uVar7 = (undefined1)((uint)bVar2 + (uint)bVar3 * 2 + (uint)bVar4 + 2 >> 2);
  param_1[0x60] = uVar7;
  param_1[0x41] = uVar7;
  param_1[0x22] = uVar7;
  param_1[3] = uVar7;
  uVar7 = (undefined1)((uint)bVar3 + (uint)bVar4 * 2 + (uint)bVar5 + 2 >> 2);
  param_1[0x61] = uVar7;
  param_1[0x42] = uVar7;
  param_1[0x23] = uVar7;
  uVar7 = (undefined1)((uint)bVar4 + (uint)bVar5 * 2 + (uint)bVar6 + 2 >> 2);
  param_1[0x62] = uVar7;
  param_1[0x43] = uVar7;
  param_1[99] = (char)((uint)bVar5 + (uint)bVar6 + (uint)bVar6 * 2 + 2 >> 2);
  return;
}

