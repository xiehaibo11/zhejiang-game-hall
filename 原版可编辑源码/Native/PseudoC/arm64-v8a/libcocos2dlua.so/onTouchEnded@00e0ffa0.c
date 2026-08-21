
/* cocos2d::extension::ControlPotentiometer::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlPotentiometer::onTouchEnded(Touch *param_1,Event *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x6b8))();
                    /* try { // try from 00e0ffbc to 00f0ffbf has its CatchHandler @ 00e1000c */
                    /* try { // try from 00e0ffc0 to 00f10003 has its CatchHandler @ 00e0ff84 */
  (**(code **)(*plVar1 + 0x4c0))(plVar1,&Color3B::WHITE);
                    /* WARNING: Could not recover jumptable at 0x00e0ffe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x660))(param_1,0);
  return;
}

