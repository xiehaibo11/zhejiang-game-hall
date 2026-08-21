
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void jni_regist(long *param_1,undefined8 param_2,undefined8 param_3,char param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 auStack_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  ulong local_30;
  _union_1457 local_28;
  code *local_20;
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == '\0') {
    setLogMode(6);
  }
  else {
    setLogMode(3);
  }
  log2Console(4,"CrashReport-Native","regist start");
  uVar2 = toJavaString(param_1,"3.9.2",5);
  iVar1 = (**(code **)(*param_1 + 0x6d8))(param_1,&jvm);
  if (iVar1 == 0) {
    JAR_JNI_VERSION = param_5;
    log2Console(4,"CrashReport-Native","JARJNIVERSION:%d",param_5);
    uVar3 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    snprintf(recordFileDir,0x100,"%s",uVar3);
    snprintf(lockFilePath,0x100,"%s/../files/%s",recordFileDir,"native_record_lock");
    log2Console(4,"CrashReport-Native","set signal stack");
    auStack_48._8_8_ = calloc(1,0x4000);
    local_38 = 0;
    local_30 = 0x4000;
    if ((void *)auStack_48._8_8_ == (void *)0x0) {
      piVar7 = (int *)__errno();
      pcVar6 = strerror(*piVar7);
      log2Console(6,"CrashReport-Native","malloc stack size fail! %s",pcVar6);
    }
    else {
      iVar1 = sigaltstack((sigaltstack *)(auStack_48 + 8),(sigaltstack *)0x0);
      if (iVar1 == -1) {
        piVar7 = (int *)__errno();
        pcVar6 = strerror(*piVar7);
        log2Console(6,"CrashReport-Native","sigaltstack fail! %s",pcVar6);
      }
    }
    if (DAT_0013e990 == '\0') {
      local_20 = FUN_001075a8;
      DAT_0013e990 = '\x01';
      sigemptyset((sigset_t *)&stack0xffffffffffffffe8);
      local_28._0_4_ = 0x18000004;
      sigaction(4,(sigaction *)&local_28,(sigaction *)&DAT_0013e1f0);
      sigaction(5,(sigaction *)&local_28,(sigaction *)&DAT_0013e210);
      sigaction(0x10,(sigaction *)&local_28,(sigaction *)&DAT_0013e370);
      sigaction(0xb,(sigaction *)&local_28,(sigaction *)&DAT_0013e2d0);
      sigaction(6,(sigaction *)&local_28,(sigaction *)&DAT_0013e230);
      sigaction(8,(sigaction *)&local_28,(sigaction *)&DAT_0013e270);
      sigaction(7,(sigaction *)&local_28,(sigaction *)&DAT_0013e250);
      log2Console(4,"CrashReport-Native","regist anr sigquit handler");
      sigaction(3,(sigaction *)&local_28,(sigaction *)&DAT_0013e1d0);
      sigemptyset((sigset_t *)auStack_48);
      sigaddset((sigset_t *)auStack_48,3);
      pthread_sigmask(1,(sigset_t *)auStack_48,(__sigset_t *)0x0);
      log2Console(4,"CrashReport-Native","regist native handler");
      uVar3 = DAT_0013e2d8;
      lVar4 = initCurrentXMapInfoList(0);
      if (lVar4 != 0) {
        lVar5 = findModuleInMapInfoList(lVar4,uVar3);
        if (lVar5 == 0) {
          freeMapInfoList(lVar4);
        }
        else {
          pcVar6 = strstr((char *)(lVar5 + 0x43),"libmono.so");
          freeMapInfoList(lVar4);
          if (pcVar6 != (char *)0x0) {
            log2Console(6,"CrashReportInfo",
                        "*************************************** POWERED BY bugly.qq.com ***********************************"
                       );
            log2Console(6,"CrashReportInfo",&DAT_00122648);
            log2Console(6,"CrashReportInfo",&DAT_001226f0);
            log2Console(6,"CrashReportInfo",&DAT_00122778);
            log2Console(6,"CrashReportInfo",
                        "***************************************************************************************************"
                       );
            log2Console(6,"CrashReportInfo",
                        "*************************************** POWERED BY bugly.qq.com ***********************************"
                       );
            log2Console(6,"CrashReportInfo",
                        "libBugly.so is disabled to capture Native Crash(Signal SIGSEGV,SIGABRT,SIGFPE,SIGBUS)"
                       );
            log2Console(6,"CrashReportInfo",
                        "Because in unity project \"libmono.so\" registered \"Signal hanlder\" earlier than libBugly.so"
                       );
            log2Console(6,"CrashReportInfo",
                        "We recommend you to export your project to Android Project ,and call \"CrashReport.initCrashReport()\" in \"Activity.onCreate()\""
                       );
            log2Console(6,"CrashReportInfo",&DAT_00122968);
            log2Console(6,"CrashReportInfo",
                        "***************************************************************************************************"
                       );
            sigaction(0xb,(sigaction *)&DAT_0013e2d0,(sigaction *)0x0);
            sigaction(6,(sigaction *)&DAT_0013e230,(sigaction *)0x0);
            sigaction(8,(sigaction *)&DAT_0013e270,(sigaction *)0x0);
            sigaction(7,(sigaction *)&DAT_0013e250,(sigaction *)0x0);
            log2Console(5,"CrashReport-Native","unregistd unity signal!");
          }
        }
      }
    }
    iVar1 = gettimeofday((timeval *)(auStack_48 + 8),(__timezone_ptr_t)0x0);
    if (iVar1 < 0) {
      piVar7 = (int *)__errno();
      pcVar6 = strerror(*piVar7);
      log2Console(5,"CrashReport-Native","Failed to get time, error: %s",pcVar6);
    }
    else {
      snprintf(&sysLogPath,0x100,"%s/%s_%lu%03lu.txt",recordFileDir,"sys_log",auStack_48._8_8_,
               CONCAT44(uStack_34,local_38) / 1000);
      DAT_0013e00c = open(&sysLogPath,0x241,0x180);
      if (DAT_0013e00c < 0) {
        piVar7 = (int *)__errno();
        pcVar6 = strerror(*piVar7);
        log2Console(5,"CrashReport-Native","Failed to open system log file %s:, error: %s",
                    &sysLogPath,pcVar6);
      }
      else {
        log2Console(4,"CrashReport-Native","Opened system log record file: %s",&sysLogPath);
        snprintf(&jniLogPath,0x100,"%s/%s_%lu%03lu.txt",recordFileDir,"jni_log",auStack_48._8_8_,
                 CONCAT44(uStack_34,local_38) / 1000);
        DAT_0013e010 = open(&jniLogPath,0x241,0x180);
        if (DAT_0013e010 < 0) {
          piVar7 = (int *)__errno();
          pcVar6 = strerror(*piVar7);
          log2Console(5,"CrashReport-Native","Failed to open JNI log file %s:, error: %s",
                      &jniLogPath,pcVar6);
        }
        else {
          log2Console(4,"CrashReport-Native","Opened JNI log record file: %s",&jniLogPath);
        }
      }
    }
    printBuglySoArch(0xffffffff);
    log2Console(4,"CrashReport-Native","NativeBuglyVersion:%s","3.9.2");
    initStackBuffer(recordFileDir);
    eupInfo = calloc(1,0x4b0);
  }
  else {
    piVar7 = (int *)__errno();
    pcVar6 = strerror(*piVar7);
    log2Console(6,"CrashReport-Native","get jvm fail! %s",pcVar6);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

