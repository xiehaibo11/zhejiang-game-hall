
undefined8 javaCall_NativeCrashHandler_GetMHandle(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (((param_1 == (long *)0x0) || (param_2 == 0)) || (jm_getMHandle == 0)) {
    log2Console(6,"CrashReport-Native",
                "env == NULL or nativeCrashHandlerObj == 0 or jm_getMHandle == 0 , return!");
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x110))();
    lVar2 = checkJavaException(param_1);
    if (lVar2 == 0) {
      return uVar1;
    }
    log2Console(6,"CrashReport-Native","call getMHandle fail!");
  }
  return uVar1;
}

