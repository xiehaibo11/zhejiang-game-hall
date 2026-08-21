
void FUN_00f790b4(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  Scheduler *pSVar6;
  long alStack_b0 [4];
  long *local_90;
  byte local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = cocos2d::Director::getInstance();
  pSVar6 = *(Scheduler **)(lVar3 + 0xa0);
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
  bVar2 = (**(code **)(*plVar4 + 0x168))(plVar4,param_1 + 0x20);
  plVar4 = *(long **)(param_1 + 0x60);
  bVar2 = bVar2 & 1;
  if (plVar4 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if ((long *)(param_1 + 0x40) == plVar4) {
    local_90 = alStack_b0;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  else {
    local_90 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
  }
  local_50 = (long *)0x0;
  local_80 = bVar2;
  plVar4 = operator_new(0x60);
  *plVar4 = (long)&PTR____func_017202a8;
  if (local_90 == (long *)0x0) {
    plVar4[8] = 0;
  }
  else if (alStack_b0 == local_90) {
    plVar4[8] = (long)(plVar4 + 4);
    (**(code **)(*local_90 + 0x18))();
    bVar2 = local_80;
  }
  else {
    plVar4[8] = (long)local_90;
    local_90 = (long *)0x0;
  }
  *(byte *)(plVar4 + 10) = bVar2;
  local_50 = plVar4;
  cocos2d::Scheduler::performFunctionInCocosThread(pSVar6,alStack_70);
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00f791ec:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00f791ec;
  }
  if (alStack_b0 == local_90) {
    pcVar5 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_00f79220;
    pcVar5 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar5)();
LAB_00f79220:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

