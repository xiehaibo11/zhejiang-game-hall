
/* CocosDenshion::android::AndroidJavaEngine::setEffectsVolume(float) */

void __thiscall
CocosDenshion::android::AndroidJavaEngine::setEffectsVolume(AndroidJavaEngine *this,float param_1)

{
  long lVar1;
  AndroidJavaEngine *pAVar2;
  float fVar3;
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
    uStack_47 = 0x6d756c6f567374;
    uStack_40 = 0x65;
    uStack_4f = 0x65666645746573;
    uStack_48 = 99;
    uStack_3f = 0;
    cocos2d::JniHelper::callStaticVoidMethod<float>((basic_string *)&DAT_01788b10,&local_50,param_1)
    ;
    if (((byte)local_50 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40)));
    }
  }
  else {
    fVar3 = 1.0;
    if ((param_1 <= 1.0) && (fVar3 = param_1, param_1 < 0.0)) {
      fVar3 = 0.0;
    }
    if (*(float *)(this + 0xc) != fVar3) {
      pAVar2 = *(AndroidJavaEngine **)(this + 0x18);
      *(float *)(this + 0xc) = fVar3;
      for (; this + 0x10 != pAVar2; pAVar2 = *(AndroidJavaEngine **)(pAVar2 + 8)) {
        cocos2d::experimental::AudioEngine::setVolume(*(int *)(pAVar2 + 0x10),fVar3);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

