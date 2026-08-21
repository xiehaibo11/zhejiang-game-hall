
/* cocos2d::EaseQuinticActionIn::update(float) */

void __thiscall cocos2d::EaseQuinticActionIn::update(EaseQuinticActionIn *this,float param_1)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 00ed08e4 with catch @ 00ed0888 */
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::quintEaseIn(param_1);
                    /* WARNING: Could not recover jumptable at 0x00ed08a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

