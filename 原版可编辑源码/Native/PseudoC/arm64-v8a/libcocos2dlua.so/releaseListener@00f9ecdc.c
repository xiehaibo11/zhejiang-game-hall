
/* cocos2d::EventDispatcher::releaseListener(cocos2d::EventListener*) */

void __thiscall
cocos2d::EventDispatcher::releaseListener(EventDispatcher *this,EventListener *param_1)

{
  if (param_1 != (EventListener *)0x0) {
    Ref::release((Ref *)param_1);
    return;
  }
  return;
}

