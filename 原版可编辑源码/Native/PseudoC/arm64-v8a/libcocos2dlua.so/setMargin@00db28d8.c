
/* cocos2d::ui::LayoutParameter::setMargin(cocos2d::ui::Margin const&) */

void __thiscall cocos2d::ui::LayoutParameter::setMargin(LayoutParameter *this,Margin *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x24) = uVar1;
  return;
}

