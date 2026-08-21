
/* WebSocketImpl::onConnectionError() */

undefined8 __thiscall WebSocketImpl::onConnectionError(WebSocketImpl *this)

{
  mutex *this_00;
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  __shared_weak_count *this_01;
  char cVar3;
  bool bVar4;
  long lVar5;
  Scheduler *this_02;
  code *pcVar6;
  long lVar7;
  undefined **local_80;
  WebSocketImpl *pWStack_78;
  undefined8 local_70;
  __shared_weak_count *p_Stack_68;
  long *local_60;
  long local_48;
  
                    /* catch() { ... } // from try @ 009eb700 with catch @ 009eb8ac */
                    /* catch() { ... } // from try @ 009eb6e0 with catch @ 009eb8b0 */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  this_00 = (mutex *)(this + 0xc);
  std::__ndk1::mutex::lock(this_00);
  if (*(int *)(this + 8) == 3) {
    std::__ndk1::mutex::unlock(this_00);
    goto LAB_009eba0c;
  }
  *(undefined4 *)(this + 8) = 2;
  std::__ndk1::mutex::unlock(this_00);
  local_70 = *(undefined8 *)(this + 0xa8);
  this_01 = *(__shared_weak_count **)(this + 0xb0);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
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
  this_02 = cocos2d::Application::_scheduler;
                    /* try { // try from 009eb938 to 00aeb96f has its CatchHandler @ 009eb938
                       catch() { ... } // from try @ 009eb938 with catch @ 009eb938
                       catch() { ... } // from try @ 009eb980 with catch @ 009eb938 */
  local_80 = &PTR_FUN_01c6c248;
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
  p_Stack_68 = this_01;
  local_60 = (long *)&local_80;
                    /* try { // try from 009eb970 to 00aeb97f has its CatchHandler @ 009eb9b8 */
  cocos2d::Scheduler::performFunctionInCocosThread(this_02,(function *)&local_80);
  if (p_Var1 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var1 + 8;
    do {
      lVar7 = *(long *)p_Var2;
                    /* try { // try from 009eb980 to 00aeb9cb has its CatchHandler @ 009eb938 */
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  if (&local_80 == (undefined ***)local_60) {
    pcVar6 = *(code **)(*local_60 + 0x20);
LAB_009eb9cc:
                    /* catch() { ... } // from try @ 009eb9f8 with catch @ 009eb9cc */
    (*pcVar6)();
  }
  else if (local_60 != (long *)0x0) {
                    /* catch() { ... } // from try @ 009eb970 with catch @ 009eb9b8 */
    pcVar6 = *(code **)(*local_60 + 0x28);
    goto LAB_009eb9cc;
  }
  onConnectionClosed(this);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
                    /* try { // try from 009eb9f0 to 00aeb9f7 has its CatchHandler @ 009eba20 */
    if (lVar7 == 0) {
                    /* try { // try from 009eb9f8 to 00aeba23 has its CatchHandler @ 009eb9cc */
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
LAB_009eba0c:
  if (*(long *)(lVar5 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 009eb9f0 with catch @ 009eba20 */
                    /* try { // try from 009eba24 to 00aeba6b has its CatchHandler @ 009eba24
                       catch() { ... } // from try @ 009eba24 with catch @ 009eba24
                       catch() { ... } // from try @ 009ebae4 with catch @ 009eba24
                       catch() { ... } // from try @ 009ebe80 with catch @ 009eba24
                       catch() { ... } // from try @ 009ebff0 with catch @ 009eba24
                       catch() { ... } // from try @ 009ec180 with catch @ 009eba24
                       catch() { ... } // from try @ 009ec4b8 with catch @ 009eba24
                       catch() { ... } // from try @ 009ec4e0 with catch @ 009eba24 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

