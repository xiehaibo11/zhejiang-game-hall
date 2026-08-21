
/* cocos2d::Scheduler::scheduleScriptFunc(unsigned int, float, bool) */

void __thiscall
cocos2d::Scheduler::scheduleScriptFunc(Scheduler *this,uint param_1,float param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  Ref *pRVar3;
  Ref *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pRVar3 = (Ref *)SchedulerScriptHandlerEntry::create(param_1,param_2,param_3);
  plVar1 = *(long **)(this + 0x80);
  local_40 = pRVar3;
  if (plVar1 == *(long **)(this + 0x88)) {
    std::__ndk1::
    vector<cocos2d::SchedulerScriptHandlerEntry*,std::__ndk1::allocator<cocos2d::SchedulerScriptHandlerEntry*>>
    ::__push_back_slow_path<cocos2d::SchedulerScriptHandlerEntry*const&>
              ((vector<cocos2d::SchedulerScriptHandlerEntry*,std::__ndk1::allocator<cocos2d::SchedulerScriptHandlerEntry*>>
                *)(this + 0x78),(SchedulerScriptHandlerEntry **)&local_40);
  }
  else {
    *plVar1 = (long)pRVar3;
    *(long **)(this + 0x80) = plVar1 + 1;
  }
  Ref::retain(local_40);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined4 *)(pRVar3 + 0x28));
}

