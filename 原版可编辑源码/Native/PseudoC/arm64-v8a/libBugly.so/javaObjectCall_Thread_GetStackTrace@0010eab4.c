
undefined8 javaObjectCall_Thread_GetStackTrace(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,jm_getStackTrace);
    lVar2 = checkJavaException(param_1);
    if (lVar2 == 0) {
      return uVar1;
    }
    log2Console(5,"CrashReport-Native","call getStackTrace fail!");
    return 0;
  }
  log2Console(6,"CrashReport-Native","env == NULL || obj == NULL , return!");
  return 0;
}

