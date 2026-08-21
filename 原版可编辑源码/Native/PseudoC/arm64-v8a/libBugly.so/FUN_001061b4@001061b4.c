
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001061b4(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *__s;
  long local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = gettid();
  log2Console(4,"CrashReport-Native","New thread ID: %d",uVar2);
  lVar6 = *param_1;
  if (jvm == (long *)0x0) {
    log2Console(6,"CrashReport-Native","JVM have not been backed up, should init JNI regist first!")
    ;
  }
  else {
    local_10 = 0;
    log2Console(3,"CrashReport-Native","Attach thread to JVM.");
    iVar3 = (**(code **)(*jvm + 0x20))(jvm,&local_10,0);
    lVar1 = local_10;
    if ((iVar3 == 0) && (local_10 != 0)) {
      lVar7 = param_1[2];
      lVar8 = param_1[3];
      if (lVar6 == 0) {
        log2Console(6,"CrashReport-Native","eupInfo is null.");
      }
      else {
        log2Console(4,"CrashReport-Native","Try to dump Java stack with thread name: %s",lVar7);
        if (lVar8 != 0) {
          *(undefined1 *)(lVar6 + 0x24) = 1;
          pcVar4 = (char *)getPendingExceptionStack(lVar1,lVar8,0x139f);
          if (pcVar4 != (char *)0x0) {
            __s = *(char **)(lVar6 + 0x4a8);
            sVar5 = strlen(__s);
            memcpy(__s + sVar5,
                   "java pending exception:\n[Native crash above happened with a Java pending exception as following]\n"
                   ,0x62);
            strcat(*(char **)(lVar6 + 0x4a8),pcVar4);
            log2Console(4,"CrashReport-Native","Pending exception: \n%s",pcVar4);
            free(pcVar4);
          }
        }
        sVar5 = strlen(*(char **)(lVar6 + 0x4a8));
        sVar5 = (long)*(int *)(lVar6 + 0x20) - sVar5;
        if (0 < (long)sVar5) {
          pcVar4 = (char *)getJavaThreadStack(lVar1,lVar6,lVar7,0x1400);
          if (pcVar4 == (char *)0x0) {
            log2Console(5,"CrashReport-Native","Failed to get Java stack.");
            strncat(*(char **)(lVar6 + 0x4a8),"java:\n[Failed to get Java stack]",sVar5);
          }
          else {
            strncat(*(char **)(lVar6 + 0x4a8),"java:\n",sVar5);
            strncat(*(char **)(lVar6 + 0x4a8),pcVar4,sVar5 - 6);
            log2Console(4,"CrashReport-Native","Java stack: \n%s",pcVar4);
            free(pcVar4);
          }
        }
        if (DAT_0013e008 == '\0') {
          log2Console(4,"CrashReport-Native",
                      "Will not handle this native exception in Java profile.");
        }
        else {
          lVar7 = javaStaticCall_NativeCrashHandler_GetInstance(lVar1);
          if (lVar7 == 0) {
            log2Console(6,"CrashReport-Native","Failed to get crash handler.");
          }
          else {
            log2Console(3,"CrashReport-Native","Successfully got crash handler.");
            lVar7 = javaCall_NativeCrashHandler_GetMHandle(lVar1,lVar7);
            if (lVar7 == 0) {
              log2Console(6,"CrashReport-Native","Failed to get exception handler.");
            }
            else {
              log2Console(3,"CrashReport-Native","Successfully got exception handler.");
              javaObjectCall_NativeExceptionHandler_handleNativeException(lVar1,lVar7,lVar6,"3.9.2")
              ;
              *(undefined1 *)(lVar6 + 0x25) = 1;
            }
          }
        }
      }
    }
    else {
      log2Console(6,"CrashReport-Native","Failed to attach thread to JVM.");
    }
    (**(code **)(*jvm + 0x28))(jvm);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

