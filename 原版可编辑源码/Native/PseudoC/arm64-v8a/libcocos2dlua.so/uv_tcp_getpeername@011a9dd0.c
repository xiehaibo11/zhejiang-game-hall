
int uv_tcp_getpeername(long param_1,sockaddr *param_2,socklen_t *param_3)

{
  int iVar1;
  int *piVar2;
  socklen_t local_14;
  
  if (*(int *)(param_1 + 0xe8) != 0) {
    return *(int *)(param_1 + 0xe8);
  }
  if (-1 < *(int *)(param_1 + 0xb8)) {
    local_14 = *param_3;
    iVar1 = getpeername(*(int *)(param_1 + 0xb8),param_2,&local_14);
    if (iVar1 != 0) {
      piVar2 = (int *)__errno();
      return -*piVar2;
    }
    *param_3 = local_14;
    return 0;
  }
  return -0x16;
}

