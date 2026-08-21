
/* cocos2d::EventListenerCustom::clone() */

EventListener * __thiscall cocos2d::EventListenerCustom::clone(EventListenerCustom *this)

{
  EventListener *this_00;
  ulong uVar1;
  
  this_00 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this_00 != (EventListener *)0x0) {
    EventListener::EventListener(this_00);
    *(undefined8 *)(this_00 + 0xc0) = 0;
    *(undefined ***)this_00 = &PTR__EventListenerCustom_01723268;
    uVar1 = init((EventListenerCustom *)this_00,(basic_string *)(this + 0x68),this + 0xa0);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (EventListener *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this_00);
    }
  }
  return this_00;
}

