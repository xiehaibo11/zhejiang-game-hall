
long constructUploadExtraMessage(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  
  lVar2 = constructJavaObjectArray(param_1,"java/lang/String",5);
  if (lVar2 == 0) {
    log2Console(6,"CrashReport-Native","Failed to construct extra message.");
    lVar2 = 0;
  }
  else {
    snprintf(&DAT_0013f200,0x80,"ExceptionThreadName=%s",param_2 + 0x428);
    log2Console(4,"CrashReport-Native","Set name of crash thread: %s",param_2 + 0x428);
    sVar3 = strlen(&DAT_0013f200);
    lVar4 = toJavaString(param_1,&DAT_0013f200,sVar3);
    if (lVar4 == 0) {
      log2Console(6,"CrashReport-Native","Failed to set thread name: %s",&DAT_0013f200);
      lVar2 = 0;
    }
    else {
      cVar1 = insertToJavaObjectArray(param_1,lVar2,0,lVar4);
      if (cVar1 == '\0') {
        log2Console(6,"CrashReport-Native","Failed to insert thread name into extra message.");
        lVar2 = 0;
      }
      else {
        snprintf(&DAT_0013f200,0x80,"ExceptionProcessName=%s",param_2 + 0x228);
        log2Console(4,"CrashReport-Native","Set name of crash process: %s",param_2 + 0x228);
        sVar3 = strlen(&DAT_0013f200);
        lVar4 = toJavaString(param_1,&DAT_0013f200,sVar3);
        if (lVar4 == 0) {
          log2Console(6,"CrashReport-Native","Failed to set process name: %s",&DAT_0013f200);
          lVar2 = 0;
        }
        else {
          cVar1 = insertToJavaObjectArray(param_1,lVar2,1,lVar4);
          if (cVar1 == '\0') {
            log2Console(6,"CrashReport-Native","Failed to insert process name into extra message.");
            lVar2 = 0;
          }
          else {
            snprintf(&DAT_0013f200,0x100,"SysLogPath=%s",&sysLogPath);
            log2Console(4,"CrashReport-Native","Set path of system log: %s",&sysLogPath);
            sVar3 = strlen(&DAT_0013f200);
            lVar4 = toJavaString(param_1,&DAT_0013f200,sVar3);
            if (lVar4 == 0) {
              log2Console(6,"CrashReport-Native","Failed to set path of system log: %s",
                          &DAT_0013f200);
              lVar2 = 0;
            }
            else {
              cVar1 = insertToJavaObjectArray(param_1,lVar2,2,lVar4);
              if (cVar1 == '\0') {
                log2Console(6,"CrashReport-Native",
                            "Failed to insert path of system log into extra message.");
                lVar2 = 0;
              }
              else {
                snprintf(&DAT_0013f200,0x100,"JniLogPath=%s",&jniLogPath);
                log2Console(4,"CrashReport-Native","Set path of JNI log: %s",&jniLogPath);
                sVar3 = strlen(&DAT_0013f200);
                lVar4 = toJavaString(param_1,&DAT_0013f200,sVar3);
                if (lVar4 == 0) {
                  log2Console(6,"CrashReport-Native","Failed to set path of JNI log: %s",
                              &DAT_0013f200);
                  lVar2 = 0;
                }
                else {
                  cVar1 = insertToJavaObjectArray(param_1,lVar2,3,lVar4);
                  if (cVar1 == '\0') {
                    log2Console(6,"CrashReport-Native",
                                "Failed to insert path of JNI log into extra message.");
                    lVar2 = 0;
                  }
                  else {
                    if (*(char *)(param_2 + 0x24) == '\0') {
                      pcVar5 = "false";
                    }
                    else {
                      pcVar5 = "true";
                    }
                    snprintf(&DAT_0013f200,0x100,"HasPendingException=%s",pcVar5);
                    log2Console(4,"CrashReport-Native","Set variable: has pending exception? %s",
                                pcVar5);
                    sVar3 = strlen(&DAT_0013f200);
                    lVar4 = toJavaString(param_1,&DAT_0013f200,sVar3);
                    if (lVar4 == 0) {
                      log2Console(6,"CrashReport-Native",
                                  "Failed to set variable: has pending exception",0);
                      lVar2 = 0;
                    }
                    else {
                      cVar1 = insertToJavaObjectArray(param_1,lVar2,4);
                      if (cVar1 == '\0') {
                        log2Console(6,"CrashReport-Native",
                                    "Failed to insert variable (has pending exception) into extra message."
                                   );
                        lVar2 = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return lVar2;
}

