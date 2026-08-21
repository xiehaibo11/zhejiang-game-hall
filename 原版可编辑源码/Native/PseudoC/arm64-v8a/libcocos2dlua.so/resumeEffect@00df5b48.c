
/* CocosDenshion::android::AndroidJavaEngine::resumeEffect(unsigned int) */

void __thiscall
CocosDenshion::android::AndroidJavaEngine::resumeEffect(AndroidJavaEngine *this,uint param_1)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined4 local_37;
  undefined1 local_33;
  undefined2 uStack_32;
  void *local_30;
  long local_28;
  
                    /* try { // try from 00df5b4c to 00ef5b4f has its CatchHandler @ 00df5cf8 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[8] == (AndroidJavaEngine)0x0) {
                    /* try { // try from 00df5b84 to 00ef5b87 has its CatchHandler @ 00df5cec */
                    /* try { // try from 00df5b88 to 00ef5d2b has its CatchHandler @ 00df5928 */
    uStack_32 = 0;
    local_30 = (void *)0x0;
    local_40 = (basic_string)0x18;
    local_37 = 0x74636566;
    uStack_3f = 0x45656d75736572;
    uStack_38 = 0x66;
    local_33 = 0;
    cocos2d::JniHelper::callStaticVoidMethod<int>((basic_string *)&DAT_01788b10,&local_40,param_1);
    if (((byte)local_40 & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    cocos2d::experimental::AudioEngine::resume(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

