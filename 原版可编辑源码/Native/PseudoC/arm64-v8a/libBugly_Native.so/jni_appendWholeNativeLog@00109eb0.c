
uint jni_appendWholeNativeLog(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0;
  if ((param_1 != (long *)0x0) && (param_3 != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    if (lVar2 == 0) {
      log2Console(5,"eup","jni_appendWholeNativeLog: log is null.");
      uVar1 = 0;
    }
    else {
      uVar1 = appendWholeNativeLog();
      uVar1 = uVar1 & 1;
      (**(code **)(*param_1 + 0x550))(param_1,param_3,lVar2);
    }
  }
  return uVar1;
}

