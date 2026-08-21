
char * getJavaThreadStackByThreadObject(long *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  undefined *__src;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  char *__dest;
  long lVar8;
  long lVar9;
  char *__s;
  int iVar10;
  int iVar11;
  
  if ((param_1 == (long *)0x0) || (param_3 < 1)) {
    log2Console(6,"CrashReport-Native","env == NULL || maxLen <= 0, return!");
    return (char *)0x0;
  }
  uVar4 = getJavaThreadName();
  log2Console(3,"CrashReport-Native","Begin to get stack of java thread: %s",uVar4);
  lVar5 = javaObjectCall_Thread_GetStackTrace(param_1,param_2);
  if (lVar5 == 0) {
    log2Console(6,"CrashReport-Native","Failed to get stacktrace of java thread.");
    __dest = (char *)0x0;
  }
  else {
    iVar10 = 0x13ff;
    log2Console(3,"CrashReport-Native","Successfully got stacktrace of java thread.");
    if (param_3 < 0x1400) {
      iVar10 = param_3 + -1;
    }
    else {
      param_3 = 0x1400;
    }
    sVar6 = strlen(note);
    iVar2 = (**(code **)(*param_1 + 0x558))(param_1,lVar5);
    lVar7 = checkJavaException(param_1);
    if (lVar7 != 0) {
      log2Console(6,"CrashReport-Native","Failed to get array length.");
      return (char *)0x0;
    }
    iVar10 = iVar10 - (int)sVar6;
    log2Console(3,"CrashReport-Native","Stack line: %d",iVar2);
    __dest = calloc(1,(long)param_3);
    if ((0 < iVar10) && (1 < iVar2)) {
      iVar11 = 1;
      bVar1 = false;
      do {
        lVar7 = (**(code **)(*param_1 + 0x568))(param_1,lVar5,iVar11);
        lVar8 = checkJavaException(param_1);
        if ((lVar8 != 0) || (lVar7 == 0)) {
          log2Console(6,"CrashReport-Native","call getarrayitem fail!");
LAB_0010eeb0:
          free(__dest);
          return (char *)0x0;
        }
        lVar8 = (**(code **)(*param_1 + 0x110))(param_1,lVar7,jm_toString);
        lVar9 = checkJavaException(param_1);
        if ((lVar9 != 0) || (lVar8 == 0)) {
          log2Console(6,"CrashReport-Native","call toString fail!");
          goto LAB_0010eeb0;
        }
        __s = (char *)(**(code **)(*param_1 + 0x548))(param_1,lVar8,0);
        lVar9 = checkJavaException(param_1);
        if ((lVar9 != 0) || (__s == (char *)0x0)) {
          log2Console(6,"CrashReport-Native","call getStr fail!");
          goto LAB_0010eeb0;
        }
        sVar6 = strlen(__s);
        uVar3 = (uint)sVar6;
        if (iVar10 <= (int)uVar3) {
          uVar3 = iVar10 - 1;
          bVar1 = true;
        }
        if (0 < (int)uVar3) {
          strncat(__dest,__s,(long)(int)uVar3);
        }
        sVar6 = strlen(__dest);
        lVar9 = *param_1;
        iVar10 = iVar10 + ~uVar3;
        (__dest + sVar6)[0] = '\n';
        (__dest + sVar6)[1] = '\0';
        (**(code **)(lVar9 + 0x550))(param_1,lVar8,__s);
        lVar8 = checkJavaException(param_1);
        if (lVar8 != 0) {
          log2Console(6,"CrashReport-Native","release str fail!");
          goto LAB_0010eeb0;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,lVar7);
        lVar7 = checkJavaException(param_1);
        if (lVar7 != 0) {
          log2Console(6,"CrashReport-Native","delete loc fail!");
          goto LAB_0010eeb0;
        }
        iVar11 = iVar11 + 1;
      } while ((0 < iVar10) && (iVar11 < iVar2));
      if (bVar1) {
        log2Console(5,"CrashReport-Native",note);
        __src = note;
        sVar6 = strlen(note);
        strncat(__dest,__src,sVar6);
        return __dest;
      }
    }
  }
  return __dest;
}

