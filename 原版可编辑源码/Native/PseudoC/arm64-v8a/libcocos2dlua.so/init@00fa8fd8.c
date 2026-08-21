
/* cocos2d::EventListenerFocus::init() */

uint __thiscall cocos2d::EventListenerFocus::init(EventListenerFocus *this)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined **local_70;
  EventListenerFocus *pEStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = &PTR_FUN_01723378;
  pEStack_68 = this;
  uVar2 = EventListener::init((EventListener *)this,6,&LISTENER_ID,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00fa904c;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00fa904c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

