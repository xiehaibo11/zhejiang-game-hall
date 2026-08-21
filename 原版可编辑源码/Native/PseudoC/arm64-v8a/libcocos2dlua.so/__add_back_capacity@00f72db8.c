
/* std::__ndk1::deque<cocos2d::SAXState, std::__ndk1::allocator<cocos2d::SAXState>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>>::__add_back_capacity
          (deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>> *this)

{
  long lVar1;
  SAXState *pSVar2;
  ulong uVar3;
  SAXState **ppSVar4;
  long lVar5;
  SAXState **ppSVar6;
  ulong uVar7;
  SAXState **ppSVar8;
  undefined8 uVar9;
  SAXState *local_68;
  SAXState *local_60;
  SAXState *pSStack_58;
  SAXState *local_50;
  SAXState *pSStack_48;
  deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>> *pdStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x400) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar3 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar3 = 1;
      }
      pdStack_40 = this + 0x18;
      pSStack_48 = (SAXState *)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      pSStack_58 = local_60 + uVar7 * 8;
      pSStack_48 = local_60 + uVar3 * 8;
      local_50 = pSStack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>&>::push_back
                ((__split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>&> *)
                 &local_60,&local_68);
      ppSVar6 = *(SAXState ***)(this + 0x10);
      while (ppSVar4 = *(SAXState ***)(this + 8), ppSVar6 != ppSVar4) {
        ppSVar6 = ppSVar6 + -1;
        __split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>&>::push_front
                  ((__split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>&> *
                   )&local_60,ppSVar6);
      }
      pSVar2 = *(SAXState **)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      ppSVar8 = *(SAXState ***)(this + 0x10);
      *(SAXState **)(this + 8) = pSStack_58;
      *(SAXState **)this = local_60;
      *(SAXState **)(this + 0x18) = pSStack_48;
      *(SAXState **)(this + 0x10) = local_50;
      local_50 = (SAXState *)ppSVar8;
      if (ppSVar8 != ppSVar6) {
        local_50 = (SAXState *)
                   (ppSVar8 +
                   ((ulong)((long)ppSVar8 + (-8 - (long)ppSVar4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = pSVar2;
      pSStack_58 = (SAXState *)ppSVar4;
      pSStack_48 = (SAXState *)uVar9;
      if (pSVar2 != (SAXState *)0x0) {
        operator_delete(pSVar2);
      }
      goto LAB_00f72e08;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>>::push_back
                ((__split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>> *)
                 this,&local_60);
      goto LAB_00f72e08;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>>::push_front
              ((__split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>> *)this
               ,&local_60);
    local_60 = (SAXState *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x400;
    local_60 = (SAXState *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00f72fcc(this,&local_60);
LAB_00f72e08:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

