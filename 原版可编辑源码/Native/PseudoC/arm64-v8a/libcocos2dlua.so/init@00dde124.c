
/* cocos2d::ui::HBox::init() */

bool __thiscall cocos2d::ui::HBox::init(HBox *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Layout::init((Layout *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    (**(code **)(*(long *)this + 0x690))(this,2);
  }
                    /* try { // try from 00dde160 to 00ede17b has its CatchHandler @ 00ddec54 */
  return bVar1;
}

