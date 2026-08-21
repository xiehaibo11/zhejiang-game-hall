
/* cocos2d::EaseCubicActionOut::update(float) */

void __thiscall cocos2d::EaseCubicActionOut::update(EaseCubicActionOut *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::cubicEaseOut(param_1);
                    /* catch() { ... } // from try @ 00ed0a48 with catch @ 00ed123c */
                    /* catch() { ... } // from try @ 00ed0a60 with catch @ 00ed1240 */
                    /* WARNING: Could not recover jumptable at 0x00ed1248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

