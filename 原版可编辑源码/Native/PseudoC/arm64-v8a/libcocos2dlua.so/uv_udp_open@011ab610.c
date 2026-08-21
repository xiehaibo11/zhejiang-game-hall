
ulong uv_udp_open(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0xb0) != -1) {
    return 0xfffffff0;
  }
  iVar1 = FUN_011a394c(*(undefined8 *)(param_1 + 8),param_2);
  if (iVar1 != 0) {
    return 0xffffffef;
  }
  uVar2 = FUN_011a2ca0(param_2,1);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  local_24 = 1;
  iVar1 = setsockopt(param_2,1,2,&local_24,4);
  if (iVar1 != 0) {
    piVar3 = (int *)__errno();
    if (*piVar3 != 0) {
      return (ulong)(uint)-*piVar3;
    }
  }
  *(int *)(param_1 + 0xb0) = param_2;
  return 0;
}

