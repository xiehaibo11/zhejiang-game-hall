
/* cocos2d::Scheduler::removeAllFunctionsToBePerformedInCocosThread() */

void __thiscall cocos2d::Scheduler::removeAllFunctionsToBePerformedInCocosThread(Scheduler *this)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0x30));
  plVar1 = *(long **)(this + 0x18);
  plVar4 = *(long **)(this + 0x20);
joined_r0x0088f14c:
  if (plVar4 == plVar1) {
    *(long **)(this + 0x20) = plVar1;
    std::__ndk1::mutex::unlock((mutex *)(this + 0x30));
    return;
  }
  plVar2 = (long *)plVar4[-2];
  plVar4 = plVar4 + -6;
  if (plVar4 != plVar2) goto code_r0x0088f160;
  pcVar3 = *(code **)(*plVar2 + 0x20);
  goto LAB_0088f178;
code_r0x0088f160:
  if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
LAB_0088f178:
    (*pcVar3)();
  }
  goto joined_r0x0088f14c;
}

