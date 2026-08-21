
/* cocos2d::extension::EventListenerAssetsManagerEx::create(cocos2d::extension::AssetsManagerEx*,
   std::__ndk1::function<void (cocos2d::extension::EventAssetsManagerEx*)> const&) */

EventListenerCustom *
cocos2d::extension::EventListenerAssetsManagerEx::create(AssetsManagerEx *param_1,function *param_2)

{
  EventListenerCustom *this;
  ulong uVar1;
  
  this = operator_new(0x110,(nothrow_t *)&std::nothrow);
  if (this != (EventListenerCustom *)0x0) {
    EventListenerCustom::EventListenerCustom(this);
    *(undefined8 *)(this + 0xf0) = 0;
    *(undefined ***)this = &PTR__EventListenerAssetsManagerEx_016e82b8;
    *(undefined8 *)(this + 0x100) = 0;
    uVar1 = init((EventListenerAssetsManagerEx *)this,param_1,param_2);
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

