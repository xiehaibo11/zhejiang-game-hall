
/* cocos2d::extension::ScrollView::setTouchEnabled(bool) */

void __thiscall cocos2d::extension::ScrollView::setTouchEnabled(ScrollView *this,bool param_1)

{
  long lVar1;
  EventListenerTouchOneByOne *this_00;
  code *pcVar2;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ScrollView *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x3b8));
  *(undefined8 *)(this + 0x3b8) = 0;
  if (!param_1) {
    this[0x334] = (ScrollView)0x0;
    this[0x348] = (ScrollView)0x0;
    *(undefined8 *)(this + 0x380) = *(undefined8 *)(this + 0x378);
    goto LAB_00e14d30;
  }
  this_00 = (EventListenerTouchOneByOne *)EventListenerTouchOneByOne::create();
  *(EventListenerTouchOneByOne **)(this + 0x3b8) = this_00;
  EventListenerTouchOneByOne::setSwallowTouches(this_00,true);
  local_70 = &PTR_FUN_016ed4c8;
  uStack_60 = 1;
  local_68 = 0x570;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_008aeb48(&local_70,*(long *)(this + 0x3b8) + 0xa0);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_00e14c18:
    (*pcVar2)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_00e14c18;
  }
  local_70 = &PTR_FUN_016ed560;
  uStack_60 = 1;
  local_68 = 0x578;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_008aedb8(&local_70,*(long *)(this + 0x3b8) + 0xd0);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_00e14c74:
    (*pcVar2)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_00e14c74;
  }
  local_70 = &PTR_FUN_016ed560;
  uStack_60 = 1;
  local_68 = 0x580;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_008aedb8(&local_70,*(long *)(this + 0x3b8) + 0x100);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_00e14cc8:
    (*pcVar2)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_00e14cc8;
  }
  local_70 = &PTR_FUN_016ed560;
  uStack_60 = 1;
  local_68 = 0x588;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_008aedb8(&local_70,*(long *)(this + 0x3b8) + 0x130);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
LAB_00e14d1c:
    (*pcVar2)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar2 = *(code **)(*local_50 + 0x28);
    goto LAB_00e14d1c;
  }
  EventDispatcher::addEventListenerWithSceneGraphPriority
            (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x3b8),(Node *)this);
LAB_00e14d30:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

