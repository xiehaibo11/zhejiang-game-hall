
/* cocos2d::network::HttpClient::destroyInstance() */

void cocos2d::network::HttpClient::destroyInstance(void)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  __shared_weak_count *p_Var7;
  long lVar8;
  mutex *this;
  Ref *local_40;
  long local_38;
  
  plVar6 = DAT_01d38008;
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if (DAT_01d38008 != (long *)0x0) {
    DAT_01d38008 = (long *)0x0;
    if (((__shared_weak_count *)plVar6[0x13] != (__shared_weak_count *)0x0) &&
       (p_Var7 = (__shared_weak_count *)
                 std::__ndk1::__shared_weak_count::lock((__shared_weak_count *)plVar6[0x13]),
       p_Var7 != (__shared_weak_count *)0x0)) {
      if ((Scheduler *)plVar6[0x12] != (Scheduler *)0x0) {
        Scheduler::unscheduleAllForTarget((Scheduler *)plVar6[0x12],plVar6);
      }
      p_Var1 = p_Var7 + 8;
      do {
        lVar8 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
      }
    }
    std::__ndk1::mutex::lock((mutex *)(plVar6 + 0x14));
    p_Var7 = (__shared_weak_count *)plVar6[0x13];
    plVar6[0x12] = 0;
    plVar6[0x13] = 0;
    if (p_Var7 != (__shared_weak_count *)0x0) {
      std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
    }
    std::__ndk1::mutex::unlock((mutex *)(plVar6 + 0x14));
                    /* try { // try from 009aae14 to 00aaaef7 has its CatchHandler @ 009aacb4 */
    std::__ndk1::mutex::lock((mutex *)(plVar6 + 0x1c));
    local_40 = (Ref *)plVar6[0x62];
    if ((long *)plVar6[0x1a] == (long *)plVar6[0x1b]) {
      std::__ndk1::
      vector<cocos2d::network::HttpRequest*,std::__ndk1::allocator<cocos2d::network::HttpRequest*>>
      ::__push_back_slow_path<cocos2d::network::HttpRequest*const&>
                ((vector<cocos2d::network::HttpRequest*,std::__ndk1::allocator<cocos2d::network::HttpRequest*>>
                  *)(plVar6 + 0x19),(HttpRequest **)&local_40);
    }
    else {
      *(long *)plVar6[0x1a] = (long)local_40;
      plVar6[0x1a] = plVar6[0x1a] + 8;
    }
    Ref::retain(local_40);
    std::__ndk1::mutex::unlock((mutex *)(plVar6 + 0x1c));
    this = (mutex *)plVar6[0x40];
    std::__ndk1::mutex::lock(this);
    std::__ndk1::mutex::unlock(this);
    std::__ndk1::condition_variable::notify_one((condition_variable *)(plVar6 + 0x3a));
    std::__ndk1::mutex::lock((mutex *)(plVar6 + 0xd));
                    /* catch() { ... } // from try @ 009aad34 with catch @ 009aae88 */
                    /* catch() { ... } // from try @ 009aad28 with catch @ 009aae8c */
                    /* catch() { ... } // from try @ 009aad08 with catch @ 009aae90 */
    iVar4 = *(int *)((long)plVar6 + 100) + -1;
    *(int *)((long)plVar6 + 100) = iVar4;
    std::__ndk1::mutex::unlock((mutex *)(plVar6 + 0xd));
    if (iVar4 == 0) {
                    /* catch() { ... } // from try @ 009aad40 with catch @ 009aaea0 */
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

