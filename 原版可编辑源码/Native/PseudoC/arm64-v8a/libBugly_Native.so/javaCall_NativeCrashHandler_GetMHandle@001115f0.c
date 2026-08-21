
undefined8 javaCall_NativeCrashHandler_GetMHandle(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (((param_1 != (long *)0x0) && (param_2 != 0)) && (jm_getMHandle != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x110))();
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      return uVar1;
    }
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
    log2Console(6,"eup","call getMHandle fail!");
    return uVar1;
  }
  log2Console(6,"eup","env == NULL or nativeCrashHandlerObj == 0 or jm_getMHandle == 0 , return!");
  return 0;
}

