
/* cocos2d::Application::updateViewSize(int, int) */

void __thiscall cocos2d::Application::updateViewSize(Application *this,int param_1,int param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  Scheduler *this_00;
  __shared_weak_count *this_01;
  code *pcVar5;
  long lVar6;
  undefined **local_70;
  undefined8 uStack_68;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  *(float *)(this + 0x2c) = (float)param_1;
  *(float *)(this + 0x30) = (float)param_2;
  this_01 = DAT_01d35b10;
  this_00 = _scheduler;
  if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
    p_Var1 = DAT_01d35b10 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_68 = CONCAT44(param_2,param_1);
  local_70 = &PTR_FUN_01c66398;
  Scheduler::performFunctionInCocosThread(this_00,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0085bf08;
    pcVar5 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar5)();
LAB_0085bf08:
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

