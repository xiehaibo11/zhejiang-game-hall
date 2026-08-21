
/* cocos2d::ui::TextField::init() */

bool __thiscall cocos2d::ui::TextField::init(TextField *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Widget::init((Widget *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    (**(code **)(*(long *)this + 0x588))(this,1);
  }
  return bVar1;
}

