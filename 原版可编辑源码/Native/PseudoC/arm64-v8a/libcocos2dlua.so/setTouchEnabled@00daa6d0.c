
/* cocos2d::ui::Widget::setTouchEnabled(bool) */

void __thiscall cocos2d::ui::Widget::setTouchEnabled(Widget *this,bool param_1)

{
  long lVar1;
  Ref *this_00;
  EventListenerTouchOneByOne *this_01;
  code *pcVar2;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  Widget *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((Widget)param_1 == this[900]) goto LAB_00daa8b8;
  this[900] = (Widget)param_1;
  if (!param_1) {
    EventDispatcher::removeEventListener
              (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x3c0));
    if (*(Ref **)(this + 0x3c0) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x3c0));
      *(undefined8 *)(this + 0x3c0) = 0;
    }
    goto LAB_00daa8b8;
  }
  this_00 = (Ref *)EventListenerTouchOneByOne::create();
  *(Ref **)(this + 0x3c0) = this_00;
  this_01 = (EventListenerTouchOneByOne *)0x0;
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
    this_01 = *(EventListenerTouchOneByOne **)(this + 0x3c0);
  }
  EventListenerTouchOneByOne::setSwallowTouches(this_01,true);
  local_70 = &PTR_FUN_016d8f40;
  uStack_60 = 1;
  local_68 = 0x5d8;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_008aeb48(&local_70,*(long *)(this + 0x3c0) + 0xa0);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_00daa7a0:
    (*pcVar2)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_00daa7a0;
  }
  local_70 = &PTR_FUN_016d8fd8;
  uStack_60 = 1;
  local_68 = 0x5e0;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_008aedb8(&local_70,*(long *)(this + 0x3c0) + 0xd0);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_00daa7fc:
    (*pcVar2)();
  }
  else if (local_50 != (long *)0x0) {
                    /* try { // try from 00daa7e8 to 00eaa8af has its CatchHandler @ 00daa7e8
                       catch() { ... } // from try @ 00daa7e8 with catch @ 00daa7e8
                       catch() { ... } // from try @ 00daa8bc with catch @ 00daa7e8 */
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_00daa7fc;
  }
  local_70 = &PTR_FUN_016d8fd8;
  uStack_60 = 1;
  local_68 = 0x5e8;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_008aedb8(&local_70,*(long *)(this + 0x3c0) + 0x100);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_00daa850:
    (*pcVar2)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_00daa850;
  }
  local_70 = &PTR_FUN_016d8fd8;
  uStack_60 = 1;
  local_68 = 0x5f0;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_008aedb8(&local_70,*(long *)(this + 0x3c0) + 0x130);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_00daa8a4:
    (*pcVar2)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_00daa8a4;
  }
                    /* try { // try from 00daa8b0 to 00eaa8bb has its CatchHandler @ 00daa908 */
  EventDispatcher::addEventListenerWithSceneGraphPriority
            (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x3c0),(Node *)this);
LAB_00daa8b8:
                    /* try { // try from 00daa8bc to 00eaa943 has its CatchHandler @ 00daa7e8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

