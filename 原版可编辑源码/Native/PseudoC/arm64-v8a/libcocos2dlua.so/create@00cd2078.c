
/* cocostudio::DecorativeDisplay::create() */

Ref * cocostudio::DecorativeDisplay::create(void)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined ***)this = &PTR__DecorativeDisplay_016ce338;
    uVar1 = init();
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      cocos2d::Ref::autorelease(this);
    }
  }
  return this;
}

