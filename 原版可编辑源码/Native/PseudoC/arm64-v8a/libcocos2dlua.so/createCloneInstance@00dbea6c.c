
/* cocos2d::ui::ScrollView::createCloneInstance() */

ScrollView * cocos2d::ui::ScrollView::createCloneInstance(void)

{
  ScrollView *this;
  ulong uVar1;
  
                    /* try { // try from 00dbea7c to 00ebea87 has its CatchHandler @ 00dbf01c */
  this = operator_new(0x8b0,(nothrow_t *)&std::nothrow);
  if (this != (ScrollView *)0x0) {
    ScrollView(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ScrollView *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
                    /* try { // try from 00dbeab4 to 00ebeacf has its CatchHandler @ 00dbeffc */
    }
  }
  return this;
}

