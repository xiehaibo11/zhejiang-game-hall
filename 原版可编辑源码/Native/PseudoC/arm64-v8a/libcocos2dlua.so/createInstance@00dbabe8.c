
/* cocos2d::ui::ScrollView::createInstance() */

ScrollView * cocos2d::ui::ScrollView::createInstance(void)

{
  ScrollView *this;
  ulong uVar1;
  
  this = operator_new(0x8b0,(nothrow_t *)&std::nothrow);
  if (this != (ScrollView *)0x0) {
    ScrollView(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00dbac40 to 00ebac47 has its CatchHandler @ 00dbad04 */
      (**(code **)(*(long *)this + 8))(this);
      this = (ScrollView *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00dbac48 to 00ebacaf has its CatchHandler @ 00dbab78 */
  return this;
}

