
/* cocos2d::EventListenerAcceleration::~EventListenerAcceleration() */

void __thiscall
cocos2d::EventListenerAcceleration::~EventListenerAcceleration(EventListenerAcceleration *this)

{
  EventListenerAcceleration *pEVar1;
  code *pcVar2;
  
  pEVar1 = *(EventListenerAcceleration **)(this + 0xc0);
  *(undefined ***)this = &PTR__EventListenerAcceleration_017230c8;
  if (this + 0xa0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
  }
  else {
    if (pEVar1 == (EventListenerAcceleration *)0x0) goto LAB_00fa7728;
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00fa7728:
  EventListener::~EventListener((EventListener *)this);
  return;
}

