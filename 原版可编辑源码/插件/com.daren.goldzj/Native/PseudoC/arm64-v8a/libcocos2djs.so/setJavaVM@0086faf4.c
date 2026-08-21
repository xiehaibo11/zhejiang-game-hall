
/* cocos2d::JniHelper::setJavaVM(_JavaVM*) */

int cocos2d::JniHelper::setJavaVM(_JavaVM *param_1)

{
  int iVar1;
  pthread_t pVar2;
  
  pVar2 = pthread_self();
  __android_log_print(3,"JniHelper","JniHelper::setJavaVM(%p), pthread_self() = %ld",param_1,pVar2);
  _psJavaVM = param_1;
  iVar1 = pthread_key_create(&DAT_01d35bd8,_detachCurrentThread);
  return iVar1;
}

