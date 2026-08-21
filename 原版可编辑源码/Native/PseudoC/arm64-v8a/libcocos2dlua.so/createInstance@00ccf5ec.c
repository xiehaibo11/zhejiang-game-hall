
/* cocostudio::ComExtensionData::createInstance() */

ComExtensionData * cocostudio::ComExtensionData::createInstance(void)

{
  ComExtensionData *this;
  ulong uVar1;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (ComExtensionData *)0x0) {
    ComExtensionData(this);
    uVar1 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ComExtensionData *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

