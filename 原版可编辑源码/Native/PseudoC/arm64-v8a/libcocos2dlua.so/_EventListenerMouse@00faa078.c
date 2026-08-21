
/* cocos2d::EventListenerMouse::~EventListenerMouse() */

void __thiscall cocos2d::EventListenerMouse::~EventListenerMouse(EventListenerMouse *this)

{
  EventListenerMouse *pEVar1;
  code *pcVar2;
  
  pEVar1 = *(EventListenerMouse **)(this + 0x150);
  *(undefined ***)this = &PTR__EventListenerMouse_017234c0;
  if (this + 0x130 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00faa0c0:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerMouse *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00faa0c0;
  }
  pEVar1 = *(EventListenerMouse **)(this + 0x120);
  if (this + 0x100 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00faa0ec:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerMouse *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00faa0ec;
  }
  pEVar1 = *(EventListenerMouse **)(this + 0xf0);
  if (this + 0xd0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00faa118:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerMouse *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00faa118;
  }
  pEVar1 = *(EventListenerMouse **)(this + 0xc0);
  if (this + 0xa0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
  }
  else {
    if (pEVar1 == (EventListenerMouse *)0x0) goto LAB_00faa148;
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00faa148:
  EventListener::~EventListener((EventListener *)this);
  return;
}

