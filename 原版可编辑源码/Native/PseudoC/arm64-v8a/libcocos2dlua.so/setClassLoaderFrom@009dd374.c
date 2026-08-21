
/* universe::JniAssistant::setClassLoaderFrom(_jobject*) */

undefined8 universe::JniAssistant::setClassLoaderFrom(_jobject *param_1)

{
  long *plVar1;
  long lVar2;
  _jobject *p_Var3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  
  plVar1 = (long *)getEnv();
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/content/Context");
  if (lVar2 == 0) {
    pcVar5 = "Failed to find class %s";
    pcVar6 = "android/content/Context";
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x108))
                      (plVar1,lVar2,"getClassLoader","()Ljava/lang/ClassLoader;");
    if (lVar2 == 0) {
      pcVar5 = "Failed to find method id of %s";
      pcVar6 = "getClassLoader";
    }
    else {
      p_Var3 = (_jobject *)getEnv();
      lVar2 = _JNIEnv::CallObjectMethod(p_Var3,(_jmethodID *)param_1,lVar2);
      if (lVar2 == 0) {
        return 0;
      }
      plVar1 = (long *)getEnv();
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,"java/lang/ClassLoader");
      if (lVar4 == 0) {
        pcVar5 = "Failed to find class %s";
        pcVar6 = "java/lang/ClassLoader";
      }
      else {
        lVar4 = (**(code **)(*plVar1 + 0x108))
                          (plVar1,lVar4,"loadClass","(Ljava/lang/String;)Ljava/lang/Class;");
        if (lVar4 != 0) {
          plVar1 = (long *)getEnv();
          DAT_01782250 = (**(code **)(*plVar1 + 0xa8))(plVar1,lVar2);
          DAT_01782258 = lVar4;
          plVar1 = (long *)getEnv();
          DAT_01782260 = (**(code **)(*plVar1 + 0xa8))(plVar1,param_1);
          return 1;
        }
        pcVar5 = "Failed to find method id of %s";
        pcVar6 = "loadClass";
      }
    }
  }
  __android_log_print(6,"JniAssistant",pcVar5,pcVar6);
  (**(code **)(*plVar1 + 0x88))(plVar1);
  return 0;
}

