
long getJavaThreadName(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = getJavaMethodID(param_1,"java/lang/Thread","getName","()Ljava/lang/String;");
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x110))(param_1,param_2,lVar1);
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (lVar2 == 0)) {
      log2Console(6,"CrashReport-Native","Failed to call: %s","getName");
      return 0;
    }
    lVar1 = (**(code **)(*param_1 + 0x548))(param_1,lVar2,0);
    lVar3 = checkJavaException(param_1);
    if ((lVar3 != 0) || (lVar1 == 0)) {
      log2Console(6,"CrashReport-Native","Failed to get chars of Java string.");
      return 0;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,lVar2);
  }
  return lVar1;
}

