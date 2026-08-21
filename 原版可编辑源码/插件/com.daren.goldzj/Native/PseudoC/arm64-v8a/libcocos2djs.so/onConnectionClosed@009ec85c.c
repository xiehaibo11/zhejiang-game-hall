
/* WebSocketImpl::onConnectionClosed() */

undefined8 __thiscall WebSocketImpl::onConnectionClosed(WebSocketImpl *this)

{
  mutex *this_00;
  mutex *this_01;
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  __shared_weak_count *this_02;
  char cVar3;
  bool bVar4;
  long lVar5;
  Scheduler *this_03;
  code *pcVar6;
  long lVar7;
  undefined **local_80;
  WebSocketImpl *pWStack_78;
  undefined8 local_70;
  __shared_weak_count *p_Stack_68;
  long *local_60;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  this_00 = (mutex *)(this + 0xc);
  std::__ndk1::mutex::lock(this_00);
                    /* try { // try from 009ec890 to 00aec8a7 has its CatchHandler @ 009ecb04 */
  if (*(int *)(this + 8) != 3) {
    if ((*(int *)(this + 8) != 2) || (*(int *)(this + 0x130) != 1)) {
      *(undefined4 *)(this + 8) = 3;
      std::__ndk1::mutex::unlock(this_00);
      local_70 = *(undefined8 *)(this + 0xa8);
      this_02 = *(__shared_weak_count **)(this + 0xb0);
      if (this_02 != (__shared_weak_count *)0x0) {
                    /* try { // try from 009ec910 to 00aec993 has its CatchHandler @ 009ecb24 */
        p_Var1 = this_02 + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      p_Var1 = DAT_01d35b10;
      this_03 = cocos2d::Application::_scheduler;
      local_80 = &PTR_FUN_01c6c2c8;
      if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
        p_Var2 = DAT_01d35b10 + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
          if (bVar4) {
            *(long *)p_Var2 = *(long *)p_Var2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      pWStack_78 = this;
      p_Stack_68 = this_02;
      local_60 = (long *)&local_80;
      cocos2d::Scheduler::performFunctionInCocosThread(this_03,(function *)&local_80);
      if (p_Var1 != (__shared_weak_count *)0x0) {
        p_Var2 = p_Var1 + 8;
        do {
          lVar7 = *(long *)p_Var2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
          if (bVar4) {
            *(long *)p_Var2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
                    /* try { // try from 009ec994 to 00aec9e3 has its CatchHandler @ 009ec82c */
        if (lVar7 == 0) {
          (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
        }
      }
      if (&local_80 == (undefined ***)local_60) {
        pcVar6 = *(code **)(*local_60 + 0x20);
LAB_009ec9d4:
        (*pcVar6)();
      }
      else if (local_60 != (long *)0x0) {
        pcVar6 = *(code **)(*local_60 + 0x28);
        goto LAB_009ec9d4;
      }
      if (this_02 != (__shared_weak_count *)0x0) {
        p_Var1 = this_02 + 8;
        do {
          lVar7 = *(long *)p_Var1;
                    /* try { // try from 009ec9e4 to 00aec9ef has its CatchHandler @ 009ecb14 */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*(long *)this_02 + 0x10))(this_02);
                    /* try { // try from 009eca08 to 00aeca0f has its CatchHandler @ 009ecb20 */
          std::__ndk1::__shared_weak_count::__release_weak(this_02);
        }
      }
      goto LAB_009eca20;
    }
                    /* try { // try from 009ec8b0 to 00aec8bb has its CatchHandler @ 009ecb00 */
    this_01 = (mutex *)(this + 0xc0);
                    /* try { // try from 009ec8bc to 00aec8c7 has its CatchHandler @ 009ecafc */
    while( true ) {
      std::__ndk1::mutex::lock(this_01);
      std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0xe8));
                    /* try { // try from 009ec8e4 to 00aec8e7 has its CatchHandler @ 009ecaf8 */
      if (*(int *)(this + 0x130) == 2) break;
      local_80 = (undefined **)0xf4240;
      std::__ndk1::this_thread::sleep_for((duration *)&local_80);
                    /* try { // try from 009ec8c8 to 00aec8db has its CatchHandler @ 009ecb18 */
      std::__ndk1::mutex::unlock(this_01);
    }
    std::__ndk1::mutex::unlock(this_01);
  }
                    /* try { // try from 009eca1c to 00aeca3b has its CatchHandler @ 009ecb14 */
  std::__ndk1::mutex::unlock(this_00);
LAB_009eca20:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009eca4c to 00aeca5b has its CatchHandler @ 009ecb18 */
  __stack_chk_fail();
}

