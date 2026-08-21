
/* cocos2d::EaseCircleActionIn::update(float) */

void __thiscall cocos2d::EaseCircleActionIn::update(EaseCircleActionIn *this,float param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x58);
  tweenfunc::circEaseIn(param_1);
                    /* try { // try from 00ed0cbc to 00fd0ccb has its CatchHandler @ 00ed116c */
                    /* WARNING: Could not recover jumptable at 0x00ed0cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

