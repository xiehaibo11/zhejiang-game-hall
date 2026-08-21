
/* cocos2d::AudioMixer::invalidateState(unsigned int) */

void __thiscall cocos2d::AudioMixer::invalidateState(AudioMixer *this,uint param_1)

{
  if (param_1 != 0) {
                    /* try { // try from 00a7b338 to 00b7b35f has its CatchHandler @ 00a7b444 */
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | param_1;
    *(code **)(this + 0x30) = process__validate;
  }
  return;
}

