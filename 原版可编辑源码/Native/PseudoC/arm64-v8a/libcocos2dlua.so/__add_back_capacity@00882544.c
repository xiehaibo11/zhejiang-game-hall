
/* std::__ndk1::deque<std::__ndk1::function<void ()>,
   std::__ndk1::allocator<std::__ndk1::function<void ()> > >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
__add_back_capacity(deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
                    *this)

{
  long lVar1;
  function *pfVar2;
  ulong uVar3;
  function **ppfVar4;
  long lVar5;
  function **ppfVar6;
  ulong uVar7;
  function **ppfVar8;
  undefined8 uVar9;
  function *local_68;
  function *local_60;
  function **ppfStack_58;
  function **local_50;
  function *pfStack_48;
  deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
  *pdStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x55) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar3 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar3 = 1;
      }
      pdStack_40 = this + 0x18;
      pfStack_48 = (function *)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      ppfStack_58 = (function **)(local_60 + uVar7 * 8);
      pfStack_48 = local_60 + uVar3 * 8;
      local_50 = ppfStack_58;
      local_68 = operator_new(0xff0);
      __split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>&>
      ::push_back((__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>&>
                   *)&local_60,&local_68);
      ppfVar6 = *(function ***)(this + 0x10);
      while (ppfVar4 = *(function ***)(this + 8), ppfVar6 != ppfVar4) {
        ppfVar6 = ppfVar6 + -1;
        __split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>&>
        ::push_front((__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>&>
                      *)&local_60,ppfVar6);
      }
      pfVar2 = *(function **)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      ppfVar8 = *(function ***)(this + 0x10);
      *(function ***)(this + 8) = ppfStack_58;
      *(function **)this = local_60;
      *(function **)(this + 0x18) = pfStack_48;
      *(function ***)(this + 0x10) = local_50;
      local_50 = ppfVar8;
      if (ppfVar8 != ppfVar6) {
        local_50 = ppfVar8 + ((ulong)((long)ppfVar8 + (-8 - (long)ppfVar4)) >> 3 ^
                             0xffffffffffffffff);
      }
      local_60 = pfVar2;
      ppfStack_58 = ppfVar4;
      pfStack_48 = (function *)uVar9;
      if (pfVar2 != (function *)0x0) {
        operator_delete(pfVar2);
      }
      goto LAB_00882594;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0xff0);
      __split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>>
      ::push_back((__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>>
                   *)this,&local_60);
      goto LAB_00882594;
    }
    local_60 = operator_new(0xff0);
    __split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>>
    ::push_front((__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>>
                  *)this,&local_60);
    local_60 = (function *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x55;
    local_60 = (function *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00882758(this,&local_60);
LAB_00882594:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

