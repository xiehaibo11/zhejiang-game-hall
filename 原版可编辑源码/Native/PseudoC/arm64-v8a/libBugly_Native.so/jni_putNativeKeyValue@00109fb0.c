
bool jni_putNativeKeyValue(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = false;
  if (((param_1 != (long *)0x0) && (param_3 != 0)) && (param_4 != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    if (lVar1 == 0) {
      log2Console(5,"eup","jni_putNativeKeyValue: key is null.");
      bVar3 = false;
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x548))(param_1,param_4,0);
      if (lVar2 == 0) {
        log2Console(5,"eup","jni_putNativeKeyValue: value is null.");
      }
      else {
        putNativeKeyValue(lVar1,lVar2);
        (**(code **)(*param_1 + 0x550))(param_1,param_4,lVar2);
      }
      bVar3 = lVar2 != 0;
      (**(code **)(*param_1 + 0x550))(param_1,param_3,lVar1);
    }
  }
  return bVar3;
}

