
int uv_udp_set_ttl(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_14;
  
  if (0xfe < param_2 - 1U) {
    return -0x16;
  }
  local_14 = param_2;
  if ((*(byte *)(param_1 + 0x5a) >> 6 & 1) == 0) {
    iVar1 = setsockopt(*(int *)(param_1 + 0xb0),0,2,&local_14,4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = setsockopt(*(int *)(param_1 + 0xb0),0x29,0x10,&local_14,4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  piVar2 = (int *)__errno();
  return -*piVar2;
}

