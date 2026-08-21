
/* cocos2d::ui::RichText::create() */

RichText * cocos2d::ui::RichText::create(void)

{
  RichText *this;
  ulong uVar1;
  
  this = operator_new(0x5a0,(nothrow_t *)&std::nothrow);
  if (this != (RichText *)0x0) {
    RichText(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (RichText *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

