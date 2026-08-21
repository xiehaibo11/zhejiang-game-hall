
/* cocos2d::Speed::step(float) */

void __thiscall cocos2d::Speed::step(Speed *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ecb540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x50) + 0x40))
            (*(float *)(this + 0x4c) * param_1,*(long **)(this + 0x50));
  return;
}

