
/* cocos2d::ui::ScrollView::removeScrollBar() */

void __thiscall cocos2d::ui::ScrollView::removeScrollBar(ScrollView *this)

{
                    /* try { // try from 00dbf114 to 00ebf1a3 has its CatchHandler @ 00dbf114
                       catch() { ... } // from try @ 00dbf114 with catch @ 00dbf114
                       catch() { ... } // from try @ 00dbf314 with catch @ 00dbf114 */
  if (*(long *)(this + 0x858) != 0) {
    (**(code **)(*(long *)this + 0x550))(this,*(long *)(this + 0x858),1);
    *(undefined8 *)(this + 0x858) = 0;
  }
  if (*(long *)(this + 0x860) != 0) {
    (**(code **)(*(long *)this + 0x550))(this,*(long *)(this + 0x860),1);
    *(undefined8 *)(this + 0x860) = 0;
  }
  return;
}

