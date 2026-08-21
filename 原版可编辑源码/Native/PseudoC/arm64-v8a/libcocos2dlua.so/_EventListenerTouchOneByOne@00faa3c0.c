
/* cocos2d::EventListenerTouchOneByOne::~EventListenerTouchOneByOne() */

void __thiscall
cocos2d::EventListenerTouchOneByOne::~EventListenerTouchOneByOne(EventListenerTouchOneByOne *this)

{
  void *pvVar1;
  EventListenerTouchOneByOne *pEVar2;
  code *pcVar3;
  
  pvVar1 = *(void **)(this + 0x160);
  *(undefined ***)this = &PTR__EventListenerTouchOneByOne_01723588;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x168) = pvVar1;
    operator_delete(pvVar1);
  }
  pEVar2 = *(EventListenerTouchOneByOne **)(this + 0x150);
  if (this + 0x130 == pEVar2) {
    pcVar3 = *(code **)(*(long *)pEVar2 + 0x20);
LAB_00faa418:
    (*pcVar3)();
  }
  else if (pEVar2 != (EventListenerTouchOneByOne *)0x0) {
    pcVar3 = *(code **)(*(long *)pEVar2 + 0x28);
    goto LAB_00faa418;
  }
  pEVar2 = *(EventListenerTouchOneByOne **)(this + 0x120);
                    /* try { // try from 00faa428 to 010aa433 has its CatchHandler @ 00faa820 */
  if (this + 0x100 == pEVar2) {
    pcVar3 = *(code **)(*(long *)pEVar2 + 0x20);
LAB_00faa444:
    (*pcVar3)();
  }
  else if (pEVar2 != (EventListenerTouchOneByOne *)0x0) {
    pcVar3 = *(code **)(*(long *)pEVar2 + 0x28);
    goto LAB_00faa444;
  }
  pEVar2 = *(EventListenerTouchOneByOne **)(this + 0xf0);
  if (this + 0xd0 == pEVar2) {
    pcVar3 = *(code **)(*(long *)pEVar2 + 0x20);
LAB_00faa470:
    (*pcVar3)();
  }
  else if (pEVar2 != (EventListenerTouchOneByOne *)0x0) {
    pcVar3 = *(code **)(*(long *)pEVar2 + 0x28);
    goto LAB_00faa470;
  }
  pEVar2 = *(EventListenerTouchOneByOne **)(this + 0xc0);
  if (this + 0xa0 == pEVar2) {
                    /* try { // try from 00faa494 to 010aa4df has its CatchHandler @ 00faa81c */
    pcVar3 = *(code **)(*(long *)pEVar2 + 0x20);
  }
  else {
    if (pEVar2 == (EventListenerTouchOneByOne *)0x0) goto LAB_00faa4a0;
    pcVar3 = *(code **)(*(long *)pEVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00faa4a0:
  EventListener::~EventListener((EventListener *)this);
  return;
}

