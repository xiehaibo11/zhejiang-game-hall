
/* CocosDenshion::android::AndroidJavaEngine::stopBackgroundMusic(bool) */

void CocosDenshion::android::AndroidJavaEngine::stopBackgroundMusic(bool param_1)

{
  long lVar1;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (basic_string)0x26;
  uStack_37 = 0x4d646e756f7267;
  uStack_30 = 0x63697375;
  uStack_3f = 0x636142706f7473;
  uStack_38 = 0x6b;
  uStack_2c = 0;
  cocos2d::JniHelper::callStaticVoidMethod<>((basic_string *)&DAT_01788b10,&local_40);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_2c,uStack_30));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

