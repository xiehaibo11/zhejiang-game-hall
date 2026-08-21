
/* cocos2d::extension::ControlSaturationBrightnessPicker::onTouchBegan(cocos2d::Touch*,
   cocos2d::Event*) */

undefined8
cocos2d::extension::ControlSaturationBrightnessPicker::onTouchBegan(Touch *param_1,Event *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x658))();
  if (((uVar1 & 1) != 0) &&
     (uVar1 = (**(code **)(*(long *)param_1 + 0x178))(param_1), (uVar1 & 1) != 0)) {
    (**(code **)(*(long *)param_1 + 0x6a0))(param_1,param_2);
    uVar2 = checkSliderPosition(param_1);
    return uVar2;
  }
  return 0;
}

