
/* cocos2d::ui::ImageView::init() */

bool __thiscall cocos2d::ui::ImageView::init(ImageView *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Widget::init((Widget *)this);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(undefined4 *)(this + 0x518) = 0;
  }
  return bVar1;
}

