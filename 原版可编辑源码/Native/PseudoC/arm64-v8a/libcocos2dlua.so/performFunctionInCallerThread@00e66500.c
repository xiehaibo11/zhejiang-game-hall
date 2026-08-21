
/* CallerThreadUtils::performFunctionInCallerThread(std::__ndk1::function<void ()> const&) */

void __thiscall
CallerThreadUtils::performFunctionInCallerThread(CallerThreadUtils *this,function *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  Scheduler *pSVar5;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = cocos2d::Director::getInstance();
  plVar3 = *(long **)(param_1 + 0x20);
  pSVar5 = *(Scheduler **)(lVar2 + 0xa0);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar3) {
    local_50 = alStack_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  cocos2d::Scheduler::performFunctionInCocosThread(pSVar5,alStack_70);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00e665ac;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_00e665ac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

