
/* cocos2d::EventListenerPhysicsContactWithShapes::create(cocos2d::PhysicsShape*,
   cocos2d::PhysicsShape*) */

EventListenerCustom *
cocos2d::EventListenerPhysicsContactWithShapes::create(PhysicsShape *param_1,PhysicsShape *param_2)

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
    *(undefined ***)this = &PTR__EventListenerPhysicsContactWithGroup_01724f50;
    uVar1 = EventListenerPhysicsContact::init((EventListenerPhysicsContact *)this);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 01002a98 to 01102b3b has its CatchHandler @ 01002a04 */
      (**(code **)(*(long *)this + 8))(this);
      this = (EventListenerCustom *)0x0;
    }
    else {
                    /* try { // try from 01002a84 to 01102a97 has its CatchHandler @ 01002b20 */
      *(PhysicsShape **)(this + 400) = param_1;
      *(PhysicsShape **)(this + 0x198) = param_2;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

