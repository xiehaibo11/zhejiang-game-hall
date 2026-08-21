
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recordSystemLogWithFd(int param_1,char param_2)

{
  __pid_t __pid;
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  char *pcVar4;
  uint local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 < 0) {
    piVar3 = (int *)__errno();
    pcVar4 = strerror(*piVar3);
    log2Console(6,"CrashReport-Native","System log file descriptor is invalid: %d, error: %s",
                param_1,pcVar4);
    uVar2 = 0xffffffff;
  }
  else {
    log2Console(3,"CrashReport-Native","Start to record system log by executing \'logcat\'.");
    __pid = fork();
    if (__pid < 0) {
      piVar3 = (int *)__errno();
      pcVar4 = strerror(*piVar3);
      log2Console(6,"CrashReport-Native","Failed to fork process, error: %s",pcVar4);
      uVar2 = 0xfffffffe;
    }
    else if (__pid == 0) {
      iVar1 = dup2(param_1,1);
      if (param_2 == '\0') {
        iVar1 = execl("/system/bin/logcat","logcat",&DAT_00126a60,&DAT_00126a68,&DAT_00126a70,
                      "threadtime","Bugly-libunwind:S",0);
      }
      else {
        iVar1 = getAndroidApiLevel(iVar1);
        if (iVar1 < 0x1c) {
          log2Console(3,"CrashReport-Native","Tag to filter logcat is set to: %s",
                      "dalvikvm art zygote zygote64 OpenGLRenderer");
          iVar1 = execl("/system/bin/logcat","logcat",&DAT_00126b88,&DAT_00126a70,"threadtime",
                        &DAT_00126bc0,"dalvikvm art zygote zygote64 OpenGLRenderer",
                        "Bugly-libunwind:S",0);
        }
        else {
          log2Console(3,"CrashReport-Native","Tag to filter logcat is set to: %s",0);
          iVar1 = execl("/system/bin/logcat","logcat",&DAT_00126b88,&DAT_00126a70,"threadtime",
                        "Bugly-libunwind:S",0);
        }
      }
      piVar3 = (int *)__errno(iVar1);
      pcVar4 = strerror(*piVar3);
      log2Console(6,"CrashReport-Native","Failed to execute \'logcat\', error: %s",pcVar4);
      uVar2 = 0;
    }
    else {
      iVar1 = 100;
      log2Console(3,"CrashReport-Native","Pid of subprocess: %d",__pid);
      log2Console(4,"CrashReport-Native","Wait for the subprocess to dump logcat...");
      local_c = 0xffffffff;
      do {
        usleep(10000);
        waitpid(__pid,(int *)&local_c,1);
        if ((local_c & 0x7f) == 0) {
          log2Console(4,"CrashReport-Native","Successfully dump log by executing \'logcat\'.");
          break;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      log2Console(4,"CrashReport-Native","Finished recorded system log.");
      uVar2 = 0;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

