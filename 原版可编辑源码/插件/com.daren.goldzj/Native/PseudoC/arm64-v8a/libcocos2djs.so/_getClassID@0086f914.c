
/* _getClassID(char const*) */

long _getClassID(char *param_1)

{
  char cVar1;
  _jobject *p_Var2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == (char *)0x0) {
    lVar4 = 0;
  }
  else {
    p_Var2 = pthread_getspecific(DAT_01d35bd8);
    if (p_Var2 == (_jobject *)0x0) {
      p_Var2 = (_jobject *)cocos2d::JniHelper::cacheEnv(cocos2d::JniHelper::_psJavaVM);
    }
    uVar3 = (**(code **)(*(long *)p_Var2 + 0x538))(p_Var2,param_1);
    lVar4 = _JNIEnv::CallObjectMethod
                      (p_Var2,cocos2d::JniHelper::classloader,
                       cocos2d::JniHelper::loadclassMethod_methodID,uVar3);
    if ((lVar4 == 0) || (cVar1 = (**(code **)(*(long *)p_Var2 + 0x720))(p_Var2), cVar1 != '\0')) {
      __android_log_print(6,"JniHelper","Classloader failed to find class of %s",param_1);
      (**(code **)(*(long *)p_Var2 + 0x88))(p_Var2);
      lVar4 = 0;
    }
    (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar3);
  }
  return lVar4;
}

