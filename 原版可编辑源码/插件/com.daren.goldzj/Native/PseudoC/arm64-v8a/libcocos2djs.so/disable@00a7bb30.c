
/* cocos2d::AudioMixer::disable(int) */

void __thiscall cocos2d::AudioMixer::disable(AudioMixer *this,int param_1)

{
  if (*(short *)(this + ((long)param_1 + -0x1000) * 0xd0 + 0x86) != 0) {
    *(short *)(this + ((long)param_1 + -0x1000) * 0xd0 + 0x86) = 0;
                    /* try { // try from 00a7bb50 to 00b7bb57 has its CatchHandler @ 00a7bbe8 */
                    /* try { // try from 00a7bb58 to 00b7bb77 has its CatchHandler @ 00a7ba88 */
    *(uint *)(this + 0x24) =
         *(uint *)(this + 0x24) | 1 << (ulong)((uint)((long)param_1 + -0x1000) & 0x1f);
    *(code **)(this + 0x30) = process__validate;
  }
  return;
}

