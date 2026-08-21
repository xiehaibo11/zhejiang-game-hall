
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void jni_setNativeInfo(long *param_1,undefined8 param_2,int param_3,long param_4)

{
  int __errnum;
  long lVar1;
  undefined4 *__arg;
  char *pcVar2;
  pthread_t pStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (long *)0x0) || (param_4 == 0)) goto LAB_00107238;
  lVar1 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
  log2Console(4,"CrashReport-Native","jni_setNativeInfo: key is %d",param_3);
  if (lVar1 == 0) {
    log2Console(5,"CrashReport-Native","jni_setNativeInfo: value is null.");
    goto LAB_00107238;
  }
  if (param_3 == 0xf) {
    log2Console(4,"CrashReport-Native","Set native info: launchTime(%s)",lVar1);
    snprintf(&DAT_0013ed30,0x20,"%s",lVar1);
  }
  else if (param_3 < 0x10) {
    if (param_3 == 0xc) {
      log2Console(4,"CrashReport-Native","Set native info: app channel(%s)",lVar1);
      pcVar2 = &DAT_0013eb20;
LAB_001072a4:
      snprintf(pcVar2,0x100,"%s",lVar1);
    }
    else if (param_3 < 0xd) {
      if (param_3 == 10) {
        log2Console(4,"CrashReport-Native","Set native info: app version(%s)",lVar1);
        snprintf(&DAT_0013e9a0,0x80,"%s",lVar1);
      }
      else {
        if (param_3 == 0xb) {
          log2Console(4,"CrashReport-Native","Set native info: user ID(%s)",lVar1);
          pcVar2 = &DAT_0013ea20;
          goto LAB_001072a4;
        }
LAB_001071bc:
        log2Console(4,"CrashReport-Native","Key is invalid: %d",param_3);
      }
    }
    else {
      if (param_3 == 0xd) {
        log2Console(4,"CrashReport-Native","Set native info: app package(%s)",lVar1);
        pcVar2 = &DAT_0013ec20;
        goto LAB_001072a4;
      }
      if (param_3 != 0xe) goto LAB_001071bc;
      log2Console(4,"CrashReport-Native","Set native info: isAppForeground(%s)",lVar1);
      snprintf(&DAT_0013ed20,0x10,"%s",lVar1);
    }
  }
  else if (param_3 == 0x12) {
    log2Console(4,"CrashReport-Native","Set native info: testPendingException(%s)",lVar1);
    DAT_0013e991 = parseBoolString(lVar1);
  }
  else if (param_3 < 0x13) {
    if (param_3 == 0x10) {
      log2Console(4,"CrashReport-Native","Set native info: testSubThreadCrash(%s)",lVar1);
      DAT_0013ed50 = parseBoolString(lVar1);
    }
    else {
      if (param_3 != 0x11) goto LAB_001071bc;
      log2Console(4,"CrashReport-Native","Set native info: testSigabrtCrash(%s)",lVar1);
      DAT_0013ed51 = parseBoolString(lVar1);
    }
  }
  else if (param_3 == 0x3e6) {
    log2Console(4,"CrashReport-Native","Should filter system log for SIGABRT signal: %s",lVar1);
    DAT_0013e992 = parseBoolString(lVar1);
  }
  else if (param_3 == 999) {
    log2Console(4,"CrashReport-Native","Should handle in Java: %s",lVar1);
    DAT_0013e008 = parseBoolString(lVar1);
  }
  else {
    if (param_3 != 0x13) goto LAB_001071bc;
    __arg = malloc(4);
    *__arg = 2;
    __errnum = pthread_create(&pStack_10,(pthread_attr_t *)0x0,anr_dump_trace,__arg);
    if (__errnum != 0) {
      pcVar2 = strerror(__errnum);
      log2Console(6,"CrashReport-Native","Can not create ManuualDumpTraceThread: %s\n",pcVar2);
    }
  }
  (**(code **)(*param_1 + 0x550))(param_1,param_4,lVar1);
LAB_00107238:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

