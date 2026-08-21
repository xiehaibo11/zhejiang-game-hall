
/* cocos2d::Director::pushMatrix(cocos2d::MATRIX_STACK_TYPE) */

void __thiscall cocos2d::Director::pushMatrix(Director *this,int param_2)

{
  ulong uVar1;
  Mat4 *this_00;
  Mat4 *pMVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this_01;
  Director *pDVar6;
  
  if (param_2 == 2) {
    pDVar6 = this + 0x98;
    lVar3 = *(long *)(this + 0x78);
    lVar5 = *(long *)(this + 0x80);
    uVar4 = *(long *)(this + 0x90) + *(long *)pDVar6;
    uVar1 = 0;
    if (lVar5 - lVar3 != 0) {
      uVar1 = (lVar5 - lVar3) * 8 - 1;
    }
    pMVar2 = (Mat4 *)(*(long *)(lVar3 + (uVar4 - 1 >> 3 & 0x1ffffffffffffff8)) +
                     (uVar4 - 1 & 0x3f) * 0x40);
    if (uVar1 == uVar4) {
      std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__add_back_capacity
                ((deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0x70));
      lVar3 = *(long *)(this + 0x78);
      lVar5 = *(long *)(this + 0x80);
      uVar4 = *(long *)(this + 0x90) + *(long *)(this + 0x98);
    }
    if (lVar5 == lVar3) {
LAB_00f98c4c:
      this_00 = (Mat4 *)0x0;
      goto LAB_00f98ce0;
    }
  }
  else {
    if (param_2 == 1) {
      this_01 = *(deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x58);
      pDVar6 = (Director *)(this_01 + 0x28);
      lVar3 = *(long *)(this_01 + 8);
      lVar5 = *(long *)(this_01 + 0x10);
      uVar4 = *(long *)(this_01 + 0x20) + *(long *)pDVar6;
      uVar1 = 0;
      if (lVar5 - lVar3 != 0) {
        uVar1 = (lVar5 - lVar3) * 8 - 1;
      }
      pMVar2 = (Mat4 *)(*(long *)(lVar3 + (uVar4 - 1 >> 3 & 0x1ffffffffffffff8)) +
                       (uVar4 - 1 & 0x3f) * 0x40);
      if (uVar1 == uVar4) {
        std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__add_back_capacity
                  (this_01);
        lVar3 = *(long *)(this_01 + 8);
        lVar5 = *(long *)(this_01 + 0x10);
        uVar4 = *(long *)(this_01 + 0x20) + *(long *)(this_01 + 0x28);
      }
      if (lVar5 == lVar3) {
        this_00 = (Mat4 *)0x0;
      }
      else {
        this_00 = (Mat4 *)(*(long *)(lVar3 + (uVar4 >> 3 & 0x1ffffffffffffff8)) +
                          (uVar4 & 0x3f) * 0x40);
      }
      goto LAB_00f98ce0;
    }
    if (param_2 != 0) {
      return;
    }
    pDVar6 = this + 0x50;
    lVar3 = *(long *)(this + 0x30);
    lVar5 = *(long *)(this + 0x38);
    uVar4 = *(long *)(this + 0x48) + *(long *)pDVar6;
    uVar1 = 0;
    if (lVar5 - lVar3 != 0) {
      uVar1 = (lVar5 - lVar3) * 8 - 1;
    }
    pMVar2 = (Mat4 *)(*(long *)(lVar3 + (uVar4 - 1 >> 3 & 0x1ffffffffffffff8)) +
                     (uVar4 - 1 & 0x3f) * 0x40);
    if (uVar1 == uVar4) {
      std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__add_back_capacity
                ((deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0x28));
      lVar3 = *(long *)(this + 0x30);
      lVar5 = *(long *)(this + 0x38);
      uVar4 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
    }
    if (lVar5 == lVar3) goto LAB_00f98c4c;
  }
  this_00 = (Mat4 *)(*(long *)(lVar3 + (uVar4 >> 3 & 0x1ffffffffffffff8)) + (uVar4 & 0x3f) * 0x40);
LAB_00f98ce0:
  Mat4::Mat4(this_00,pMVar2);
  *(long *)pDVar6 = *(long *)pDVar6 + 1;
  return;
}

