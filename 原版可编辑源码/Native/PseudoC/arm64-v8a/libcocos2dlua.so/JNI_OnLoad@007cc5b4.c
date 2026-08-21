
undefined8 JNI_OnLoad(_JavaVM *param_1)

{
  _JNIEnv *p_Var1;
  
  cocos2d::JniHelper::setJavaVM(param_1);
  universe::JniAssistant::setJavaVM(param_1);
  p_Var1 = (_JNIEnv *)cocos2d::JniHelper::getEnv();
  cocos_android_app_init(p_Var1);
  return 0x10004;
}

