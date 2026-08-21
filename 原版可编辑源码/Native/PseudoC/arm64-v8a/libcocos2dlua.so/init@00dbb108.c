
/* cocos2d::ui::ScrollView::init() */

undefined4 __thiscall cocos2d::ui::ScrollView::init(ScrollView *this)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = Layout::init((Layout *)this);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 00dbb120 to 00ebb1cf has its CatchHandler @ 00dbb294 */
    uVar2 = 1;
    (**(code **)(*(long *)this + 0x680))(this,1);
    (**(code **)(**(long **)(this + 0x7b8) + 0x588))(*(long **)(this + 0x7b8),0);
    if (this[0x851] != (ScrollView)0x0) {
      (**(code **)(*(long *)this + 0x7a8))(this);
      uVar2 = 1;
    }
  }
  return uVar2;
}

