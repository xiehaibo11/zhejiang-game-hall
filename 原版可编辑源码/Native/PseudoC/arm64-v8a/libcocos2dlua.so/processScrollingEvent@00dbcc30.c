
/* cocos2d::ui::ScrollView::processScrollingEvent() */

void __thiscall cocos2d::ui::ScrollView::processScrollingEvent(ScrollView *this)

{
  if (this[0x81c] == (ScrollView)0x0) {
    this[0x81c] = (ScrollView)0x1;
    dispatchEvent(this,9,10);
  }
  dispatchEvent(this,4,4);
  return;
}

