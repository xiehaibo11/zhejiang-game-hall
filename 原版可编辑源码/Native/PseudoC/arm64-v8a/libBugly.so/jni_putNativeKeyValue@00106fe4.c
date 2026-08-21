
bool jni_putNativeKeyValue(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  if ((param_3 != 0 && param_4 != 0) && (param_1 != (long *)0x0)) {
    lVar1 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    if (lVar1 == 0) {
      bVar3 = false;
      log2Console(5,"CrashReport-Native","jni_putNativeKeyValue: key is null.");
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
      if (lVar2 == 0) {
        log2Console(5,"CrashReport-Native","jni_putNativeKeyValue: value is null.");
      }
      else {
        putNativeKeyValue(lVar1,lVar2);
        (**(code **)(*param_1 + 0x550))(param_1,param_4,lVar2);
      }
      bVar3 = lVar2 != 0;
      (**(code **)(*param_1 + 0x550))(param_1,param_3,lVar1);
    }
    return bVar3;
  }
  return false;
}

