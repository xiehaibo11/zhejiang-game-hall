
/* cocos2d::extension::ControlPotentiometer::potentiometerBegan(cocos2d::Vec2) */

void cocos2d::extension::ControlPotentiometer::potentiometerBegan(long *param_1)

{
  long *plVar1;
  
  (**(code **)(*param_1 + 0x660))(param_1,1);
  plVar1 = (long *)(**(code **)(*param_1 + 0x6b8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00e0fe08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4c0))(plVar1,&Color3B::GRAY);
  return;
}

