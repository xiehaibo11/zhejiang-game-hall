
/* cocos2d::ui::ScrollViewBar::getPositionFromCorner() const */

undefined4 __thiscall cocos2d::ui::ScrollViewBar::getPositionFromCorner(ScrollViewBar *this)

{
  long lVar1;
  
                    /* try { // try from 00dbf8e8 to 00ebf977 has its CatchHandler @ 00dbf8e8
                       catch() { ... } // from try @ 00dbf8e8 with catch @ 00dbf8e8
                       catch() { ... } // from try @ 00dbfa88 with catch @ 00dbf8e8 */
  lVar1 = 0x344;
  if (*(int *)(this + 800) != 1) {
    lVar1 = 0x348;
  }
  return *(undefined4 *)(this + lVar1);
}

