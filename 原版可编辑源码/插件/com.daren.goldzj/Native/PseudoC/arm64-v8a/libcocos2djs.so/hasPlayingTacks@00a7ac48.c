
/* cocos2d::AudioMixerController::hasPlayingTacks() */

undefined4 __thiscall cocos2d::AudioMixerController::hasPlayingTacks(AudioMixerController *this)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0x18));
  plVar1 = *(long **)(this + 0x40);
  do {
    if (plVar1 == *(long **)(this + 0x48)) {
      uVar3 = 0;
      goto LAB_00a7ac94;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (2 < *(uint *)(lVar2 + 0xa4));
  uVar3 = 1;
LAB_00a7ac94:
                    /* try { // try from 00a7ac94 to 00b7acbb has its CatchHandler @ 00a7ae80 */
  std::__ndk1::mutex::unlock((mutex *)(this + 0x18));
  return uVar3;
}

