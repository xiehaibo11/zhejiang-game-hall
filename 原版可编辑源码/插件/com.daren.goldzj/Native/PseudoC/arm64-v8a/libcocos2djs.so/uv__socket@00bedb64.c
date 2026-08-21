
int uv__socket(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = socket(param_1,param_2 | 0x80800,param_3);
  if (iVar1 == -1) {
    piVar3 = (int *)__errno();
    if ((*piVar3 != 0x16) || (iVar1 = socket(param_1,param_2,param_3), iVar1 == -1)) {
      return -*piVar3;
    }
    iVar2 = uv__nonblock_ioctl(iVar1,1);
    if ((iVar2 != 0) || (iVar2 = uv__cloexec_ioctl(iVar1,1), iVar2 != 0)) {
      uv__close(iVar1);
      iVar1 = iVar2;
    }
  }
  return iVar1;
}

