
/* cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void __thiscall
cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()(_lambda___1_ *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  Scheduler *pSVar9;
  ulong uVar10;
  long lVar11;
  mutex *local_170;
  char local_168;
  long alStack_150 [4];
  long *local_130;
  long local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar11 = *(long *)this;
  do {
    local_80 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_168 = '\x01';
    local_170 = (mutex *)(lVar11 + 0x68);
    std::__ndk1::mutex::lock((mutex *)(lVar11 + 0x68));
    cVar1 = *(char *)(lVar11 + 0xc0);
    plVar4 = local_80;
    while (local_80 = plVar4, cVar1 == '\0') {
      if (*(long *)(lVar11 + 0x30) != 0) goto LAB_00f88da4;
      std::__ndk1::condition_variable::wait
                ((condition_variable *)(lVar11 + 0x90),(unique_lock *)&local_170);
      plVar4 = local_80;
      cVar1 = *(char *)(lVar11 + 0xc0);
    }
    if (*(long *)(lVar11 + 0x30) == 0) {
      bVar3 = true;
    }
    else {
LAB_00f88da4:
      lVar8 = *(long *)(*(long *)(lVar11 + 0x10) + (*(ulong *)(lVar11 + 0x28) / 0x55) * 8);
      uVar10 = *(ulong *)(lVar11 + 0x28) % 0x55;
      local_80 = (long *)0x0;
      if (alStack_a0 == plVar4) {
        pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_00f88e00:
        (*pcVar5)();
      }
      else if (plVar4 != (long *)0x0) {
        pcVar5 = *(code **)(*plVar4 + 0x28);
        goto LAB_00f88e00;
      }
      puVar6 = (undefined8 *)(lVar8 + uVar10 * 0x30 + 0x20);
      local_80 = (long *)*puVar6;
      if (local_80 == (long *)0x0) {
        local_80 = (long *)0x0;
      }
      else if ((long *)(lVar8 + uVar10 * 0x30) == local_80) {
        local_80 = alStack_a0;
        (**(code **)(*(long *)*puVar6 + 0x18))((long *)*puVar6,alStack_a0);
      }
      else {
        *puVar6 = 0;
      }
      plVar4 = local_c0;
      lVar8 = *(long *)(*(long *)(lVar11 + 0x40) +
                       (*(ulong *)(lVar11 + 0x58) >> 3 & 0x1ffffffffffffff8));
      uVar10 = *(ulong *)(lVar11 + 0x58) & 0x3f;
      bVar3 = alStack_e0 == local_c0;
      local_c0 = (long *)0x0;
      if (bVar3) {
        pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_00f88e88:
        (*pcVar5)();
      }
      else if (plVar4 != (long *)0x0) {
        pcVar5 = *(code **)(*plVar4 + 0x28);
        goto LAB_00f88e88;
      }
      plVar4 = (long *)(lVar8 + uVar10 * 0x40);
      plVar7 = plVar4 + 4;
      local_c0 = (long *)*plVar7;
      if (local_c0 == (long *)0x0) {
        local_c0 = (long *)0x0;
      }
      else if (plVar4 == local_c0) {
        local_c0 = alStack_e0;
        (**(code **)(*(long *)*plVar7 + 0x18))((long *)*plVar7,alStack_e0);
      }
      else {
        *plVar7 = 0;
      }
      local_b0 = *(long *)(lVar8 + uVar10 * 0x40 + 0x30);
      plVar7 = (long *)(*(long *)(*(long *)(lVar11 + 0x10) + (*(ulong *)(lVar11 + 0x28) / 0x55) * 8)
                       + (*(ulong *)(lVar11 + 0x28) % 0x55) * 0x30);
      plVar4 = (long *)plVar7[4];
      if (plVar7 == plVar4) {
        pcVar5 = *(code **)(*plVar4 + 0x20);
LAB_00f88f2c:
        (*pcVar5)();
      }
      else if (plVar4 != (long *)0x0) {
        pcVar5 = *(code **)(*plVar4 + 0x28);
        goto LAB_00f88f2c;
      }
      uVar10 = *(long *)(lVar11 + 0x28) + 1;
      *(long *)(lVar11 + 0x30) = *(long *)(lVar11 + 0x30) + -1;
      *(ulong *)(lVar11 + 0x28) = uVar10;
      if (0xa9 < uVar10) {
        operator_delete((void *)**(undefined8 **)(lVar11 + 0x10));
        *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 8;
        *(long *)(lVar11 + 0x28) = *(long *)(lVar11 + 0x28) + -0x55;
      }
      plVar4 = (long *)(*(long *)(*(long *)(lVar11 + 0x40) +
                                 (*(ulong *)(lVar11 + 0x58) >> 3 & 0x1ffffffffffffff8)) +
                       (*(ulong *)(lVar11 + 0x58) & 0x3f) * 0x40);
      plVar7 = (long *)plVar4[4];
      if (plVar4 == plVar7) {
        pcVar5 = *(code **)(*plVar7 + 0x20);
LAB_00f88fb0:
        (*pcVar5)();
      }
      else if (plVar7 != (long *)0x0) {
        pcVar5 = *(code **)(*plVar7 + 0x28);
        goto LAB_00f88fb0;
      }
      uVar10 = *(long *)(lVar11 + 0x58) + 1;
      *(long *)(lVar11 + 0x60) = *(long *)(lVar11 + 0x60) + -1;
      *(ulong *)(lVar11 + 0x58) = uVar10;
      if (uVar10 < 0x80) {
        bVar3 = false;
      }
      else {
        operator_delete((void *)**(undefined8 **)(lVar11 + 0x40));
        bVar3 = false;
        *(long *)(lVar11 + 0x40) = *(long *)(lVar11 + 0x40) + 8;
        *(long *)(lVar11 + 0x58) = *(long *)(lVar11 + 0x58) + -0x40;
      }
    }
    if (local_168 != '\0') {
      std::__ndk1::mutex::unlock(local_170);
    }
    if (bVar3) {
      bVar3 = true;
    }
    else {
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      (**(code **)(*local_80 + 0x30))();
      lVar8 = Director::getInstance();
      pSVar9 = *(Scheduler **)(lVar8 + 0xa0);
      if (local_c0 == (long *)0x0) {
        local_130 = (long *)0x0;
      }
      else if (alStack_e0 == local_c0) {
        local_130 = alStack_150;
        (**(code **)(*local_c0 + 0x18))(local_c0,alStack_150);
      }
      else {
        local_130 = (long *)(**(code **)(*local_c0 + 0x10))();
      }
      lVar8 = local_b0;
      local_f0 = (long *)0x0;
      local_120 = local_b0;
      plVar4 = operator_new(0x60);
      *plVar4 = (long)&PTR____func_01722250;
      if (local_130 == (long *)0x0) {
        plVar4[8] = 0;
      }
      else if (alStack_150 == local_130) {
        plVar4[8] = (long)(plVar4 + 4);
        (**(code **)(*local_130 + 0x18))();
        lVar8 = local_120;
      }
      else {
        plVar4[8] = (long)local_130;
        local_130 = (long *)0x0;
      }
      plVar4[10] = lVar8;
      local_f0 = plVar4;
      Scheduler::performFunctionInCocosThread(pSVar9,alStack_110);
      if (alStack_110 == local_f0) {
        pcVar5 = *(code **)(*local_f0 + 0x20);
LAB_00f89120:
        (*pcVar5)();
      }
      else if (local_f0 != (long *)0x0) {
        pcVar5 = *(code **)(*local_f0 + 0x28);
        goto LAB_00f89120;
      }
      if (alStack_150 == local_130) {
        pcVar5 = *(code **)(*local_130 + 0x20);
LAB_00f89148:
        (*pcVar5)();
      }
      else if (local_130 != (long *)0x0) {
        pcVar5 = *(code **)(*local_130 + 0x28);
        goto LAB_00f89148;
      }
      bVar3 = false;
    }
    if (alStack_e0 == local_c0) {
      pcVar5 = *(code **)(*local_c0 + 0x20);
LAB_00f89174:
      (*pcVar5)();
    }
    else if (local_c0 != (long *)0x0) {
      pcVar5 = *(code **)(*local_c0 + 0x28);
      goto LAB_00f89174;
    }
    if (alStack_a0 == local_80) {
      pcVar5 = *(code **)(*local_80 + 0x20);
LAB_00f88d58:
      (*pcVar5)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar5 = *(code **)(*local_80 + 0x28);
      goto LAB_00f88d58;
    }
    if (bVar3) {
      if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}

