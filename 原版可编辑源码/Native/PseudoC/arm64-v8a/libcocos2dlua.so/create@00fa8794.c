
/* cocos2d::EventListenerCustom::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::EventCustom*)> const&) */

EventListener * cocos2d::EventListenerCustom::create(basic_string *param_1,function *param_2)

{
  EventListener *this;
  ulong uVar1;
  
  this = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this != (EventListener *)0x0) {
    EventListener::EventListener(this);
    *(undefined ***)this = &PTR__EventListenerCustom_01723268;
    *(undefined8 *)(this + 0xc0) = 0;
    uVar1 = init((EventListenerCustom *)this,param_1,param_2);
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

