
/* cocos2d::EventListenerFocus::~EventListenerFocus() */

void __thiscall cocos2d::EventListenerFocus::~EventListenerFocus(EventListenerFocus *this)

{
  EventListenerFocus *pEVar1;
  code *pcVar2;
  
  pEVar1 = *(EventListenerFocus **)(this + 0xc0);
  *(undefined ***)this = &PTR__EventListenerFocus_01723330;
  if (this + 0xa0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
  }
  else {
    if (pEVar1 == (EventListenerFocus *)0x0) goto LAB_00fa8e70;
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00fa8e70:
  EventListener::~EventListener((EventListener *)this);
  operator_delete(this);
  return;
}

