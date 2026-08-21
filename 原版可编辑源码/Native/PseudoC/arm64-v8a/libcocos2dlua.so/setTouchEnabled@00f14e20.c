
/* cocos2d::Layer::setTouchEnabled(bool) */

void __thiscall cocos2d::Layer::setTouchEnabled(Layer *this,bool param_1)

{
  long lVar1;
  EventListenerTouchOneByOne *this_00;
  code *pcVar2;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  Layer *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x2f8] == (Layer)param_1) goto LAB_00f15124;
  this[0x2f8] = (Layer)param_1;
  if (!param_1) {
    EventDispatcher::removeEventListener
              (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x300));
    *(undefined8 *)(this + 0x300) = 0;
    goto LAB_00f15124;
  }
  if (*(long *)(this + 0x300) != 0) goto LAB_00f15124;
  local_68 = this;
  if (*(int *)(this + 0x318) == 0) {
    this_00 = (EventListenerTouchOneByOne *)EventListenerTouchAllAtOnce::create();
    local_80 = &PTR_FUN_01701e60;
    uStack_70 = 1;
    local_78 = 0x590;
    local_60 = (long *)&local_80;
    FUN_008ae5c8(&local_80,(EventListener *)(this_00 + 0xa0));
    if (&local_80 == (undefined ***)local_60) {
      pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00f1501c:
      (*pcVar2)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar2 = *(code **)(*local_60 + 0x28);
      goto LAB_00f1501c;
    }
    local_80 = &PTR_FUN_01701e60;
    uStack_70 = 1;
    local_78 = 0x598;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008ae5c8(&local_80,(EventListener *)(this_00 + 0xd0));
    if (&local_80 == (undefined ***)local_60) {
      pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00f1506c:
      (*pcVar2)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar2 = *(code **)(*local_60 + 0x28);
      goto LAB_00f1506c;
    }
    local_80 = &PTR_FUN_01701e60;
    uStack_70 = 1;
    local_78 = 0x5a0;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008ae5c8(&local_80,(EventListener *)(this_00 + 0x100));
    if (&local_80 == (undefined ***)local_60) {
      pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00f150bc:
      (*pcVar2)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar2 = *(code **)(*local_60 + 0x28);
      goto LAB_00f150bc;
    }
    local_80 = &PTR_FUN_01701e60;
    uStack_70 = 1;
    local_78 = 0x5a8;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008ae5c8(&local_80,(EventListener *)(this_00 + 0x130));
  }
  else {
    this_00 = (EventListenerTouchOneByOne *)EventListenerTouchOneByOne::create();
    EventListenerTouchOneByOne::setSwallowTouches(this_00,(bool)this[0x31c]);
    local_80 = &PTR_FUN_01701ef8;
    uStack_70 = 1;
    local_78 = 0x570;
    local_60 = (long *)&local_80;
    FUN_008aeb48(&local_80,this_00 + 0xa0);
    if (&local_80 == (undefined ***)local_60) {
      pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00f14f3c:
      (*pcVar2)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar2 = *(code **)(*local_60 + 0x28);
      goto LAB_00f14f3c;
    }
    local_80 = &PTR_FUN_01701f90;
    uStack_70 = 1;
    local_78 = 0x578;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008aedb8(&local_80,this_00 + 0xd0);
    if (&local_80 == (undefined ***)local_60) {
      pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00f14f94:
      (*pcVar2)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar2 = *(code **)(*local_60 + 0x28);
      goto LAB_00f14f94;
    }
    local_80 = &PTR_FUN_01701f90;
    uStack_70 = 1;
    local_78 = 0x580;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008aedb8(&local_80,this_00 + 0x100);
    if (&local_80 == (undefined ***)local_60) {
      pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00f14fe4:
      (*pcVar2)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar2 = *(code **)(*local_60 + 0x28);
      goto LAB_00f14fe4;
    }
    local_80 = &PTR_FUN_01701f90;
    uStack_70 = 1;
    local_78 = 0x588;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008aedb8(&local_80,this_00 + 0x130);
  }
  if (&local_80 == (undefined ***)local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00f1510c:
    (*pcVar2)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar2 = *(code **)(*local_60 + 0x28);
    goto LAB_00f1510c;
  }
  EventDispatcher::addEventListenerWithSceneGraphPriority
            (*(EventDispatcher **)(this + 0x1f0),(EventListener *)this_00,(Node *)this);
  *(EventListenerTouchOneByOne **)(this + 0x300) = this_00;
LAB_00f15124:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

