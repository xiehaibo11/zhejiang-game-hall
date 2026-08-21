
/* cocos2d::extension::ControlSaturationBrightnessPicker::initWithTargetAndPos(cocos2d::Node*,
   cocos2d::Vec2) */

bool cocos2d::extension::ControlSaturationBrightnessPicker::initWithTargetAndPos
               (undefined8 param_1_00,undefined8 param_2,Control *param_1,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  float *pfVar4;
  
  uVar2 = Control::init(param_1);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    uVar3 = ControlUtils::addSpriteToTargetWithPosAndAnchor
                      (param_1_00,param_2,0,0,"colourPickerBackground.png",param_4);
    *(undefined8 *)(param_1 + 0x360) = uVar3;
    uVar3 = ControlUtils::addSpriteToTargetWithPosAndAnchor
                      (param_1_00,param_2,0,0,"colourPickerOverlay.png",param_4);
    *(undefined8 *)(param_1 + 0x368) = uVar3;
    uVar3 = ControlUtils::addSpriteToTargetWithPosAndAnchor
                      (param_1_00,param_2,0,0,"colourPickerShadow.png",param_4);
    *(undefined8 *)(param_1 + 0x370) = uVar3;
    uVar3 = ControlUtils::addSpriteToTargetWithPosAndAnchor
                      (param_1_00,param_2,0x3f000000,0x3f000000,"colourPicker.png",param_4);
    *(undefined8 *)(param_1 + 0x378) = uVar3;
    *(int *)(param_1 + 0x380) = (int)param_1_00;
    *(int *)(param_1 + 900) = (int)param_2;
    *(undefined4 *)(param_1 + 0x388) = 0x23;
    pfVar4 = (float *)(**(code **)(**(long **)(param_1 + 0x360) + 0x168))();
    *(int *)(param_1 + 0x38c) = (int)(*pfVar4 * 0.5);
  }
  return bVar1;
}

