
/* cocos2d::EventListenerAcceleration::create(std::__ndk1::function<void (cocos2d::Acceleration*,
   cocos2d::Event*)> const&) */

EventListener * cocos2d::EventListenerAcceleration::create(function *param_1)

{
  EventListener *this;
  ulong uVar1;
  
                    /* try { // try from 00fa77ac to 010a77b3 has its CatchHandler @ 00fa7b4c */
  this = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this != (EventListener *)0x0) {
    EventListener::EventListener(this);
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined ***)this = &PTR__EventListenerAcceleration_017230c8;
    uVar1 = init((EventListenerAcceleration *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (EventListener *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

