
void FUN_00e6ba9c(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = *(int *)(param_1 + 3);
    uVar4 = *param_1;
    iVar2 = *(int *)(param_1 + 9);
    if ((iVar2 + iVar1 == param_2) &&
       ((iVar3 = FUN_00e6bb30(param_1 + 3,param_3,0,iVar1,0,uVar4), iVar3 != 0 ||
        (iVar3 = FUN_00e6bb30(param_1 + 9,param_3,iVar1,iVar2,0,uVar4), iVar3 != 0)))) {
      *(int *)(param_1 + 1) = iVar3;
    }
  }
  return;
}

