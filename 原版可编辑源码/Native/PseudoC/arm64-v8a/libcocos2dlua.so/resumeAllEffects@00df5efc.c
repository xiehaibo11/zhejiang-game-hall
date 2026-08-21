
/* CocosDenshion::android::AndroidJavaEngine::resumeAllEffects() */

void __thiscall CocosDenshion::android::AndroidJavaEngine::resumeAllEffects(AndroidJavaEngine *this)

{
  long lVar1;
  AndroidJavaEngine *pAVar2;
  basic_string local_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[8] == (AndroidJavaEngine)0x0) {
    uStack_3e = 0;
    local_50 = (basic_string)0x20;
    uStack_47 = 0x7463656666456c;
    uStack_40 = 0x73;
    uStack_4f = 0x41656d75736572;
    uStack_48 = 0x6c;
    uStack_3f = 0;
    cocos2d::JniHelper::callStaticVoidMethod<>((basic_string *)&DAT_01788b10,&local_50);
    if (((byte)local_50 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40)));
    }
  }
  else {
    for (pAVar2 = *(AndroidJavaEngine **)(this + 0x18); this + 0x10 != pAVar2;
        pAVar2 = *(AndroidJavaEngine **)(pAVar2 + 8)) {
      cocos2d::experimental::AudioEngine::resume(*(int *)(pAVar2 + 0x10));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

