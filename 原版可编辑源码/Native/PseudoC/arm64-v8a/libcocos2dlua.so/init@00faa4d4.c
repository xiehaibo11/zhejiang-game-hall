
/* cocos2d::EventListenerTouchOneByOne::init() */

uint __thiscall cocos2d::EventListenerTouchOneByOne::init(EventListenerTouchOneByOne *this)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = (long *)0x0;
  uVar2 = EventListener::init((EventListener *)this,1,LISTENER_ID,alStack_70);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00faa53c;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00faa53c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

