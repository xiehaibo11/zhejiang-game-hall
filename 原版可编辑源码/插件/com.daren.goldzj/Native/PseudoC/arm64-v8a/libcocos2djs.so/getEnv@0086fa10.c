
/* cocos2d::JniHelper::getEnv() */

void cocos2d::JniHelper::getEnv(void)

{
  void *pvVar1;
  
  pvVar1 = pthread_getspecific(DAT_01d35bd8);
  if (pvVar1 != (void *)0x0) {
    return;
  }
  cacheEnv(_psJavaVM);
  return;
}

