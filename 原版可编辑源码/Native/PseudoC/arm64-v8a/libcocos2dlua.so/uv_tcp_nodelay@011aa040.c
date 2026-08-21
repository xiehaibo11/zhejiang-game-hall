
int uv_tcp_nodelay(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_24;
  
  if (*(int *)(param_1 + 0xb8) != -1) {
    local_24 = param_2;
    iVar2 = setsockopt(*(int *)(param_1 + 0xb8),6,1,&local_24,4);
    if (iVar2 != 0) {
      piVar3 = (int *)__errno();
      if (*piVar3 != 0) {
        return -*piVar3;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x58) & 0xfeffffff;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x58) | 0x1000000;
  }
  *(uint *)(param_1 + 0x58) = uVar1;
  return 0;
}

