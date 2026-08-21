
void FUN_00ddb650(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = cocos2d::ui::RichElementNewLine::create(0,(Color3B *)&cocos2d::Color3B::WHITE,0xff);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  param_1[5] = uVar1;
  return;
}

