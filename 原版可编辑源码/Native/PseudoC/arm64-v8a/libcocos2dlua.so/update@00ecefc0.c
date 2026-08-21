
/* cocos2d::EaseExponentialIn::update(float) */

void __thiscall cocos2d::EaseExponentialIn::update(EaseExponentialIn *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::expoEaseIn(param_1);
                    /* catch() { ... } // from try @ 00ecef78 with catch @ 00ecefe0 */
                    /* WARNING: Could not recover jumptable at 0x00ecefe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

