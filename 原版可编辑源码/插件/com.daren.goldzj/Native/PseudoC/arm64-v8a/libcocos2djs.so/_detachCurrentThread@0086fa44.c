
/* _detachCurrentThread(void*) */

void _detachCurrentThread(void *param_1)

{
  pthread_t pVar1;
  
  pVar1 = pthread_self();
  __android_log_print(3,"JniHelper","JniHelper::getJavaVM(), pthread_self() = %ld",pVar1);
                    /* WARNING: Could not recover jumptable at 0x0086fa84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*cocos2d::JniHelper::_psJavaVM + 0x28))();
  return;
}

