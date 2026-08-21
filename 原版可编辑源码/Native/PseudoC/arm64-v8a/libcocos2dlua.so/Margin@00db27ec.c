
/* cocos2d::ui::Margin::Margin(cocos2d::ui::Margin const&) */

void __thiscall cocos2d::ui::Margin::Margin(Margin *this,Margin *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}

