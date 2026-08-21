
/* cocos2d::ui::LayoutParameter::copyProperties(cocos2d::ui::LayoutParameter*) */

void __thiscall
cocos2d::ui::LayoutParameter::copyProperties(LayoutParameter *this,LayoutParameter *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x24) = uVar1;
  return;
}

