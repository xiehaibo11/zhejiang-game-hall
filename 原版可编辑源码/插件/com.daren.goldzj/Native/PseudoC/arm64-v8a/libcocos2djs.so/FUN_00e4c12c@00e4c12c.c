
int FUN_00e4c12c(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar1 = *param_2 + 1;
  uVar4 = uVar1 - uVar3;
  if (uVar1 < uVar3 || uVar4 == 0) {
    *param_2 = uVar3;
    return 1;
  }
  iVar2 = 0;
  if (uVar4 < *(uint *)(param_1 + 0x1c)) {
    iVar2 = uVar4 + 1;
  }
  else {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return iVar2;
}

