
/* cocos2d::ui::ScrollView::setScrollBarPositionFromCorner(cocos2d::Vec2 const&) */

void __thiscall
cocos2d::ui::ScrollView::setScrollBarPositionFromCorner(ScrollView *this,Vec2 *param_1)

{
                    /* try { // try from 00dbe790 to 00ebe7db has its CatchHandler @ 00dbe860 */
  if ((*(int *)(this + 0x7c0) != 2) &&
     (ScrollViewBar::setPositionFromCorner(*(ScrollViewBar **)(this + 0x858),param_1),
     *(int *)(this + 0x7c0) == 1)) {
    return;
  }
  ScrollViewBar::setPositionFromCorner(*(ScrollViewBar **)(this + 0x860),param_1);
  return;
}

