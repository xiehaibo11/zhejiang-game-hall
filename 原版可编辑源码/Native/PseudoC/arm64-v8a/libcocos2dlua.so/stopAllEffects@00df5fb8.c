
/* CocosDenshion::android::AndroidJavaEngine::stopAllEffects() */

void __thiscall CocosDenshion::android::AndroidJavaEngine::stopAllEffects(AndroidJavaEngine *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  AndroidJavaEngine *pAVar4;
  AndroidJavaEngine *pAVar5;
  basic_string local_50;
  undefined6 local_4f;
  undefined2 uStack_49;
  undefined6 uStack_47;
  undefined1 local_41;
  void *local_40;
  long local_38;
  
                    /* try { // try from 00df5fbc to 00ef6013 has its CatchHandler @ 00df6034 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (this[8] == (AndroidJavaEngine)0x0) {
    local_40 = (void *)0x0;
    local_50 = (basic_string)0x1c;
    local_4f = 0x6c41706f7473;
    uStack_49 = 0x456c;
    uStack_47 = 0x737463656666;
    local_41 = 0;
    cocos2d::JniHelper::callStaticVoidMethod<>((basic_string *)&DAT_01788b10,&local_50);
    if (((byte)local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    for (pAVar5 = *(AndroidJavaEngine **)(this + 0x18); this + 0x10 != pAVar5;
        pAVar5 = *(AndroidJavaEngine **)(pAVar5 + 8)) {
      cocos2d::experimental::AudioEngine::stop(*(int *)(pAVar5 + 0x10));
    }
    if (*(long *)(this + 0x20) != 0) {
      lVar1 = *(long *)(this + 0x10);
      pAVar5 = *(AndroidJavaEngine **)(this + 0x18);
      lVar3 = *(long *)pAVar5;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = lVar3;
      *(undefined8 *)(this + 0x20) = 0;
      while (pAVar5 != this + 0x10) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df5fbc with catch @ 00df6034
                        */
        pAVar4 = *(AndroidJavaEngine **)(pAVar5 + 8);
        operator_delete(pAVar5);
        pAVar5 = pAVar4;
      }
    }
  }
                    /* try { // try from 00df6094 to 00ef6097 has its CatchHandler @ 00df631c */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

