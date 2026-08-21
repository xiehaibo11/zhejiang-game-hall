
int uv__pthread_sigmask(int param_1,sigset_t *param_2,sigset_t *param_3)

{
  int iVar1;
  int iVar2;
  
  if (DAT_01d3bcac == 0) {
    iVar1 = pthread_sigmask(param_1,param_2,param_3);
    iVar2 = 0;
    if (iVar1 != 0) {
      if ((iVar1 == 0x16) && (iVar2 = sigprocmask(param_1,param_2,param_3), iVar2 == 0)) {
        DAT_01d3bcac = 1;
        iVar2 = 0;
      }
      else {
        iVar2 = -1;
      }
    }
    return iVar2;
  }
  iVar2 = sigprocmask(param_1,param_2,param_3);
  return iVar2;
}

