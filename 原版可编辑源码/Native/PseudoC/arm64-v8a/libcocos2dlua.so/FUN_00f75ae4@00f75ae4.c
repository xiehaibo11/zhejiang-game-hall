
void FUN_00f75ae4(long param_1)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  Scheduler *pSVar7;
  ulong local_e8;
  long lStack_e0;
  void *local_d8;
  long alStack_c0 [4];
  long *local_a0;
  ulong local_90;
  long lStack_88;
  void *local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = cocos2d::Director::getInstance();
  pSVar7 = *(Scheduler **)(lVar4 + 0xa0);
  plVar5 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar5 + 0x18))(&local_e8,plVar5,param_1 + 0x20);
  plVar5 = *(long **)(param_1 + 0x60);
  if (plVar5 == (long *)0x0) {
    local_a0 = (long *)0x0;
  }
  else if ((long *)(param_1 + 0x40) == plVar5) {
    local_a0 = alStack_c0;
    (**(code **)(*plVar5 + 0x18))();
  }
  else {
    local_a0 = (long *)(**(code **)(*plVar5 + 0x10))();
  }
  local_80 = local_d8;
  lStack_88 = lStack_e0;
  local_90 = local_e8;
  local_e8 = 0;
  lStack_e0 = 0;
  local_d8 = (void *)0x0;
  local_50 = (long *)0x0;
  plVar5 = operator_new(0x70);
  *plVar5 = (long)&PTR____func_017206a8;
  if (local_a0 == (long *)0x0) {
    plVar5[8] = 0;
  }
  else if (alStack_c0 == local_a0) {
    plVar5[8] = (long)(plVar5 + 4);
    (**(code **)(*local_a0 + 0x18))();
  }
  else {
    plVar5[8] = (long)local_a0;
    local_a0 = (long *)0x0;
  }
  pvVar3 = local_80;
  lVar4 = lStack_88;
  uVar2 = local_90;
  lStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
  plVar5[0xb] = lVar4;
  plVar5[10] = uVar2;
  plVar5[0xc] = (long)pvVar3;
  local_50 = plVar5;
  cocos2d::Scheduler::performFunctionInCocosThread(pSVar7,alStack_70);
  if (alStack_70 == local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
LAB_00f75c40:
    (*pcVar6)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar6 = *(code **)(*local_50 + 0x28);
    goto LAB_00f75c40;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (alStack_c0 == local_a0) {
    pcVar6 = *(code **)(*local_a0 + 0x20);
  }
  else {
    if (local_a0 == (long *)0x0) goto LAB_00f75c84;
    pcVar6 = *(code **)(*local_a0 + 0x28);
  }
  (*pcVar6)();
LAB_00f75c84:
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

