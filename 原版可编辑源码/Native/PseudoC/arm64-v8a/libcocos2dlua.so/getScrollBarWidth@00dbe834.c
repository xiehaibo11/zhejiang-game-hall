
/* cocos2d::ui::ScrollView::getScrollBarWidth() const */

undefined1  [16] __thiscall cocos2d::ui::ScrollView::getScrollBarWidth(ScrollView *this)

{
  ScrollViewBar *this_00;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  this_00 = *(ScrollViewBar **)(this + 0x858);
                    /* catch() { ... } // from try @ 00dbe690 with catch @ 00dbe840 */
  if ((this_00 == (ScrollViewBar *)0x0) &&
     (this_00 = *(ScrollViewBar **)(this + 0x860), this_00 == (ScrollViewBar *)0x0)) {
    return ZEXT816(0);
  }
  ScrollViewBar::getWidth(this_00);
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}

