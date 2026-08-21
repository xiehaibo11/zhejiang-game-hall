
/* cocos2d::ui::ScrollView::fltEqualZero(cocos2d::Vec2 const&) const */

bool __thiscall cocos2d::ui::ScrollView::fltEqualZero(ScrollView *this,Vec2 *param_1)

{
                    /* try { // try from 00dbbe40 to 00ebbebb has its CatchHandler @ 00dbbe40
                       catch() { ... } // from try @ 00dbbe40 with catch @ 00dbbe40
                       catch() { ... } // from try @ 00dbbec4 with catch @ 00dbbe40
                       catch() { ... } // from try @ 00dbbf40 with catch @ 00dbbe40 */
  if (0.0001 < ABS(*(float *)param_1)) {
    return false;
  }
  return ABS(*(float *)(param_1 + 4)) <= 0.0001;
}

