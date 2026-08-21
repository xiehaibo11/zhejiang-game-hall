
/* cocos2d::experimental::AudioMixer::invalidateState(unsigned int) */

void __thiscall cocos2d::experimental::AudioMixer::invalidateState(AudioMixer *this,uint param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | param_1;
    *(code **)(this + 0x30) = process__validate;
  }
  return;
}

