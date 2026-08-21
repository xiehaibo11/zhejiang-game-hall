
/* cocos2d::ui::ListView::jumpToLeft() */

void __thiscall cocos2d::ui::ListView::jumpToLeft(ListView *this)

{
                    /* try { // try from 00db7398 to 00eb73b3 has its CatchHandler @ 00db73ec */
  (**(code **)(*(long *)this + 0x6b0))();
  ScrollView::jumpToLeft((ScrollView *)this);
  return;
}

