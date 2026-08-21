
/* cocos2d::EventListenerController::~EventListenerController() */

void __thiscall
cocos2d::EventListenerController::~EventListenerController(EventListenerController *this)

{
  EventListenerController *pEVar1;
  code *pcVar2;
  
                    /* catch() { ... } // from try @ 00fa7c18 with catch @ 00fa7f50 */
  pEVar1 = *(EventListenerController **)(this + 0x1b0);
                    /* catch() { ... } // from try @ 00fa7cbc with catch @ 00fa7f58 */
  *(undefined ***)this = &PTR__EventListenerController_017231a0;
  if (this + 400 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00fa7f84:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerController *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00fa7f84;
  }
  pEVar1 = *(EventListenerController **)(this + 0x180);
  if (this + 0x160 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00fa7fb0:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerController *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00fa7fb0;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa80dc with catch @ 00fa7fb4
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa8160 with catch @ 00fa7fb4
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa8170 with catch @ 00fa7fb4
                        */
  pEVar1 = *(EventListenerController **)(this + 0x150);
  if (this + 0x130 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00fa7fdc:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerController *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00fa7fdc;
  }
  pEVar1 = *(EventListenerController **)(this + 0x120);
  if (this + 0x100 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00fa8008:
                    /* try { // try from 00fa8008 to 010a800b has its CatchHandler @ 00fa811c */
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerController *)0x0) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
    goto LAB_00fa8008;
  }
  pEVar1 = *(EventListenerController **)(this + 0xf0);
  if (this + 0xd0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
LAB_00fa8034:
    (*pcVar2)();
  }
  else if (pEVar1 != (EventListenerController *)0x0) {
                    /* try { // try from 00fa8020 to 010a8027 has its CatchHandler @ 00fa8138 */
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
                    /* try { // try from 00fa8028 to 010a8037 has its CatchHandler @ 00fa8128 */
    goto LAB_00fa8034;
  }
  pEVar1 = *(EventListenerController **)(this + 0xc0);
  if (this + 0xa0 == pEVar1) {
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x20);
  }
  else {
    if (pEVar1 == (EventListenerController *)0x0) goto LAB_00fa8064;
    pcVar2 = *(code **)(*(long *)pEVar1 + 0x28);
  }
                    /* try { // try from 00fa8060 to 010a806b has its CatchHandler @ 00fa813c */
  (*pcVar2)();
LAB_00fa8064:
                    /* try { // try from 00fa806c to 010a808b has its CatchHandler @ 00fa8124 */
  EventListener::~EventListener((EventListener *)this);
  return;
}

