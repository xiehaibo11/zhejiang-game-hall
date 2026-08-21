
undefined8 backupJavaClasses(long *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (jc_Thread == 0) {
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/Thread");
    lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar1 == 0) {
      if (lVar2 != 0) {
        jc_Thread = (**(code **)(*param_1 + 0xa8))(param_1,lVar2);
        lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar2 == 0) {
          if (jc_Thread != 0) goto LAB_00110e20;
        }
        else {
          log2Console(5,"eup","A Java exception has been caught.");
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
        }
        pcVar3 = "new cls error %s ";
        pcVar4 = "java/lang/Thread";
        goto LAB_001114bc;
      }
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    pcVar3 = "find cls error %s ";
    pcVar4 = "java/lang/Thread";
    goto LAB_001114bc;
  }
LAB_00110e20:
  if (jc_Throwable == 0) {
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/Throwable");
    lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar1 == 0) {
      if (lVar2 != 0) {
        jc_Throwable = (**(code **)(*param_1 + 0xa8))(param_1,lVar2);
        lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar2 == 0) {
          if (jc_Throwable != 0) goto LAB_00110e30;
        }
        else {
          log2Console(5,"eup","A Java exception has been caught.");
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
        }
        pcVar3 = "new cls error %s ";
        pcVar4 = "java/lang/Throwable";
        goto LAB_001114bc;
      }
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    pcVar3 = "find cls error %s ";
    pcVar4 = "java/lang/Throwable";
    goto LAB_001114bc;
  }
LAB_00110e30:
  if (jc_StackTraceElement == 0) {
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/StackTraceElement");
    lVar1 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar1 == 0) {
      if (lVar2 != 0) {
        jc_StackTraceElement = (**(code **)(*param_1 + 0xa8))(param_1,lVar2);
        lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar2 == 0) {
          if (jc_StackTraceElement != 0) goto LAB_00110e40;
        }
        else {
          log2Console(5,"eup","A Java exception has been caught.");
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
        }
        pcVar3 = "new cls error %s ";
        pcVar4 = "java/lang/StackTraceElement";
        goto LAB_001114bc;
      }
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    pcVar3 = "find cls error %s ";
    pcVar4 = "java/lang/StackTraceElement";
    goto LAB_001114bc;
  }
LAB_00110e40:
  if (jm_currentThread == 0) {
    jm_currentThread =
         (**(code **)(*param_1 + 0x388))(param_1,jc_Thread,"currentThread","()Ljava/lang/Thread;");
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      if (jm_currentThread != 0) goto LAB_00110e50;
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    pcVar3 = "find method error %s ";
    pcVar4 = "currentThread";
    goto LAB_001114bc;
  }
LAB_00110e50:
  if (jm_getStackTrace == 0) {
    jm_getStackTrace =
         (**(code **)(*param_1 + 0x108))
                   (param_1,jc_Thread,"getStackTrace","()[Ljava/lang/StackTraceElement;");
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      if (jm_getStackTrace != 0) goto LAB_00110e60;
    }
    else {
LAB_001112d4:
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
LAB_0011130c:
    pcVar3 = "find method error %s ";
    pcVar4 = "getStackTrace";
    goto LAB_001114bc;
  }
LAB_00110e60:
  if (jm_throwable_getStackTrace == 0) {
    jm_throwable_getStackTrace =
         (**(code **)(*param_1 + 0x108))
                   (param_1,jc_Throwable,"getStackTrace","()[Ljava/lang/StackTraceElement;");
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 != 0) goto LAB_001112d4;
    if (jm_throwable_getStackTrace == 0) goto LAB_0011130c;
  }
  if (jm_throwable_getMessage == 0) {
    jm_throwable_getMessage =
         (**(code **)(*param_1 + 0x108))(param_1,jc_Throwable,"getMessage","()Ljava/lang/String;");
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      if (jm_throwable_getMessage != 0) goto LAB_00110e80;
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    pcVar3 = "find method error %s ";
    pcVar4 = "getMessage";
    goto LAB_001114bc;
  }
LAB_00110e80:
  if (jm_throwable_toString == 0) {
    jm_throwable_toString =
         (**(code **)(*param_1 + 0x108))(param_1,jc_Throwable,"toString","()Ljava/lang/String;");
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 != 0) goto LAB_0011146c;
    if (jm_throwable_toString != 0) goto LAB_00110e90;
  }
  else {
LAB_00110e90:
    if (jm_toString != 0) {
      return 1;
    }
    jm_toString = (**(code **)(*param_1 + 0x108))
                            (param_1,jc_StackTraceElement,"toString","()Ljava/lang/String;");
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      if (jm_toString != 0) {
        return 1;
      }
    }
    else {
LAB_0011146c:
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
  }
  pcVar3 = "find method error %s ";
  pcVar4 = "toString";
LAB_001114bc:
  log2Console(6,"eup",pcVar3,pcVar4);
  return 0;
}

