
/* cocos2d::ui::PageView::init() */

bool __thiscall cocos2d::ui::PageView::init(PageView *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = ListView::init((ListView *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    (**(code **)(*(long *)this + 0x6d0))(this,2);
    ListView::setMagneticType((ListView *)this,1);
    ScrollView::setScrollBarEnabled((ScrollView *)this,false);
  }
  return bVar1;
}

