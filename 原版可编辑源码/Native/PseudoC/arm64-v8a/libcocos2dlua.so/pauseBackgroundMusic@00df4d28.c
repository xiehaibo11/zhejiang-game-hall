
/* CocosDenshion::android::AndroidJavaEngine::pauseBackgroundMusic() */

void CocosDenshion::android::AndroidJavaEngine::pauseBackgroundMusic(void)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2a = 0;
  local_40 = (basic_string)0x28;
  uStack_2f = 0x63697375;
  uStack_37 = 0x646e756f72676b;
  uStack_30 = 0x4d;
  uStack_3f = 0x61426573756170;
  uStack_38 = 99;
  uStack_2b = 0;
  cocos2d::JniHelper::callStaticVoidMethod<>((basic_string *)&DAT_01788b10,&local_40);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_2a,CONCAT15(uStack_2b,CONCAT41(uStack_2f,uStack_30))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

