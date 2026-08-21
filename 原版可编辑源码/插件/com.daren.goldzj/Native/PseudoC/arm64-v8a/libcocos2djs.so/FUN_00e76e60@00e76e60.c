
short FUN_00e76e60(long param_1,uint *param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar3 = uVar1;
  if (uVar1 <= *param_2 + 1) {
    uVar3 = *param_2 + 1;
  }
  uVar1 = *(int *)(param_1 + 0x1c) + uVar1;
  if (uVar3 < uVar1) {
    do {
      sVar2 = *(short *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 2);
      if (sVar2 != 0) goto LAB_00e76ea0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  sVar2 = 0;
  uVar3 = 0;
LAB_00e76ea0:
  *param_2 = uVar3;
  return sVar2;
}

