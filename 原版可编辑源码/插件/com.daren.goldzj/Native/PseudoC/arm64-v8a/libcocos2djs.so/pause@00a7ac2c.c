
/* cocos2d::AudioMixerController::pause() */

void __thiscall cocos2d::AudioMixerController::pause(AudioMixerController *this)

{
  *(undefined4 *)(this + 0x68) = 1;
                    /* try { // try from 00a7ac38 to 00b7ac93 has its CatchHandler @ 00a7ac38
                       catch() { ... } // from try @ 00a7ac38 with catch @ 00a7ac38
                       catch() { ... } // from try @ 00a7ad08 with catch @ 00a7ac38
                       catch() { ... } // from try @ 00a7ae28 with catch @ 00a7ac38 */
  return;
}

