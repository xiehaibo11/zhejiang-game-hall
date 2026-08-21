
int FUN_0010ac8c(int param_1)

{
  int iVar1;
  pthread_t __threadid;
  
  log2Console(4,"eup","backupSignalHandler");
  if (DAT_0013fdb3 != '\x01') {
    DAT_0013fdb3 = 1;
    unlockFile(lockFilePath);
    unregistSignalHanlder();
    __threadid = pthread_self();
    iVar1 = pthread_kill(__threadid,param_1);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  _exit(1);
}

