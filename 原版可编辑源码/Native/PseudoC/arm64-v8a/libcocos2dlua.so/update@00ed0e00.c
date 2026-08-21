
/* cocos2d::EaseCircleActionOut::update(float) */

void __thiscall cocos2d::EaseCircleActionOut::update(EaseCircleActionOut *this,float param_1)

{
  long *plVar1;
  
                    /* try { // try from 00ed0e00 to 00fd0e0f has its CatchHandler @ 00ed1148 */
  plVar1 = *(long **)(this + 0x58);
                    /* try { // try from 00ed0e10 to 00fd0e47 has its CatchHandler @ 00ed09fc */
  tweenfunc::circEaseOut(param_1);
                    /* WARNING: Could not recover jumptable at 0x00ed0e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

