
undefined8 getJavaThreadStack(long *param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 == (long *)0x0) || (param_4 < 1)) {
    log2Console(6,"CrashReport-Native","env == NULL || maxLen <= 0, return!");
    uVar3 = 0;
  }
  else {
    if (param_3 == 0) {
      uVar3 = javaTheadDump(param_1,param_4);
      return uVar3;
    }
    lVar1 = getJavaThread(param_1,*(undefined4 *)(param_2 + 8));
    if (lVar1 == 0) {
      log2Console(6,"CrashReport-Native","Failed to get java thread with thread name: %s",param_3);
      uVar3 = 0;
    }
    else {
      lVar2 = getJavaThreadName(param_1,lVar1);
      if (lVar2 != 0) {
        snprintf((char *)(param_2 + 0x428),0x80,"%s",lVar2);
      }
      uVar3 = getJavaThreadStackByThreadObject(param_1,lVar1,param_4);
      (**(code **)(*param_1 + 0xb8))(param_1,lVar1);
      lVar1 = checkJavaException(param_1);
      if (lVar1 != 0) {
        log2Console(6,"CrashReport-Native","Failed to delete local reference.");
        return 0;
      }
    }
  }
  return uVar3;
}

