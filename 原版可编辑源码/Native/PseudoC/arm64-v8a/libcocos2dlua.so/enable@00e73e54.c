
/* cocos2d::experimental::AudioMixer::enable(int) */

void __thiscall cocos2d::experimental::AudioMixer::enable(AudioMixer *this,int param_1)

{
  if (*(short *)(this + ((long)param_1 + -0x1000) * 0xd0 + 0x86) != 0) {
    return;
  }
  *(short *)(this + ((long)param_1 + -0x1000) * 0xd0 + 0x86) = 1;
  *(uint *)(this + 0x24) =
       *(uint *)(this + 0x24) | 1 << (ulong)((uint)((long)param_1 + -0x1000) & 0x1f);
  *(code **)(this + 0x30) = process__validate;
  return;
}

