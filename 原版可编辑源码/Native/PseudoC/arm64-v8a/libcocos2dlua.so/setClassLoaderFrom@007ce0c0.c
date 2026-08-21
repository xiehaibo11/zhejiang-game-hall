
/* cocos2d::JniHelper::setClassLoaderFrom(_jobject*) */

undefined8 cocos2d::JniHelper::setClassLoaderFrom(_jobject *param_1)

{
  ulong uVar1;
  _jobject *p_Var2;
  long lVar3;
  long *plVar4;
  JniMethodInfo_ aJStack_60 [16];
  undefined8 local_50;
  JniMethodInfo_ aJStack_48 [16];
  undefined8 local_38;
  
  uVar1 = getMethodInfo_DefaultClassLoader
                    (aJStack_48,"android/content/Context","getClassLoader",
                     "()Ljava/lang/ClassLoader;");
  if ((uVar1 & 1) != 0) {
    p_Var2 = pthread_getspecific(DAT_01781ca8);
    if (p_Var2 == (_jobject *)0x0) {
      p_Var2 = (_jobject *)cacheEnv(_psJavaVM);
    }
    lVar3 = _JNIEnv::CallObjectMethod(p_Var2,(_jmethodID *)param_1,local_38);
    if (lVar3 == 0) {
      return 0;
    }
    uVar1 = getMethodInfo_DefaultClassLoader
                      (aJStack_60,"java/lang/ClassLoader","loadClass",
                       "(Ljava/lang/String;)Ljava/lang/Class;");
    if ((uVar1 & 1) != 0) {
      plVar4 = pthread_getspecific(DAT_01781ca8);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)cacheEnv(_psJavaVM);
      }
      classloader = (**(code **)(*plVar4 + 0xa8))(plVar4,lVar3);
      loadclassMethod_methodID = local_50;
      plVar4 = pthread_getspecific(DAT_01781ca8);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)cacheEnv(_psJavaVM);
      }
      _activity = (**(code **)(*plVar4 + 0xa8))(plVar4,param_1);
      if (classloaderCallback._32_8_ != 0) {
        (**(code **)(*(long *)classloaderCallback._32_8_ + 0x30))();
      }
      return 1;
    }
  }
  return 0;
}

