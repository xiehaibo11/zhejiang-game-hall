
long getJavaThreadName(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = getJavaMethodID(param_1,"java/lang/Thread","getName","()Ljava/lang/String;");
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,lVar1);
    lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
    if (lVar2 == 0) {
      if (lVar1 != 0) {
        lVar2 = (**(code **)(*param_1 + 0x548))(param_1,lVar1,0);
        lVar3 = (**(code **)(*param_1 + 0x78))(param_1);
        if (lVar3 == 0) {
          if (lVar2 != 0) {
            (**(code **)(*param_1 + 0xb8))(param_1,lVar1);
            return lVar2;
          }
        }
        else {
          log2Console(5,"eup","A Java exception has been caught.");
          (**(code **)(*param_1 + 0x80))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
        }
        log2Console(6,"eup","Failed to get chars of Java string.");
        return 0;
      }
    }
    else {
      log2Console(5,"eup","A Java exception has been caught.");
      (**(code **)(*param_1 + 0x80))(param_1);
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    log2Console(6,"eup","Failed to call: %s","getName");
  }
  return 0;
}

