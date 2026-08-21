
int uv__open_cloexec(char *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_01d3bc68 == 0) {
    iVar1 = open(param_1,param_2 | 0x80000);
    if (iVar1 != -1) {
      return iVar1;
    }
    piVar3 = (int *)__errno();
    if (*piVar3 != 0x16) goto LAB_00bee674;
    DAT_01d3bc68 = 1;
  }
  iVar1 = open(param_1,param_2);
  if (iVar1 != -1) {
    iVar2 = uv__cloexec_ioctl(iVar1,1);
    if (iVar2 == 0) {
      return iVar1;
    }
    uv__close(iVar1);
    return iVar2;
  }
  piVar3 = (int *)__errno();
LAB_00bee674:
  return -*piVar3;
}

