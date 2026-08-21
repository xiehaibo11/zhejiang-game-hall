
/* std::__ndk1::deque<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
::__add_back_capacity
          (deque<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
           *this)

{
  long lVar1;
  basic_string *pbVar2;
  ulong uVar3;
  basic_string **ppbVar4;
  long lVar5;
  basic_string **ppbVar6;
  ulong uVar7;
  basic_string **ppbVar8;
  undefined8 uVar9;
  basic_string *local_68;
  basic_string *local_60;
  basic_string *pbStack_58;
  basic_string *local_50;
  basic_string *pbStack_48;
  deque<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *pdStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x20) < 0xaa) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar3 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar3 = 1;
      }
      pdStack_40 = this + 0x18;
      pbStack_48 = (basic_string *)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      pbStack_58 = local_60 + uVar7 * 8;
      pbStack_48 = local_60 + uVar3 * 8;
      local_50 = pbStack_58;
      local_68 = operator_new(0xff0);
      __split_buffer<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>&>
      ::push_back((__split_buffer<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>&>
                   *)&local_60,&local_68);
      ppbVar6 = *(basic_string ***)(this + 0x10);
      while (ppbVar4 = *(basic_string ***)(this + 8), ppbVar6 != ppbVar4) {
        ppbVar6 = ppbVar6 + -1;
        __split_buffer<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>&>
        ::push_front((__split_buffer<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>&>
                      *)&local_60,ppbVar6);
      }
      pbVar2 = *(basic_string **)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      ppbVar8 = *(basic_string ***)(this + 0x10);
      *(basic_string **)(this + 8) = pbStack_58;
      *(basic_string **)this = local_60;
      *(basic_string **)(this + 0x18) = pbStack_48;
      *(basic_string **)(this + 0x10) = local_50;
      local_50 = (basic_string *)ppbVar8;
      if (ppbVar8 != ppbVar6) {
        local_50 = (basic_string *)
                   (ppbVar8 +
                   ((ulong)((long)ppbVar8 + (-8 - (long)ppbVar4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = pbVar2;
      pbStack_58 = (basic_string *)ppbVar4;
      pbStack_48 = (basic_string *)uVar9;
      if (pbVar2 != (basic_string *)0x0) {
        operator_delete(pbVar2);
      }
      goto LAB_00c56c10;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0xff0);
      __split_buffer<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>>
      ::push_back((__split_buffer<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>>
                   *)this,&local_60);
      goto LAB_00c56c10;
    }
    local_60 = operator_new(0xff0);
    __split_buffer<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>>
    ::push_front((__split_buffer<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>>
                  *)this,&local_60);
    local_60 = (basic_string *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0xaa;
    local_60 = (basic_string *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00c56dd4(this,&local_60);
LAB_00c56c10:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

