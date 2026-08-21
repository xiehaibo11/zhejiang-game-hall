
/* cocos2d::extension::ScrollView::isTouchEnabled() const */

bool __thiscall cocos2d::extension::ScrollView::isTouchEnabled(ScrollView *this)

{
                    /* try { // try from 00e14fb0 to 00f14fbb has its CatchHandler @ 00e151cc */
  return *(long *)(this + 0x3b8) != 0;
}

