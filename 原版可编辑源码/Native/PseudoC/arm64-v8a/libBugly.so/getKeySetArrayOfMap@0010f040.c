
long getKeySetArrayOfMap(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (((param_1 != (long *)0x0) && (param_2 != 0)) &&
     (lVar1 = getJavaMethodID(param_1,"java/util/Map","keySet","()Ljava/util/Set;"), lVar1 != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,lVar1);
    lVar2 = checkJavaException(param_1);
    if ((lVar2 != 0) || (lVar1 == 0)) {
      log2Console(6,"CrashReport-Native","Failed to call keySet method.");
      return 0;
    }
    lVar2 = getJavaMethodID(param_1,"java/util/Set","toArray","()[Ljava/lang/Object;");
    if (lVar2 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x110))(param_1,lVar1,lVar2);
      lVar2 = checkJavaException(param_1);
      if ((lVar2 == 0) && (lVar1 != 0)) {
        return lVar1;
      }
      log2Console(6,"CrashReport-Native","Failed to call toArray method.");
    }
  }
  return 0;
}

