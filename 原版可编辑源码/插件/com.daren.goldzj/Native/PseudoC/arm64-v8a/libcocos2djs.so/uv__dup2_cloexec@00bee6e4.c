
ulong uv__dup2_cloexec(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  
  if (DAT_01d3bc6c == 0) {
    do {
      uVar4 = uv__dup3(param_1,param_2,0x80000);
      if ((int)uVar4 != -1) {
        return uVar4;
      }
      piVar3 = (int *)__errno();
    } while (*piVar3 == 0x10);
    if (*piVar3 != 0x26) goto LAB_00bee7ac;
    DAT_01d3bc6c = 1;
  }
  do {
    uVar1 = dup2(param_1,param_2);
    if (uVar1 != 0xffffffff) {
      uVar2 = uv__cloexec_ioctl(param_2,1);
      if (uVar2 != 0) {
        uv__close(param_2);
        return (ulong)uVar2;
      }
      return (ulong)uVar1;
    }
    piVar3 = (int *)__errno();
  } while (*piVar3 == 0x10);
LAB_00bee7ac:
  return (ulong)(uint)-*piVar3;
}

