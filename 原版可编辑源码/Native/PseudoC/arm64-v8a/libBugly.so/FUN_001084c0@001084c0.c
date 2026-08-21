
int FUN_001084c0(int param_1)

{
  int iVar1;
  pthread_t __threadid;
  
  log2Console(4,"CrashReport-Native","backupSignalHandler");
  if (DAT_0013ed54 == '\0') {
    DAT_0013ed54 = 1;
    unlockFile(lockFilePath);
    unregistSignalHanlder();
    __threadid = pthread_self();
    iVar1 = pthread_kill(__threadid,param_1);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  _exit(1);
}

