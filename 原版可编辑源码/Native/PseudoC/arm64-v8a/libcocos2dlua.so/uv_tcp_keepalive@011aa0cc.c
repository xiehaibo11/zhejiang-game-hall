
int uv_tcp_keepalive(long param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_28;
  int local_24;
  
  iVar3 = *(int *)(param_1 + 0xb8);
  if (iVar3 != -1) {
    local_28 = param_3;
    local_24 = param_2;
    iVar2 = setsockopt(iVar3,1,9,&local_24,4);
    if ((iVar2 != 0) || ((local_24 != 0 && (iVar3 = setsockopt(iVar3,6,4,&local_28,4), iVar3 != 0)))
       ) {
      piVar4 = (int *)__errno();
      if (*piVar4 != 0) {
        return -*piVar4;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 0x58) & 0xfdffffff;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x58) | 0x2000000;
  }
  *(uint *)(param_1 + 0x58) = uVar1;
  return 0;
}

