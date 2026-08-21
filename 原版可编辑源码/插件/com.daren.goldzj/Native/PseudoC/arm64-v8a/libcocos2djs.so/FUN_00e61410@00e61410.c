
undefined8 FUN_00e61410(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(param_2 + 8);
  *(long *)(param_1 + 0x1420) = param_2;
  uVar4 = *(uint *)(param_2 + 0x34);
  *(uint *)(param_1 + 0x1418) = uVar4;
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 8) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x48a8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x48b0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  uVar2 = *(uint *)(param_2 + 0x30);
  uVar6 = (uint)((uVar2 | 1) == 3);
  uVar1 = uVar6 | 2;
  if (uVar2 != 4 && uVar2 != 2) {
    uVar1 = uVar6;
  }
  if ((uVar2 | 2) != 3) {
    uVar1 = uVar1 | 4;
  }
  uVar6 = uVar1 | 8;
  if (uVar2 != 2) {
    uVar6 = uVar1;
  }
  if (((uVar2 | 2) == 3) || ((*(byte *)(lVar5 + 0x18) & 1) != 0)) {
    uVar4 = uVar4 | 1;
  }
  cVar3 = *(char *)(*(long *)(*(long *)(param_2 + 0x40) + 0x2f0) + 0x20);
  *(uint *)(param_1 + 0x141c) = uVar6;
  uVar1 = uVar4 | 8;
  if (cVar3 != '\0') {
    uVar1 = uVar4;
  }
  *(uint *)(param_1 + 0x1418) = uVar1;
  return 0;
}

