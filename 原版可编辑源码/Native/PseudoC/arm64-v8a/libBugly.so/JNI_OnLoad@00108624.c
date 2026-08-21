
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void JNI_OnLoad(long *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  char *pcVar9;
  long *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_10 = (long *)0x0;
  iVar3 = (**(code **)(*param_1 + 0x30))(param_1,&local_10,0x10006);
  if (iVar3 != 0) {
    uVar6 = getErrorMsg();
    log2Console(6,"CrashReport-Native","get env failed %s",uVar6);
    uVar6 = 0xffffffff;
    goto LAB_001087dc;
  }
  cVar2 = backupJavaClasses(local_10);
  if (cVar2 == '\0') {
    log2Console(6,"CrashReport-Native","backup java classes error");
    uVar6 = 0xffffffff;
    goto LAB_001087dc;
  }
  __ptr = (void *)getBuglyClassPathPrefix(local_10);
  plVar1 = local_10;
  if (jc_NativeCrashHandler == 0) {
    pvVar7 = (void *)concatString(__ptr,"crashreport/crash/jni/NativeCrashHandler",200);
    lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,pvVar7);
    free(pvVar7);
    lVar5 = checkJavaException(plVar1);
    if (lVar5 == 0) {
      if (lVar4 == 0) {
LAB_00108d28:
        log2Console(6,"CrashReport-Native","getted jc_NativeCrashHandler error");
      }
      else {
        jc_NativeCrashHandler = (**(code **)(*plVar1 + 0xa8))(plVar1,lVar4);
        lVar4 = checkJavaException(plVar1);
        if (lVar4 == 0) {
          if (jc_NativeCrashHandler != 0) goto LAB_001086a0;
          log2Console(6,"CrashReport-Native","jc_NativeCrashHandler null");
        }
        else {
          log2Console(6,"CrashReport-Native","new cls error %s ",pvVar7);
        }
      }
    }
    else {
      log2Console(6,"CrashReport-Native","find cls error %s ",pvVar7);
    }
  }
  else {
LAB_001086a0:
    if (jc_NativeExceptionHandler == 0) {
      pvVar7 = (void *)concatString(__ptr,"crashreport/crash/jni/NativeExceptionHandler",200);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,pvVar7);
      free(pvVar7);
      lVar5 = checkJavaException(plVar1);
      if (lVar5 == 0) {
        if (lVar4 == 0) goto LAB_00108d28;
        jc_NativeExceptionHandler = (**(code **)(*plVar1 + 0xa8))(plVar1,lVar4);
        lVar4 = checkJavaException(plVar1);
        if (lVar4 == 0) {
          if (jc_NativeExceptionHandler != 0) goto LAB_001086b0;
          log2Console(6,"CrashReport-Native","jc_NativeExceptionHandler null");
        }
        else {
          log2Console(6,"CrashReport-Native","new cls error %s ",pvVar7);
        }
      }
      else {
        log2Console(6,"CrashReport-Native","find cls error %s ",pvVar7);
      }
    }
    else {
LAB_001086b0:
      if (jm_getInstance != 0) {
LAB_001086c0:
        if (jm_getMHandle == 0) {
          pvVar7 = (void *)concatString(&DAT_001238b0,__ptr,200);
          pvVar8 = (void *)concatString(pvVar7,"crashreport/crash/jni/NativeExceptionHandler;",200);
          pcVar9 = "getNativeExceptionHandler";
          free(pvVar7);
          jm_getMHandle =
               (**(code **)(*plVar1 + 0x108))
                         (plVar1,jc_NativeCrashHandler,"getNativeExceptionHandler",pvVar8);
          free(pvVar8);
          lVar4 = checkJavaException(plVar1);
          if (lVar4 != 0) goto LAB_001088dc;
          if (jm_getMHandle == 0) {
            log2Console(6,"CrashReport-Native","getted jm_getMHadle error");
            goto LAB_001088f8;
          }
        }
        if (jm_handleNativeException2 == 0) {
          jm_handleNativeException2 =
               (**(code **)(*plVar1 + 0x108))
                         (plVar1,jc_NativeExceptionHandler,"handleNativeException2",
                          "(IIJJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;IIILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V"
                         );
          lVar4 = checkJavaException(plVar1);
          if (lVar4 != 0) {
            log2Console(3,"CrashReport-Native","failed to find method %s ","handleNativeException2")
            ;
          }
          if (jm_handleNativeException2 == 0) {
            log2Console(3,"CrashReport-Native","failed to get %s","handleNativeException2");
          }
        }
        if (jm_handleNativeException == 0) {
          pcVar9 = "handleNativeException";
          jm_handleNativeException =
               (**(code **)(*plVar1 + 0x108))
                         (plVar1,jc_NativeExceptionHandler,"handleNativeException",
                          "(IIJJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V"
                         );
          lVar4 = checkJavaException(plVar1);
          if (lVar4 != 0) goto LAB_001088dc;
          if (jm_handleNativeException == 0) {
            log2Console(6,"CrashReport-Native","getted jm_handleNativeException error");
            goto LAB_001088f8;
          }
        }
        free(__ptr);
        iVar3 = (**(code **)(*local_10 + 0x6b8))
                          (local_10,jc_NativeCrashHandler,&PTR_s_regist_0013e060,3);
        plVar1 = local_10;
        if (iVar3 < 0) {
          pcVar9 = "register Natives error";
          goto LAB_00108c58;
        }
        if (local_10 != (long *)0x0) {
          lVar4 = (**(code **)(*local_10 + 0x108))
                            (local_10,jc_NativeCrashHandler,"appendNativeLog",
                             "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z");
          lVar5 = (**(code **)(*plVar1 + 0x78))(plVar1);
          if (lVar5 == 0) {
            if (lVar4 == 0) goto LAB_00108780;
            iVar3 = (**(code **)(*local_10 + 0x6b8))
                              (local_10,jc_NativeCrashHandler,&PTR_s_appendNativeLog_0013e0a8,3);
            if (iVar3 < 0) {
              pcVar9 = "register native log methods error";
            }
            else {
              iVar3 = (**(code **)(*local_10 + 0x6b8))
                                (local_10,jc_NativeCrashHandler,&PTR_s_putNativeKeyValue_0013e018,3)
              ;
              if (-1 < iVar3) goto LAB_00108780;
              pcVar9 = "register native key-value methods error";
            }
LAB_00108c58:
            log2Console(6,"CrashReport-Native",pcVar9);
            checkJavaException(local_10);
            uVar6 = 0xffffffff;
            goto LAB_001087dc;
          }
          (**(code **)(*plVar1 + 0x88))(plVar1);
LAB_00108780:
          plVar1 = local_10;
          if (local_10 != (long *)0x0) {
            lVar4 = (**(code **)(*local_10 + 0x108))
                              (local_10,jc_NativeCrashHandler,"setNativeInfo",
                               "(ILjava/lang/String;)V");
            lVar5 = (**(code **)(*plVar1 + 0x78))(plVar1);
            if (lVar5 == 0) {
              if ((lVar4 != 0) &&
                 (iVar3 = (**(code **)(*local_10 + 0x6b8))
                                    (local_10,jc_NativeCrashHandler,&PTR_s_setNativeInfo_0013e0f0,1)
                 , iVar3 < 0)) {
                pcVar9 = "register native info setting method error";
                goto LAB_00108c58;
              }
            }
            else {
              (**(code **)(*plVar1 + 0x88))(plVar1);
            }
          }
        }
        uVar6 = 0x10006;
        goto LAB_001087dc;
      }
      pvVar7 = (void *)concatString(&DAT_001238b0,__ptr,200);
      pvVar8 = (void *)concatString(pvVar7,"crashreport/crash/jni/NativeCrashHandler;",200);
      pcVar9 = "getInstance";
      free(pvVar7);
      jm_getInstance =
           (**(code **)(*plVar1 + 0x388))(plVar1,jc_NativeCrashHandler,"getInstance",pvVar8);
      free(pvVar8);
      lVar4 = checkJavaException(plVar1);
      if (lVar4 == 0) {
        if (jm_getInstance == 0) {
          log2Console(6,"CrashReport-Native","getted jm_getInstance error");
          goto LAB_001088f8;
        }
        goto LAB_001086c0;
      }
LAB_001088dc:
      log2Console(6,"CrashReport-Native","find method error %s ",pcVar9);
    }
  }
LAB_001088f8:
  log2Console(6,"CrashReport-Native","back up bugly classes error");
  free(__ptr);
  uVar6 = 0xffffffff;
LAB_001087dc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

