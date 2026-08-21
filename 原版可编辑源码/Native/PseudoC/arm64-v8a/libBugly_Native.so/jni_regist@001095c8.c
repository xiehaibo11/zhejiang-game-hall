
undefined8
jni_regist(long *param_1,undefined8 param_2,undefined8 param_3,char param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  _union_1457 _Var3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  _union_1457 local_68;
  undefined8 local_60;
  ulong local_58;
  ulong local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(ulong *)(lVar1 + 0x28);
  if (param_4 == '\0') {
    uVar5 = 6;
  }
  else {
    uVar5 = 3;
  }
  setLogMode(uVar5);
  log2Console(4,"eup","regist start");
  uVar5 = toJavaString(param_1,"4.1.9.2",7);
  iVar4 = (**(code **)(*param_1 + 0x6d8))(param_1,&jvm);
  if (iVar4 != 0) {
    piVar6 = (int *)__errno();
    pcVar7 = strerror(*piVar6);
    log2Console(6,"eup","get jvm fail! %s",pcVar7);
    goto LAB_00109aa4;
  }
  JAR_JNI_VERSION = param_5;
  log2Console(4,"eup","JARJNIVERSION:%d",param_5);
  uVar8 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
  snprintf(recordFileDir,0x100,"%s",uVar8);
  snprintf(lockFilePath,0x100,"%s/../files/%s",recordFileDir,"native_record_lock");
  log2Console(4,"eup","set signal stack");
  local_68.sa_handler = calloc(1,0x4000);
  local_58 = 0x4000;
  local_60 = (code *)((ulong)local_60._4_4_ << 0x20);
  if (local_68.sa_handler == (__sighandler_t)0x0) {
    piVar6 = (int *)__errno();
    pcVar9 = strerror(*piVar6);
    pcVar7 = "malloc stack size fail! %s";
LAB_001097a4:
    log2Console(6,"eup",pcVar7,pcVar9);
  }
  else {
    local_58 = 0x4000;
    iVar4 = sigaltstack((sigaltstack *)&local_68,(sigaltstack *)0x0);
    if (iVar4 == -1) {
      piVar6 = (int *)__errno();
      pcVar9 = strerror(*piVar6);
      pcVar7 = "sigaltstack fail! %s";
      goto LAB_001097a4;
    }
  }
  if (DAT_0013f1d0 == '\x01') {
    pcVar7 = "already regist, just return";
  }
  else {
    DAT_0013f1d0 = '\x01';
    local_60 = FUN_001086ac;
    sigemptyset((sigset_t *)&stack0xffffffffffffffa8);
    local_68._0_4_ = 0x18000004;
    sigaction(4,(sigaction *)&local_68,(sigaction *)&DAT_0013f258);
    sigaction(5,(sigaction *)&local_68,(sigaction *)&DAT_0013f278);
    sigaction(0x10,(sigaction *)&local_68,(sigaction *)&DAT_0013f3d8);
    sigaction(0xb,(sigaction *)&local_68,(sigaction *)&DAT_0013f338);
    sigaction(6,(sigaction *)&local_68,(sigaction *)&DAT_0013f298);
    sigaction(8,(sigaction *)&local_68,(sigaction *)&DAT_0013f2d8);
    sigaction(7,(sigaction *)&local_68,(sigaction *)&DAT_0013f2b8);
    log2Console(4,"eup","regist anr sigquit handler");
    sigaction(3,(sigaction *)&local_68,(sigaction *)&DAT_0013f238);
    UnblockSigquit(1);
    pcVar7 = "regist native handler";
  }
  log2Console(4,"eup",pcVar7);
  iVar4 = gettimeofday((timeval *)&local_68,(__timezone_ptr_t)0x0);
  _Var3 = local_68;
  if (iVar4 < 0) {
    piVar6 = (int *)__errno();
    puVar10 = strerror(*piVar6);
    pcVar7 = "Failed to get time, error: %s";
    uVar8 = 5;
LAB_001099f4:
    log2Console(uVar8,"eup",pcVar7,puVar10);
  }
  else {
    lVar2 = (long)local_60 / 1000;
    snprintf(sysLogPath,0x100,"%s/%s_%lu%03lu.txt",recordFileDir,"sys_log",local_68.sa_handler,lVar2
            );
    DAT_0013f130 = open(sysLogPath,0x241,0x180);
    if (DAT_0013f130 < 0) {
      piVar6 = (int *)__errno();
      pcVar9 = strerror(*piVar6);
      puVar10 = sysLogPath;
      pcVar7 = "Failed to open system log file %s:, error: %s";
    }
    else {
      log2Console(4,"eup","Opened system log record file: %s",sysLogPath);
      snprintf(jniLogPath,0x100,"%s/%s_%lu%03lu.txt",recordFileDir,"jni_log",_Var3.sa_handler,lVar2)
      ;
      DAT_0013f134 = open(jniLogPath,0x241,0x180);
      if (-1 < DAT_0013f134) {
        puVar10 = jniLogPath;
        pcVar7 = "Opened JNI log record file: %s";
        uVar8 = 4;
        goto LAB_001099f4;
      }
      piVar6 = (int *)__errno();
      pcVar9 = strerror(*piVar6);
      puVar10 = jniLogPath;
      pcVar7 = "Failed to open JNI log file %s:, error: %s";
    }
    log2Console(5,"eup",pcVar7,puVar10,pcVar9);
  }
  printBuglySoArch(0xffffffff);
  log2Console(4,"eup","NativeBuglyVersion:%s","4.1.9.2");
  initStackBuffer(recordFileDir);
  eupInfo = calloc(1,0x4b0);
LAB_00109aa4:
  if (*(ulong *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

