
/* cocos2d::UrlAudioPlayer::setPlayEventCallback(std::__ndk1::function<void
   (cocos2d::IAudioPlayer::State)> const&) */

void __thiscall
cocos2d::UrlAudioPlayer::setPlayEventCallback(UrlAudioPlayer *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = alStack_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
                    /* catch() { ... } // from try @ 00a78ae0 with catch @ 00a78c80 */
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
                    /* catch() { ... } // from try @ 00a78af8 with catch @ 00a78c90 */
  FUN_00a785a0(alStack_60,this + 0x80);
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00a78cbc;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
                    /* catch() { ... } // from try @ 00a78aa0 with catch @ 00a78cb8 */
  (*pcVar3)();
LAB_00a78cbc:
                    /* catch() { ... } // from try @ 00a78a94 with catch @ 00a78cbc */
                    /* catch() { ... } // from try @ 00a78a74 with catch @ 00a78cc0 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00a78aac with catch @ 00a78cd0
                       catch() { ... } // from try @ 00a78b68 with catch @ 00a78cd0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

