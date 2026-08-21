
/* cocos2d::Scheduler::unscheduleAll() */

void __thiscall cocos2d::Scheduler::unscheduleAll(Scheduler *this)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  while (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + 8);
    lVar2 = *(long *)(lVar2 + 0x38);
    unscheduleAllForTarget(this,(void *)*puVar1);
  }
  return;
}

