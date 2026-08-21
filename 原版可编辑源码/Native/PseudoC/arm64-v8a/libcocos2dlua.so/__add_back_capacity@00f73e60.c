
/* std::__ndk1::deque<std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value> >*,
   std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value>
   >*> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*>>
::__add_back_capacity
          (deque<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*>>
           *this)

{
  long lVar1;
  vector **ppvVar2;
  ulong uVar3;
  vector ***pppvVar4;
  long lVar5;
  vector ***pppvVar6;
  ulong uVar7;
  vector ***pppvVar8;
  undefined8 uVar9;
  vector **local_68;
  vector **local_60;
  vector **ppvStack_58;
  vector **local_50;
  vector **ppvStack_48;
  deque<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*>>
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
      ppvStack_48 = (vector **)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      ppvStack_58 = local_60 + uVar7;
      ppvStack_48 = local_60 + uVar3;
      local_50 = ppvStack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>&>
      ::push_back((__split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>&>
                   *)&local_60,&local_68);
      pppvVar6 = *(vector ****)(this + 0x10);
      while (pppvVar4 = *(vector ****)(this + 8), pppvVar6 != pppvVar4) {
        pppvVar6 = pppvVar6 + -1;
        __split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>&>
        ::push_front((__split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>&>
                      *)&local_60,pppvVar6);
      }
      ppvVar2 = *(vector ***)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      pppvVar8 = *(vector ****)(this + 0x10);
      *(vector ***)(this + 8) = ppvStack_58;
      *(vector ***)this = local_60;
      *(vector ***)(this + 0x18) = ppvStack_48;
      *(vector ***)(this + 0x10) = local_50;
      local_50 = (vector **)pppvVar8;
      if (pppvVar8 != pppvVar6) {
        local_50 = (vector **)
                   (pppvVar8 +
                   ((ulong)((long)pppvVar8 + (-8 - (long)pppvVar4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = ppvVar2;
      ppvStack_58 = (vector **)pppvVar4;
      ppvStack_48 = (vector **)uVar9;
      if (ppvVar2 != (vector **)0x0) {
        operator_delete(ppvVar2);
      }
      goto LAB_00f73eb0;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>>
      ::push_back((__split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>>
                   *)this,&local_60);
      goto LAB_00f73eb0;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>>
    ::push_front((__split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>>
                  *)this,&local_60);
    local_60 = (vector **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (vector **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00f74074(this,&local_60);
LAB_00f73eb0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

