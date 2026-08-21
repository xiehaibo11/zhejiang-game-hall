
/* cocos2d::EventListenerController::init() */

uint __thiscall cocos2d::EventListenerController::init(EventListenerController *this)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined **local_70;
  EventListenerController *pEStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = &PTR_FUN_017231e8;
  pEStack_68 = this;
  uVar2 = EventListener::init((EventListener *)this,7,&LISTENER_ID,&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00fa7ec8;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00fa7ec8:
                    /* try { // try from 00fa7ecc to 010a7fb3 has its CatchHandler @ 00fa7ba8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

