
/* cocos2d::JniHelper::getJavaVM() */

undefined8 cocos2d::JniHelper::getJavaVM(void)

{
  pthread_t pVar1;
  
  pVar1 = pthread_self();
  __android_log_print(3,"JniHelper","JniHelper::getJavaVM(), pthread_self() = %ld",pVar1);
  return _psJavaVM;
}

