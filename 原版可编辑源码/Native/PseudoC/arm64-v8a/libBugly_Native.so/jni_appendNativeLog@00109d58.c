
uint jni_appendNativeLog(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  if ((((param_1 != (long *)0x0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    if (lVar2 == 0) {
      pcVar5 = "jni_appendNativeLog: level is null.";
    }
    else {
      lVar3 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
      if (lVar3 == 0) {
        pcVar5 = "jni_appendNativeLog: tag is null.";
      }
      else {
        lVar4 = (**(code **)(*param_1 + 0x548))(param_1,param_5,0);
        if (lVar4 != 0) {
          uVar1 = appendNativeLog(lVar2,lVar3,lVar4);
          (**(code **)(*param_1 + 0x550))(param_1,param_3,lVar2);
          (**(code **)(*param_1 + 0x550))(param_1,param_4,lVar3);
          (**(code **)(*param_1 + 0x550))(param_1,param_5,lVar4);
          return uVar1 & 1;
        }
        pcVar5 = "jni_appendNativeLog: log is null.";
      }
    }
    log2Console(5,"eup",pcVar5);
  }
  return 0;
}

