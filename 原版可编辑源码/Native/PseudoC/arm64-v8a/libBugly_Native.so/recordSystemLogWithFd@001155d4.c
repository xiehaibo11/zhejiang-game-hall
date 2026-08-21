
void recordSystemLogWithFd(int param_1,ulong param_2)

{
  long lVar1;
  __pid_t __pid;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  uint local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 < 0) {
    piVar4 = (int *)__errno();
    pcVar5 = strerror(*piVar4);
    log2Console(6,"eup","System log file descriptor is invalid: %d, error: %s",param_1,pcVar5);
    uVar6 = 0xffffffff;
    goto LAB_001158c0;
  }
  log2Console(3,"eup","Start to record system log by executing \'logcat\'.");
  __pid = fork();
  if (__pid < 0) {
    piVar4 = (int *)__errno();
    pcVar5 = strerror(*piVar4);
    log2Console(6,"eup","Failed to fork process, error: %s",pcVar5);
    uVar6 = 0xfffffffe;
    goto LAB_001158c0;
  }
  if (__pid == 0) {
    dup2(param_1,1);
    if ((param_2 & 1) == 0) {
      puVar7 = &DAT_0012896d;
      puVar8 = &DAT_00128970;
      pcVar9 = "-v";
      pcVar10 = "threadtime";
      pcVar5 = "Bugly-libunwind:S";
      pcVar11 = (char *)0x0;
LAB_00115890:
      iVar2 = execl("/system/bin/logcat","logcat",puVar7,puVar8,pcVar9,pcVar10,pcVar5,pcVar11);
    }
    else {
      iVar2 = __system_property_get("ro.build.version.sdk",local_48);
      if (iVar2 < 1) {
        log2Console(5,"eup","Failed to get API level (will set to %s).",&DAT_0012a2f8);
LAB_0011582c:
        pcVar5 = "dalvikvm art zygote zygote64 OpenGLRenderer";
        log2Console(3,"eup","Tag to filter logcat is set to: %s",
                    "dalvikvm art zygote zygote64 OpenGLRenderer");
        puVar7 = &DAT_00128947;
        puVar8 = &DAT_0012894a;
        pcVar9 = "threadtime";
        pcVar10 = "-s";
        pcVar11 = "Bugly-libunwind:S";
        goto LAB_00115890;
      }
      uVar3 = strtoul((char *)local_48,(char **)0x0,10);
      if ((int)uVar3 < 0x1c) goto LAB_0011582c;
      log2Console(3,"eup","Tag to filter logcat is set to: %s",0);
      iVar2 = execl("/system/bin/logcat","logcat",&DAT_00128947,&DAT_0012894a,"threadtime",
                    "Bugly-libunwind:S",0);
    }
    piVar4 = (int *)__errno(iVar2);
    pcVar5 = strerror(*piVar4);
    log2Console(6,"eup","Failed to execute \'logcat\', error: %s",pcVar5);
  }
  else {
    log2Console(3,"eup","Pid of subprocess: %d",__pid);
    log2Console(4,"eup","Wait for the subprocess to dump logcat...");
    uVar12 = 0;
    local_48[0] = 0xffffffff;
    do {
      usleep(10000);
      waitpid(__pid,(int *)local_48,1);
      if ((local_48[0] & 0x7f) == 0) {
        log2Console(4,"eup","Successfully dump log by executing \'logcat\'.");
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 500);
    log2Console(4,"eup","Finished recorded system log.");
  }
  uVar6 = 0;
LAB_001158c0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

