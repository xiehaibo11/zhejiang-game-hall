
/* cocos2d::extension::EventListenerAssetsManagerEx::clone() */

EventListenerCustom * __thiscall
cocos2d::extension::EventListenerAssetsManagerEx::clone(EventListenerAssetsManagerEx *this)

{
  EventListenerCustom *this_00;
  ulong uVar1;
  
  this_00 = operator_new(0x110,(nothrow_t *)&std::nothrow);
  if (this_00 != (EventListenerCustom *)0x0) {
    EventListenerCustom::EventListenerCustom(this_00);
    *(undefined8 *)(this_00 + 0xf0) = 0;
    *(undefined8 *)(this_00 + 0x100) = 0;
    *(undefined ***)this_00 = &PTR__EventListenerAssetsManagerEx_016e82b8;
    uVar1 = init((EventListenerAssetsManagerEx *)this_00,*(AssetsManagerEx **)(this + 0x100),
                 this + 0xd0);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (EventListenerCustom *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this_00);
    }
  }
  return this_00;
}

