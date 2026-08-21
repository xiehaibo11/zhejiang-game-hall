
/* cocos2d::EventListenerAcceleration::clone() */

EventListener * __thiscall
cocos2d::EventListenerAcceleration::clone(EventListenerAcceleration *this)

{
  EventListener *this_00;
  ulong uVar1;
  
                    /* try { // try from 00fa79c0 to 010a79cb has its CatchHandler @ 00fa7b50 */
  this_00 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this_00 != (EventListener *)0x0) {
    EventListener::EventListener(this_00);
                    /* try { // try from 00fa79ec to 010a79f3 has its CatchHandler @ 00fa7b60 */
    *(undefined8 *)(this_00 + 0xc0) = 0;
    *(undefined ***)this_00 = &PTR__EventListenerAcceleration_017230c8;
    uVar1 = init((EventListenerAcceleration *)this_00,this + 0xa0);
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

