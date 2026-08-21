
/* cocos2d::ui::LoadingBar::create() */

LoadingBar * cocos2d::ui::LoadingBar::create(void)

{
  LoadingBar *this;
  ulong uVar1;
  
  this = operator_new(0x560,(nothrow_t *)&std::nothrow);
  if (this != (LoadingBar *)0x0) {
                    /* try { // try from 00dca464 to 00eca46b has its CatchHandler @ 00dca498 */
    LoadingBar(this);
                    /* try { // try from 00dca46c to 00eca4b3 has its CatchHandler @ 00dca430 */
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00dca464 with catch @ 00dca498 */
      (**(code **)(*(long *)this + 8))(this);
      this = (LoadingBar *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

