
void FUN_001086ac(uint param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  code cVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  __pid_t __pid;
  char *pcVar7;
  ulong uVar8;
  __sighandler_t p_Var9;
  void *pvVar10;
  int *piVar11;
  undefined8 uVar12;
  size_t sVar13;
  long lVar14;
  size_t sVar15;
  char *pcVar16;
  __jmp_buf_tag *__env;
  _union_1457 _Var17;
  timeval local_b0;
  timeval local_a0;
  pthread_t pStack_90;
  long *local_88;
  _union_1457 local_80;
  code *pcStack_78;
  code *local_70;
  ulong local_68;
  ulong local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(ulong *)(lVar3 + 0x28);
  log2Console(4,"eup","receive signal signalNum:%d",param_1);
  pcVar7 = (char *)__emutls_get_address(__emutls_v_isDumpingTrace);
  if (*pcVar7 != '\0') {
    log2Console(5,"eup","something wrong when dumping anr trace");
    __env = (__jmp_buf_tag *)__emutls_get_address(__emutls_v_jmpBuf);
                    /* WARNING: Subroutine does not return */
    siglongjmp(__env,1);
  }
  if (param_1 == 3) {
    uVar8 = HandleAnr(1);
    goto LAB_0010954c;
  }
  if ((((param_1 == 4) && ((int *)0x10000 < *(int **)(param_2 + 0x10))) && (DAT_0013fdb1 == '\0'))
     && (DAT_0013fdb1 = '\x01', **(int **)(param_2 + 0x10) == -0x13aef0e2)) {
    sigaction(4,(sigaction *)&DAT_0013f258,(sigaction *)0x0);
    pthread_create((pthread_t *)&local_80,(pthread_attr_t *)0x0,delayRestoreSIGILLHandler,
                   (void *)0x0);
    uVar8 = log2Console(4,"eup","opensslHandled return");
    goto LAB_0010954c;
  }
  if (DAT_0013fdb2 == '\x01') {
    log2Console(4,"eup","buglyHasHandled exit 1");
                    /* WARNING: Subroutine does not return */
    _exit(1);
  }
  DAT_0013fdb2 = '\x01';
  log2Console(4,"eup","Register backup native handler");
  pcStack_78 = FUN_0010ac8c;
  sigemptyset((sigset_t *)&stack0xffffffffffffff90);
  local_80._0_4_ = 0x8000004;
  sigaction(4,(sigaction *)&local_80,(sigaction *)0x0);
  sigaction(0xb,(sigaction *)&local_80,(sigaction *)0x0);
  sigaction(6,(sigaction *)&local_80,(sigaction *)0x0);
  sigaction(8,(sigaction *)&local_80,(sigaction *)0x0);
  sigaction(7,(sigaction *)&local_80,(sigaction *)0x0);
  sigaction(5,(sigaction *)&local_80,(sigaction *)0x0);
  sigaction(0x10,(sigaction *)&local_80,(sigaction *)0x0);
  log2Console(4,"eup","Bugly NDK version:%s","4.1.9.2");
  log2Console(4,"eup","Old handler addresss %p",
              *(undefined8 *)(&DAT_0013f1e0 + (long)(int)param_1 * 0x20));
  log2Console(4,"eup","HandleSignal start %d",param_1);
  lockFile(lockFilePath,10);
  log2Console(3,"eup","Create a EupInfo object with size: %d ",0x4b0);
  p_Var9 = calloc(1,0x4b0);
  *(uint *)(p_Var9 + 0x20) = 0x2800;
  pvVar10 = calloc(1,0x2800);
  *(void **)(p_Var9 + 0x4a8) = pvVar10;
  if ((p_Var9 == (__sighandler_t)0x0) || (pvVar10 == (void *)0x0)) {
    piVar11 = (int *)__errno();
    pcVar7 = strerror(*piVar11);
    log2Console(6,"eup","Failed to create a EupInfo object: %s",pcVar7);
    p_Var9 = (__sighandler_t)0x0;
  }
  else {
    iVar4 = gettimeofday((timeval *)&local_80,(__timezone_ptr_t)0x0);
    if (iVar4 < 0) {
      piVar11 = (int *)__errno();
      pcVar7 = strerror(*piVar11);
      log2Console(5,"eup","Failed to get time: %s",pcVar7);
    }
    else {
      *(code **)(p_Var9 + 0x30) = pcStack_78;
      *(_union_1457 *)(p_Var9 + 0x28) = local_80;
    }
    log2Console(3,"eup","Directory for recording: %s",recordFileDir);
    iVar4 = snprintf((char *)(p_Var9 + 0x128),0x100,"%s/tomb_%lu%03lu.txt",recordFileDir,
                     *(undefined8 *)(p_Var9 + 0x28),*(ulong *)(p_Var9 + 0x30) / 1000);
    if (iVar4 < 0) {
      piVar11 = (int *)__errno();
      pcVar7 = strerror(*piVar11);
      log2Console(5,"eup","Failed to set tomb path: %s",pcVar7);
    }
    log2Console(3,"eup","Tomb path: %s",p_Var9 + 0x128);
    iVar4 = snprintf((char *)(p_Var9 + 0xe8),0x40,"%p",*(undefined8 *)(param_2 + 0x10));
    if (iVar4 < 0) {
      piVar11 = (int *)__errno();
      pcVar7 = strerror(*piVar11);
      log2Console(5,"eup","Failed to set error addr: %s",pcVar7);
    }
    *(uint *)(p_Var9 + 0xc) = param_1;
    log2Console(3,"eup","Signal number: %d",param_1);
    uVar12 = getSignalName(param_1);
    iVar4 = snprintf((char *)(p_Var9 + 0xd0),0x18,"%s",uVar12);
    if (iVar4 < 0) {
      piVar11 = (int *)__errno();
      pcVar7 = strerror(*piVar11);
      log2Console(5,"eup","Failed to set Signal name: %s",pcVar7);
    }
    log2Console(3,"eup","Signal name: %s",p_Var9 + 0xd0);
    *(uint *)(p_Var9 + 0x14) = *(uint *)(param_2 + 8);
    log2Console(3,"eup","Signal code: %d");
    uVar5 = *(uint *)(p_Var9 + 0x14);
    if ((int)uVar5 < 1) {
      uVar8 = *(ulong *)(param_2 + 0x10);
      *(ulong *)(p_Var9 + 0x18) = uVar8;
      log2Console(3,"eup","Sending PID of signal: %d",uVar8 & 0xffffffff);
      log2Console(3,"eup","Sending UID of signal: %d",*(uint *)(p_Var9 + 0x1c));
      uVar5 = *(uint *)(p_Var9 + 0x14);
    }
    uVar12 = getSigCode(param_1,uVar5);
    iVar4 = snprintf((char *)(p_Var9 + 0x38),0x18,"%s",uVar12);
    if (iVar4 < 0) {
      piVar11 = (int *)__errno();
      pcVar7 = strerror(*piVar11);
      log2Console(5,"eup","Failed to set message of signal code: %s",pcVar7);
    }
    log2Console(3,"eup","Message of signal code: %s",p_Var9 + 0x38);
    *(uint *)(p_Var9 + 0x10) = *(uint *)(param_2 + 4);
    log2Console(3,"eup","Error number of signal: %d");
    pcVar7 = strerror(*(uint *)(p_Var9 + 0x10));
    iVar4 = snprintf((char *)(p_Var9 + 0x50),0x7c,"%s",pcVar7);
    if (iVar4 < 0) {
      piVar11 = (int *)__errno();
      pcVar7 = strerror(*piVar11);
      log2Console(5,"eup","Failed to set message of error number: %s",pcVar7);
    }
    log2Console(3,"eup","Message of error number: %s",p_Var9 + 0x50);
    uVar5 = getpid();
    *(uint *)(p_Var9 + 4) = uVar5;
    log2Console(3,"eup","PID of this process: %d",uVar5);
    uVar5 = gettid();
    *(uint *)(p_Var9 + 8) = uVar5;
    log2Console(3,"eup","TID of this thread: %d",uVar5);
    pcVar1 = p_Var9 + 0x228;
    p_Var9[0x228] = (code)0x0;
    pvVar10 = (void *)getProcessName(*(uint *)(p_Var9 + 4));
    if (pvVar10 == (void *)0x0) {
      *(undefined8 *)pcVar1 = 0x6e776f6e6b6e75;
    }
    else {
      snprintf((char *)pcVar1,0x200,"%s",pvVar10);
      free(pvVar10);
    }
    log2Console(3,"eup","Name of this process: %s",pcVar1);
    pcVar1 = p_Var9 + 0x428;
    p_Var9[0x428] = (code)0x0;
    if (*(uint *)(p_Var9 + 8) == *(uint *)(p_Var9 + 4)) {
      p_Var9[0x42c] = (code)0x0;
      *(uint *)pcVar1 = 0x6e69616d;
    }
    else {
      pvVar10 = (void *)getThreadName();
      if (pvVar10 == (void *)0x0) {
        *(undefined8 *)pcVar1 = 0x6e776f6e6b6e75;
      }
      else {
        snprintf((char *)pcVar1,0x80,"%s",pvVar10);
        free(pvVar10);
      }
    }
    log2Console(3,"eup","Name of this thread: %s",pcVar1);
    uVar5 = getAndroidApiLevel();
    *(uint *)p_Var9 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    log2Console(3,"eup","API level: %d");
    *(undefined2 *)(p_Var9 + 0x24) = 0;
    log2Console(3,"eup","Successfully create a EupInfo object.");
  }
  eupInfo = p_Var9;
  resetError();
  initCrashRecordFile(recordFileDir);
  log2Console(4,"eup","Try to dump mini native stack.");
  backtraceStackMini(tombFd,eupInfo,param_2,param_3);
  saveEupInfo2File(eupInfo);
  log2Console(4,"eup","Create a pretty tomb stone for the damned native crash.");
  pcVar1 = eupInfo + 0x128;
  iVar4 = open((char *)pcVar1,0x241,0x180);
  if (iVar4 == -1) {
    uVar12 = getErrorMsg();
    log2Console(6,"eup","Failed to open file %s: %s",pcVar1,uVar12);
  }
  tombFd = iVar4;
  log2Console(4,"eup","Record header of tomb stone.");
  recordTombStoneFileHeader(tombFd,eupInfo);
  if (*(uint *)(eupInfo + 0xc) == 6) {
    log2Console(4,"eup","Record abort message");
    dumpAbortMessage(tombFd,eupInfo);
  }
  log2Console(4,"eup","Init all record files.");
  initRegisterRecordFile(recordFileDir,eupInfo + 0x128,tombFd);
  initMapRecordFile(recordFileDir,eupInfo + 0x128);
  log2Console(4,"eup","Record app infos.");
  sVar13 = strlen(&DAT_0013fa01);
  if (sVar13 != 0) {
    saveAppInfo2File("appVersion",&DAT_0013fa01);
  }
  sVar13 = strlen(&DAT_0013fa81);
  if (sVar13 != 0) {
    saveAppInfo2File("userId",&DAT_0013fa81);
  }
  sVar13 = strlen(&DAT_0013fb81);
  if (sVar13 != 0) {
    saveAppInfo2File("appChannel",&DAT_0013fb81);
  }
  sVar13 = strlen(&DAT_0013fc81);
  if (sVar13 != 0) {
    saveAppInfo2File("appPackage",&DAT_0013fc81);
  }
  sVar13 = strlen(&DAT_0013fd81);
  if (sVar13 != 0) {
    saveAppInfo2File("isAppForeground",&DAT_0013fd81);
  }
  sVar13 = strlen(&DAT_0013fd91);
  if (sVar13 != 0) {
    saveAppInfo2File("launchTime",&DAT_0013fd91);
  }
  sVar13 = strlen(sysLogPath);
  if (sVar13 != 0) {
    saveAppInfo2File("sysLogPath",sysLogPath);
  }
  sVar13 = strlen(jniLogPath);
  if (sVar13 != 0) {
    saveAppInfo2File("jniLogPath",jniLogPath);
  }
  log2Console(4,"eup","Record register info.");
  recordRegisterInfo(param_3);
  closeRegisterRecordFile();
  log2Console(4,"eup","Try to dump full native stack.");
  backtraceStack(tombFd,eupInfo,param_2,param_3);
  saveEupInfo2File(eupInfo);
  iVar4 = tombFd;
  if (tombFd != -1) {
    iVar4 = close(tombFd);
  }
  closeMapRecordFile(iVar4);
  closeElfInfoParser();
  saveKeyValue2File(eupInfo);
  saveNativeLog2File(eupInfo);
  closeCrashRecordFile();
  iVar4 = access(sysLogPath,0);
  if (iVar4 == 0) {
    recordSystemLogWithFd(DAT_0013f130,0);
  }
  else {
    log2Console(5,"eup","Log file does not exist: %s",sysLogPath);
  }
  iVar4 = access(jniLogPath,0);
  if (iVar4 == 0) {
    recordSystemLogWithFd(DAT_0013f134,1);
  }
  else {
    log2Console(5,"eup","Log file does not exist: %s",jniLogPath);
  }
  p_Var9 = eupInfo;
  _Var17.sa_handler = eupInfo;
  log2Console(4,"eup","Try to handle Native Exception in Java profile through JNI.");
  if (jvm == (long *)0x0) {
    log2Console(6,"eup","Jvm have not back up, should init jni regist first!");
  }
  else {
    local_88 = (long *)0x0;
    iVar4 = (**(code **)(*jvm + 0x30))(jvm,&local_88,0x10006);
    if ((iVar4 == 0) && (local_88 != (long *)0x0)) {
      log2Console(3,"eup","Successfully got JNIEnv. Checking pending exception.");
      lVar14 = checkJavaException(local_88);
      local_68 = 0;
      if (lVar14 != 0) {
        log2Console(3,"eup","A pending exception exists and will be handled.");
        local_68 = (**(code **)(*local_88 + 0xa8))(local_88,lVar14);
      }
    }
    else {
      log2Console(5,"eup","Failed to get JNIEnv.");
      local_68 = 0;
    }
    local_70 = p_Var9 + 0x428;
    pcStack_78 = (code *)CONCAT44(pcStack_78._4_4_,*(uint *)(p_Var9 + 8));
    local_80.sa_handler = _Var17.sa_handler;
    log2Console(3,"eup","Create a new thread for dump java stack and upload.");
    iVar4 = pthread_create(&pStack_90,(pthread_attr_t *)0x0,FUN_0010acf8,&local_80);
    if (iVar4 != 0) {
      pcVar7 = strerror(iVar4);
      log2Console(6,"eup","Can not create thread: %s\n",pcVar7);
    }
    iVar4 = gettimeofday(&local_a0,(__timezone_ptr_t)0x0);
    if (iVar4 < 0) {
      piVar11 = (int *)__errno();
      pcVar7 = strerror(*piVar11);
      log2Console(5,"eup","Failed to get time, error: %s",pcVar7);
    }
    sVar13 = strlen(*(char **)(p_Var9 + 0x4a8));
    log2Console(4,"eup","Wait for the new thread to handle this native crash in Java profile...");
    uVar5 = 0;
    do {
      usleep(10000);
      if (p_Var9[0x25] != (__sighandler_t)0x0) {
        log2Console(4,"eup","Successfully handled this native crash in Java profile.");
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 500);
    iVar6 = gettimeofday(&local_b0,(__timezone_ptr_t)0x0);
    if (iVar6 < 0) {
      piVar11 = (int *)__errno();
      pcVar7 = strerror(*piVar11);
      log2Console(5,"eup","Failed to get time, error: %s",pcVar7);
      if (iVar6 == 0 && iVar4 == 0) goto LAB_001093f8;
LAB_001093a4:
      log2Console(3,"eup","Finished waiting.");
      cVar2 = p_Var9[0x25];
    }
    else {
      if (iVar6 != 0 || iVar4 != 0) goto LAB_001093a4;
LAB_001093f8:
      log2Console(3,"eup","Finished waiting %d ms.",
                  (local_b0.tv_usec - local_a0.tv_usec) / 1000 +
                  (local_b0.tv_sec - local_a0.tv_sec) * 1000);
      cVar2 = p_Var9[0x25];
    }
    if (cVar2 == (code)0x0) {
      log2Console(4,"eup","Failed to handle this native crash in Java profile.");
      pcVar7 = *(char **)(p_Var9 + 0x4a8);
      sVar15 = strlen(pcVar7);
      if ((ulong)(long)(int)sVar13 < sVar15) {
        pcVar16 = strstr(pcVar7,"java:\n");
        pcVar7 = pcVar7 + (int)sVar13;
        if (pcVar16 != (char *)0x0) {
          pcVar7 = pcVar16 + 6;
        }
      }
      else {
        pcVar7 = "[Failed to get Java stack]";
      }
      saveJavaDump2File(p_Var9,pcVar7);
    }
  }
  closeNativeLog();
  freeNativeKeyValueList();
  p_Var9 = eupInfo;
  if (eupInfo != (__sighandler_t)0x0) {
    free(*(void **)(eupInfo + 0x4a8));
    free(p_Var9);
    log2Console(4,"eup","Clear eupInfo object.");
  }
  unlockFile(lockFilePath);
  log2Console(3,"eup","Restored signal handlers.");
  unregistSignalHanlder();
  pcVar1 = eupInfo + 0xd0;
  __pid = gettid();
  log2Console(3,"eup","Re-sending signal \'%s\' to thread: %d",pcVar1,__pid);
  uVar5 = kill(__pid,param_1);
  uVar8 = (ulong)uVar5;
LAB_0010954c:
  if (*(ulong *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

