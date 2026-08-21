
int FUN_011ae428(int param_1,sigset_t *param_2,sigset_t *param_3)

{
  int iVar1;
  int iVar2;
  
  if (DAT_01793664 == '\x01') {
    iVar1 = sigprocmask(param_1,param_2,param_3);
    return iVar1;
  }
  iVar2 = pthread_sigmask(param_1,param_2,param_3);
  iVar1 = 0;
  if (iVar2 != 0) {
    if (iVar2 != 0x16) {
      return -1;
    }
    iVar1 = sigprocmask(param_1,param_2,param_3);
    if (iVar1 == 0) {
      DAT_01793664 = 1;
      return 0;
    }
    iVar1 = -1;
  }
  return iVar1;
}

