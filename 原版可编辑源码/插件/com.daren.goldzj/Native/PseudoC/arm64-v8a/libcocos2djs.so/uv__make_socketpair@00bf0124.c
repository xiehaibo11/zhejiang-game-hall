
int uv__make_socketpair(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if (DAT_01d3bc70 == 0) {
    iVar1 = socketpair(1,param_2 | 0x80001,0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)__errno();
    if (*piVar2 != 0x16) goto LAB_00bf0198;
    DAT_01d3bc70 = 1;
  }
  iVar1 = socketpair(1,1,0,param_1);
  if (iVar1 == 0) {
    uv__cloexec_ioctl(*param_1,1);
    uv__cloexec_ioctl(param_1[1],1);
    if ((param_2 >> 0xb & 1) != 0) {
      uv__nonblock_ioctl(*param_1,1);
      uv__nonblock_ioctl(param_1[1],1);
      return 0;
    }
    return 0;
  }
  piVar2 = (int *)__errno();
LAB_00bf0198:
  return -*piVar2;
}

