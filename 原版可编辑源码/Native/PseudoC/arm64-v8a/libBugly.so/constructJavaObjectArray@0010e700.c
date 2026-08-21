
undefined8 constructJavaObjectArray(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  lVar2 = checkJavaException(param_1);
  if ((lVar2 == 0) && (lVar1 != 0)) {
    uVar3 = (**(code **)(*param_1 + 0x560))(param_1,param_3,lVar1,0);
    lVar1 = checkJavaException(param_1);
    if (lVar1 == 0) {
      return uVar3;
    }
    log2Console(6,"CrashReport-Native","Failed to new object array of type: %s",param_2);
    return 0;
  }
  log2Console(6,"CrashReport-Native","Failed to find class: %s",param_2);
  return 0;
}

