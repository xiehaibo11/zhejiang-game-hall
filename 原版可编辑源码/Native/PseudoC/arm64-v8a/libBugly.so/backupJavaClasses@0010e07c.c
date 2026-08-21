
undefined1 backupJavaClasses(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  
  if (jc_Thread == 0) {
    lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/Thread");
    lVar2 = checkJavaException(param_1);
    if (lVar2 != 0 || lVar1 == 0) {
      log2Console(6,"CrashReport-Native","find cls error %s ","java/lang/Thread");
      return 0;
    }
    jc_Thread = (**(code **)(*param_1 + 0xa8))(param_1,lVar1);
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (jc_Thread == 0)) {
      log2Console(6,"CrashReport-Native","new cls error %s ","java/lang/Thread");
      return 0;
    }
  }
  if (jc_Throwable == 0) {
    lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/Throwable");
    lVar2 = checkJavaException(param_1);
    if (lVar2 != 0 || lVar1 == 0) {
      log2Console(6,"CrashReport-Native","find cls error %s ","java/lang/Throwable");
      return 0;
    }
    jc_Throwable = (**(code **)(*param_1 + 0xa8))(param_1,lVar1);
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (jc_Throwable == 0)) {
      log2Console(6,"CrashReport-Native","new cls error %s ","java/lang/Throwable");
      return 0;
    }
  }
  if (jc_StackTraceElement == 0) {
    lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/StackTraceElement");
    lVar2 = checkJavaException(param_1);
    if (lVar2 != 0 || lVar1 == 0) {
      log2Console(6,"CrashReport-Native","find cls error %s ","java/lang/StackTraceElement");
      return 0;
    }
    jc_StackTraceElement = (**(code **)(*param_1 + 0xa8))(param_1,lVar1);
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (jc_StackTraceElement == 0)) {
      log2Console(6,"CrashReport-Native","new cls error %s ","java/lang/StackTraceElement");
      return 0;
    }
  }
  if (jm_currentThread == 0) {
    jm_currentThread =
         (**(code **)(*param_1 + 0x388))(param_1,jc_Thread,"currentThread","()Ljava/lang/Thread;");
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (jm_currentThread == 0)) {
      log2Console(6,"CrashReport-Native","find method error %s ","currentThread");
      return 0;
    }
  }
  if (jm_getStackTrace == 0) {
    jm_getStackTrace =
         (**(code **)(*param_1 + 0x108))
                   (param_1,jc_Thread,"getStackTrace","()[Ljava/lang/StackTraceElement;");
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (jm_getStackTrace == 0)) goto LAB_0010e3c8;
  }
  if (jm_throwable_getStackTrace == 0) {
    jm_throwable_getStackTrace =
         (**(code **)(*param_1 + 0x108))
                   (param_1,jc_Throwable,"getStackTrace","()[Ljava/lang/StackTraceElement;");
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (jm_throwable_getStackTrace == 0)) {
LAB_0010e3c8:
      log2Console(6,"CrashReport-Native","find method error %s ","getStackTrace");
      return 0;
    }
  }
  if (jm_throwable_getMessage == 0) {
    jm_throwable_getMessage =
         (**(code **)(*param_1 + 0x108))(param_1,jc_Throwable,"getMessage","()Ljava/lang/String;");
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (jm_throwable_getMessage == 0)) {
      log2Console(6,"CrashReport-Native","find method error %s ","getMessage");
      return 0;
    }
  }
  if (jm_throwable_toString == 0) {
    jm_throwable_toString =
         (**(code **)(*param_1 + 0x108))(param_1,jc_Throwable,"toString","()Ljava/lang/String;");
    lVar1 = checkJavaException(param_1);
    if ((lVar1 == 0) && (jm_throwable_toString != 0)) goto LAB_0010e11c;
LAB_0010e188:
    uVar3 = 0;
    log2Console(6,"CrashReport-Native","find method error %s ","toString");
  }
  else {
LAB_0010e11c:
    if (jm_toString == 0) {
      jm_toString = (**(code **)(*param_1 + 0x108))
                              (param_1,jc_StackTraceElement,"toString","()Ljava/lang/String;");
      lVar1 = checkJavaException(param_1);
      if ((lVar1 != 0) || (jm_toString == 0)) goto LAB_0010e188;
    }
    uVar3 = 1;
  }
  return uVar3;
}

