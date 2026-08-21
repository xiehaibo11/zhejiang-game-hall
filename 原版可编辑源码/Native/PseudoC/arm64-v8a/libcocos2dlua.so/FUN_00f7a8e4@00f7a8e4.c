
void FUN_00f7a8e4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  Scheduler *pSVar5;
  long alStack_b0 [4];
  long *local_90;
  long local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = cocos2d::Director::getInstance();
  pSVar5 = *(Scheduler **)(lVar2 + 0xa0);
  plVar3 = (long *)cocos2d::FileUtils::getInstance();
  lVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,param_1 + 0x20);
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if ((long *)(param_1 + 0x40) == plVar3) {
    local_90 = alStack_b0;
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  else {
    local_90 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3);
  }
  local_50 = (long *)0x0;
  local_80 = lVar2;
  plVar3 = operator_new(0x60);
  *plVar3 = (long)&PTR____func_017218f0;
  if (local_90 == (long *)0x0) {
    plVar3[8] = 0;
  }
  else if (alStack_b0 == local_90) {
    plVar3[8] = (long)(plVar3 + 4);
    (**(code **)(*local_90 + 0x18))();
    lVar2 = local_80;
  }
  else {
    plVar3[8] = (long)local_90;
    local_90 = (long *)0x0;
  }
  plVar3[10] = lVar2;
  local_50 = plVar3;
  cocos2d::Scheduler::performFunctionInCocosThread(pSVar5,alStack_70);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00f7aa1c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00f7aa1c;
  }
  if (alStack_b0 == local_90) {
    pcVar4 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_00f7aa50;
    pcVar4 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar4)();
LAB_00f7aa50:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

