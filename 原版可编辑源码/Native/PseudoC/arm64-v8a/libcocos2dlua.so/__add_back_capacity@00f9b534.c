
/* std::__ndk1::deque<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4> >::__add_back_capacity()
    */

void __thiscall
std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__add_back_capacity
          (deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this)

{
  long lVar1;
  Mat4 *pMVar2;
  ulong uVar3;
  Mat4 **ppMVar4;
  long lVar5;
  Mat4 **ppMVar6;
  ulong uVar7;
  Mat4 **ppMVar8;
  undefined8 uVar9;
  Mat4 *local_68;
  Mat4 *local_60;
  Mat4 *pMStack_58;
  Mat4 *local_50;
  Mat4 *pMStack_48;
  deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *pdStack_40;
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
      pMStack_48 = (Mat4 *)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      pMStack_58 = local_60 + uVar7 * 8;
      pMStack_48 = local_60 + uVar3 * 8;
      local_50 = pMStack_58;
      local_68 = operator_new(0x1000);
      __split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>&>::push_back
                ((__split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>&> *)&local_60
                 ,&local_68);
      ppMVar6 = *(Mat4 ***)(this + 0x10);
      while (ppMVar4 = *(Mat4 ***)(this + 8), ppMVar6 != ppMVar4) {
        ppMVar6 = ppMVar6 + -1;
        __split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>&>::push_front
                  ((__split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>&> *)
                   &local_60,ppMVar6);
      }
      pMVar2 = *(Mat4 **)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      ppMVar8 = *(Mat4 ***)(this + 0x10);
      *(Mat4 **)(this + 8) = pMStack_58;
      *(Mat4 **)this = local_60;
      *(Mat4 **)(this + 0x18) = pMStack_48;
      *(Mat4 **)(this + 0x10) = local_50;
      local_50 = (Mat4 *)ppMVar8;
      if (ppMVar8 != ppMVar6) {
        local_50 = (Mat4 *)(ppMVar8 +
                           ((ulong)((long)ppMVar8 + (-8 - (long)ppMVar4)) >> 3 ^ 0xffffffffffffffff)
                           );
      }
      local_60 = pMVar2;
      pMStack_58 = (Mat4 *)ppMVar4;
      pMStack_48 = (Mat4 *)uVar9;
      if (pMVar2 != (Mat4 *)0x0) {
        operator_delete(pMVar2);
      }
      goto LAB_00f9b584;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>>::push_back
                ((__split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>> *)this,
                 &local_60);
      goto LAB_00f9b584;
    }
    local_60 = operator_new(0x1000);
    __split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>>::push_front
              ((__split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>> *)this,
               &local_60);
    local_60 = (Mat4 *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x40;
    local_60 = (Mat4 *)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00f9b748(this,&local_60);
LAB_00f9b584:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

