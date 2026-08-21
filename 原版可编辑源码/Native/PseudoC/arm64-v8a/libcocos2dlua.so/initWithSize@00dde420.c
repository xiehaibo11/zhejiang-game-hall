
/* cocos2d::ui::VBox::initWithSize(cocos2d::Size const&) */

bool __thiscall cocos2d::ui::VBox::initWithSize(VBox *this,Size *param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*(long *)this + 0x500))();
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    (**(code **)(*(long *)this + 0x160))(this,param_1);
  }
  return bVar1;
}

