
void FUN_00e6e18c(long param_1,undefined1 *param_2,PcmData *param_3)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  PcmData aPStack_120 [48];
  long local_f0;
  undefined1 local_e8;
  PcmData aPStack_e0 [48];
  long alStack_b0 [4];
  long *local_90;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *param_2;
  cocos2d::experimental::PcmData::PcmData(aPStack_120,param_3);
  local_f0 = *(long *)(param_1 + 0x10);
  plVar6 = *(long **)(local_f0 + 0x50);
  local_e8 = uVar1;
  cocos2d::experimental::PcmData::PcmData(aPStack_e0,aPStack_120);
  plVar3 = *(long **)(param_1 + 0x40);
  if (plVar3 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if ((long *)(param_1 + 0x20) == plVar3) {
    local_90 = alStack_b0;
    (**(code **)(*plVar3 + 0x18))();
  }
  else {
    local_90 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  local_60 = (long *)0x0;
  plVar3 = operator_new(0x80);
  *plVar3 = (long)&PTR_FUN_016f3c48;
  plVar3[2] = local_f0;
  *(undefined1 *)(plVar3 + 3) = local_e8;
  cocos2d::experimental::PcmData::PcmData((PcmData *)(plVar3 + 4),aPStack_e0);
  if (local_90 == (long *)0x0) {
    plVar3[0xe] = 0;
  }
  else if (alStack_b0 == local_90) {
    plVar3[0xe] = (long)(plVar3 + 10);
    (**(code **)(*local_90 + 0x18))();
  }
  else {
    lVar4 = (**(code **)(*local_90 + 0x10))();
    plVar3[0xe] = lVar4;
  }
  local_60 = plVar3;
  (**(code **)(*plVar6 + 0x10))(plVar6,alStack_80);
  if (alStack_80 == local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00e6e2ec:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00e6e2ec;
  }
  if (alStack_b0 == local_90) {
    pcVar5 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_00e6e320;
    pcVar5 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar5)();
LAB_00e6e320:
  cocos2d::experimental::PcmData::~PcmData(aPStack_e0);
  cocos2d::experimental::PcmData::~PcmData(aPStack_120);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

