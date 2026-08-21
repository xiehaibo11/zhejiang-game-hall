
/* cocos2d::extension::Control::init() */

void __thiscall cocos2d::extension::Control::init(Control *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  EventListenerTouchOneByOne *this_00;
  undefined8 uVar4;
  code *pcVar5;
  EventDispatcher *this_01;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  Control *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = Layer::init((Layer *)this);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
    goto LAB_00e08d34;
  }
  *(undefined4 *)(this + 0x354) = 1;
  (**(code **)(*(long *)this + 0x650))(this,1);
  (**(code **)(*(long *)this + 0x660))(this,0);
  (**(code **)(*(long *)this + 0x670))(this,0);
  lVar3 = Director::getInstance();
  this_01 = *(EventDispatcher **)(lVar3 + 0xb0);
  this_00 = (EventListenerTouchOneByOne *)EventListenerTouchOneByOne::create();
  EventListenerTouchOneByOne::setSwallowTouches(this_00,true);
  local_80 = &PTR_FUN_016e8a60;
  uStack_70 = 1;
  local_78 = 0x570;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008aeb48(&local_80,this_00 + 0xa0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00e08c24:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00e08c24;
  }
  local_80 = &PTR_FUN_016e8af8;
  uStack_70 = 1;
  local_78 = 0x578;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008aedb8(&local_80,this_00 + 0xd0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00e08c7c:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00e08c7c;
  }
  local_80 = &PTR_FUN_016e8af8;
  uStack_70 = 1;
  local_78 = 0x580;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008aedb8(&local_80,this_00 + 0x100);
  if (&local_80 == (undefined ***)local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00e08ccc:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00e08ccc;
  }
  local_80 = &PTR_FUN_016e8af8;
  uStack_70 = 1;
  local_78 = 0x588;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008aedb8(&local_80,this_00 + 0x130);
  if (&local_80 == (undefined ***)local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00e08d1c:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00e08d1c;
  }
  EventDispatcher::addEventListenerWithSceneGraphPriority
            (this_01,(EventListener *)this_00,(Node *)this);
  uVar4 = 1;
LAB_00e08d34:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

