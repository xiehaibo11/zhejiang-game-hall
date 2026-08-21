
/* cocos2d::Scheduler::removeAllFunctionsToBePerformedInCocosThread() */

void __thiscall cocos2d::Scheduler::removeAllFunctionsToBePerformedInCocosThread(Scheduler *this)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0xa8));
  plVar1 = *(long **)(this + 0x90);
  plVar4 = *(long **)(this + 0x98);
joined_r0x00fb5c80:
  if (plVar4 == plVar1) {
    *(long **)(this + 0x98) = plVar1;
    std::__ndk1::mutex::unlock((mutex *)(this + 0xa8));
    return;
  }
  plVar2 = (long *)plVar4[-2];
  plVar4 = plVar4 + -6;
  if (plVar4 != plVar2) goto code_r0x00fb5cac;
  pcVar3 = *(code **)(*plVar2 + 0x20);
  goto LAB_00fb5c90;
code_r0x00fb5cac:
  if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
LAB_00fb5c90:
    (*pcVar3)();
  }
  goto joined_r0x00fb5c80;
}

