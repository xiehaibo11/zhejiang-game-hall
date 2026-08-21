
undefined8 FUN_00a12a44(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *param_2 = iVar1;
    return 1;
  }
  return 0;
}

