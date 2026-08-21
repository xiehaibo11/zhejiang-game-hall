
/* cocos2d::EventListenerCustom::~EventListenerCustom() */

void __thiscall cocos2d::EventListenerCustom::~EventListenerCustom(EventListenerCustom *this)

{
  EventListenerCustom *pEVar1;
  code *pcVar2;
  
  pEVar1 = *(EventListenerCustom **)(this + 0xc0);
  *(undefined ***)this = &PTR__EventListenerCustom_01723268;
  if (this + 0xa0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
  }
  else {
    if (pEVar1 == (EventListenerCustom *)0x0) goto LAB_00fa8b2c;
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00fa8b2c:
  EventListener::~EventListener((EventListener *)this);
  operator_delete(this);
  return;
}

