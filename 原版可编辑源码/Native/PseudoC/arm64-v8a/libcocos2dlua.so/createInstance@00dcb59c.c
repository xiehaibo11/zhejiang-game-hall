
/* cocos2d::ui::Slider::createInstance() */

Slider * cocos2d::ui::Slider::createInstance(void)

{
  Slider *this;
  ulong uVar1;
  
                    /* try { // try from 00dcb5a8 to 00ecb5b7 has its CatchHandler @ 00dccd48 */
  this = operator_new(0x670,(nothrow_t *)&std::nothrow);
  if (this != (Slider *)0x0) {
    Slider(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Slider *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

