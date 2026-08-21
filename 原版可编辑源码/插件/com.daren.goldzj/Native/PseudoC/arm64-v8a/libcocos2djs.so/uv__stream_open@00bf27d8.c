
int uv__stream_open(long param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0xb8) != param_2) && (*(int *)(param_1 + 0xb8) != -1)) {
    return -0x10;
  }
  param_3 = param_3 | *(uint *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = param_3;
  if (*(int *)(param_1 + 0x10) == 0xc) {
    if ((param_3 >> 10 & 1) == 0) {
joined_r0x00bf2878:
      if (((param_3 >> 0xb & 1) == 0) || (iVar1 = uv__tcp_keepalive(param_2,1,0x3c), iVar1 == 0))
      goto LAB_00bf2818;
    }
    else {
      iVar1 = uv__tcp_nodelay(param_2,1);
      if (iVar1 == 0) {
        param_3 = *(uint *)(param_1 + 0x58);
        goto joined_r0x00bf2878;
      }
    }
    piVar2 = (int *)__errno();
    iVar1 = -*piVar2;
  }
  else {
LAB_00bf2818:
    *(int *)(param_1 + 0xb8) = param_2;
    iVar1 = 0;
  }
  return iVar1;
}

