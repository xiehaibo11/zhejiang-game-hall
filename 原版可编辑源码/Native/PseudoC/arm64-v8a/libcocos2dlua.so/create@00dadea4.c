
/* cocos2d::ui::Layout::create() */

Layout * cocos2d::ui::Layout::create(void)

{
  Layout *this;
  ulong uVar1;
  
  this = operator_new(0x7c0,(nothrow_t *)&std::nothrow);
  if (this != (Layout *)0x0) {
    Layout(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Layout *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00dadf04 to 00eadf13 has its CatchHandler @ 00dae2fc */
  return this;
}

