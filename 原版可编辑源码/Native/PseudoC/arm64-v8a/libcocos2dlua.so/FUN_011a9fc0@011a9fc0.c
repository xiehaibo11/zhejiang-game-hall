
int FUN_011a9fc0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  int local_14;
  
  local_18 = param_3;
  local_14 = param_2;
  iVar1 = setsockopt(param_1,1,9,&local_14,4);
  if (iVar1 == 0) {
    if (local_14 == 0) {
      return 0;
    }
    iVar1 = setsockopt(param_1,6,4,&local_18,4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  piVar2 = (int *)__errno();
  return -*piVar2;
}

