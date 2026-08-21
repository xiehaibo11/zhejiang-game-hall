
char * getPendingExceptionStack(long *param_1,long param_2,int param_3)

{
  bool bVar1;
  undefined *__src;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *__s;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  
  if ((param_1 == (long *)0x0) || (param_3 < 1)) {
    log2Console(6,"CrashReport-Native","env == NULL || maxLen <= 0, return!");
    __s = (char *)0x0;
  }
  else if (param_2 == 0) {
    log2Console(3,"CrashReport-Native","Pending exception is NULL.");
    __s = (char *)0x0;
  }
  else {
    log2Console(3,"CrashReport-Native","Begin to get stack of pending exception.");
    lVar4 = (**(code **)(*param_1 + 0x110))(param_1,param_2,jm_throwable_getStackTrace);
    lVar5 = checkJavaException(param_1);
    if ((lVar5 != 0) || (lVar4 == 0)) {
      log2Console(6,"CrashReport-Native","Failed to get stacktrace of pending exception.");
      return (char *)0x0;
    }
    iVar11 = 0x13ff;
    log2Console(3,"CrashReport-Native","Successfully got stacktrace of pending exception.");
    if (param_3 < 0x1400) {
      iVar11 = param_3 + -1;
    }
    else {
      param_3 = 0x1400;
    }
    sVar6 = strlen(note);
    iVar2 = (**(code **)(*param_1 + 0x558))(param_1,lVar4);
    lVar5 = checkJavaException(param_1);
    if (lVar5 != 0) {
      log2Console(6,"CrashReport-Native","Failed to get array length.");
      return (char *)0x0;
    }
    log2Console(3,"CrashReport-Native","Stack line: %d",iVar2);
    uVar7 = (**(code **)(*param_1 + 0x110))(param_1,param_2,jm_throwable_toString);
    pcVar8 = (char *)(**(code **)(*param_1 + 0x548))(param_1,uVar7,0);
    lVar5 = checkJavaException(param_1);
    if ((lVar5 != 0) || (pcVar8 == (char *)0x0)) {
      log2Console(6,"CrashReport-Native","Failed to get error massage of pending exception.");
      return (char *)0x0;
    }
    iVar11 = iVar11 - (int)sVar6;
    __s = calloc(1,(long)param_3);
    sVar6 = strlen(__s);
    pcVar8 = stpcpy(__s + sVar6,pcVar8);
    pcVar8[0] = '\n';
    pcVar8[1] = '\0';
    if ((0 < iVar11) && (1 < iVar2)) {
      iVar12 = 1;
      bVar1 = false;
      do {
        lVar5 = (**(code **)(*param_1 + 0x568))(param_1,lVar4,iVar12);
        lVar9 = checkJavaException(param_1);
        if ((lVar9 != 0) || (lVar5 == 0)) {
          log2Console(6,"CrashReport-Native","call getarrayitem fail!");
LAB_0010ff08:
          free(__s);
          return (char *)0x0;
        }
        lVar9 = (**(code **)(*param_1 + 0x110))(param_1,lVar5,jm_toString);
        lVar10 = checkJavaException(param_1);
        if ((lVar10 != 0) || (lVar9 == 0)) {
          log2Console(6,"CrashReport-Native","call toString fail!");
          goto LAB_0010ff08;
        }
        pcVar8 = (char *)(**(code **)(*param_1 + 0x548))(param_1,lVar9,0);
        lVar10 = checkJavaException(param_1);
        if ((lVar10 != 0) || (pcVar8 == (char *)0x0)) {
          log2Console(6,"CrashReport-Native","call getStr fail!");
          goto LAB_0010ff08;
        }
        sVar6 = strlen(pcVar8);
        uVar3 = (uint)sVar6;
        if (iVar11 <= (int)uVar3) {
          uVar3 = iVar11 - 1;
          bVar1 = true;
        }
        if (0 < (int)uVar3) {
          strncat(__s,pcVar8,(long)(int)uVar3);
        }
        sVar6 = strlen(__s);
        lVar10 = *param_1;
        iVar11 = iVar11 + ~uVar3;
        (__s + sVar6)[0] = '\n';
        (__s + sVar6)[1] = '\0';
        (**(code **)(lVar10 + 0x550))(param_1,lVar9,pcVar8);
        lVar9 = checkJavaException(param_1);
        if (lVar9 != 0) {
          log2Console(6,"CrashReport-Native","release str fail!");
          goto LAB_0010ff08;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,lVar5);
        lVar5 = checkJavaException(param_1);
        if (lVar5 != 0) {
          log2Console(6,"CrashReport-Native","delete loc fail!");
          goto LAB_0010ff08;
        }
        iVar12 = iVar12 + 1;
      } while ((0 < iVar11) && (iVar12 < iVar2));
      if (bVar1) {
        log2Console(5,"CrashReport-Native",note);
        __src = note;
        sVar6 = strlen(note);
        strncat(__s,__src,sVar6);
      }
    }
  }
  return __s;
}

