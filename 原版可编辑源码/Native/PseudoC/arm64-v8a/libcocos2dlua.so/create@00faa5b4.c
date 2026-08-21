
/* cocos2d::EventListenerTouchOneByOne::create() */

EventListener * cocos2d::EventListenerTouchOneByOne::create(void)

{
  long lVar1;
  EventListener *this;
  ulong uVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x180,(nothrow_t *)&std::nothrow);
  if (this == (EventListener *)0x0) goto LAB_00faa690;
  EventListener::EventListener(this);
                    /* try { // try from 00faa5fc to 010aa603 has its CatchHandler @ 00faa83c */
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x120) = 0;
                    /* try { // try from 00faa608 to 010aa60f has its CatchHandler @ 00faa824 */
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  this[0x178] = (EventListener)0x0;
  *(undefined ***)this = &PTR__EventListenerTouchOneByOne_01723588;
  local_50 = (long *)0x0;
                    /* try { // try from 00faa62c to 010aa6cf has its CatchHandler @ 00faa840 */
  uVar2 = EventListener::init(this,1,LISTENER_ID,alStack_70);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00faa668:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00faa668;
  }
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)this + 8))(this);
    this = (EventListener *)0x0;
  }
  else {
    Ref::autorelease((Ref *)this);
  }
LAB_00faa690:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

