
/* cocos2d::EventListenerKeyboard::init() */

uint __thiscall cocos2d::EventListenerKeyboard::init(EventListenerKeyboard *this)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined **local_70;
  EventListenerKeyboard *pEStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = &PTR_FUN_01723440;
  pEStack_68 = this;
  uVar2 = EventListener::init((EventListener *)this,3,&LISTENER_ID,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00fa9578;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00fa9578:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00fa9594 to 010a95b7 has its CatchHandler @ 00fa9768 */
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

