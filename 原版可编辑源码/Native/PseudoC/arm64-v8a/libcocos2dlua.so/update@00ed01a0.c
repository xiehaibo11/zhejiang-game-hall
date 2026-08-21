
/* cocos2d::EaseQuadraticActionOut::update(float) */

void __thiscall cocos2d::EaseQuadraticActionOut::update(EaseQuadraticActionOut *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::quadraticOut(param_1);
                    /* WARNING: Could not recover jumptable at 0x00ed01c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

