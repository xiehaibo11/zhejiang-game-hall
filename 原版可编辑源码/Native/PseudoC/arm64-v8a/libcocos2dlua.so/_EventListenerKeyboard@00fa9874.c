
/* cocos2d::EventListenerKeyboard::~EventListenerKeyboard() */

void __thiscall cocos2d::EventListenerKeyboard::~EventListenerKeyboard(EventListenerKeyboard *this)

{
  EventListenerKeyboard *pEVar1;
  code *pcVar2;
  
  pEVar1 = *(EventListenerKeyboard **)(this + 0xf0);
  *(undefined ***)this = &PTR__EventListenerKeyboard_017233f8;
  if (this + 0xd0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00fa98bc:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerKeyboard *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00fa98bc;
  }
  pEVar1 = *(EventListenerKeyboard **)(this + 0xc0);
  if (this + 0xa0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
  }
  else {
    if (pEVar1 == (EventListenerKeyboard *)0x0) goto LAB_00fa98ec;
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00fa98ec:
  EventListener::~EventListener((EventListener *)this);
  return;
}

