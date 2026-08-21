
/* std::__ndk1::deque<std::__ndk1::__state<char>, std::__ndk1::allocator<std::__ndk1::__state<char>
   > >::__add_back_capacity() */

void __thiscall
std::__ndk1::deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
__add_back_capacity(deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                    *this)

{
  long lVar1;
  __state *p_Var2;
  ulong uVar3;
  __state **pp_Var4;
  long lVar5;
  __state **pp_Var6;
  ulong uVar7;
  __state **pp_Var8;
  undefined8 uVar9;
  __state *local_68;
  __state *local_60;
  __state *p_Stack_58;
  __state *local_50;
  __state *p_Stack_48;
  deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>> *pdStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x2a) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar3 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar3 = 1;
      }
      pdStack_40 = this + 0x18;
      p_Stack_48 = (__state *)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      p_Stack_58 = local_60 + uVar7 * 8;
      p_Stack_48 = local_60 + uVar3 * 8;
      local_50 = p_Stack_58;
      local_68 = operator_new(0xfc0);
      __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
      ::push_back((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
                   *)&local_60,&local_68);
      pp_Var6 = *(__state ***)(this + 0x10);
      while (pp_Var4 = *(__state ***)(this + 8), pp_Var6 != pp_Var4) {
        pp_Var6 = pp_Var6 + -1;
        __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
        ::push_front((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
                      *)&local_60,pp_Var6);
      }
      p_Var2 = *(__state **)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      pp_Var8 = *(__state ***)(this + 0x10);
      *(__state **)(this + 8) = p_Stack_58;
      *(__state **)this = local_60;
      *(__state **)(this + 0x18) = p_Stack_48;
      *(__state **)(this + 0x10) = local_50;
      local_50 = (__state *)pp_Var8;
      if (pp_Var8 != pp_Var6) {
        local_50 = (__state *)
                   (pp_Var8 +
                   ((ulong)((long)pp_Var8 + (-8 - (long)pp_Var4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = p_Var2;
      p_Stack_58 = (__state *)pp_Var4;
      p_Stack_48 = (__state *)uVar9;
      if (p_Var2 != (__state *)0x0) {
        operator_delete(p_Var2);
      }
      goto LAB_00eb1e30;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0xfc0);
      __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
      ::push_back((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
                   *)this,&local_60);
      goto LAB_00eb1e30;
    }
    local_60 = operator_new(0xfc0);
    __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
    ::push_front((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
                  *)this,&local_60);
    local_60 = (__state *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x2a;
    local_60 = (__state *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00eb1ff4(this,&local_60);
LAB_00eb1e30:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

