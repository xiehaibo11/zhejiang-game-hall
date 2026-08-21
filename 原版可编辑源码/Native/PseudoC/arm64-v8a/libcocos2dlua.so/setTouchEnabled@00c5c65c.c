
/* cocostudio::InputDelegate::setTouchEnabled(bool) */

void __thiscall cocostudio::InputDelegate::setTouchEnabled(InputDelegate *this,bool param_1)

{
  long lVar1;
  long lVar2;
  EventListenerTouchOneByOne *this_00;
  code *pcVar3;
  EventDispatcher *this_01;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  InputDelegate *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[8] == (InputDelegate)param_1) goto LAB_00c5c960;
  lVar2 = cocos2d::Director::getInstance();
  this_01 = *(EventDispatcher **)(lVar2 + 0xb0);
  this[8] = (InputDelegate)param_1;
  if (!param_1) {
    cocos2d::EventDispatcher::removeEventListener(this_01,*(EventListener **)(this + 0x10));
    goto LAB_00c5c960;
  }
  local_68 = this;
  if (*(int *)(this + 0x3c) == 0) {
    this_00 = (EventListenerTouchOneByOne *)cocos2d::EventListenerTouchAllAtOnce::create();
    local_80 = &PTR_FUN_016ca370;
    uStack_70 = 1;
    local_78 = 0xe0;
    local_60 = (long *)&local_80;
    FUN_008ae5c8(&local_80,(EventListener *)(this_00 + 0xa0));
    if (&local_80 == (undefined ***)local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
LAB_00c5c858:
      (*pcVar3)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar3 = *(code **)(*local_60 + 0x28);
      goto LAB_00c5c858;
    }
    local_80 = &PTR_FUN_016ca370;
    uStack_70 = 1;
    local_78 = 0xe8;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008ae5c8(&local_80,(EventListener *)(this_00 + 0xd0));
    if (&local_80 == (undefined ***)local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
LAB_00c5c8a8:
      (*pcVar3)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar3 = *(code **)(*local_60 + 0x28);
      goto LAB_00c5c8a8;
    }
    local_80 = &PTR_FUN_016ca370;
    uStack_70 = 1;
    local_78 = 0xf0;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008ae5c8(&local_80,(EventListener *)(this_00 + 0x100));
    if (&local_80 == (undefined ***)local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
LAB_00c5c8f8:
      (*pcVar3)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar3 = *(code **)(*local_60 + 0x28);
      goto LAB_00c5c8f8;
    }
    local_80 = &PTR_FUN_016ca370;
    uStack_70 = 1;
    local_78 = 0xf8;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008ae5c8(&local_80,(EventListener *)(this_00 + 0x130));
  }
  else {
    this_00 = (EventListenerTouchOneByOne *)cocos2d::EventListenerTouchOneByOne::create();
    cocos2d::EventListenerTouchOneByOne::setSwallowTouches(this_00,true);
    local_80 = &PTR_FUN_016ca408;
    uStack_70 = 1;
    local_78 = 0xc0;
    local_60 = (long *)&local_80;
    FUN_008aeb48(&local_80,this_00 + 0xa0);
    if (&local_80 == (undefined ***)local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
LAB_00c5c778:
      (*pcVar3)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar3 = *(code **)(*local_60 + 0x28);
      goto LAB_00c5c778;
    }
    local_80 = &PTR_FUN_016ca4a0;
    uStack_70 = 1;
    local_78 = 200;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008aedb8(&local_80,this_00 + 0xd0);
    if (&local_80 == (undefined ***)local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
LAB_00c5c7d0:
      (*pcVar3)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar3 = *(code **)(*local_60 + 0x28);
      goto LAB_00c5c7d0;
    }
    local_80 = &PTR_FUN_016ca4a0;
    uStack_70 = 1;
    local_78 = 0xd0;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008aedb8(&local_80,this_00 + 0x100);
    if (&local_80 == (undefined ***)local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
LAB_00c5c820:
      (*pcVar3)();
    }
    else if (local_60 != (long *)0x0) {
      pcVar3 = *(code **)(*local_60 + 0x28);
      goto LAB_00c5c820;
    }
    local_80 = &PTR_FUN_016ca4a0;
    uStack_70 = 1;
    local_78 = 0xd8;
    local_68 = this;
    local_60 = (long *)&local_80;
    FUN_008aedb8(&local_80,this_00 + 0x130);
  }
  if (&local_80 == (undefined ***)local_60) {
    pcVar3 = *(code **)(*local_60 + 0x20);
LAB_00c5c948:
    (*pcVar3)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar3 = *(code **)(*local_60 + 0x28);
    goto LAB_00c5c948;
  }
  cocos2d::EventDispatcher::addEventListenerWithFixedPriority
            (this_01,(EventListener *)this_00,*(int *)(this + 0x38));
  *(EventListenerTouchOneByOne **)(this + 0x10) = this_00;
LAB_00c5c960:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

