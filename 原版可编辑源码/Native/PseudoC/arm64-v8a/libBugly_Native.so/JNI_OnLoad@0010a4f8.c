
undefined4 JNI_OnLoad(long *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *__ptr;
  long lVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  long *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = (long *)0x0;
  uVar12 = 0x10006;
  iVar3 = (**(code **)(*param_1 + 0x30))(param_1,&local_70,0x10006);
  if (iVar3 == 0) {
    uVar5 = backupJavaClasses(local_70);
    if ((uVar5 & 1) == 0) {
      log2Console(6,"eup","backup java classes error");
    }
    else {
      __ptr = (void *)getBuglyClassPathPrefix(local_70);
      plVar2 = local_70;
      if (jc_NativeCrashHandler == 0) {
        pcVar11 = (char *)concatString(__ptr,"crashreport/crash/jni/NativeCrashHandler",200);
        lVar6 = (**(code **)(*plVar2 + 0x30))(plVar2,pcVar11);
        free(pcVar11);
        lVar7 = checkJavaException(plVar2);
        if (lVar7 != 0) {
LAB_0010a88c:
          pcVar10 = "find cls error %s ";
          goto LAB_0010aac4;
        }
        if (lVar6 == 0) {
LAB_0010a9f4:
          pcVar11 = "getted jc_NativeCrashHandler error";
        }
        else {
          jc_NativeCrashHandler = (**(code **)(*plVar2 + 0xa8))(plVar2,lVar6);
          lVar6 = checkJavaException(plVar2);
          if (lVar6 != 0) {
LAB_0010a9e0:
            pcVar10 = "new cls error %s ";
            goto LAB_0010aac4;
          }
          if (jc_NativeCrashHandler != 0) goto LAB_0010a59c;
          pcVar11 = "jc_NativeCrashHandler null";
        }
LAB_0010abb0:
        log2Console(6,"eup",pcVar11);
      }
      else {
LAB_0010a59c:
        if (jc_NativeExceptionHandler == 0) {
          pcVar11 = (char *)concatString(__ptr,"crashreport/crash/jni/NativeExceptionHandler",200);
          lVar6 = (**(code **)(*plVar2 + 0x30))(plVar2,pcVar11);
          free(pcVar11);
          lVar7 = checkJavaException(plVar2);
          if (lVar7 != 0) goto LAB_0010a88c;
          if (lVar6 == 0) goto LAB_0010a9f4;
          jc_NativeExceptionHandler = (**(code **)(*plVar2 + 0xa8))(plVar2,lVar6);
          lVar6 = checkJavaException(plVar2);
          if (lVar6 != 0) goto LAB_0010a9e0;
          if (jc_NativeExceptionHandler == 0) {
            pcVar11 = "jc_NativeExceptionHandler null";
            goto LAB_0010abb0;
          }
        }
        if (jm_getInstance == 0) {
          pvVar8 = (void *)concatString(&DAT_00125a24,__ptr,200);
          pvVar9 = (void *)concatString(pvVar8,"crashreport/crash/jni/NativeCrashHandler;",200);
          free(pvVar8);
          jm_getInstance =
               (**(code **)(*plVar2 + 0x388))(plVar2,jc_NativeCrashHandler,"getInstance",pvVar9);
          free(pvVar9);
          lVar6 = checkJavaException(plVar2);
          if (lVar6 != 0) {
            pcVar10 = "find method error %s ";
            pcVar11 = "getInstance";
            goto LAB_0010aac4;
          }
          if (jm_getInstance == 0) {
            pcVar11 = "getted jm_getInstance error";
            goto LAB_0010abb0;
          }
        }
        if (jm_getMHandle == 0) {
          pvVar8 = (void *)concatString(&DAT_00125a24,__ptr,200);
          pvVar9 = (void *)concatString(pvVar8,"crashreport/crash/jni/NativeExceptionHandler;",200);
          free(pvVar8);
          jm_getMHandle =
               (**(code **)(*plVar2 + 0x108))
                         (plVar2,jc_NativeCrashHandler,"getNativeExceptionHandler",pvVar9);
          free(pvVar9);
          lVar6 = checkJavaException(plVar2);
          if (lVar6 != 0) {
            pcVar10 = "find method error %s ";
            pcVar11 = "getNativeExceptionHandler";
            goto LAB_0010aac4;
          }
          if (jm_getMHandle == 0) {
            pcVar11 = "getted jm_getMHadle error";
            goto LAB_0010abb0;
          }
        }
        if (jm_handleNativeException2 == 0) {
          jm_handleNativeException2 =
               (**(code **)(*plVar2 + 0x108))
                         (plVar2,jc_NativeExceptionHandler,"handleNativeException2",
                          "(IIJJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;IIILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V"
                         );
          lVar6 = checkJavaException(plVar2);
          if (lVar6 != 0) {
            log2Console(3,"eup","failed to find method %s ","handleNativeException2");
          }
          if (jm_handleNativeException2 == 0) {
            log2Console(3,"eup","failed to get %s","handleNativeException2");
          }
        }
        if (jm_handleNativeException == 0) {
          jm_handleNativeException =
               (**(code **)(*plVar2 + 0x108))
                         (plVar2,jc_NativeExceptionHandler,"handleNativeException",
                          "(IIJJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V"
                         );
          lVar6 = checkJavaException(plVar2);
          if (lVar6 != 0) {
            pcVar10 = "find method error %s ";
            pcVar11 = "handleNativeException";
            goto LAB_0010aac4;
          }
          if (jm_handleNativeException == 0) {
            pcVar11 = "getted jm_handleNativeException error";
            goto LAB_0010abb0;
          }
        }
        if (jm_getAndUpdateAnrState != 0) {
LAB_0010a678:
          log2Console(3,"eup","backupBuglyClasses success");
          free(__ptr);
          iVar3 = (**(code **)(*local_70 + 0x6b8))
                            (local_70,jc_NativeCrashHandler,&PTR_s_regist_00125d10_2_0013f010,3);
          plVar2 = local_70;
          if (iVar3 < 0) {
            pcVar11 = "register Natives error";
            goto LAB_0010ab4c;
          }
          if (local_70 != (long *)0x0) {
            lVar6 = (**(code **)(*local_70 + 0x108))
                              (local_70,jc_NativeCrashHandler,"appendNativeLog",
                               "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z");
            lVar7 = (**(code **)(*plVar2 + 0x78))(plVar2);
            if (lVar7 == 0) {
              if (lVar6 == 0) goto LAB_0010a710;
              iVar3 = (**(code **)(*local_70 + 0x6b8))
                                (local_70,jc_NativeCrashHandler,&PTR_s_appendNativeLog_0013f058,3);
              if (iVar3 < 0) {
                pcVar11 = "register native log methods error";
              }
              else {
                iVar3 = (**(code **)(*local_70 + 0x6b8))
                                  (local_70,jc_NativeCrashHandler,&PTR_s_putNativeKeyValue_0013f0a0,
                                   3);
                if (-1 < iVar3) goto LAB_0010a710;
                pcVar11 = "register native key-value methods error";
              }
LAB_0010ab4c:
              log2Console(6,"eup",pcVar11);
              checkJavaException(local_70);
              goto LAB_0010aae8;
            }
            (**(code **)(*plVar2 + 0x88))(plVar2);
LAB_0010a710:
            plVar2 = local_70;
            if (local_70 != (long *)0x0) {
              lVar6 = (**(code **)(*local_70 + 0x108))
                                (local_70,jc_NativeCrashHandler,"setNativeInfo",
                                 "(ILjava/lang/String;)V");
              lVar7 = (**(code **)(*plVar2 + 0x78))(plVar2);
              if (lVar7 == 0) {
                if ((lVar6 != 0) &&
                   (iVar3 = (**(code **)(*local_70 + 0x6b8))
                                      (local_70,jc_NativeCrashHandler,&PTR_s_setNativeInfo_0013f0e8,
                                       1), iVar3 < 0)) {
                  pcVar11 = "register native info setting method error";
                  goto LAB_0010ab4c;
                }
              }
              else {
                (**(code **)(*plVar2 + 0x88))(plVar2);
              }
            }
          }
          iVar3 = (**(code **)(*local_70 + 0x6b8))
                            (local_70,jc_NativeCrashHandler,&PTR_s_getSoCpuAbi_0013f100,2);
          if (iVar3 < 0) {
            log2Console(5,"eup","register native abi method error, please upgrade bugly jar version"
                       );
            checkJavaException(local_70);
          }
          else {
            log2Console(4,"eup","register native abi method success");
          }
          goto LAB_0010aaec;
        }
        jm_getAndUpdateAnrState =
             (**(code **)(*plVar2 + 0x108))
                       (plVar2,jc_NativeExceptionHandler,"getAndUpdateAnrState",&DAT_00125c97);
        lVar6 = checkJavaException(plVar2);
        if (lVar6 == 0) {
          if (jm_getAndUpdateAnrState != 0) goto LAB_0010a678;
          pcVar10 = "failed to get method %s";
        }
        else {
          pcVar10 = "failed to find method %s";
        }
        pcVar11 = "getAndUpdateAnrState";
LAB_0010aac4:
        log2Console(6,"eup",pcVar10,pcVar11);
      }
      log2Console(6,"eup","back up bugly classes error");
      free(__ptr);
    }
  }
  else {
    uVar4 = getErrorMsg();
    log2Console(6,"eup","get env failed %s",uVar4);
  }
LAB_0010aae8:
  uVar12 = 0xffffffff;
LAB_0010aaec:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}

