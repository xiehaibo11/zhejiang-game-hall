
/* _getClassID(char const*) */

long _getClassID(char *param_1)

{
  _jobject *p_Var1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == (char *)0x0) {
    lVar3 = 0;
  }
  else {
    p_Var1 = pthread_getspecific(DAT_01781ca8);
    if (p_Var1 == (_jobject *)0x0) {
      p_Var1 = (_jobject *)cocos2d::JniHelper::cacheEnv(cocos2d::JniHelper::_psJavaVM);
    }
    uVar2 = (**(code **)(*(long *)p_Var1 + 0x538))(p_Var1,param_1);
    lVar3 = _JNIEnv::CallObjectMethod
                      (p_Var1,cocos2d::JniHelper::classloader,
                       cocos2d::JniHelper::loadclassMethod_methodID,uVar2);
    if (lVar3 == 0) {
      __android_log_print(6,"JniHelper","Classloader failed to find class of %s",param_1);
      (**(code **)(*(long *)p_Var1 + 0x88))(p_Var1);
    }
    (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,uVar2);
  }
  return lVar3;
}

