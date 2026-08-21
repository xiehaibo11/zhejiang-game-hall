
/* cocos2d::PcmAudioPlayer::setPlayEventCallback(std::__ndk1::function<void
   (cocos2d::IAudioPlayer::State)> const&) */

void __thiscall
cocos2d::PcmAudioPlayer::setPlayEventCallback(PcmAudioPlayer *this,function *param_1)

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
                    /* catch() { ... } // from try @ 00a77da8 with catch @ 00a77fa0
                       catch() { ... } // from try @ 00a77e94 with catch @ 00a77fa0 */
                    /* catch() { ... } // from try @ 00a77d94 with catch @ 00a77fa4
                       catch() { ... } // from try @ 00a77e4c with catch @ 00a77fa4 */
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_60);
  }
  else {
    local_40 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
                    /* catch() { ... } // from try @ 00a77d54 with catch @ 00a77fbc */
                    /* catch() { ... } // from try @ 00a77d48 with catch @ 00a77fc0 */
  FUN_00a785a0(alStack_60,this + 0x60);
                    /* catch() { ... } // from try @ 00a77d28 with catch @ 00a77fc4 */
  if (alStack_60 == local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00a77fec;
                    /* catch() { ... } // from try @ 00a77d60 with catch @ 00a77fd4
                       catch() { ... } // from try @ 00a77de0 with catch @ 00a77fd4
                       catch() { ... } // from try @ 00a77ef0 with catch @ 00a77fd4 */
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)();
LAB_00a77fec:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

