
/* CocosDenshion::android::AndroidJavaEngine::pauseAllEffects() */

void __thiscall CocosDenshion::android::AndroidJavaEngine::pauseAllEffects(AndroidJavaEngine *this)

{
  long lVar1;
  AndroidJavaEngine *pAVar2;
  basic_string local_50;
  undefined7 uStack_4f;
  undefined1 local_48;
  undefined7 uStack_47;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[8] == (AndroidJavaEngine)0x0) {
    local_50 = (basic_string)0x1e;
    uStack_47 = 0x73746365666645;
    local_40 = (void *)0x0;
    uStack_4f = 0x6c416573756170;
    local_48 = 0x6c;
    cocos2d::JniHelper::callStaticVoidMethod<>((basic_string *)&DAT_01788b10,&local_50);
    if (((byte)local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    for (pAVar2 = *(AndroidJavaEngine **)(this + 0x18); this + 0x10 != pAVar2;
        pAVar2 = *(AndroidJavaEngine **)(pAVar2 + 8)) {
      cocos2d::experimental::AudioEngine::pause(*(int *)(pAVar2 + 0x10));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00df5ef8 to 00ef5fbb has its CatchHandler @ 00df5ef8
                       catch(type#1 @ 00000000) { ... } // from try @ 00df5ef8 with catch @ 00df5ef8
                       catch(type#1 @ 00000000) { ... } // from try @ 00df6194 with catch @ 00df5ef8
                        */
  __stack_chk_fail();
}

