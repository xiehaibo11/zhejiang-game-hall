
/* cocos2d::EventListenerTouchOneByOne::clone() */

EventListener * __thiscall
cocos2d::EventListenerTouchOneByOne::clone(EventListenerTouchOneByOne *this)

{
  long lVar1;
  EventListener *this_00;
  ulong uVar2;
  EventListenerTouchOneByOne *pEVar3;
  code *pcVar4;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x180,(nothrow_t *)&std::nothrow);
  if (this_00 == (EventListener *)0x0) goto LAB_00faaa20;
  EventListener::EventListener(this_00);
  *(undefined8 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x150) = 0;
  *(undefined8 *)(this_00 + 0x168) = 0;
  *(undefined8 *)(this_00 + 0x170) = 0;
  *(undefined8 *)(this_00 + 0x160) = 0;
  this_00[0x178] = (EventListener)0x0;
  *(undefined ***)this_00 = &PTR__EventListenerTouchOneByOne_01723588;
  local_60 = (long *)0x0;
  uVar2 = EventListener::init(this_00,1,LISTENER_ID,alStack_80);
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00faa7dc:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00faa7dc;
  }
  if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00faa80c with catch @ 00faa814 */
                    /* catch() { ... } // from try @ 00faa808 with catch @ 00faa818 */
                    /* catch() { ... } // from try @ 00faa494 with catch @ 00faa81c */
                    /* catch() { ... } // from try @ 00faa428 with catch @ 00faa820 */
    (**(code **)(*(long *)this_00 + 8))(this_00);
                    /* catch() { ... } // from try @ 00faa608 with catch @ 00faa824 */
    this_00 = (EventListener *)0x0;
    goto LAB_00faaa20;
  }
  Ref::autorelease((Ref *)this_00);
  pEVar3 = *(EventListenerTouchOneByOne **)(this + 0xc0);
  if (pEVar3 == (EventListenerTouchOneByOne *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0xa0 == pEVar3) {
                    /* catch() { ... } // from try @ 00faa5fc with catch @ 00faa83c */
                    /* catch() { ... } // from try @ 00faa62c with catch @ 00faa840 */
    local_60 = alStack_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_80);
  }
  else {
                    /* try { // try from 00faa808 to 010aa80b has its CatchHandler @ 00faa818 */
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
                    /* try { // try from 00faa80c to 010aa80f has its CatchHandler @ 00faa814 */
                    /* try { // try from 00faa810 to 010aa8db has its CatchHandler @ 00faa3ac */
  }
  FUN_008aeb48(alStack_80,this_00 + 0xa0);
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00faa880:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
                    /* catch() { ... } // from try @ 00faa578 with catch @ 00faa874 */
    goto LAB_00faa880;
  }
  pEVar3 = *(EventListenerTouchOneByOne **)(this + 0xf0);
  if (pEVar3 == (EventListenerTouchOneByOne *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0xd0 == pEVar3) {
    local_60 = alStack_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008aedb8(alStack_80,this_00 + 0xd0);
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00faa900:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00faa900;
  }
  pEVar3 = *(EventListenerTouchOneByOne **)(this + 0x120);
  if (pEVar3 == (EventListenerTouchOneByOne *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0x100 == pEVar3) {
    local_60 = alStack_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008aedb8(alStack_80,this_00 + 0x100);
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00faa980:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00faa980;
  }
  pEVar3 = *(EventListenerTouchOneByOne **)(this + 0x150);
  if (pEVar3 == (EventListenerTouchOneByOne *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (this + 0x130 == pEVar3) {
    local_60 = alStack_80;
    (**(code **)(*(long *)pEVar3 + 0x18))(pEVar3,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*(long *)pEVar3 + 0x10))();
  }
  FUN_008aedb8(alStack_80,this_00 + 0x130);
  if (alStack_80 == local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00faaa00:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00faaa00;
  }
  if (this_00 != (EventListener *)this) {
    std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>::
    assign<cocos2d::Touch**>
              ((vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>> *)(this_00 + 0x160),
               *(Touch ***)(this + 0x160),*(Touch ***)(this + 0x168));
  }
  *(EventListenerTouchOneByOne *)(this_00 + 0x178) = this[0x178];
LAB_00faaa20:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

