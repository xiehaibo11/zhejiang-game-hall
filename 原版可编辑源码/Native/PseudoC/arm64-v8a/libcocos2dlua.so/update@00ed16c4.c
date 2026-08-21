
/* cocos2d::EaseOut::update(float) */

void __thiscall cocos2d::EaseOut::update(EaseOut *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::easeOut(param_1,*(float *)(this + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00ed16f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

