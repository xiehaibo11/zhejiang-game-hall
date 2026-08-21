
/* cocos2d::ui::Button::createCloneInstance() */

Button * cocos2d::ui::Button::createCloneInstance(void)

{
  Button *this;
  ulong uVar1;
  
                    /* try { // try from 00dc2278 to 00ec22f7 has its CatchHandler @ 00dc23d0 */
  this = operator_new(0x5e0,(nothrow_t *)&std::nothrow);
  if (this != (Button *)0x0) {
    Button(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Button *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

