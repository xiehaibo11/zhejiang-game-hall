
undefined8 javaStaticCall_NativeCrashHandler_GetInstance(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = jm_getInstance;
  if (((param_1 == (long *)0x0) || (jc_NativeCrashHandler == 0)) || (lVar2 = 0, jm_getInstance == 0)
     ) {
    log2Console(6,"CrashReport-Native",
                "env == NULL or jc_NativeCrashHandler == 0 or jm_getInstance == 0 , return!%p %p %p"
                ,param_1,jc_NativeCrashHandler,lVar2);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x390))(param_1,jc_NativeCrashHandler,jm_getInstance);
    lVar2 = checkJavaException(param_1);
    if (lVar2 == 0) {
      return uVar1;
    }
    log2Console(6,"CrashReport-Native","call getInstance fail!");
  }
  return uVar1;
}

