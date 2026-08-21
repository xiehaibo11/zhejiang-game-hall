
long constructUploadExtraMessage(long *param_1,long param_2)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  char *pcVar4;
  
  lVar1 = constructJavaObjectArray(param_1,"java/lang/String",5);
  if (lVar1 == 0) {
    log2Console(6,"eup","Failed to construct extra message.");
    return 0;
  }
  snprintf(&DAT_00140250,0x80,"ExceptionThreadName=%s",param_2 + 0x428);
  log2Console(4,"eup","Set name of crash thread: %s",param_2 + 0x428);
  sVar2 = strlen(&DAT_00140250);
  lVar3 = toJavaString(param_1,&DAT_00140250,sVar2);
  if (lVar3 == 0) {
    pcVar4 = "Failed to set thread name: %s";
LAB_001119e4:
    log2Console(6,"eup",pcVar4,&DAT_00140250);
  }
  else {
    (**(code **)(*param_1 + 0x570))(param_1,lVar1,0,lVar3);
    lVar3 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar3 == 0) {
      snprintf(&DAT_00140250,0x80,"ExceptionProcessName=%s",param_2 + 0x228);
      log2Console(4,"eup","Set name of crash process: %s",param_2 + 0x228);
      sVar2 = strlen(&DAT_00140250);
      lVar3 = toJavaString(param_1,&DAT_00140250,sVar2);
      if (lVar3 == 0) {
        pcVar4 = "Failed to set process name: %s";
        goto LAB_001119e4;
      }
      (**(code **)(*param_1 + 0x570))(param_1,lVar1,1,lVar3);
      lVar3 = (**(code **)(*param_1 + 0x78))(param_1);
      if (lVar3 == 0) {
        snprintf(&DAT_00140250,0x100,"SysLogPath=%s",sysLogPath);
        log2Console(4,"eup","Set path of system log: %s",sysLogPath);
        sVar2 = strlen(&DAT_00140250);
        lVar3 = toJavaString(param_1,&DAT_00140250,sVar2);
        if (lVar3 == 0) {
          pcVar4 = "Failed to set path of system log: %s";
          goto LAB_001119e4;
        }
        (**(code **)(*param_1 + 0x570))(param_1,lVar1,2,lVar3);
        lVar3 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar3 == 0) {
          snprintf(&DAT_00140250,0x100,"JniLogPath=%s",jniLogPath);
          log2Console(4,"eup","Set path of JNI log: %s",jniLogPath);
          sVar2 = strlen(&DAT_00140250);
          lVar3 = toJavaString(param_1,&DAT_00140250,sVar2);
          if (lVar3 == 0) {
            pcVar4 = "Failed to set path of JNI log: %s";
            goto LAB_001119e4;
          }
          (**(code **)(*param_1 + 0x570))(param_1,lVar1,3,lVar3);
          lVar3 = (**(code **)(*param_1 + 0x78))(param_1);
          if (lVar3 == 0) {
            pcVar4 = "false";
            if (*(char *)(param_2 + 0x24) != '\0') {
              pcVar4 = "true";
            }
            snprintf(&DAT_00140250,0x100,"HasPendingException=%s",pcVar4);
            log2Console(4,"eup","Set variable: has pending exception? %s",pcVar4);
            sVar2 = strlen(&DAT_00140250);
            lVar3 = toJavaString(param_1,&DAT_00140250,sVar2);
            if (lVar3 == 0) {
              pcVar4 = "Failed to set variable: has pending exception";
            }
            else {
              (**(code **)(*param_1 + 0x570))(param_1,lVar1,4,lVar3);
              lVar3 = (**(code **)(*param_1 + 0x78))(param_1);
              if (lVar3 == 0) {
                return lVar1;
              }
              log2Console(5,"eup","A Java exception has been caught.");
              (**(code **)(*param_1 + 0x80))(param_1);
              (**(code **)(*param_1 + 0x88))(param_1);
              log2Console(6,"eup","Failed to insert element to Java object array.");
              pcVar4 = "Failed to insert variable (has pending exception) into extra message.";
            }
          }
          else {
            log2Console(5,"eup","A Java exception has been caught.");
            (**(code **)(*param_1 + 0x80))(param_1);
            (**(code **)(*param_1 + 0x88))(param_1);
            log2Console(6,"eup","Failed to insert element to Java object array.");
            pcVar4 = "Failed to insert path of JNI log into extra message.";
          }
        }
        else {
          log2Console(5,"eup","A Java exception has been caught.");
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
          log2Console(6,"eup","Failed to insert element to Java object array.");
          pcVar4 = "Failed to insert path of system log into extra message.";
        }
      }
      else {
        log2Console(5,"eup","A Java exception has been caught.");
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
        log2Console(6,"eup","Failed to insert element to Java object array.");
        pcVar4 = "Failed to insert process name into extra message.";
      }
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
      log2Console(6,"eup","Failed to insert element to Java object array.");
      pcVar4 = "Failed to insert thread name into extra message.";
    }
    log2Console(6,"eup",pcVar4);
  }
  return 0;
}

