
/* std::__ndk1::deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
::__add_back_capacity
          (deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
           *this)

{
  long lVar1;
  AsyncTaskCallBack *pAVar2;
  ulong uVar3;
  AsyncTaskCallBack **ppAVar4;
  long lVar5;
  AsyncTaskCallBack **ppAVar6;
  ulong uVar7;
  AsyncTaskCallBack **ppAVar8;
  undefined8 uVar9;
  AsyncTaskCallBack *local_68;
  AsyncTaskCallBack *local_60;
  AsyncTaskCallBack *pAStack_58;
  AsyncTaskCallBack *local_50;
  AsyncTaskCallBack *pAStack_48;
  deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
  *pdStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x40) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar3 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar3 = 1;
      }
      pdStack_40 = this + 0x18;
      pAStack_48 = (AsyncTaskCallBack *)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      pAStack_58 = local_60 + uVar7 * 8;
      pAStack_48 = local_60 + uVar3 * 8;
      local_50 = pAStack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>&>
      ::push_back((__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>&>
                   *)&local_60,&local_68);
      ppAVar6 = *(AsyncTaskCallBack ***)(this + 0x10);
      while (ppAVar4 = *(AsyncTaskCallBack ***)(this + 8), ppAVar6 != ppAVar4) {
        ppAVar6 = ppAVar6 + -1;
        __split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>&>
        ::push_front((__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>&>
                      *)&local_60,ppAVar6);
      }
      pAVar2 = *(AsyncTaskCallBack **)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      ppAVar8 = *(AsyncTaskCallBack ***)(this + 0x10);
      *(AsyncTaskCallBack **)(this + 8) = pAStack_58;
      *(AsyncTaskCallBack **)this = local_60;
      *(AsyncTaskCallBack **)(this + 0x18) = pAStack_48;
      *(AsyncTaskCallBack **)(this + 0x10) = local_50;
      local_50 = (AsyncTaskCallBack *)ppAVar8;
      if (ppAVar8 != ppAVar6) {
        local_50 = (AsyncTaskCallBack *)
                   (ppAVar8 +
                   ((ulong)((long)ppAVar8 + (-8 - (long)ppAVar4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = pAVar2;
      pAStack_58 = (AsyncTaskCallBack *)ppAVar4;
      pAStack_48 = (AsyncTaskCallBack *)uVar9;
      if (pAVar2 != (AsyncTaskCallBack *)0x0) {
        operator_delete(pAVar2);
      }
      goto LAB_00882ec4;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
      ::push_back((__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
                   *)this,&local_60);
      goto LAB_00882ec4;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
    ::push_front((__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
                  *)this,&local_60);
    local_60 = (AsyncTaskCallBack *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x40;
    local_60 = (AsyncTaskCallBack *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00883088(this,&local_60);
LAB_00882ec4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

