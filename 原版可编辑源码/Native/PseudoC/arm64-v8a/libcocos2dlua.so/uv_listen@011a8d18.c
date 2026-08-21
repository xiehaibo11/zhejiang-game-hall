
undefined8 uv_listen(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x10) == 7) {
    uVar3 = FUN_011a546c(param_1);
    iVar2 = (int)uVar3;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0xc) {
      return 0xffffffea;
    }
    uVar3 = FUN_011a9e50(param_1);
    iVar2 = (int)uVar3;
  }
  if (iVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x58);
    if ((uVar1 >> 2 & 1) != 0) {
      return 0;
    }
    uVar3 = 0;
    *(uint *)(param_1 + 0x58) = uVar1 | 4;
    if ((uVar1 >> 3 & 1) != 0) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
      return uVar3;
    }
  }
  return uVar3;
}

