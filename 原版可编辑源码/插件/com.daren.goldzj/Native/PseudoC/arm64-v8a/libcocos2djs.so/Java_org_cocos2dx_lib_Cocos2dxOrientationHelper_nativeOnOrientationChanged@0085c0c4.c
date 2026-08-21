
void Java_org_cocos2dx_lib_Cocos2dxOrientationHelper_nativeOnOrientationChanged
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  Scheduler *this;
  __shared_weak_count *this_00;
  code *pcVar5;
  long lVar6;
  undefined **local_70;
  undefined4 local_68;
  long *local_50;
  long local_38;
  
  this_00 = DAT_01d35b10;
  this = cocos2d::Application::_scheduler;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (cocos2d::Application::_instance == 0) goto LAB_0085c194;
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
  local_70 = &PTR_FUN_01c66418;
  local_68 = param_3;
  local_50 = (long *)&local_70;
  cocos2d::Scheduler::performFunctionInCocosThread(this,(function *)&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_0085c15c:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_0085c15c;
  }
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
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
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
LAB_0085c194:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

