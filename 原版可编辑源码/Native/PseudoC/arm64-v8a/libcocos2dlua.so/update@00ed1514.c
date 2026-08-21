
/* cocos2d::EaseIn::update(float) */

void __thiscall cocos2d::EaseIn::update(EaseIn *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::easeIn(param_1,*(float *)(this + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00ed1540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

