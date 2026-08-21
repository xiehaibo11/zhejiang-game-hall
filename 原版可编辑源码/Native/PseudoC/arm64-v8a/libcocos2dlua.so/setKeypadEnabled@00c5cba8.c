
/* cocostudio::InputDelegate::setKeypadEnabled(bool) */

void __thiscall cocostudio::InputDelegate::setKeypadEnabled(InputDelegate *this,bool param_1)

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
  if ((InputDelegate)param_1 == this[0x28]) goto LAB_00c5ccc4;
  this[0x28] = (InputDelegate)param_1;
  lVar2 = cocos2d::Director::getInstance();
  this_00 = *(EventDispatcher **)(lVar2 + 0xb0);
  cocos2d::EventDispatcher::removeEventListener(this_00,*(EventListener **)(this + 0x30));
  if (!param_1) goto LAB_00c5ccc4;
  pEVar3 = (EventListener *)cocos2d::EventListenerKeyboard::create();
  local_80 = &PTR_FUN_016ca5d0;
  uStack_70 = 1;
  local_78 = 0xb0;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008af1b8(&local_80,pEVar3 + 0xa0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00c5cc5c:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00c5cc5c;
  }
  local_80 = &PTR_FUN_016ca5d0;
  uStack_70 = 1;
  local_78 = 0xb8;
  local_68 = this;
  local_60 = (long *)&local_80;
  FUN_008af1b8(&local_80,pEVar3 + 0xd0);
  if (&local_80 == (undefined ***)local_60) {
    pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00c5ccac:
    (*pcVar4)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar4 = *(code **)(*local_60 + 0x28);
    goto LAB_00c5ccac;
  }
  cocos2d::EventDispatcher::addEventListenerWithFixedPriority(this_00,pEVar3,-1);
  *(EventListener **)(this + 0x30) = pEVar3;
LAB_00c5ccc4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

