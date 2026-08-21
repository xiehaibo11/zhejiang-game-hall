
void ecp_nistz256_gather_w5(undefined8 *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  bVar2 = param_3 != 0;
  puVar1 = (undefined4 *)(param_2 + (param_3 - (ulong)bVar2) * 4);
  uVar3 = CONCAT44(puVar1[0x40],*puVar1);
  uVar4 = CONCAT44(puVar1[0x50],puVar1[0x10]);
  uVar5 = CONCAT44(puVar1[0x60],puVar1[0x20]);
  uVar6 = CONCAT44(puVar1[0x70],puVar1[0x30]);
  if (!bVar2) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  uVar3 = CONCAT44(puVar1[0xc0],puVar1[0x80]);
  uVar4 = CONCAT44(puVar1[0xd0],puVar1[0x90]);
  uVar5 = CONCAT44(puVar1[0xe0],puVar1[0xa0]);
  uVar6 = CONCAT44(puVar1[0xf0],puVar1[0xb0]);
  if (!bVar2) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  uVar3 = CONCAT44(puVar1[0x140],puVar1[0x100]);
  uVar4 = CONCAT44(puVar1[0x150],puVar1[0x110]);
  uVar5 = CONCAT44(puVar1[0x160],puVar1[0x120]);
  uVar6 = CONCAT44(puVar1[0x170],puVar1[0x130]);
  if (!bVar2) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  param_1[10] = uVar5;
  param_1[0xb] = uVar6;
  return;
}

