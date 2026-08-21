
undefined4 getJavaThreadId(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = getJavaMethodID(param_1,"java/lang/Thread","getId",&DAT_001253d8);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,param_2,lVar2);
    lVar2 = checkJavaException(param_1);
    if (lVar2 != 0) {
      log2Console(6,"CrashReport-Native","Failed to call: %s","getId");
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

