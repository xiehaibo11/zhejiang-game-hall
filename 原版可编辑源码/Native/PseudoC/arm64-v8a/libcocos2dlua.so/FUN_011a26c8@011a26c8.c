
int FUN_011a26c8(long param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  socklen_t local_14;
  
  if (param_1 == 0) {
    return -0x16;
  }
  if (param_3 == (int *)0x0) {
    return -0x16;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 7) {
    if (iVar1 == 0xf) {
      piVar2 = (int *)(param_1 + 0xb0);
      goto LAB_011a2710;
    }
    if (iVar1 != 0xc) {
      return -0x5f;
    }
  }
  piVar2 = (int *)(param_1 + 0xb8);
LAB_011a2710:
  local_14 = 4;
  if (*param_3 == 0) {
    iVar1 = getsockopt(*piVar2,1,param_2,param_3,&local_14);
  }
  else {
    iVar1 = setsockopt(*piVar2,1,param_2,param_3,4);
  }
  if (-1 < iVar1) {
    return 0;
  }
  piVar2 = (int *)__errno();
  return -*piVar2;
}

