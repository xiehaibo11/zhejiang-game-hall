
char * FUN_00a1a0b4(long param_1,char *param_2,socklen_t param_3)

{
  int __af;
  char *pcVar1;
  void *__cp;
  
  __af = *(int *)(param_1 + 4);
  if (__af == 10) {
    __cp = (void *)(*(long *)(param_1 + 0x20) + 8);
  }
  else {
    if (__af != 2) {
      return (char *)0x0;
    }
    __cp = (void *)(*(long *)(param_1 + 0x20) + 4);
  }
  pcVar1 = inet_ntop(__af,__cp,param_2,param_3);
  return pcVar1;
}

