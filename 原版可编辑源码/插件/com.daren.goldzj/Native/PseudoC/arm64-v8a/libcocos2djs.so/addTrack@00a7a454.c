
/* cocos2d::AudioMixerController::addTrack(cocos2d::Track*) */

undefined4 __thiscall
cocos2d::AudioMixerController::addTrack(AudioMixerController *this,Track *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Track *pTVar4;
  undefined4 uVar5;
  Track *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_1;
                    /* catch() { ... } // from try @ 00a7a3d8 with catch @ 00a7a484 */
                    /* catch() { ... } // from try @ 00a7a3ec with catch @ 00a7a488 */
  std::__ndk1::mutex::lock((mutex *)(this + 0x18));
                    /* catch() { ... } // from try @ 00a7a3c0 with catch @ 00a7a48c */
                    /* catch() { ... } // from try @ 00a7a3f0 with catch @ 00a7a490 */
  puVar3 = *(undefined8 **)(this + 0x40);
  puVar2 = *(undefined8 **)(this + 0x48);
  if (puVar3 != puVar2) {
    pTVar4 = (Track *)*puVar3;
                    /* catch() { ... } // from try @ 00a7a398 with catch @ 00a7a4a8 */
    while (pTVar4 != param_1) {
      puVar3 = puVar3 + 1;
      if (puVar2 == puVar3) goto LAB_00a7a4d8;
      pTVar4 = (Track *)*puVar3;
    }
  }
  if (puVar3 == puVar2) {
LAB_00a7a4d8:
    if (puVar2 == *(undefined8 **)(this + 0x50)) {
      std::__ndk1::vector<cocos2d::Track*,std::__ndk1::allocator<cocos2d::Track*>>::
      __push_back_slow_path<cocos2d::Track*const&>
                ((vector<cocos2d::Track*,std::__ndk1::allocator<cocos2d::Track*>> *)(this + 0x40),
                 &local_40);
    }
    else {
      *puVar2 = param_1;
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0x18));
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7a590 with catch @ 00a7a520
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7a5c0 with catch @ 00a7a520
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7a5f0 with catch @ 00a7a520
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7a618 with catch @ 00a7a520
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7a644 with catch @ 00a7a520
                        */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

