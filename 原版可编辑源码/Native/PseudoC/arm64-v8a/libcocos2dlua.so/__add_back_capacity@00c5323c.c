
/* std::__ndk1::deque<cocostudio::DataReaderHelper::_DataInfo*,
   std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo*> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<cocostudio::DataReaderHelper::_DataInfo*,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo*>>
::__add_back_capacity
          (deque<cocostudio::DataReaderHelper::_DataInfo*,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo*>>
           *this)

{
  long lVar1;
  _DataInfo **pp_Var2;
  ulong uVar3;
  _DataInfo ***ppp_Var4;
  long lVar5;
  _DataInfo ***ppp_Var6;
  ulong uVar7;
  _DataInfo ***ppp_Var8;
  undefined8 uVar9;
  _DataInfo **local_68;
  _DataInfo **local_60;
  _DataInfo **pp_Stack_58;
  _DataInfo **local_50;
  _DataInfo **pp_Stack_48;
  deque<cocostudio::DataReaderHelper::_DataInfo*,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo*>>
  *pdStack_40;
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
      pp_Stack_48 = (_DataInfo **)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      pp_Stack_58 = local_60 + uVar7;
      pp_Stack_48 = local_60 + uVar3;
      local_50 = pp_Stack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<cocostudio::DataReaderHelper::_DataInfo**,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo**>&>
      ::push_back((__split_buffer<cocostudio::DataReaderHelper::_DataInfo**,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo**>&>
                   *)&local_60,&local_68);
      ppp_Var6 = *(_DataInfo ****)(this + 0x10);
      while (ppp_Var4 = *(_DataInfo ****)(this + 8), ppp_Var6 != ppp_Var4) {
        ppp_Var6 = ppp_Var6 + -1;
        __split_buffer<cocostudio::DataReaderHelper::_DataInfo**,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo**>&>
        ::push_front((__split_buffer<cocostudio::DataReaderHelper::_DataInfo**,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo**>&>
                      *)&local_60,ppp_Var6);
      }
      pp_Var2 = *(_DataInfo ***)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      ppp_Var8 = *(_DataInfo ****)(this + 0x10);
      *(_DataInfo ***)(this + 8) = pp_Stack_58;
      *(_DataInfo ***)this = local_60;
      *(_DataInfo ***)(this + 0x18) = pp_Stack_48;
      *(_DataInfo ***)(this + 0x10) = local_50;
      local_50 = (_DataInfo **)ppp_Var8;
      if (ppp_Var8 != ppp_Var6) {
        local_50 = (_DataInfo **)
                   (ppp_Var8 +
                   ((ulong)((long)ppp_Var8 + (-8 - (long)ppp_Var4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = pp_Var2;
      pp_Stack_58 = (_DataInfo **)ppp_Var4;
      pp_Stack_48 = (_DataInfo **)uVar9;
      if (pp_Var2 != (_DataInfo **)0x0) {
        operator_delete(pp_Var2);
      }
      goto LAB_00c5328c;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<cocostudio::DataReaderHelper::_DataInfo**,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo**>>
      ::push_back((__split_buffer<cocostudio::DataReaderHelper::_DataInfo**,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo**>>
                   *)this,&local_60);
      goto LAB_00c5328c;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<cocostudio::DataReaderHelper::_DataInfo**,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo**>>
    ::push_front((__split_buffer<cocostudio::DataReaderHelper::_DataInfo**,std::__ndk1::allocator<cocostudio::DataReaderHelper::_DataInfo**>>
                  *)this,&local_60);
    local_60 = (_DataInfo **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (_DataInfo **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00c53450(this,&local_60);
LAB_00c5328c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

