
/* cocos2d::EventListener::~EventListener() */

void __thiscall cocos2d::EventListener::~EventListener(EventListener *this)

{
  EventListener *pEVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__EventListener_01723080;
  if (((byte)this[0x68] & 1) != 0) {
    operator_delete(*(void **)(this + 0x78));
  }
  pEVar1 = *(EventListener **)(this + 0x50);
                    /* catch() { ... } // from try @ 00fa7328 with catch @ 00fa73d8 */
  if (this + 0x30 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
  }
  else {
    if (pEVar1 == (EventListener *)0x0) goto LAB_00fa7400;
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00fa7400:
  Ref::~Ref((Ref *)this);
  return;
}

