
/* cocos2d::AudioMixer::enable(int) */

void __thiscall cocos2d::AudioMixer::enable(AudioMixer *this,int param_1)

{
                    /* try { // try from 00a7baf0 to 00b7baf7 has its CatchHandler @ 00a7bbec */
                    /* try { // try from 00a7baf8 to 00b7bb1b has its CatchHandler @ 00a7ba88 */
  if (*(short *)(this + ((long)param_1 + -0x1000) * 0xd0 + 0x86) != 0) {
    return;
  }
  *(short *)(this + ((long)param_1 + -0x1000) * 0xd0 + 0x86) = 1;
                    /* try { // try from 00a7bb1c to 00b7bb27 has its CatchHandler @ 00a7bbec */
  *(uint *)(this + 0x24) =
       *(uint *)(this + 0x24) | 1 << (ulong)((uint)((long)param_1 + -0x1000) & 0x1f);
                    /* try { // try from 00a7bb28 to 00b7bb4f has its CatchHandler @ 00a7ba88 */
  *(code **)(this + 0x30) = process__validate;
  return;
}

