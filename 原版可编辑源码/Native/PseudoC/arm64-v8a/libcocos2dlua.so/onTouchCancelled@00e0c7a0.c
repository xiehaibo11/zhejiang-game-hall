
/* cocos2d::extension::ControlButton::onTouchCancelled(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlButton::onTouchCancelled(Touch *param_1,Event *param_2)

{
  param_1[0x358] = (Touch)0x0;
  (**(code **)(*(long *)param_1 + 0x670))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00e0c7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x688))(param_1,0x80);
  return;
}

