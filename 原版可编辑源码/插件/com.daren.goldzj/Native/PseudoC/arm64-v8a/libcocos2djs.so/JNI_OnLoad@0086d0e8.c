
undefined8 JNI_OnLoad(_JavaVM *param_1)

{
  _JNIEnv *p_Var1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  cocos2d::JniHelper::setJavaVM(param_1);
  universe::JniAssistant::setJavaVM(param_1);
  p_Var1 = (_JNIEnv *)cocos2d::JniHelper::getEnv();
  cocos_jni_env_init(p_Var1);
  plVar2 = (long *)cocos2d::JniHelper::getEnv();
  if ((((plVar2 != (long *)0x0) && (DAT_01d35b30 == 0)) &&
      (lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,"android/os/Build$VERSION"), lVar3 != 0)) &&
     (lVar4 = (**(code **)(*plVar2 + 0x480))(plVar2,lVar3,"SDK_INT",&DAT_0188ccb8), lVar4 != 0)) {
    DAT_01d35b30 = (**(code **)(*plVar2 + 0x4b0))(plVar2,lVar3,lVar4);
  }
  return 0x10004;
}

