
undefined8 FUN_010a3d7c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  *(long *)(param_1 + 0xa0) = param_2;
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(uint *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 8) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xa28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0xa30);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  uVar3 = *(uint *)(param_2 + 0x30);
  uVar4 = (uint)((uVar3 | 1) == 3);
  uVar1 = uVar4 | 2;
  if (uVar3 != 4 && uVar3 != 2) {
    uVar1 = uVar4;
  }
  if (uVar3 != 1) {
    uVar1 = uVar1 | 4;
  }
  uVar4 = uVar1 | 8;
  if (uVar3 != 2) {
    uVar4 = uVar1;
  }
  *(uint *)(param_1 + 0x98) = uVar2 | 4;
  *(uint *)(param_1 + 0x9c) = uVar4;
  return 0;
}

