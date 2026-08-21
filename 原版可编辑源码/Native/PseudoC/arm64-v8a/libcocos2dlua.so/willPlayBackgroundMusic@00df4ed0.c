
/* CocosDenshion::android::AndroidJavaEngine::willPlayBackgroundMusic() */

bool CocosDenshion::android::AndroidJavaEngine::willPlayBackgroundMusic(void)

{
  long lVar1;
  bool bVar2;
  ulong local_40 [2];
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = operator_new(0x20);
  builtin_strncpy(local_30,"willPlayBackgroundMusic",0x18);
  local_40[1] = 0x17;
  local_40[0] = 0x21;
  bVar2 = cocos2d::JniHelper::callStaticBooleanMethod<>
                    ((basic_string *)&DAT_01788b10,(basic_string *)local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

