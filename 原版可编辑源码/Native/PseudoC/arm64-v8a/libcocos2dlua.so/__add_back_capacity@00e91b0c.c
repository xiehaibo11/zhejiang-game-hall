
/* std::__ndk1::deque<cocos2d::experimental::ThreadPool::Task,
   std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<cocos2d::experimental::ThreadPool::Task,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task>>
::__add_back_capacity
          (deque<cocos2d::experimental::ThreadPool::Task,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task>>
           *this)

{
  long lVar1;
  Task *pTVar2;
  ulong uVar3;
  Task **ppTVar4;
  undefined8 uVar5;
  long lVar6;
  Task **ppTVar7;
  ulong uVar8;
  Task *local_68;
  Task *local_60;
  Task *pTStack_58;
  Task *local_50;
  Task *pTStack_48;
  deque<cocos2d::experimental::ThreadPool::Task,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task>>
  *pdStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x100) {
    uVar8 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar6 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar6 >> 3) <= uVar8) {
      uVar3 = lVar6 >> 2;
      if (lVar6 == 0) {
        uVar3 = 1;
      }
      pdStack_40 = this + 0x18;
      pTStack_48 = (Task *)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_60 = operator_new(uVar3 * 8);
      pTStack_58 = local_60 + uVar8 * 8;
      pTStack_48 = local_60 + uVar3 * 8;
      local_50 = pTStack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<cocos2d::experimental::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task*>&>
      ::push_back((__split_buffer<cocos2d::experimental::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task*>&>
                   *)&local_60,&local_68);
      ppTVar4 = *(Task ***)(this + 8);
      ppTVar7 = *(Task ***)(this + 0x10);
      if (ppTVar7 != ppTVar4) {
        do {
          ppTVar7 = ppTVar7 + -1;
          __split_buffer<cocos2d::experimental::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task*>&>
          ::push_front((__split_buffer<cocos2d::experimental::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task*>&>
                        *)&local_60,ppTVar7);
          ppTVar4 = *(Task ***)(this + 8);
        } while (ppTVar7 != ppTVar4);
        ppTVar7 = *(Task ***)(this + 0x10);
      }
      pTVar2 = *(Task **)this;
      *(Task **)(this + 8) = pTStack_58;
      *(Task **)this = local_60;
      uVar5 = *(undefined8 *)(this + 0x18);
      *(Task **)(this + 0x18) = pTStack_48;
      *(Task **)(this + 0x10) = local_50;
      local_50 = (Task *)ppTVar7;
      if (ppTVar4 != ppTVar7) {
        local_50 = (Task *)(ppTVar7 +
                           ((ulong)((long)ppTVar7 + (-8 - (long)ppTVar4)) >> 3 ^ 0xffffffffffffffff)
                           );
      }
      local_60 = pTVar2;
      pTStack_58 = (Task *)ppTVar4;
      pTStack_48 = (Task *)uVar5;
      if (pTVar2 != (Task *)0x0) {
        operator_delete(pTVar2);
      }
      goto LAB_00e91b5c;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<cocos2d::experimental::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task*>>
      ::push_back((__split_buffer<cocos2d::experimental::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task*>>
                   *)this,&local_60);
      goto LAB_00e91b5c;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<cocos2d::experimental::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task*>>
    ::push_front((__split_buffer<cocos2d::experimental::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::experimental::ThreadPool::Task*>>
                  *)this,&local_60);
    local_60 = (Task *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x100;
    local_60 = (Task *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00e91cbc(this,&local_60);
LAB_00e91b5c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

