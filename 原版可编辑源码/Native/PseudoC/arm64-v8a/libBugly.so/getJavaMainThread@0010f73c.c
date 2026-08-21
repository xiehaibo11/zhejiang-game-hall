
long getJavaMainThread(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    log2Console(4,"CrashReport-Native","Try to get Java main thread.");
    lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"android/os/Looper");
    lVar2 = checkJavaException(param_1);
    if ((lVar2 != 0) || (lVar1 == 0)) {
      log2Console(6,"CrashReport-Native","Failed to find class: %s","android/os/Looper");
      return 0;
    }
    lVar2 = getJavaStaticMethodID
                      (param_1,"android/os/Looper","getMainLooper","()Landroid/os/Looper;");
    if (lVar2 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x390))(param_1,lVar1,lVar2);
      lVar2 = checkJavaException(param_1);
      if ((lVar2 != 0) || (lVar1 == 0)) {
        log2Console(6,"CrashReport-Native","Failed to call: %s","getMainLooper");
        return 0;
      }
      lVar2 = getJavaMethodID(param_1,"android/os/Looper","getThread","()Ljava/lang/Thread;");
      if (lVar2 != 0) {
        lVar2 = (**(code **)(*param_1 + 0x110))(param_1,lVar1,lVar2);
        lVar3 = checkJavaException(param_1);
        if ((lVar3 != 0) || (lVar2 == 0)) {
          log2Console(6,"CrashReport-Native","Failed to call: %s","getThread");
          return 0;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,lVar1);
        lVar1 = checkJavaException(param_1);
        if (lVar1 == 0) {
          return lVar2;
        }
        log2Console(6,"CrashReport-Native","Failed to delete local reference.");
      }
    }
  }
  return 0;
}

