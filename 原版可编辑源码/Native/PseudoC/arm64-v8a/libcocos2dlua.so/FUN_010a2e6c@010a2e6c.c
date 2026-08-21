
undefined8 FUN_010a2e6c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_2 + 8);
  *(long *)(param_1 + 0xa0) = param_2;
  uVar3 = *(uint *)(param_2 + 0x34);
  *(uint *)(param_1 + 0x98) = uVar3;
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 8) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xa28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0xa30);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar2 = *(uint *)(param_2 + 0x30);
  uVar5 = (uint)((uVar2 | 1) == 3);
  uVar1 = uVar5 | 2;
  if (uVar2 != 4 && uVar2 != 2) {
    uVar1 = uVar5;
  }
  if (uVar2 != 1) {
    uVar1 = uVar1 | 4;
  }
  uVar5 = uVar1 | 8;
  if (uVar2 != 2) {
    uVar5 = uVar1;
  }
  if ((uVar2 == 1) || ((*(byte *)(lVar4 + 0x18) & 1) != 0)) {
    uVar3 = uVar3 | 1;
  }
  *(uint *)(param_1 + 0x98) = uVar3;
  *(uint *)(param_1 + 0x9c) = uVar5;
  return 0;
}

