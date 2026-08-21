
void FUN_0114ab6c(undefined1 *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  bVar2 = param_1[0x1f];
  bVar3 = param_1[0x3f];
  bVar4 = param_1[0x5f];
  *param_1 = (char)((uint)(byte)param_1[-1] + (uint)bVar2 + 1 >> 1);
  iVar1 = (uint)bVar3 + (uint)bVar4;
  param_1[0x42] = bVar4;
  uVar6 = (uint)bVar4;
  param_1[0x43] = bVar4;
  uVar5 = (undefined1)(iVar1 + 1U >> 1);
  param_1[0x40] = uVar5;
  param_1[0x22] = uVar5;
  uVar5 = (undefined1)((uint)bVar2 + (uint)bVar3 + 1 >> 1);
  param_1[0x20] = uVar5;
  param_1[2] = uVar5;
  param_1[1] = (char)((uint)(byte)param_1[-1] + (uint)bVar2 * 2 + (uint)bVar3 + 2 >> 2);
  uVar5 = (undefined1)((uint)bVar2 + (uint)bVar3 * 2 + uVar6 + 2 >> 2);
  param_1[0x21] = uVar5;
  param_1[3] = uVar5;
  uVar5 = (undefined1)(iVar1 + uVar6 * 2 + 2 >> 2);
  param_1[0x41] = uVar5;
  param_1[0x23] = uVar5;
  *(uint *)(param_1 + 0x60) = uVar6 * 0x1010101;
  return;
}

