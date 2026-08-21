
/* cocostudio::timeline::Timeline::create() */

Ref * cocostudio::timeline::Timeline::create(void)

{
  Ref *this;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined ***)this = &PTR__Timeline_016cc3e0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    cocos2d::Ref::autorelease(this);
  }
  return this;
}

