
/* cocos2d::JniHelper::setClassLoaderFrom(_jobject*) */

void cocos2d::JniHelper::setClassLoaderFrom(_jobject *param_1)

{
  long lVar1;
  ulong uVar2;
  _jobject *p_Var3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  JniMethodInfo_ aJStack_68 [16];
  undefined8 local_58;
  JniMethodInfo_ aJStack_50 [16];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = getMethodInfo_DefaultClassLoader
                    (aJStack_50,"android/content/Context","getClassLoader",
                     "()Ljava/lang/ClassLoader;");
  if ((uVar2 & 1) != 0) {
    p_Var3 = pthread_getspecific(DAT_01d35bd8);
    if (p_Var3 == (_jobject *)0x0) {
      p_Var3 = (_jobject *)cacheEnv(_psJavaVM);
    }
    lVar4 = _JNIEnv::CallObjectMethod(p_Var3,(_jmethodID *)param_1,local_40);
    uVar6 = 0;
    if (lVar4 == 0) goto LAB_0086fda4;
    uVar2 = getMethodInfo_DefaultClassLoader
                      (aJStack_68,"java/lang/ClassLoader","loadClass",
                       "(Ljava/lang/String;)Ljava/lang/Class;");
    if ((uVar2 & 1) != 0) {
      plVar5 = pthread_getspecific(DAT_01d35bd8);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)cacheEnv(_psJavaVM);
      }
      classloader = (**(code **)(*plVar5 + 0xa8))(plVar5,lVar4);
      loadclassMethod_methodID = local_58;
      plVar5 = pthread_getspecific(DAT_01d35bd8);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)cacheEnv(_psJavaVM);
      }
      _activity = (**(code **)(*plVar5 + 0xa8))(plVar5,param_1);
      if (classloaderCallback._32_8_ != 0) {
        (**(code **)(*(long *)classloaderCallback._32_8_ + 0x30))();
      }
      uVar6 = 1;
      goto LAB_0086fda4;
    }
  }
  uVar6 = 0;
LAB_0086fda4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

