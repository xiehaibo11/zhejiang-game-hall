
void doACrash(ulong param_1,byte param_2)

{
  long lVar1;
  int __errnum;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  pthread_t local_38;
  byte local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = param_2 & 1;
  if ((param_1 & 1) == 0) {
    uVar4 = doANativeCrash(local_2c);
  }
  else {
    log2Console(3,"eup","Create a new thread for testing crash.");
    __errnum = pthread_create(&local_38,(pthread_attr_t *)0x0,doANativeCrash,local_2c);
    if (__errnum != 0) {
      pcVar3 = strerror(__errnum);
      log2Console(6,"eup","can\'t create thread: %s\n",pcVar3);
    }
    uVar2 = pthread_join(local_38,(void **)0x0);
    uVar4 = (ulong)uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

