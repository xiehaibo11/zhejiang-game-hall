
/* cocos2d::EventListenerPhysicsContactWithBodies::create(cocos2d::PhysicsBody*,
   cocos2d::PhysicsBody*) */

EventListenerCustom *
cocos2d::EventListenerPhysicsContactWithBodies::create(PhysicsBody *param_1,PhysicsBody *param_2)

{
  EventListenerCustom *this;
  ulong uVar1;
  
  this = operator_new(0x1a0,(nothrow_t *)&std::nothrow);
  if (this != (EventListenerCustom *)0x0) {
    EventListenerCustom::EventListenerCustom(this);
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined8 *)(this + 0x180) = 0;
    *(undefined8 *)(this + 400) = 0;
    *(undefined8 *)(this + 0x198) = 0;
    *(undefined ***)this = &PTR__EventListenerPhysicsContactWithGroup_01724f18;
    uVar1 = EventListenerPhysicsContact::init((EventListenerPhysicsContact *)this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (EventListenerCustom *)0x0;
    }
    else {
      *(PhysicsBody **)(this + 400) = param_1;
      *(PhysicsBody **)(this + 0x198) = param_2;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

