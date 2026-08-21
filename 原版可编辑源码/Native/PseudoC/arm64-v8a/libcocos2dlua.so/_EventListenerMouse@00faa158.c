
/* cocos2d::EventListenerMouse::~EventListenerMouse() */

void __thiscall cocos2d::EventListenerMouse::~EventListenerMouse(EventListenerMouse *this)

{
  EventListenerMouse *pEVar1;
  code *pcVar2;
  
  pEVar1 = *(EventListenerMouse **)(this + 0x150);
  *(undefined ***)this = &PTR__EventListenerMouse_017234c0;
  if (this + 0x130 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00faa1a0:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerMouse *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00faa1a0;
  }
  pEVar1 = *(EventListenerMouse **)(this + 0x120);
  if (this + 0x100 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00faa1cc:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerMouse *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00faa1cc;
  }
  pEVar1 = *(EventListenerMouse **)(this + 0xf0);
  if (this + 0xd0 == pEVar1) {
                    /* catch() { ... } // from try @ 00faa2bc with catch @ 00faa1f4 */
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00faa1f8:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerMouse *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00faa1f8;
  }
  pEVar1 = *(EventListenerMouse **)(this + 0xc0);
  if (this + 0xa0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
  }
  else {
    if (pEVar1 == (EventListenerMouse *)0x0) goto LAB_00faa228;
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00faa228:
  EventListener::~EventListener((EventListener *)this);
  operator_delete(this);
  return;
}

