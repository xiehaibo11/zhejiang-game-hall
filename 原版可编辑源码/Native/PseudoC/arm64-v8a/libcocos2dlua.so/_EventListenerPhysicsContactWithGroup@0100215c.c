
/* cocos2d::EventListenerPhysicsContactWithGroup::~EventListenerPhysicsContactWithGroup() */

void __thiscall
cocos2d::EventListenerPhysicsContactWithGroup::~EventListenerPhysicsContactWithGroup
          (EventListenerPhysicsContactWithGroup *this)

{
  EventListenerPhysicsContactWithGroup *pEVar1;
  code *pcVar2;
  
  pEVar1 = *(EventListenerPhysicsContactWithGroup **)(this + 0x180);
  *(undefined ***)this = &PTR__EventListenerPhysicsContactWithGroup_01724ec8;
  if (this + 0x160 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_010021a4:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerPhysicsContactWithGroup *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_010021a4;
  }
  pEVar1 = *(EventListenerPhysicsContactWithGroup **)(this + 0x150);
  if (this + 0x130 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_010021d0:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerPhysicsContactWithGroup *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_010021d0;
  }
  pEVar1 = *(EventListenerPhysicsContactWithGroup **)(this + 0x120);
  if (this + 0x100 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_010021fc:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerPhysicsContactWithGroup *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_010021fc;
  }
  pEVar1 = *(EventListenerPhysicsContactWithGroup **)(this + 0xf0);
  if (this + 0xd0 == pEVar1) {
                    /* try { // try from 01002224 to 01102237 has its CatchHandler @ 0100224c */
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_01002228:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerPhysicsContactWithGroup *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_01002228;
  }
  pEVar1 = *(EventListenerPhysicsContactWithGroup **)(this + 0xc0);
                    /* try { // try from 01002238 to 0110226f has its CatchHandler @ 01001e00 */
  *(undefined ***)this = &PTR__EventListenerCustom_01723268;
  if (this + 0xa0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
  }
  else {
                    /* catch() { ... } // from try @ 01002224 with catch @ 0100224c */
    if (pEVar1 == (EventListenerPhysicsContactWithGroup *)0x0) goto LAB_01002268;
                    /* catch() { ... } // from try @ 0100210c with catch @ 01002250 */
                    /* catch() { ... } // from try @ 010020bc with catch @ 01002254 */
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
  }
  (*pcVar2)();
LAB_01002268:
  EventListener::~EventListener((EventListener *)this);
  return;
}

