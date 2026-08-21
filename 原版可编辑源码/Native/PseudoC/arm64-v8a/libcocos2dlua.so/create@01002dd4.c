
/* cocos2d::EventListenerPhysicsContactWithGroup::create(int) */

EventListenerCustom * cocos2d::EventListenerPhysicsContactWithGroup::create(int param_1)

{
  EventListenerCustom *this;
  ulong uVar1;
  
  this = operator_new(0x1a0,(nothrow_t *)&std::nothrow);
                    /* try { // try from 01002df4 to 01102e3b has its CatchHandler @ 01002df4
                       catch() { ... } // from try @ 01002df4 with catch @ 01002df4
                       catch() { ... } // from try @ 01002e80 with catch @ 01002df4 */
  if (this != (EventListenerCustom *)0x0) {
    EventListenerCustom::EventListenerCustom(this);
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x150) = 0;
    *(undefined8 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 400) = 0;
    *(undefined ***)this = &PTR__EventListenerPhysicsContactWithGroup_01724f88;
    uVar1 = EventListenerPhysicsContact::init((EventListenerPhysicsContact *)this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (EventListenerCustom *)0x0;
    }
    else {
      *(int *)(this + 400) = param_1;
                    /* try { // try from 01002e3c to 01102e3f has its CatchHandler @ 01002eb8 */
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 01002e58 to 01102e7f has its CatchHandler @ 01002ec0 */
  return this;
}

