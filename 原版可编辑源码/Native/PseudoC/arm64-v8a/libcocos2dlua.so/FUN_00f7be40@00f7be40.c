
void FUN_00f7be40(long param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  Scheduler *pSVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *local_f8;
  byte *local_f0;
  long local_e8;
  long alStack_d0 [4];
  long *local_b0;
  byte *local_a0;
  byte *local_98;
  long local_90;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = cocos2d::Director::getInstance();
  pSVar8 = *(Scheduler **)(lVar5 + 0xa0);
  local_f0 = (byte *)0x0;
  local_e8 = 0;
  local_f8 = (byte *)0x0;
  plVar6 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar6 + 0x1c8))(plVar6,param_1 + 0x20,&local_f8);
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar6 == (long *)0x0) {
    local_b0 = (long *)0x0;
  }
  else if ((long *)(param_1 + 0x40) == plVar6) {
    local_b0 = alStack_d0;
    (**(code **)(*plVar6 + 0x18))();
  }
  else {
    local_b0 = (long *)(**(code **)(*plVar6 + 0x10))();
  }
  lVar5 = local_e8;
  pbVar10 = local_f0;
  pbVar9 = local_f8;
  local_f8 = (byte *)0x0;
  local_f0 = (byte *)0x0;
  local_e8 = 0;
  local_a0 = pbVar9;
  local_98 = pbVar10;
  local_90 = lVar5;
  local_60 = (long *)0x0;
  plVar6 = operator_new(0x70);
  *plVar6 = (long)&PTR____func_01721b78;
  if (local_b0 == (long *)0x0) {
    plVar6[8] = 0;
  }
  else if (alStack_d0 == local_b0) {
    plVar6[8] = (long)(plVar6 + 4);
    (**(code **)(*local_b0 + 0x18))();
    pbVar9 = local_a0;
    lVar5 = local_90;
    pbVar10 = local_98;
  }
  else {
    plVar6[8] = (long)local_b0;
    local_b0 = (long *)0x0;
  }
  plVar6[10] = (long)pbVar9;
  plVar6[0xb] = (long)pbVar10;
  plVar6[0xc] = lVar5;
  local_a0 = (byte *)0x0;
  local_98 = (byte *)0x0;
  local_90 = 0;
  local_60 = plVar6;
  cocos2d::Scheduler::performFunctionInCocosThread(pSVar8,alStack_80);
  if (alStack_80 == local_60) {
    pcVar7 = *(code **)(*local_60 + 0x20);
LAB_00f7bfa8:
    (*pcVar7)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar7 = *(code **)(*local_60 + 0x28);
    goto LAB_00f7bfa8;
  }
  pbVar9 = local_a0;
  if (local_a0 != (byte *)0x0) {
    if (local_98 != local_a0) {
      bVar1 = local_98[-0x18];
      pbVar4 = local_98 + -0x18;
      pbVar10 = local_98;
      while( true ) {
        pbVar3 = pbVar4;
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar10 + -8));
        }
        if (pbVar9 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar4 = pbVar3 + -0x18;
        pbVar10 = pbVar3;
      }
    }
    local_98 = pbVar9;
    operator_delete(local_a0);
  }
  if (alStack_d0 == local_b0) {
    pcVar7 = *(code **)(*local_b0 + 0x20);
  }
  else {
    if (local_b0 == (long *)0x0) goto LAB_00f7c030;
    pcVar7 = *(code **)(*local_b0 + 0x28);
  }
  (*pcVar7)();
LAB_00f7c030:
  pbVar9 = local_f8;
  if (local_f8 != (byte *)0x0) {
    if (local_f0 != local_f8) {
      bVar1 = local_f0[-0x18];
      pbVar4 = local_f0 + -0x18;
      pbVar10 = local_f0;
      while( true ) {
        pbVar3 = pbVar4;
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar10 + -8));
        }
        if (pbVar9 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar4 = pbVar3 + -0x18;
        pbVar10 = pbVar3;
      }
    }
    local_f0 = pbVar9;
    operator_delete(local_f8);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

