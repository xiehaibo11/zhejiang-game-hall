
/* cocostudio::timeline::foreachNodeDescendant(cocos2d::Node*, std::__ndk1::function<void
   (cocos2d::Node*)>) */

void cocostudio::timeline::foreachNodeDescendant(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *local_88;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)param_2[4];
  local_88 = param_1;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
  plVar3 = (long *)(**(code **)(*param_1 + 0x240))(param_1);
  puVar6 = (undefined8 *)*plVar3;
  puVar1 = (undefined8 *)plVar3[1];
  if (puVar6 != puVar1) {
    do {
      plVar3 = (long *)param_2[4];
      uVar5 = *puVar6;
      if (plVar3 == (long *)0x0) {
        local_60 = (long *)0x0;
      }
      else if (param_2 == plVar3) {
        local_60 = alStack_80;
        (**(code **)(*plVar3 + 0x18))(plVar3,alStack_80);
      }
      else {
        local_60 = (long *)(**(code **)(*plVar3 + 0x10))();
      }
      foreachNodeDescendant(uVar5,alStack_80);
      if (alStack_80 == local_60) {
        pcVar4 = *(code **)(*local_60 + 0x20);
LAB_00caa85c:
        (*pcVar4)();
      }
      else if (local_60 != (long *)0x0) {
        pcVar4 = *(code **)(*local_60 + 0x28);
        goto LAB_00caa85c;
      }
      puVar6 = puVar6 + 1;
    } while (puVar1 != puVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

