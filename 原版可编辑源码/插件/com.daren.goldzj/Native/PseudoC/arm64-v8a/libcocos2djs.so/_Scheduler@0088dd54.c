
/* cocos2d::Scheduler::~Scheduler() */

void __thiscall cocos2d::Scheduler::~Scheduler(Scheduler *this)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  lVar4 = *(long *)this;
  while (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 8);
    lVar4 = *(long *)(lVar4 + 0x38);
    unscheduleAllForTarget(this,(void *)*puVar1);
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x30));
  plVar5 = *(long **)(this + 0x18);
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar6 = *(long **)(this + 0x20);
  plVar2 = plVar5;
  if (plVar6 != plVar5) {
    do {
      plVar2 = (long *)plVar6[-2];
      plVar6 = plVar6 + -6;
      if (plVar6 == plVar2) {
        pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_0088ddcc:
        (*pcVar3)();
      }
      else if (plVar2 != (long *)0x0) {
        pcVar3 = *(code **)(*plVar2 + 0x28);
        goto LAB_0088ddcc;
      }
    } while (plVar5 != plVar6);
    plVar2 = *(long **)(this + 0x18);
  }
  *(long **)(this + 0x20) = plVar5;
  operator_delete(plVar2);
  return;
}

