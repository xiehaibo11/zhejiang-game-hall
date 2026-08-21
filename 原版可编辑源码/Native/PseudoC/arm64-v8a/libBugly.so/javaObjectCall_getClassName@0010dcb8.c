
long javaObjectCall_getClassName(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_1 == (long *)0x0) || (param_2 == 0)) {
    return 0;
  }
  if (jc_Object == 0) {
    lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/Object");
    lVar2 = checkJavaException(param_1);
    if ((lVar2 != 0) || (lVar1 == 0)) {
      log2Console(6,"CrashReport-Native","find cls error %s ","java/lang/Object");
      return 0;
    }
    jc_Object = (**(code **)(*param_1 + 0xa8))(param_1,lVar1);
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (jc_Object == 0)) {
      log2Console(6,"CrashReport-Native","new cls error %s ","java/lang/Object");
      return 0;
    }
  }
  if (jc_Class == 0) {
    lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/Class");
    lVar2 = checkJavaException(param_1);
    if ((lVar2 != 0) || (lVar1 == 0)) {
      log2Console(6,"CrashReport-Native","find obj error %s ","java/lang/Class");
      return 0;
    }
    jc_Class = (**(code **)(*param_1 + 0xa8))(param_1,lVar1);
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (jc_Class == 0)) {
      log2Console(6,"CrashReport-Native","new obj error %s ","java/lang/Class");
      return 0;
    }
  }
  if (jm_Object_getClass == 0) {
    jm_Object_getClass =
         (**(code **)(*param_1 + 0x108))(param_1,jc_Object,"getClass","()Ljava/lang/Class;");
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (jm_Object_getClass == 0)) {
      log2Console(6,"CrashReport-Native","obj get class error");
      return 0;
    }
  }
  if (jm_Class_getName == 0) {
    jm_Class_getName =
         (**(code **)(*param_1 + 0x108))(param_1,jc_Class,"getName","()Ljava/lang/String;");
    lVar1 = checkJavaException(param_1);
    if ((lVar1 != 0) || (jm_Class_getName == 0)) {
      log2Console(6,"CrashReport-Native","obj get class name error");
      return 0;
    }
  }
  lVar1 = (**(code **)(*param_1 + 0x110))(param_1,param_2,jm_Object_getClass);
  lVar2 = checkJavaException(param_1);
  if ((lVar2 == 0) && (lVar1 != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x110))(param_1,lVar1,jm_Class_getName);
    lVar2 = checkJavaException(param_1);
    if ((lVar2 != 0) || (lVar1 == 0)) {
      log2Console(6,"CrashReport-Native","call get calss fail!");
      return 0;
    }
    lVar1 = (**(code **)(*param_1 + 0x548))(param_1,lVar1,0);
    lVar2 = checkJavaException(param_1);
    if ((lVar2 == 0) && (lVar1 != 0)) {
      return lVar1;
    }
    log2Console(6,"CrashReport-Native","jstring to char fail!");
    return 0;
  }
  log2Console(6,"CrashReport-Native","call get class fail!");
  return 0;
}

