
long getKeySetArrayOfMap(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = getJavaMethodID(param_1,"java/util/Map","keySet","()Ljava/util/Set;");
  if (lVar1 == 0) {
    return 0;
  }
  lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,lVar1);
  lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      lVar2 = getJavaMethodID(param_1,"java/util/Set","toArray","()[Ljava/lang/Object;");
      if (lVar2 == 0) {
        return 0;
      }
      lVar1 = (**(code **)(*param_1 + 0x110))(param_1,lVar1,lVar2);
      lVar2 = (**(code **)(*param_1 + 0x78))(param_1);
      if (lVar2 == 0) {
        if (lVar1 != 0) {
          return lVar1;
        }
      }
      else {
        log2Console(5,"eup","A Java exception has been caught.");
        (**(code **)(*param_1 + 0x80))(param_1);
        (**(code **)(*param_1 + 0x88))(param_1);
      }
      pcVar3 = "Failed to call toArray method.";
      goto LAB_00113160;
    }
  }
  else {
    log2Console(5,"eup","A Java exception has been caught.");
    (**(code **)(*param_1 + 0x80))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  pcVar3 = "Failed to call keySet method.";
LAB_00113160:
  log2Console(6,"eup",pcVar3);
  return 0;
}

