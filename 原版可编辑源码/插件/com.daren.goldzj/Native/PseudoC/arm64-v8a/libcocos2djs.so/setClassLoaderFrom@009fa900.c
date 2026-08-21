
/* universe::JniAssistant::setClassLoaderFrom(_jobject*) */

undefined8 universe::JniAssistant::setClassLoaderFrom(_jobject *param_1)

{
  long *plVar1;
  long lVar2;
  _jobject *p_Var3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  
                    /* try { // try from 009fa904 to 00afa90b has its CatchHandler @ 009fa90c */
                    /* catch() { ... } // from try @ 009fa830 with catch @ 009fa90c
                       catch() { ... } // from try @ 009fa904 with catch @ 009fa90c
                       try { // try from 009fa90c to 00afa947 has its CatchHandler @ 009fa780 */
  plVar1 = (long *)getEnv();
  if (plVar1 == (long *)0x0) {
    return 0;
  }
                    /* catch() { ... } // from try @ 009fa88c with catch @ 009fa91c */
  lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,"android/content/Context");
  if (lVar2 == 0) {
    pcVar5 = "Failed to find class %s";
    pcVar6 = "android/content/Context";
  }
  else {
                    /* try { // try from 009fa948 to 00afaa6f has its CatchHandler @ 009fa948
                       catch() { ... } // from try @ 009fa948 with catch @ 009fa948
                       catch() { ... } // from try @ 009faa78 with catch @ 009fa948
                       catch() { ... } // from try @ 009faba4 with catch @ 009fa948 */
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
                    /* try { // try from 009faa78 to 00afaacf has its CatchHandler @ 009fa948 */
        pcVar5 = "Failed to find class %s";
        pcVar6 = "java/lang/ClassLoader";
      }
      else {
        lVar4 = (**(code **)(*plVar1 + 0x108))
                          (plVar1,lVar4,"loadClass","(Ljava/lang/String;)Ljava/lang/Class;");
        if (lVar4 != 0) {
          plVar1 = (long *)getEnv();
          DAT_01d38a10 = (**(code **)(*plVar1 + 0xa8))(plVar1,lVar2);
          DAT_01d38a18 = lVar4;
          plVar1 = (long *)getEnv();
          DAT_01d38a20 = (**(code **)(*plVar1 + 0xa8))(plVar1,param_1);
          return 1;
        }
        pcVar5 = "Failed to find method id of %s";
        pcVar6 = "loadClass";
      }
    }
  }
  __android_log_print(6,"JniAssistant",pcVar5,pcVar6);
  (**(code **)(*plVar1 + 0x88))(plVar1);
                    /* try { // try from 009faa70 to 00afaa77 has its CatchHandler @ 009fabb0 */
  return 0;
}

