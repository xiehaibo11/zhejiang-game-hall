
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001075a8(uint param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  __pid_t _Var4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  size_t sVar11;
  size_t sVar12;
  char *pcVar13;
  int *piVar14;
  undefined4 *__arg;
  ulong uVar15;
  long *local_78;
  pthread_t pStack_70;
  timeval local_68;
  timeval local_58;
  _union_1457 local_48;
  code *local_40;
  undefined1 auStack_38 [24];
  int local_20;
  undefined4 uStack_1c;
  int *local_18;
  ulong local_10;
  ulong local_8;
  
  uVar15 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  if (param_1 == 4) {
    if ((DAT_0013ed52 < ((int *)0x10000 < *(int **)(param_2 + 0x10))) &&
       (DAT_0013ed52 = 1, **(int **)(param_2 + 0x10) == -0x13aef0e2)) {
      sigaction(4,(sigaction *)&DAT_0013e1f0,(sigaction *)0x0);
      pthread_create((pthread_t *)(auStack_38 + 0x10),(pthread_attr_t *)0x0,
                     delayRestoreSIGILLHandler,(void *)0x0);
      goto LAB_00107f90;
    }
  }
  else if (param_1 == 3) {
    log2Console(4,"CrashReport-Native","handleSignalAnr Bugly NDK version:%s","3.9.2");
    log2Console(4,"CrashReport-Native","HandleSignal start %d",3);
    __arg = malloc(4);
    *__arg = 1;
    log2Console(3,"CrashReport-Native","Create a new thread for dump anr stack.");
    iVar3 = pthread_create((pthread_t *)(auStack_38 + 0x10),(pthread_attr_t *)0x0,anr_dump_trace,
                           __arg);
    if (iVar3 != 0) {
      pcVar9 = strerror(iVar3);
      log2Console(6,"CrashReport-Native","Can not create dumpTraceThread: %s\n",pcVar9);
    }
    goto LAB_00107f90;
  }
  if (DAT_0013ed53 != '\0') {
                    /* WARNING: Subroutine does not return */
    _exit(1);
  }
  DAT_0013ed53 = '\x01';
  log2Console(4,"CrashReport-Native","Register backup native handler");
  local_40 = FUN_001084c0;
  sigemptyset((sigset_t *)auStack_38);
  local_48._0_4_ = 0x8000004;
  sigaction(4,(sigaction *)&local_48,(sigaction *)0x0);
  sigaction(0xb,(sigaction *)&local_48,(sigaction *)0x0);
  sigaction(6,(sigaction *)&local_48,(sigaction *)0x0);
  sigaction(8,(sigaction *)&local_48,(sigaction *)0x0);
  sigaction(7,(sigaction *)&local_48,(sigaction *)0x0);
  sigaction(5,(sigaction *)&local_48,(sigaction *)0x0);
  sigaction(0x10,(sigaction *)&local_48,(sigaction *)0x0);
  log2Console(4,"CrashReport-Native","Bugly NDK version:%s","3.9.2");
  log2Console(4,"CrashReport-Native","Old handler addresss %p",
              *(undefined8 *)
               (&DAT_0013e178 + (-(ulong)(param_1 >> 0x1f) & 0xffffffe000000000 | uVar15 << 5)));
  log2Console(4,"CrashReport-Native","HandleSignal start %d",uVar15);
  lockFile(lockFilePath,10);
  log2Console(3,"CrashReport-Native","Create a EupInfo object with size: %d ",0x4b0);
  piVar6 = calloc(1,0x4b0);
  piVar6[8] = 0x2800;
  pvVar7 = calloc(1,0x2800);
  *(void **)(piVar6 + 0x12a) = pvVar7;
  if (pvVar7 == (void *)0x0) {
    piVar6 = (int *)__errno();
    pcVar9 = strerror(*piVar6);
    log2Console(6,"CrashReport-Native","Failed to create a EupInfo object: %s",pcVar9);
    _Var4 = gettid();
    piVar6 = (int *)0x0;
  }
  else {
    iVar3 = gettimeofday((timeval *)(auStack_38 + 0x10),(__timezone_ptr_t)0x0);
    if (iVar3 < 0) {
      piVar14 = (int *)__errno();
      pcVar9 = strerror(*piVar14);
      log2Console(5,"CrashReport-Native","Failed to get time: %s",pcVar9);
    }
    else {
      *(undefined8 *)(piVar6 + 10) = auStack_38._16_8_;
      *(ulong *)(piVar6 + 0xc) = CONCAT44(uStack_1c,local_20);
    }
    log2Console(3,"CrashReport-Native","Directory for recording: %s",recordFileDir);
    iVar3 = snprintf((char *)(piVar6 + 0x4a),0x100,"%s/tomb_%lu%03lu.txt",recordFileDir,
                     *(undefined8 *)(piVar6 + 10),*(ulong *)(piVar6 + 0xc) / 1000);
    if (iVar3 < 0) {
      piVar14 = (int *)__errno();
      pcVar9 = strerror(*piVar14);
      log2Console(5,"CrashReport-Native","Failed to set tomb path: %s",pcVar9);
    }
    log2Console(3,"CrashReport-Native","Tomb path: %s",piVar6 + 0x4a);
    iVar3 = snprintf((char *)(piVar6 + 0x3a),0x40,"%p",*(undefined8 *)(param_2 + 0x10));
    if (iVar3 < 0) {
      piVar14 = (int *)__errno();
      pcVar9 = strerror(*piVar14);
      log2Console(5,"CrashReport-Native","Failed to set error addr: %s",pcVar9);
    }
    piVar6[3] = param_1;
    log2Console(3,"CrashReport-Native","Signal number: %d",uVar15);
    uVar8 = getSignalName(param_1);
    iVar3 = snprintf((char *)(piVar6 + 0x34),0x18,"%s",uVar8);
    if (iVar3 < 0) {
      piVar14 = (int *)__errno();
      pcVar9 = strerror(*piVar14);
      log2Console(5,"CrashReport-Native","Failed to set Signal name: %s",pcVar9);
    }
    log2Console(3,"CrashReport-Native","Signal name: %s",piVar6 + 0x34);
    iVar3 = *(int *)(param_2 + 8);
    piVar6[5] = iVar3;
    log2Console(3,"CrashReport-Native","Signal code: %d",iVar3);
    iVar3 = piVar6[5];
    if (iVar3 < 1) {
      iVar3 = *(int *)(param_2 + 0x10);
      iVar5 = *(int *)(param_2 + 0x14);
      piVar6[6] = iVar3;
      piVar6[7] = iVar5;
      log2Console(3,"CrashReport-Native","Sending PID of signal: %d",iVar3);
      log2Console(3,"CrashReport-Native","Sending UID of signal: %d",piVar6[7]);
      iVar3 = piVar6[5];
    }
    uVar8 = getSigCode(uVar15,iVar3);
    iVar3 = snprintf((char *)(piVar6 + 0xe),0x18,"%s",uVar8);
    if (iVar3 < 0) {
      piVar14 = (int *)__errno();
      pcVar9 = strerror(*piVar14);
      log2Console(5,"CrashReport-Native","Failed to set message of signal code: %s",pcVar9);
    }
    log2Console(3,"CrashReport-Native","Message of signal code: %s",piVar6 + 0xe);
    iVar3 = *(int *)(param_2 + 4);
    piVar6[4] = iVar3;
    log2Console(3,"CrashReport-Native","Error number of signal: %d",iVar3);
    pcVar9 = strerror(piVar6[4]);
    iVar3 = snprintf((char *)(piVar6 + 0x14),0x7c,"%s",pcVar9);
    if (iVar3 < 0) {
      piVar14 = (int *)__errno();
      pcVar9 = strerror(*piVar14);
      log2Console(5,"CrashReport-Native","Failed to set message of error number: %s",pcVar9);
    }
    log2Console(3,"CrashReport-Native","Message of error number: %s",piVar6 + 0x14);
    _Var4 = getpid();
    piVar6[1] = _Var4;
    log2Console(3,"CrashReport-Native","PID of this process: %d",_Var4);
    _Var4 = gettid();
    piVar6[2] = _Var4;
    log2Console(3,"CrashReport-Native","TID of this thread: %d",_Var4);
    *(undefined1 *)(piVar6 + 0x8a) = 0;
    pvVar7 = (void *)getProcessName(piVar6[1]);
    if (pvVar7 == (void *)0x0) {
      *(char (*) [8])(piVar6 + 0x8a) = (char  [8])0x6e776f6e6b6e75;
    }
    else {
      snprintf((char *)(piVar6 + 0x8a),0x200,"%s",pvVar7);
      free(pvVar7);
    }
    log2Console(3,"CrashReport-Native","Name of this process: %s",piVar6 + 0x8a);
    *(undefined1 *)(piVar6 + 0x10a) = 0;
    if (piVar6[2] == piVar6[1]) {
      piVar6[0x10a] = 0x6e69616d;
      *(undefined1 *)(piVar6 + 0x10b) = 0;
    }
    else {
      pvVar7 = (void *)getThreadName();
      if (pvVar7 == (void *)0x0) {
        *(char (*) [8])(piVar6 + 0x10a) = (char  [8])0x6e776f6e6b6e75;
      }
      else {
        snprintf((char *)(piVar6 + 0x10a),0x80,"%s",pvVar7);
        free(pvVar7);
      }
    }
    log2Console(3,"CrashReport-Native","Name of this thread: %s",piVar6 + 0x10a);
    iVar3 = getAndroidApiLevel();
    if (iVar3 < 1) {
      *piVar6 = 0;
      iVar3 = 0;
    }
    else {
      *piVar6 = iVar3;
    }
    log2Console(3,"CrashReport-Native","API level: %d",iVar3);
    *(undefined1 *)(piVar6 + 9) = 0;
    *(undefined1 *)((long)piVar6 + 0x25) = 0;
    log2Console(3,"CrashReport-Native","Successfully create a EupInfo object.");
  }
  eupInfo = piVar6;
  resetError();
  initCrashRecordFile(recordFileDir);
  log2Console(4,"CrashReport-Native","Try to dump mini native stack.");
  backtraceStackMini(tombFd,eupInfo,param_2,param_3);
  saveEupInfo2File(eupInfo);
  log2Console(4,"CrashReport-Native","Create a pretty tomb stone for the damned native crash.");
  piVar6 = eupInfo + 0x4a;
  iVar3 = open((char *)piVar6,0x241,0x180);
  if (iVar3 == -1) {
    uVar8 = getErrorMsg();
    log2Console(6,"CrashReport-Native","Failed to open file %s: %s",piVar6,uVar8);
  }
  tombFd = iVar3;
  log2Console(4,"CrashReport-Native","Record header of tomb stone.");
  recordTombStoneFileHeader(tombFd,eupInfo);
  log2Console(4,"CrashReport-Native","Init all record files.");
  initRegisterRecordFile(recordFileDir,eupInfo + 0x4a,tombFd);
  initMapRecordFile(recordFileDir,eupInfo + 0x4a);
  log2Console(4,"CrashReport-Native","Record app infos.");
  if (DAT_0013e9a0 != '\0') {
    saveAppInfo2File("appVersion",&DAT_0013e9a0);
  }
  if (DAT_0013ea20 != '\0') {
    saveAppInfo2File("userId",&DAT_0013ea20);
  }
  if (DAT_0013eb20 != '\0') {
    saveAppInfo2File("appChannel",&DAT_0013eb20);
  }
  if (DAT_0013ec20 != '\0') {
    saveAppInfo2File("appPackage",&DAT_0013ec20);
  }
  if (DAT_0013ed20 != '\0') {
    saveAppInfo2File("isAppForeground",&DAT_0013ed20);
  }
  if (DAT_0013ed30 != '\0') {
    saveAppInfo2File("launchTime",&DAT_0013ed30);
  }
  if (sysLogPath != '\0') {
    saveAppInfo2File("sysLogPath");
  }
  if (jniLogPath != '\0') {
    saveAppInfo2File("jniLogPath");
  }
  log2Console(4,"CrashReport-Native","Record register info.");
  recordRegisterInfo(param_3);
  closeRegisterRecordFile();
  log2Console(4,"CrashReport-Native","Try to dump full native stack.");
  backtraceStack(tombFd,eupInfo,param_2,param_3);
  saveEupInfo2File(eupInfo);
  iVar3 = tombFd;
  if (tombFd != -1) {
    iVar3 = close(tombFd);
  }
  closeMapRecordFile(iVar3);
  closeElfInfoParser();
  saveKeyValue2File(eupInfo);
  saveNativeLog2File(eupInfo);
  closeCrashRecordFile();
  iVar3 = access(&sysLogPath,0);
  if (iVar3 == 0) {
    recordSystemLogWithFd(DAT_0013e00c,0);
    iVar3 = access(&jniLogPath,0);
    if (iVar3 == 0) goto LAB_00107d10;
LAB_00107fe8:
    log2Console(5,"CrashReport-Native","Log file does not exist: %s",&jniLogPath);
  }
  else {
    log2Console(5,"CrashReport-Native","Log file does not exist: %s",&sysLogPath);
    iVar3 = access(&jniLogPath,0);
    if (iVar3 != 0) goto LAB_00107fe8;
LAB_00107d10:
    recordSystemLogWithFd(DAT_0013e010,1);
  }
  piVar6 = eupInfo;
  log2Console(4,"CrashReport-Native","Try to handle Native Exception in Java profile through JNI.");
  if (jvm == (long *)0x0) {
    log2Console(6,"CrashReport-Native","Jvm have not back up, should init jni regist first!");
  }
  else {
    local_78 = (long *)0x0;
    iVar3 = (**(code **)(*jvm + 0x30))(jvm,&local_78,0x10006);
    if ((iVar3 == 0) && (local_78 != (long *)0x0)) {
      log2Console(3,"CrashReport-Native","Successfully got JNIEnv. Checking pending exception.");
      lVar10 = checkJavaException(local_78);
      if (lVar10 == 0) {
        local_10 = 0;
      }
      else {
        log2Console(3,"CrashReport-Native","A pending exception exists and will be handled.");
        local_10 = (**(code **)(*local_78 + 0xa8))(local_78,lVar10);
      }
    }
    else {
      log2Console(5,"CrashReport-Native","Failed to get JNIEnv.");
      local_10 = 0;
    }
    local_20 = piVar6[2];
    local_18 = piVar6 + 0x10a;
    auStack_38._16_8_ = piVar6;
    log2Console(3,"CrashReport-Native","Create a new thread for dump java stack and upload.");
    iVar3 = pthread_create(&pStack_70,(pthread_attr_t *)0x0,FUN_001061b4,auStack_38 + 0x10);
    if (iVar3 == 0) {
      iVar3 = gettimeofday(&local_68,(__timezone_ptr_t)0x0);
    }
    else {
      pcVar9 = strerror(iVar3);
      log2Console(6,"CrashReport-Native","Can not create thread: %s\n",pcVar9);
      iVar3 = gettimeofday(&local_68,(__timezone_ptr_t)0x0);
    }
    if (iVar3 < 0) {
      piVar14 = (int *)__errno();
      pcVar9 = strerror(*piVar14);
      log2Console(5,"CrashReport-Native","Failed to get time, error: %s",pcVar9);
    }
    iVar5 = 100;
    sVar11 = strlen(*(char **)(piVar6 + 0x12a));
    log2Console(4,"CrashReport-Native",
                "Wait for the new thread to handle this native crash in Java profile...");
    do {
      usleep(10000);
      if (*(char *)((long)piVar6 + 0x25) != '\0') {
        log2Console(4,"CrashReport-Native","Successfully handled this native crash in Java profile."
                   );
        break;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = gettimeofday(&local_58,(__timezone_ptr_t)0x0);
    if (iVar5 < 0) {
      piVar14 = (int *)__errno();
      pcVar9 = strerror(*piVar14);
      log2Console(5,"CrashReport-Native","Failed to get time, error: %s",pcVar9);
    }
    if (iVar5 == 0 && iVar3 == 0) {
      log2Console(3,"CrashReport-Native","Finished waiting %d ms.",
                  (local_58.tv_usec - local_68.tv_usec) / 1000 +
                  (local_58.tv_sec - local_68.tv_sec) * 1000);
      cVar2 = *(char *)((long)piVar6 + 0x25);
    }
    else {
      log2Console(3,"CrashReport-Native","Finished waiting.");
      cVar2 = *(char *)((long)piVar6 + 0x25);
    }
    if (cVar2 == '\0') {
      log2Console(4,"CrashReport-Native","Failed to handle this native crash in Java profile.");
      pcVar9 = *(char **)(piVar6 + 0x12a);
      sVar12 = strlen(pcVar9);
      if ((ulong)(long)(int)sVar11 < sVar12) {
        pcVar13 = strstr(pcVar9,"java:\n");
        pcVar1 = pcVar13 + 6;
        if (pcVar13 == (char *)0x0) {
          pcVar1 = pcVar9 + (int)sVar11;
        }
        saveJavaDump2File(piVar6,pcVar1);
      }
      else {
        saveJavaDump2File(piVar6,"[Failed to get Java stack]");
      }
    }
  }
  closeNativeLog();
  freeNativeKeyValueList();
  piVar6 = eupInfo;
  if (eupInfo != (int *)0x0) {
    free(*(void **)(eupInfo + 0x12a));
    free(piVar6);
    log2Console(4,"CrashReport-Native","Clear eupInfo object.");
  }
  unlockFile(lockFilePath);
  log2Console(3,"CrashReport-Native","Restored signal handlers.");
  unregistSignalHanlder();
  log2Console(3,"CrashReport-Native","Re-sending signal \'%s\' to thread: %d",eupInfo + 0x34,_Var4);
  kill(_Var4,param_1);
LAB_00107f90:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

