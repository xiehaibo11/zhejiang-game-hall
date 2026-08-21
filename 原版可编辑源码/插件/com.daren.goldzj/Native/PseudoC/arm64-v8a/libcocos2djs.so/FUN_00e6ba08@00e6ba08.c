
void FUN_00e6ba08(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar2 = *(int *)(param_1 + 3);
    uVar3 = *param_1;
    iVar1 = *(int *)(param_1 + 9);
    if (iVar1 + iVar2 == param_3) {
      iVar2 = FUN_00e6bb30(param_1 + 3,param_4,iVar1,iVar2,param_2,uVar3);
      if ((iVar2 != 0) ||
         (iVar2 = FUN_00e6bb30(param_1 + 9,param_4,0,iVar1,param_2,uVar3), iVar2 != 0)) {
        *(int *)(param_1 + 1) = iVar2;
      }
    }
  }
  return;
}

