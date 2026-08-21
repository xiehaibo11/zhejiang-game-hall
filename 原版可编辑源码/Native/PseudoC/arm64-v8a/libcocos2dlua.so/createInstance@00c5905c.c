
/* cocostudio::ComAttribute::createInstance() */

ComAttribute * cocostudio::ComAttribute::createInstance(void)

{
  ComAttribute *this;
  ulong uVar1;
  
  this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this != (ComAttribute *)0x0) {
    ComAttribute(this);
    uVar1 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ComAttribute *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

