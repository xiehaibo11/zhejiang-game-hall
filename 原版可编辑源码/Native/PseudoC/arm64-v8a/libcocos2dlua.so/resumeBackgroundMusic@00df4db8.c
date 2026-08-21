
/* CocosDenshion::android::AndroidJavaEngine::resumeBackgroundMusic() */

void CocosDenshion::android::AndroidJavaEngine::resumeBackgroundMusic(void)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined5 uStack_37;
  undefined2 uStack_32;
  undefined1 uStack_30;
  undefined5 uStack_2f;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_29 = 0;
  local_40 = (basic_string)0x2a;
  uStack_2f = 0x636973754d;
  uStack_37 = 0x6f72676b63;
  uStack_32 = 0x6e75;
  uStack_30 = 100;
  uStack_3f = 0x42656d75736572;
  uStack_38 = 0x61;
  uStack_2a = 0;
  cocos2d::JniHelper::callStaticVoidMethod<>((basic_string *)&DAT_01788b10,&local_40);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_29,CONCAT16(uStack_2a,CONCAT51(uStack_2f,uStack_30))));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

