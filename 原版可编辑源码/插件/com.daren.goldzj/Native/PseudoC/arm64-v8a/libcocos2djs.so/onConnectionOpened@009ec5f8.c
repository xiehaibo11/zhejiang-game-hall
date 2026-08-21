
/* WebSocketImpl::onConnectionOpened() */

undefined8 __thiscall WebSocketImpl::onConnectionOpened(WebSocketImpl *this)

{
  mutex *this_00;
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  __shared_weak_count *this_01;
  char cVar3;
  bool bVar4;
  long lVar5;
  Scheduler *this_02;
  undefined8 *puVar6;
  size_t sVar7;
  code *pcVar8;
  long lVar9;
  char *__s;
  undefined **local_70;
  WebSocketImpl *pWStack_68;
  undefined8 local_60;
  __shared_weak_count *p_Stack_58;
  long *local_50;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
                    /* catch() { ... } // from try @ 009ebc0c with catch @ 009ec618
                       catch() { ... } // from try @ 009ec4bc with catch @ 009ec618 */
  puVar6 = (undefined8 *)lws_get_protocol(*(undefined8 *)(this + 0x68));
  __s = (char *)*puVar6;
  sVar7 = strlen(__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x90),__s,sVar7);
                    /* catch() { ... } // from try @ 009ebbd8 with catch @ 009ec648
                       catch() { ... } // from try @ 009ec4b4 with catch @ 009ec648 */
  lws_callback_on_writable(*(undefined8 *)(this + 0x68));
  this_00 = (mutex *)(this + 0xc);
  std::__ndk1::mutex::lock(this_00);
                    /* catch() { ... } // from try @ 009ec044 with catch @ 009ec658
                       catch() { ... } // from try @ 009ec374 with catch @ 009ec658 */
  if ((*(uint *)(this + 8) & 0xfffffffe) == 2) {
    std::__ndk1::mutex::unlock(this_00);
    goto LAB_009ec788;
  }
  *(undefined4 *)(this + 8) = 1;
  std::__ndk1::mutex::unlock(this_00);
  local_60 = *(undefined8 *)(this + 0xa8);
  this_01 = *(__shared_weak_count **)(this + 0xb0);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
                    /* catch() { ... } // from try @ 009eba6c with catch @ 009ec690 */
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
                    /* try { // try from 009ec6a4 to 00aec6f7 has its CatchHandler @ 009ec6a4
                       catch() { ... } // from try @ 009ec6a4 with catch @ 009ec6a4
                       catch() { ... } // from try @ 009ec748 with catch @ 009ec6a4 */
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
  local_70 = &PTR_FUN_01c6c1c8;
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
  pWStack_68 = this;
  p_Stack_58 = this_01;
  local_50 = (long *)&local_70;
  cocos2d::Scheduler::performFunctionInCocosThread(this_02,(function *)&local_70);
                    /* try { // try from 009ec6f8 to 00aec70f has its CatchHandler @ 009ec7c4 */
  if (p_Var1 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var1 + 8;
    do {
      lVar9 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
                    /* try { // try from 009ec718 to 00aec723 has its CatchHandler @ 009ec7c0 */
      (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
                    /* try { // try from 009ec724 to 00aec72f has its CatchHandler @ 009ec7bc */
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
                    /* try { // try from 009ec730 to 00aec747 has its CatchHandler @ 009ec7d4 */
  if (&local_70 == (undefined ***)local_50) {
                    /* try { // try from 009ec748 to 00aec82b has its CatchHandler @ 009ec6a4 */
    pcVar8 = *(code **)(*local_50 + 0x20);
LAB_009ec750:
    (*pcVar8)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar8 = *(code **)(*local_50 + 0x28);
    goto LAB_009ec750;
  }
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar9 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
LAB_009ec788:
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

