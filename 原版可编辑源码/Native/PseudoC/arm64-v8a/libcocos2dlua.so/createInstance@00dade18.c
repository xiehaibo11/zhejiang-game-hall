
/* cocos2d::ui::Layout::createInstance() */

Layout * cocos2d::ui::Layout::createInstance(void)

{
  Layout *this;
  ulong uVar1;
  
                    /* try { // try from 00dade24 to 00eade8b has its CatchHandler @ 00dad6f4 */
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
  return this;
}

