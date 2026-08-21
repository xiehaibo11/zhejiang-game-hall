
/* cocos2d::EaseQuarticActionIn::update(float) */

void __thiscall cocos2d::EaseQuarticActionIn::update(EaseQuarticActionIn *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::quartEaseIn(param_1);
                    /* WARNING: Could not recover jumptable at 0x00ed0488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

