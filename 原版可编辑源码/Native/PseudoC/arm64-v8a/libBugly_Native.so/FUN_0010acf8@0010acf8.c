
undefined8 FUN_0010acf8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  size_t sVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  char *__s;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = gettid();
  log2Console(4,"eup","New thread ID: %d",uVar4);
  if (jvm == (long *)0x0) {
    log2Console(6,"eup","JVM have not been backed up, should init JNI regist first!");
    goto LAB_0010b010;
  }
  lVar10 = *param_1;
  local_60 = 0;
  log2Console(3,"eup","handleNativeExceptionThread Attach thread to JVM.");
  iVar5 = (**(code **)(*jvm + 0x20))(jvm,&local_60,0);
  lVar3 = local_60;
  if ((iVar5 == 0) && (local_60 != 0)) {
    if (lVar10 == 0) {
      pcVar6 = "eupInfo is null.";
      goto LAB_0010aff8;
    }
    lVar8 = param_1[2];
    lVar1 = param_1[3];
    log2Console(4,"eup","Try to dump Java stack with thread name: %s",lVar8);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar10 + 0x24) = 1;
      pcVar6 = (char *)getPendingExceptionStack(lVar3,lVar1,0x139f);
      if (pcVar6 != (char *)0x0) {
        __s = *(char **)(lVar10 + 0x4a8);
        sVar7 = strlen(__s);
        builtin_strncpy(__s + sVar7,
                        "java pending exception:\n[Native crash above happened with a Java pending exception as following]\n"
                        ,0x62);
        strcat(*(char **)(lVar10 + 0x4a8),pcVar6);
        log2Console(4,"eup","Pending exception: \n%s",pcVar6);
        free(pcVar6);
      }
    }
    iVar5 = *(int *)(lVar10 + 0x20);
    sVar7 = strlen(*(char **)(lVar10 + 0x4a8));
    sVar7 = (long)iVar5 - sVar7;
    if (0 < (long)sVar7) {
      pcVar6 = (char *)getJavaThreadStack(lVar3,lVar10,lVar8,0x1400);
      if (pcVar6 == (char *)0x0) {
        log2Console(5,"eup","Failed to get Java stack.");
        strncat(*(char **)(lVar10 + 0x4a8),"java:\n[Failed to get Java stack]",sVar7);
      }
      else {
        strncat(*(char **)(lVar10 + 0x4a8),"java:\n",sVar7);
        strncat(*(char **)(lVar10 + 0x4a8),pcVar6,sVar7 - 6);
        log2Console(4,"eup","Java stack: \n%s",pcVar6);
        free(pcVar6);
      }
    }
    if (DAT_0013f008 == '\0') {
      pcVar6 = "Will not handle this native exception in Java profile.";
      uVar9 = 4;
      goto LAB_0010affc;
    }
    lVar8 = javaStaticCall_NativeCrashHandler_GetInstance(lVar3);
    if (lVar8 == 0) {
      pcVar6 = "Failed to get crash handler.";
      goto LAB_0010aff8;
    }
    log2Console(3,"eup","Successfully got crash handler.");
    lVar8 = javaCall_NativeCrashHandler_GetMHandle(lVar3,lVar8);
    if (lVar8 == 0) {
      pcVar6 = "Failed to get exception handler.";
      goto LAB_0010aff8;
    }
    log2Console(3,"eup","Successfully got exception handler.");
    javaObjectCall_NativeExceptionHandler_handleNativeException(lVar3,lVar8,lVar10,"4.1.9.2");
    *(undefined1 *)(lVar10 + 0x25) = 1;
  }
  else {
    pcVar6 = "Failed to attach thread to JVM.";
LAB_0010aff8:
    uVar9 = 6;
LAB_0010affc:
    log2Console(uVar9,"eup",pcVar6);
  }
  (**(code **)(*jvm + 0x28))();
LAB_0010b010:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

