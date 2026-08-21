
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void doACrash(char param_1,undefined1 param_2)

{
  int __errnum;
  char *pcVar1;
  undefined1 local_11;
  pthread_t local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_11 = param_2;
  if (param_1 == '\0') {
    doANativeCrash(&local_11);
  }
  else {
    log2Console(3,"CrashReport-Native","Create a new thread for testing crash.");
    __errnum = pthread_create(&local_10,(pthread_attr_t *)0x0,doANativeCrash,&local_11);
    if (__errnum != 0) {
      pcVar1 = strerror(__errnum);
      log2Console(6,"CrashReport-Native","can\'t create thread: %s\n",pcVar1);
    }
    pthread_join(local_10,(void **)0x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

