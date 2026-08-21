
/* cocos2d::extension::ControlPotentiometer::setPreviousLocation(cocos2d::Vec2) */

void cocos2d::extension::ControlPotentiometer::setPreviousLocation
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x378) = param_1;
  *(undefined4 *)(param_3 + 0x37c) = param_2;
  return;
}

