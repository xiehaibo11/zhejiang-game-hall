
void FUN_00f76e70(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  Scheduler *pSVar6;
  long alStack_c0 [4];
  long *local_a0;
  byte local_90;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = cocos2d::Director::getInstance();
  pSVar6 = *(Scheduler **)(lVar3 + 0xa0);
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
  bVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4,param_1 + 0x70,param_1 + 0x20);
  plVar4 = *(long **)(param_1 + 0x60);
  bVar2 = bVar2 & 1;
  if (plVar4 == (long *)0x0) {
    local_a0 = (long *)0x0;
  }
  else if ((long *)(param_1 + 0x40) == plVar4) {
    local_a0 = alStack_c0;
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  else {
    local_a0 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4);
  }
  local_60 = (long *)0x0;
  local_90 = bVar2;
  plVar4 = operator_new(0x60);
  *plVar4 = (long)&PTR____func_017202a8;
  if (local_a0 == (long *)0x0) {
    plVar4[8] = 0;
  }
  else if (alStack_c0 == local_a0) {
    plVar4[8] = (long)(plVar4 + 4);
    (**(code **)(*local_a0 + 0x18))();
    bVar2 = local_90;
  }
  else {
    plVar4[8] = (long)local_a0;
    local_a0 = (long *)0x0;
  }
  *(byte *)(plVar4 + 10) = bVar2;
  local_60 = plVar4;
  cocos2d::Scheduler::performFunctionInCocosThread(pSVar6,alStack_80);
  if (alStack_80 == local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00f76fb8:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00f76fb8;
  }
  if (alStack_c0 == local_a0) {
    pcVar5 = *(code **)(*local_a0 + 0x20);
  }
  else {
    if (local_a0 == (long *)0x0) goto LAB_00f76fec;
    pcVar5 = *(code **)(*local_a0 + 0x28);
  }
  (*pcVar5)();
LAB_00f76fec:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

