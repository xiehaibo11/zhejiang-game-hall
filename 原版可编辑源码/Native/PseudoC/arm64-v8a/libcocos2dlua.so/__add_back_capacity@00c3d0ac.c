
/* std::__ndk1::deque<cocostudio::MovementEvent*, std::__ndk1::allocator<cocostudio::MovementEvent*>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::deque<cocostudio::MovementEvent*,std::__ndk1::allocator<cocostudio::MovementEvent*>>::
__add_back_capacity(deque<cocostudio::MovementEvent*,std::__ndk1::allocator<cocostudio::MovementEvent*>>
                    *this)

{
  long lVar1;
  MovementEvent **ppMVar2;
  ulong uVar3;
  MovementEvent ***pppMVar4;
  long lVar5;
  MovementEvent ***pppMVar6;
  ulong uVar7;
  MovementEvent ***pppMVar8;
  undefined8 uVar9;
  MovementEvent **local_68;
  MovementEvent **local_60;
  MovementEvent **ppMStack_58;
  MovementEvent **local_50;
  MovementEvent **ppMStack_48;
  deque<cocostudio::MovementEvent*,std::__ndk1::allocator<cocostudio::MovementEvent*>> *pdStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x200) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar3 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar3 = 1;
      }
      pdStack_40 = this + 0x18;
      ppMStack_48 = (MovementEvent **)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      ppMStack_58 = local_60 + uVar7;
      ppMStack_48 = local_60 + uVar3;
      local_50 = ppMStack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<cocostudio::MovementEvent**,std::__ndk1::allocator<cocostudio::MovementEvent**>&>
      ::push_back((__split_buffer<cocostudio::MovementEvent**,std::__ndk1::allocator<cocostudio::MovementEvent**>&>
                   *)&local_60,&local_68);
      pppMVar6 = *(MovementEvent ****)(this + 0x10);
      while (pppMVar4 = *(MovementEvent ****)(this + 8), pppMVar6 != pppMVar4) {
        pppMVar6 = pppMVar6 + -1;
        __split_buffer<cocostudio::MovementEvent**,std::__ndk1::allocator<cocostudio::MovementEvent**>&>
        ::push_front((__split_buffer<cocostudio::MovementEvent**,std::__ndk1::allocator<cocostudio::MovementEvent**>&>
                      *)&local_60,pppMVar6);
      }
      ppMVar2 = *(MovementEvent ***)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      pppMVar8 = *(MovementEvent ****)(this + 0x10);
      *(MovementEvent ***)(this + 8) = ppMStack_58;
      *(MovementEvent ***)this = local_60;
      *(MovementEvent ***)(this + 0x18) = ppMStack_48;
      *(MovementEvent ***)(this + 0x10) = local_50;
      local_50 = (MovementEvent **)pppMVar8;
      if (pppMVar8 != pppMVar6) {
        local_50 = (MovementEvent **)
                   (pppMVar8 +
                   ((ulong)((long)pppMVar8 + (-8 - (long)pppMVar4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = ppMVar2;
      ppMStack_58 = (MovementEvent **)pppMVar4;
      ppMStack_48 = (MovementEvent **)uVar9;
      if (ppMVar2 != (MovementEvent **)0x0) {
        operator_delete(ppMVar2);
      }
      goto LAB_00c3d0fc;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<cocostudio::MovementEvent**,std::__ndk1::allocator<cocostudio::MovementEvent**>>
      ::push_back((__split_buffer<cocostudio::MovementEvent**,std::__ndk1::allocator<cocostudio::MovementEvent**>>
                   *)this,&local_60);
      goto LAB_00c3d0fc;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<cocostudio::MovementEvent**,std::__ndk1::allocator<cocostudio::MovementEvent**>>
    ::push_front((__split_buffer<cocostudio::MovementEvent**,std::__ndk1::allocator<cocostudio::MovementEvent**>>
                  *)this,&local_60);
    local_60 = (MovementEvent **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (MovementEvent **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00c3d2c0(this,&local_60);
LAB_00c3d0fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

