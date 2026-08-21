
/* cocos2d::EventListenerPhysicsContact::create() */

EventListenerCustom * cocos2d::EventListenerPhysicsContact::create(void)

{
  EventListenerCustom *this;
  ulong uVar1;
  
  this = operator_new(400,(nothrow_t *)&std::nothrow);
  if (this != (EventListenerCustom *)0x0) {
    EventListenerCustom::EventListenerCustom(this);
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined ***)this = &PTR__EventListenerPhysicsContactWithGroup_01724ec8;
    *(undefined8 *)(this + 0x180) = 0;
    uVar1 = init((EventListenerPhysicsContact *)this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (EventListenerCustom *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

