
int FUN_00e4c118(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 - *(int *)(param_1 + 0x18);
  iVar1 = 0;
  if (uVar2 < *(uint *)(param_1 + 0x1c)) {
    iVar1 = uVar2 + 1;
  }
  return iVar1;
}

