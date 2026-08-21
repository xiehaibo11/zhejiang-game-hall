
/* cocostudio::InputDelegate::setAccelerometerEnabled(bool) */

void __thiscall cocostudio::InputDelegate::setAccelerometerEnabled(InputDelegate *this,bool param_1)

{
  long lVar1;
  long lVar2;
  EventListener *pEVar3;
  code *pcVar4;
  EventDispatcher *this_00;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  InputDelegate *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((InputDelegate)param_1 == this[0x18]) goto LAB_00c5cb3c;
  this[0x18] = (InputDelegate)param_1;
  lVar2 = cocos2d::Director::getInstance();
  this_00 = *(EventDispatcher **)(lVar2 + 0xb0);
  cocos2d::EventDispatcher::removeEventListener(this_00,*(EventListener **)(this + 0x20));
  *(undefined8 *)(this + 0x20) = 0;
  cocos2d::Device::setAccelerometerEnabled(param_1);
  if (!param_1) goto LAB_00c5cb3c;
  local_80 = &PTR_FUN_016ca538;
  uStack_70 = 1;
  local_78 = 0xa8;
  local_68 = this;
  local_60 = (long *)&local_80;
  pEVar3 = (EventListener *)cocos2d::EventListenerAcceleration::create((function *)&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00c5cb24:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00c5cb24;
  }
  cocos2d::EventDispatcher::addEventListenerWithFixedPriority(this_00,pEVar3,-1);
  *(EventListener **)(this + 0x20) = pEVar3;
LAB_00c5cb3c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

