
int uv__tcp_keepalive(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8;
  int local_4;
  
  local_8 = param_3;
  local_4 = param_2;
  iVar1 = setsockopt(param_1,1,9,&local_4,4);
  if (iVar1 == 0) {
    if (local_4 != 0) {
      iVar1 = setsockopt(param_1,6,4,&local_8,4);
      if (iVar1 != 0) goto LAB_00bf3da8;
    }
    return 0;
  }
LAB_00bf3da8:
  piVar2 = (int *)__errno();
  return -*piVar2;
}

