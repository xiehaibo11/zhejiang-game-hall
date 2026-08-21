
undefined1 jni_appendWholeNativeLog(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (param_3 != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    if (lVar2 != 0) {
      uVar1 = appendWholeNativeLog();
      (**(code **)(*param_1 + 0x550))(param_1,param_3,lVar2);
      return uVar1;
    }
    log2Console(5,"CrashReport-Native","jni_appendWholeNativeLog: log is null.");
  }
  return 0;
}

