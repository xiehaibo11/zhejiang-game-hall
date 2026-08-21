
/* cocos2d::experimental::AudioMixer::deleteTrackName(int) */

void __thiscall cocos2d::experimental::AudioMixer::deleteTrackName(AudioMixer *this,int param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = (long)param_1 + -0x1000;
  if (*(short *)(this + lVar2 * 0xd0 + 0x86) != 0) {
    *(short *)(this + lVar2 * 0xd0 + 0x86) = 0;
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1 << (ulong)((uint)lVar2 & 0x1f);
    *(code **)(this + 0x30) = process__validate;
  }
  plVar1 = *(long **)(this + lVar2 * 0xd0 + 0xb8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined8 *)(this + lVar2 * 0xd0 + 0xb8) = 0;
  *(undefined4 *)(this + lVar2 * 0xd0 + 0xf0) = 0xffffffff;
  *(uint *)this = *(uint *)this & (1 << (ulong)((uint)lVar2 & 0x1f) ^ 0xffffffffU);
  return;
}

