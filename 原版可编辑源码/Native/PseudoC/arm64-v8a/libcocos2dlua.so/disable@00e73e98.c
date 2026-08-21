
/* cocos2d::experimental::AudioMixer::disable(int) */

void __thiscall cocos2d::experimental::AudioMixer::disable(AudioMixer *this,int param_1)

{
  if (*(short *)(this + ((long)param_1 + -0x1000) * 0xd0 + 0x86) != 0) {
    *(short *)(this + ((long)param_1 + -0x1000) * 0xd0 + 0x86) = 0;
    *(uint *)(this + 0x24) =
         *(uint *)(this + 0x24) | 1 << (ulong)((uint)((long)param_1 + -0x1000) & 0x1f);
    *(code **)(this + 0x30) = process__validate;
  }
  return;
}

