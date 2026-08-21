
/* CocosDenshion::android::AndroidJavaEngine::~AndroidJavaEngine() */

void __thiscall
CocosDenshion::android::AndroidJavaEngine::~AndroidJavaEngine(AndroidJavaEngine *this)

{
  long lVar1;
  AndroidJavaEngine *pAVar2;
  long lVar3;
  long lVar4;
  AndroidJavaEngine *pAVar5;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  *(undefined ***)this = &PTR_preloadBackgroundMusic_016e74e8;
  if (this[8] != (AndroidJavaEngine)0x0) {
                    /* try { // try from 00df4398 to 00ef43a7 has its CatchHandler @ 00df44f0 */
    stopAllEffects(this);
  }
                    /* try { // try from 00df43a8 to 00ef4503 has its CatchHandler @ 00df4318 */
  uStack_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0x646e6506;
  cocos2d::JniHelper::callStaticVoidMethod<>
            ((basic_string *)&DAT_01788b10,(basic_string *)&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(this + 0x20) != 0) {
    lVar1 = *(long *)(this + 0x10);
    pAVar2 = *(AndroidJavaEngine **)(this + 0x18);
    lVar4 = *(long *)pAVar2;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar4;
    *(undefined8 *)(this + 0x20) = 0;
    while (pAVar2 != this + 0x10) {
      pAVar5 = *(AndroidJavaEngine **)(pAVar2 + 8);
      operator_delete(pAVar2);
      pAVar2 = pAVar5;
    }
  }
  SimpleAudioEngine::~SimpleAudioEngine((SimpleAudioEngine *)this);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

