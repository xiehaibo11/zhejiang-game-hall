
undefined8 FUN_00e603f0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  *(long *)(param_1 + 0x1420) = param_2;
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(uint *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x38f8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x3900);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar3 = *(uint *)(param_2 + 0x30);
  uVar5 = (uint)((uVar3 | 1) == 3);
  uVar1 = uVar5 | 2;
  if (uVar3 != 4 && uVar3 != 2) {
    uVar1 = uVar5;
  }
  if ((uVar3 | 2) != 3) {
    uVar1 = uVar1 | 4;
  }
  uVar4 = 0xc;
  uVar5 = uVar1 | 8;
  if (uVar3 != 2) {
    uVar5 = uVar1;
  }
  if (*(char *)(*(long *)(*(long *)(param_2 + 0x40) + 0x2f0) + 0x20) != '\0') {
    uVar4 = 4;
  }
  *(uint *)(param_1 + 0x1418) = uVar4 | uVar2;
  *(uint *)(param_1 + 0x141c) = uVar5;
  return 0;
}

