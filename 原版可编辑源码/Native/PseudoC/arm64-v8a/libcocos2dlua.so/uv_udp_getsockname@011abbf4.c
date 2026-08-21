
int uv_udp_getsockname(long param_1,sockaddr *param_2,socklen_t *param_3)

{
  int iVar1;
  int *piVar2;
  socklen_t local_14;
  
  if (*(int *)(param_1 + 0xb0) == -1) {
    return -0x16;
  }
  local_14 = *param_3;
  iVar1 = getsockname(*(int *)(param_1 + 0xb0),param_2,&local_14);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    return -*piVar2;
  }
  *param_3 = local_14;
  return 0;
}

