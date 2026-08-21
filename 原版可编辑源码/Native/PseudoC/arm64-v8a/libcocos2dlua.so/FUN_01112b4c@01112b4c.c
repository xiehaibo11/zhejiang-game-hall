
int FUN_01112b4c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1 - *(int *)*param_2;
  if (iVar1 == 0) {
    iVar1 = ((int *)*param_1)[2];
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = ((int *)*param_2)[2] - iVar1;
  }
  return iVar1;
}

