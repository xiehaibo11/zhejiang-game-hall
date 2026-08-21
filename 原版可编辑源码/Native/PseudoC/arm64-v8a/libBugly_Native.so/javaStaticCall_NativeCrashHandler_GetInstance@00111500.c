
undefined8 javaStaticCall_NativeCrashHandler_GetInstance(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (((param_1 == (long *)0x0) || (jc_NativeCrashHandler == 0)) || (jm_getInstance == 0)) {
    log2Console(6,"eup",
                "env == NULL or jc_NativeCrashHandler == 0 or jm_getInstance == 0 , return!%p %p %p"
                ,param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x390))(param_1,jc_NativeCrashHandler,jm_getInstance);
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 != 0) {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
      log2Console(6,"eup","call getInstance fail!");
    }
  }
  return uVar1;
}

