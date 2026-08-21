
/* CocosDenshion::android::AndroidJavaEngine::pauseEffect(unsigned int) */

void __thiscall
CocosDenshion::android::AndroidJavaEngine::pauseEffect(AndroidJavaEngine *this,uint param_1)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 local_34;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[8] == (AndroidJavaEngine)0x0) {
    local_30 = (void *)0x0;
    local_40 = (basic_string)0x16;
    uStack_3f = 0x66456573756170;
    local_38 = 0x74636566;
    local_34 = 0;
                    /* try { // try from 00df5b10 to 00ef5b13 has its CatchHandler @ 00df5d04 */
    cocos2d::JniHelper::callStaticVoidMethod<int>((basic_string *)&DAT_01788b10,&local_40,param_1);
    if (((byte)local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    cocos2d::experimental::AudioEngine::pause(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

