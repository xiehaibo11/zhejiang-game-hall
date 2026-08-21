
/* cocos2d::ui::ListView::jumpToRight() */

void __thiscall cocos2d::ui::ListView::jumpToRight(ListView *this)

{
                    /* try { // try from 00db73b4 to 00eb7407 has its CatchHandler @ 00db7338 */
  (**(code **)(*(long *)this + 0x6b0))();
  ScrollView::jumpToRight((ScrollView *)this);
  return;
}

