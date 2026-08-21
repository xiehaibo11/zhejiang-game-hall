
/* cocos2d::ui::ScrollView::getScrollBarAutoHideTime() const */

undefined4 __thiscall cocos2d::ui::ScrollView::getScrollBarAutoHideTime(ScrollView *this)

{
  long lVar1;
  
                    /* try { // try from 00dbe9e4 to 00ebe9f3 has its CatchHandler @ 00dbf00c */
  lVar1 = *(long *)(this + 0x858);
  if ((lVar1 == 0) && (lVar1 = *(long *)(this + 0x860), lVar1 == 0)) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + 0x350);
}

