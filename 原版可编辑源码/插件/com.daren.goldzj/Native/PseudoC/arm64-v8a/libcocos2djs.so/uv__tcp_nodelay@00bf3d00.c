
int uv__tcp_nodelay(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_4;
  
  local_4 = param_2;
  iVar1 = setsockopt(param_1,6,1,&local_4,4);
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)__errno();
    iVar2 = -*piVar3;
  }
  return iVar2;
}

