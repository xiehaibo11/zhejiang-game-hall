
undefined8 javaTheadDump(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  log2Console(3,"CrashReport-Native","Begin to dump stack of java current thead.");
  if ((param_1 == 0) || (param_2 < 1)) {
    log2Console(6,"CrashReport-Native","env == NULL || maxLen <= 0, return!");
  }
  else {
    lVar1 = javaStaticCall_Thread_CurrentThread(param_1);
    if (lVar1 != 0) {
      log2Console(3,"CrashReport-Native","Successfully geted java current thread.");
      uVar2 = getJavaThreadStackByThreadObject(param_1,lVar1,param_2);
      return uVar2;
    }
    log2Console(6,"CrashReport-Native","Failed to get java current thread.");
  }
  return 0;
}

