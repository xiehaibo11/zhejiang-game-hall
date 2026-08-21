
/* cocos2d::ui::ScrollView::create() */

ScrollView * cocos2d::ui::ScrollView::create(void)

{
  ScrollView *this;
  ulong uVar1;
  
  this = operator_new(0x8b0,(nothrow_t *)&std::nothrow);
  if (this != (ScrollView *)0x0) {
    ScrollView(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
                    /* try { // try from 00dbacb0 to 00ebacb7 has its CatchHandler @ 00dbacf4 */
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ScrollView *)0x0;
    }
    else {
                    /* try { // try from 00dbacb8 to 00ebad23 has its CatchHandler @ 00dbab78 */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

