
/* cocos2d::EventListenerTouchAllAtOnce::~EventListenerTouchAllAtOnce() */

void __thiscall
cocos2d::EventListenerTouchAllAtOnce::~EventListenerTouchAllAtOnce
          (EventListenerTouchAllAtOnce *this)

{
  EventListenerTouchAllAtOnce *pEVar1;
  code *pcVar2;
  
                    /* try { // try from 00faaae4 to 010aab0f has its CatchHandler @ 00faaac4 */
  pEVar1 = *(EventListenerTouchAllAtOnce **)(this + 0x150);
                    /* catch() { ... } // from try @ 00faaadc with catch @ 00faaafc */
  *(undefined ***)this = &PTR__EventListenerTouchAllAtOnce_017235b8;
  if (this + 0x130 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00faab2c:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerTouchAllAtOnce *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00faab2c;
  }
  pEVar1 = *(EventListenerTouchAllAtOnce **)(this + 0x120);
  if (this + 0x100 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00faab58:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerTouchAllAtOnce *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00faab58;
  }
  pEVar1 = *(EventListenerTouchAllAtOnce **)(this + 0xf0);
  if (this + 0xd0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00faab84:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerTouchAllAtOnce *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00faab84;
  }
  pEVar1 = *(EventListenerTouchAllAtOnce **)(this + 0xc0);
  if (this + 0xa0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
  }
  else {
    if (pEVar1 == (EventListenerTouchAllAtOnce *)0x0) goto LAB_00faabb4;
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00faabb4:
  EventListener::~EventListener((EventListener *)this);
  return;
}

