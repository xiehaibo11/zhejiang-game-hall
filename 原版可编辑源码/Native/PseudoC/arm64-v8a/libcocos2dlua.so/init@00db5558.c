
/* cocos2d::ui::ListView::init() */

bool __thiscall cocos2d::ui::ListView::init(ListView *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = ScrollView::init((ScrollView *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
                    /* try { // try from 00db5584 to 00eb558b has its CatchHandler @ 00db5634 */
    (**(code **)(*(long *)this + 0x6d0))(this,1);
  }
  return bVar1;
}

