
undefined8 FUN_011abd8c(long param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_011a37d8(*(undefined8 *)(param_1 + 8),param_1 + 0x80,1);
  iVar2 = FUN_011a393c(param_1 + 0x80,4);
  if (((iVar2 == 0) && (uVar1 = *(uint *)(param_1 + 0x58), (uVar1 >> 2 & 1) != 0)) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffb, (uVar1 >> 3 & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}

