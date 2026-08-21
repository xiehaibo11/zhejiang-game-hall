
/* cocos2d::ui::ScrollView::stopAutoScroll() */

void __thiscall cocos2d::ui::ScrollView::stopAutoScroll(ScrollView *this)

{
  if (this[0x81d] != (ScrollView)0x0) {
    if (*(ScrollViewBar **)(this + 0x858) != (ScrollViewBar *)0x0) {
      ScrollViewBar::onTouchEnded(*(ScrollViewBar **)(this + 0x858));
    }
    if (*(ScrollViewBar **)(this + 0x860) != (ScrollViewBar *)0x0) {
                    /* try { // try from 00dbc58c to 00ebc59f has its CatchHandler @ 00dbc7dc */
      ScrollViewBar::onTouchEnded(*(ScrollViewBar **)(this + 0x860));
    }
    *(undefined2 *)(this + 0x81d) = 0x100;
    *(undefined8 *)(this + 0x830) = 0;
    dispatchEvent(this,0xb,0xc);
    return;
  }
  return;
}

