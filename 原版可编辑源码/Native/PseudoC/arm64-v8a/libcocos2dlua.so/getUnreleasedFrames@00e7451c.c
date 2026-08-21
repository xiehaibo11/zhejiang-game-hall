
/* cocos2d::experimental::AudioMixer::getUnreleasedFrames(int) const */

undefined8 __thiscall
cocos2d::experimental::AudioMixer::getUnreleasedFrames(AudioMixer *this,int param_1)

{
  undefined8 uVar1;
  
  if (((uint)((long)param_1 + -0x1000) < 0x20) &&
     (*(long **)(this + ((long)param_1 + -0x1000) * 0xd0 + 0xb8) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e74544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + ((long)param_1 + -0x1000) * 0xd0 + 0xb8) + 0x48))();
    return uVar1;
  }
  return 0;
}

