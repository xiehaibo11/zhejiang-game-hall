
undefined8 uv_read_stop(long param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x58) >> 0xc & 1) != 0) {
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) & 0xffffefff;
    FUN_011a37d8(*(undefined8 *)(param_1 + 8),param_1 + 0x88,1);
    iVar2 = FUN_011a393c(param_1 + 0x88,4);
    if (((iVar2 == 0) && (uVar1 = *(uint *)(param_1 + 0x58), (uVar1 >> 2 & 1) != 0)) &&
       (*(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffb, (uVar1 >> 3 & 1) != 0)) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return 0;
}

