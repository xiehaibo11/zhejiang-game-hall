
/* cocos2d::EaseQuarticActionOut::update(float) */

void __thiscall cocos2d::EaseQuarticActionOut::update(EaseQuarticActionOut *this,float param_1)

{
  long *plVar1;
  
                    /* try { // try from 00ed05c4 to 00fd05cb has its CatchHandler @ 00ed0664 */
                    /* try { // try from 00ed05cc to 00fd067f has its CatchHandler @ 00ed057c */
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::quartEaseOut(param_1);
                    /* WARNING: Could not recover jumptable at 0x00ed05e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

