
/* cocos2d::ui::ListView::jumpToBottom() */

void __thiscall cocos2d::ui::ListView::jumpToBottom(ListView *this)

{
                    /* try { // try from 00db7338 to 00eb7397 has its CatchHandler @ 00db7338
                       catch() { ... } // from try @ 00db7338 with catch @ 00db7338
                       catch() { ... } // from try @ 00db73b4 with catch @ 00db7338 */
  (**(code **)(*(long *)this + 0x6b0))();
  ScrollView::jumpToBottom((ScrollView *)this);
  return;
}

