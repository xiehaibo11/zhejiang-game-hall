
undefined8 FUN_00e54110(long param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort uVar3;
  
  puVar1 = (undefined1 *)(param_1 + 10);
  if (*(undefined1 **)(param_2 + 0x108) < puVar1) {
    FUN_00e14b1c(param_2,8);
  }
  uVar3 = CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  uVar2 = (uint)CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
  if ((*(ulong *)(param_2 + 0x108) < param_1 + (ulong)uVar3) || ((uint)uVar3 < uVar2 * 2 + 10)) {
    FUN_00e14b1c(param_2,8);
  }
  if (*(int *)(param_2 + 0x110) != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (*(uint *)(param_2 + 0x118) <= (uint)CONCAT11(*puVar1,puVar1[1])) {
        FUN_00e14b1c(param_2,0x10);
      }
      puVar1 = puVar1 + 2;
    }
  }
  return 0;
}

