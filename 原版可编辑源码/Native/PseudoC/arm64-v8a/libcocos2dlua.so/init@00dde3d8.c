
/* cocos2d::ui::VBox::init() */

bool __thiscall cocos2d::ui::VBox::init(VBox *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Layout::init((Layout *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    (**(code **)(*(long *)this + 0x690))(this,1);
  }
  return bVar1;
}

