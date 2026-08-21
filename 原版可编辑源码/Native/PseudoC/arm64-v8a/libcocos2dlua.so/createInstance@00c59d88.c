
/* cocostudio::ComAudio::createInstance() */

ComAudio * cocostudio::ComAudio::createInstance(void)

{
  ComAudio *this;
  ulong uVar1;
  
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (ComAudio *)0x0) {
    ComAudio(this);
    uVar1 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ComAudio *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

