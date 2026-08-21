
/* cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE()
   const */

void __thiscall
cocos2d::AsyncTaskPool::ThreadTasks::ThreadTasks()::{lambda()#1}::operator()(_lambda___1_ *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  long lVar3;
  Scheduler *this_00;
  __shared_weak_count *this_01;
  bool bVar4;
  long *plVar5;
  mutex **ppmVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  mutex *pmVar13;
  mutex amStack_150 [32];
  mutex *local_130;
  mutex *local_120;
  mutex *local_110;
  char local_108;
  mutex **local_f0;
  long alStack_e0 [4];
  long *local_c0;
  mutex *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar12 = *(long *)this;
                    /* catch() { ... } // from try @ 00a6c024 with catch @ 00a6c1e0 */
                    /* catch() { ... } // from try @ 00a6c018 with catch @ 00a6c1e4 */
                    /* catch() { ... } // from try @ 00a6bff8 with catch @ 00a6c1e8 */
                    /* catch() { ... } // from try @ 00a6c030 with catch @ 00a6c1f8 */
  do {
    local_80 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_108 = '\x01';
    local_110 = (mutex *)(lVar12 + 0x68);
    std::__ndk1::mutex::lock((mutex *)(lVar12 + 0x68));
    while (plVar5 = local_80, *(char *)(lVar12 + 0xc0) == '\0') {
      if (*(long *)(lVar12 + 0x30) != 0) goto LAB_00a6c240;
      std::__ndk1::condition_variable::wait
                ((condition_variable *)(lVar12 + 0x90),(unique_lock *)&local_110);
    }
    if (*(long *)(lVar12 + 0x30) == 0) {
      bVar4 = true;
    }
    else {
LAB_00a6c240:
                    /* try { // try from 00a6c250 to 00b6c2af has its CatchHandler @ 00a6c250
                       catch() { ... } // from try @ 00a6c250 with catch @ 00a6c250
                       catch() { ... } // from try @ 00a6c554 with catch @ 00a6c250 */
      lVar10 = *(long *)(*(long *)(lVar12 + 0x10) + (*(ulong *)(lVar12 + 0x28) / 0x55) * 8);
      uVar11 = *(ulong *)(lVar12 + 0x28) % 0x55;
      bVar4 = alStack_a0 == local_80;
      local_80 = (long *)0x0;
      if (bVar4) {
        pcVar7 = *(code **)(*plVar5 + 0x20);
LAB_00a6c294:
        (*pcVar7)();
      }
      else if (plVar5 != (long *)0x0) {
        pcVar7 = *(code **)(*plVar5 + 0x28);
        goto LAB_00a6c294;
      }
      puVar8 = (undefined8 *)(lVar10 + uVar11 * 0x30 + 0x20);
      local_80 = (long *)*puVar8;
      if (local_80 == (long *)0x0) {
        local_80 = (long *)0x0;
      }
      else if ((long *)(lVar10 + uVar11 * 0x30) == local_80) {
                    /* try { // try from 00a6c2d0 to 00b6c2db has its CatchHandler @ 00a6c5ac */
        local_80 = alStack_a0;
        (**(code **)(*(long *)*puVar8 + 0x18))((long *)*puVar8,alStack_a0);
      }
      else {
                    /* try { // try from 00a6c2b0 to 00b6c2c7 has its CatchHandler @ 00a6c60c */
        *puVar8 = 0;
      }
      plVar5 = local_c0;
                    /* try { // try from 00a6c2dc to 00b6c2e7 has its CatchHandler @ 00a6c5a8 */
                    /* try { // try from 00a6c2e8 to 00b6c2ff has its CatchHandler @ 00a6c61c */
      lVar10 = *(long *)(*(long *)(lVar12 + 0x40) +
                        (*(ulong *)(lVar12 + 0x58) >> 3 & 0x1ffffffffffffff8));
      uVar11 = *(ulong *)(lVar12 + 0x58) & 0x3f;
      bVar4 = alStack_e0 == local_c0;
      local_c0 = (long *)0x0;
      if (bVar4) {
        pcVar7 = *(code **)(*plVar5 + 0x20);
LAB_00a6c31c:
        (*pcVar7)();
      }
      else if (plVar5 != (long *)0x0) {
        pcVar7 = *(code **)(*plVar5 + 0x28);
        goto LAB_00a6c31c;
      }
      plVar5 = (long *)(lVar10 + uVar11 * 0x40);
      plVar9 = plVar5 + 4;
      local_c0 = (long *)*plVar9;
      if (local_c0 == (long *)0x0) {
        local_c0 = (long *)0x0;
      }
      else {
                    /* try { // try from 00a6c330 to 00b6c34b has its CatchHandler @ 00a6c598 */
        if (plVar5 == local_c0) {
          local_c0 = alStack_e0;
                    /* try { // try from 00a6c360 to 00b6c3bb has its CatchHandler @ 00a6c5b0 */
          (**(code **)(*(long *)*plVar9 + 0x18))((long *)*plVar9,alStack_e0);
        }
        else {
          *plVar9 = 0;
        }
      }
      local_b0 = *(mutex **)(lVar10 + uVar11 * 0x40 + 0x30);
      plVar9 = (long *)(*(long *)(*(long *)(lVar12 + 0x10) + (*(ulong *)(lVar12 + 0x28) / 0x55) * 8)
                       + (*(ulong *)(lVar12 + 0x28) % 0x55) * 0x30);
      plVar5 = (long *)plVar9[4];
      if (plVar9 == plVar5) {
        pcVar7 = *(code **)(*plVar5 + 0x20);
LAB_00a6c3b8:
        (*pcVar7)();
      }
      else if (plVar5 != (long *)0x0) {
        pcVar7 = *(code **)(*plVar5 + 0x28);
        goto LAB_00a6c3b8;
      }
      uVar11 = *(long *)(lVar12 + 0x28) + 1;
      *(long *)(lVar12 + 0x30) = *(long *)(lVar12 + 0x30) + -1;
      *(ulong *)(lVar12 + 0x28) = uVar11;
      if (0xa9 < uVar11) {
        operator_delete((void *)**(undefined8 **)(lVar12 + 0x10));
                    /* try { // try from 00a6c3f0 to 00b6c493 has its CatchHandler @ 00a6c61c */
        *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 8;
        *(long *)(lVar12 + 0x28) = *(long *)(lVar12 + 0x28) + -0x55;
      }
      plVar5 = (long *)(*(long *)(*(long *)(lVar12 + 0x40) +
                                 (*(ulong *)(lVar12 + 0x58) >> 3 & 0x1ffffffffffffff8)) +
                       (*(ulong *)(lVar12 + 0x58) & 0x3f) * 0x40);
      plVar9 = (long *)plVar5[4];
      if (plVar5 == plVar9) {
        pcVar7 = *(code **)(*plVar9 + 0x20);
LAB_00a6c43c:
        (*pcVar7)();
      }
      else if (plVar9 != (long *)0x0) {
        pcVar7 = *(code **)(*plVar9 + 0x28);
        goto LAB_00a6c43c;
      }
      uVar11 = *(long *)(lVar12 + 0x58) + 1;
      *(long *)(lVar12 + 0x60) = *(long *)(lVar12 + 0x60) + -1;
      *(ulong *)(lVar12 + 0x58) = uVar11;
      if (uVar11 < 0x80) {
        bVar4 = false;
      }
      else {
        operator_delete((void *)**(undefined8 **)(lVar12 + 0x40));
        bVar4 = false;
        *(long *)(lVar12 + 0x40) = *(long *)(lVar12 + 0x40) + 8;
        *(long *)(lVar12 + 0x58) = *(long *)(lVar12 + 0x58) + -0x40;
      }
    }
    if (local_108 != '\0') {
      std::__ndk1::mutex::unlock(local_110);
    }
    if (bVar4) {
      bVar4 = true;
    }
    else {
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      (**(code **)(*local_80 + 0x30))();
      this_01 = DAT_01d35b10;
      this_00 = Application::_scheduler;
      if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
        p_Var1 = DAT_01d35b10 + 8;
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (local_c0 == (long *)0x0) {
        local_130 = (mutex *)0x0;
                    /* try { // try from 00a6c510 to 00b6c553 has its CatchHandler @ 00a6c5b0 */
      }
      else if (alStack_e0 == local_c0) {
        local_130 = amStack_150;
        (**(code **)(*local_c0 + 0x18))(local_c0,amStack_150);
      }
      else {
        local_130 = (mutex *)(**(code **)(*local_c0 + 0x10))();
      }
      pmVar13 = local_b0;
      local_f0 = (mutex **)0x0;
      local_120 = local_b0;
      ppmVar6 = operator_new(0x50);
      *ppmVar6 = (mutex *)&PTR____func_01c6ea70;
                    /* try { // try from 00a6c554 to 00b6c673 has its CatchHandler @ 00a6c250 */
      if (local_130 == (mutex *)0x0) {
        ppmVar6[6] = (mutex *)0x0;
      }
      else if (amStack_150 == local_130) {
        ppmVar6[6] = (mutex *)(ppmVar6 + 2);
        (**(code **)(*(long *)local_130 + 0x18))();
        pmVar13 = local_120;
      }
      else {
        ppmVar6[6] = local_130;
        local_130 = (mutex *)0x0;
      }
      ppmVar6[8] = pmVar13;
      local_f0 = ppmVar6;
                    /* catch() { ... } // from try @ 00a6c330 with catch @ 00a6c598 */
      Scheduler::performFunctionInCocosThread(this_00,(function *)&local_110);
                    /* catch() { ... } // from try @ 00a6c2dc with catch @ 00a6c5a8 */
                    /* catch() { ... } // from try @ 00a6c2d0 with catch @ 00a6c5ac */
                    /* catch() { ... } // from try @ 00a6c360 with catch @ 00a6c5b0
                       catch() { ... } // from try @ 00a6c510 with catch @ 00a6c5b0 */
      if (&local_110 == local_f0) {
        pcVar7 = *(code **)(*local_f0 + 0x20);
LAB_00a6c5d4:
        (*pcVar7)();
      }
      else if (local_f0 != (mutex **)0x0) {
        pcVar7 = *(code **)(*local_f0 + 0x28);
        goto LAB_00a6c5d4;
      }
      if (amStack_150 == local_130) {
        pcVar7 = *(code **)(*(long *)local_130 + 0x20);
LAB_00a6c600:
        (*pcVar7)();
      }
      else if (local_130 != (mutex *)0x0) {
        pcVar7 = *(code **)(*(long *)local_130 + 0x28);
        goto LAB_00a6c600;
      }
      bVar4 = false;
      if (this_01 != (__shared_weak_count *)0x0) {
        p_Var1 = this_01 + 8;
        do {
                    /* catch() { ... } // from try @ 00a6c2b0 with catch @ 00a6c60c */
          lVar10 = *(long *)p_Var1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
                    /* catch() { ... } // from try @ 00a6c2e8 with catch @ 00a6c61c
                       catch() { ... } // from try @ 00a6c3f0 with catch @ 00a6c61c */
        if (lVar10 == 0) {
          (**(code **)(*(long *)this_01 + 0x10))(this_01);
          std::__ndk1::__shared_weak_count::__release_weak(this_01);
        }
        bVar4 = false;
      }
    }
    if (alStack_e0 == local_c0) {
      pcVar7 = *(code **)(*local_c0 + 0x20);
LAB_00a6c660:
      (*pcVar7)();
    }
    else if (local_c0 != (long *)0x0) {
      pcVar7 = *(code **)(*local_c0 + 0x28);
      goto LAB_00a6c660;
    }
    if (alStack_a0 == local_80) {
      pcVar7 = *(code **)(*local_80 + 0x20);
LAB_00a6c688:
      (*pcVar7)();
    }
    else if (local_80 != (long *)0x0) {
                    /* try { // try from 00a6c674 to 00b6c6cf has its CatchHandler @ 00a6c674
                       catch() { ... } // from try @ 00a6c674 with catch @ 00a6c674
                       catch() { ... } // from try @ 00a6c8e4 with catch @ 00a6c674
                       catch() { ... } // from try @ 00a6c9e4 with catch @ 00a6c674 */
      pcVar7 = *(code **)(*local_80 + 0x28);
      goto LAB_00a6c688;
    }
    if (bVar4) {
      if (*(long *)(lVar3 + 0x28) == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}

