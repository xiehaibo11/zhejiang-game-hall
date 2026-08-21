
void jni_setNativeInfo(long *param_1,undefined8 param_2,int param_3,long param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  char *__s;
  size_t __maxlen;
  
  if ((param_1 == (long *)0x0) || (param_4 == 0)) {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
  log2Console(4,"eup","jni_setNativeInfo: key is %d",param_3);
  if (lVar3 == 0) {
    log2Console(5,"eup","jni_setNativeInfo: value is null.");
    return;
  }
  switch(param_3) {
  case 10:
    log2Console(4,"eup","Set native info: app version(%s)",lVar3);
    __s = &DAT_0013fa01;
    __maxlen = 0x80;
    goto LAB_0010a2d4;
  case 0xb:
    log2Console(4,"eup","Set native info: user ID(%s)",lVar3);
    __s = &DAT_0013fa81;
    goto LAB_0010a260;
  case 0xc:
    log2Console(4,"eup","Set native info: app channel(%s)",lVar3);
    __s = &DAT_0013fb81;
    goto LAB_0010a260;
  case 0xd:
    log2Console(4,"eup","Set native info: app package(%s)",lVar3);
    __s = &DAT_0013fc81;
LAB_0010a260:
    __maxlen = 0x100;
    goto LAB_0010a2d4;
  case 0xe:
    log2Console(4,"eup","Set native info: isAppForeground(%s)",lVar3);
    __s = &DAT_0013fd81;
    __maxlen = 0x10;
    goto LAB_0010a2d4;
  case 0xf:
    log2Console(4,"eup","Set native info: launchTime(%s)",lVar3);
    __s = &DAT_0013fd91;
    __maxlen = 0x20;
LAB_0010a2d4:
    snprintf(__s,__maxlen,"%s",lVar3);
    break;
  case 0x10:
    log2Console(4,"eup","Set native info: testSubThreadCrash(%s)",lVar3);
    bVar1 = parseBoolString(lVar3);
    DAT_0013f9fc = bVar1 & 1;
    break;
  case 0x11:
    log2Console(4,"eup","Set native info: testSigabrtCrash(%s)",lVar3);
    bVar1 = parseBoolString(lVar3);
    DAT_0013fa00 = bVar1 & 1;
    break;
  case 0x12:
    log2Console(4,"eup","Set native info: testPendingException(%s)",lVar3);
    bVar1 = parseBoolString(lVar3);
    DAT_0013f9f8 = bVar1 & 1;
    break;
  case 0x13:
    HandleAnr(2);
    break;
  case 0x14:
    SendSigquitToSignalCatcher();
    break;
  case 0x15:
    uVar2 = parseBoolString(lVar3);
    UnblockSigquit(uVar2 & 1);
    break;
  default:
    if (param_3 == 0x3e6) {
      log2Console(4,"eup","Should filter system log for SIGABRT signal: %s",lVar3);
      parseBoolString(lVar3);
    }
    else if (param_3 == 999) {
      log2Console(4,"eup","Should handle in Java: %s",lVar3);
      bVar1 = parseBoolString(lVar3);
      DAT_0013f008 = bVar1 & 1;
    }
    else {
      log2Console(4,"eup","Key is invalid: %d",param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0010a2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x550))(param_1,param_4,lVar3);
  return;
}

