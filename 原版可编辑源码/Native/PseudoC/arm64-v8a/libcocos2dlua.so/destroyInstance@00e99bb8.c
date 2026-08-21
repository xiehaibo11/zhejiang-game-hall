
/* cocos2d::network::HttpClient::destroyInstance() */

void cocos2d::network::HttpClient::destroyInstance(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  mutex *this;
  Ref *local_40;
  long local_38;
  
  plVar4 = DAT_0178f4a0;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (DAT_0178f4a0 != (long *)0x0) {
    DAT_0178f4a0 = (long *)0x0;
    Scheduler::unscheduleAllForTarget((Scheduler *)plVar4[0x12],plVar4);
    std::__ndk1::mutex::lock((mutex *)(plVar4 + 0x13));
    plVar4[0x12] = 0;
    std::__ndk1::mutex::unlock((mutex *)(plVar4 + 0x13));
    std::__ndk1::mutex::lock((mutex *)(plVar4 + 0x1b));
    local_40 = (Ref *)plVar4[0x61];
    plVar1 = (long *)plVar4[0x19];
    if (plVar1 == (long *)plVar4[0x1a]) {
      std::__ndk1::
      vector<cocos2d::network::HttpRequest*,std::__ndk1::allocator<cocos2d::network::HttpRequest*>>
      ::__push_back_slow_path<cocos2d::network::HttpRequest*const&>
                ((vector<cocos2d::network::HttpRequest*,std::__ndk1::allocator<cocos2d::network::HttpRequest*>>
                  *)(plVar4 + 0x18),(HttpRequest **)&local_40);
    }
    else {
      *plVar1 = (long)local_40;
      plVar4[0x19] = (long)(plVar1 + 1);
    }
    Ref::retain(local_40);
    std::__ndk1::mutex::unlock((mutex *)(plVar4 + 0x1b));
    this = (mutex *)plVar4[0x3f];
    std::__ndk1::mutex::lock(this);
    std::__ndk1::mutex::unlock(this);
    std::__ndk1::condition_variable::notify_one((condition_variable *)(plVar4 + 0x39));
    std::__ndk1::mutex::lock((mutex *)(plVar4 + 0xd));
    iVar2 = *(int *)((long)plVar4 + 100) + -1;
    *(int *)((long)plVar4 + 100) = iVar2;
    std::__ndk1::mutex::unlock((mutex *)(plVar4 + 0xd));
    if (iVar2 == 0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

