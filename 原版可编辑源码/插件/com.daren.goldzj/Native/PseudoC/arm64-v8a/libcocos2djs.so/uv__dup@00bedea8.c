
int uv__dup(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = dup(param_1);
  if (iVar1 == -1) {
    piVar3 = (int *)__errno();
    return -*piVar3;
  }
  iVar2 = uv__cloexec_ioctl(iVar1,1);
  if (iVar2 == 0) {
    return iVar1;
  }
  uv__close(iVar1);
  return iVar2;
}

