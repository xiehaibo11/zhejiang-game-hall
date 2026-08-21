
/* cocos2d::ui::LoadingBar::createCloneInstance() */

LoadingBar * cocos2d::ui::LoadingBar::createCloneInstance(void)

{
  LoadingBar *this;
  ulong uVar1;
  
  this = operator_new(0x560,(nothrow_t *)&std::nothrow);
  if (this != (LoadingBar *)0x0) {
    LoadingBar(this);
                    /* try { // try from 00dcb338 to 00ecb347 has its CatchHandler @ 00dccc10 */
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (LoadingBar *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
                    /* try { // try from 00dcb34c to 00ecb35b has its CatchHandler @ 00dccc20 */
    }
  }
  return this;
}

