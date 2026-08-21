
int uv_udp_set_broadcast(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_14;
  
  local_14 = param_2;
  iVar1 = setsockopt(*(int *)(param_1 + 0xb0),1,6,&local_14,4);
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)__errno();
    iVar2 = -*piVar3;
  }
  return iVar2;
}

