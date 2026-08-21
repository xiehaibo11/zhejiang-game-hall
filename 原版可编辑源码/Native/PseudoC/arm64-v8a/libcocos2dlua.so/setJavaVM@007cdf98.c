
/* cocos2d::JniHelper::setJavaVM(_JavaVM*) */

int cocos2d::JniHelper::setJavaVM(_JavaVM *param_1)

{
  int iVar1;
  
  _psJavaVM = param_1;
  iVar1 = pthread_key_create(&DAT_01781ca8,_detachCurrentThread);
  return iVar1;
}

