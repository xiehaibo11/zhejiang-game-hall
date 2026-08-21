
/* cocos2d::Director::initMatrixStack() */

void __thiscall cocos2d::Director::initMatrixStack(Director *this)

{
  deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this_00;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *p_Var5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  Mat4 *pMVar10;
  undefined8 *puVar11;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this_01;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *p_Var12;
  long *plVar13;
  undefined8 *puVar14;
  void *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  ulong local_80;
  long local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar6 = *(long *)(this + 0x50);
  while (lVar6 != 0) {
    uVar7 = (lVar6 + *(long *)(this + 0x48)) - 1;
    Mat4::~Mat4((Mat4 *)(*(long *)(*(long *)(this + 0x30) + (uVar7 >> 3 & 0x1ffffffffffffff8)) +
                        (uVar7 & 0x3f) * 0x40));
    lVar2 = *(long *)(this + 0x50);
    lVar3 = *(long *)(this + 0x38) - *(long *)(this + 0x30);
    lVar6 = lVar2 + -1;
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 * 8 + -1;
    }
    *(long *)(this + 0x50) = lVar6;
    if (0x7f < (lVar8 - (lVar2 + *(long *)(this + 0x48))) + 1U) {
      operator_delete(*(void **)(*(long *)(this + 0x38) + -8));
      lVar6 = *(long *)(this + 0x50);
      *(long *)(this + 0x38) = *(long *)(this + 0x38) + -8;
    }
  }
  p_Var12 = *(__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x58);
  p_Var5 = *(__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x60);
  while (p_Var5 != p_Var12) {
    this_01 = p_Var5 + -0x30;
    std::__ndk1::__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::clear(this_01);
    puVar1 = *(undefined8 **)(p_Var5 + -0x20);
    puVar11 = *(undefined8 **)(p_Var5 + -0x28);
    if (*(undefined8 **)(p_Var5 + -0x28) != puVar1) {
      do {
        puVar14 = puVar11 + 1;
        operator_delete((void *)*puVar11);
        puVar11 = puVar14;
      } while (puVar1 != puVar14);
      lVar6 = *(long *)(p_Var5 + -0x20) - *(long *)(p_Var5 + -0x28);
      if (lVar6 != 0) {
        *(ulong *)(p_Var5 + -0x20) =
             *(long *)(p_Var5 + -0x20) + (lVar6 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      }
    }
    p_Var5 = this_01;
    if (*(void **)this_01 != (void *)0x0) {
      operator_delete(*(void **)this_01);
    }
  }
  lVar6 = *(long *)(this + 0x98);
  *(__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x60) = p_Var12;
  while (lVar6 != 0) {
    uVar7 = (lVar6 + *(long *)(this + 0x90)) - 1;
    Mat4::~Mat4((Mat4 *)(*(long *)(*(long *)(this + 0x78) + (uVar7 >> 3 & 0x1ffffffffffffff8)) +
                        (uVar7 & 0x3f) * 0x40));
    lVar2 = *(long *)(this + 0x98);
    lVar3 = *(long *)(this + 0x80) - *(long *)(this + 0x78);
    lVar6 = lVar2 + -1;
    lVar8 = 0;
    if (lVar3 != 0) {
      lVar8 = lVar3 * 8 + -1;
    }
    *(long *)(this + 0x98) = lVar6;
    if (0x7f < (lVar8 - (lVar2 + *(long *)(this + 0x90))) + 1U) {
      operator_delete(*(void **)(*(long *)(this + 0x80) + -8));
      lVar6 = *(long *)(this + 0x98);
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + -8;
    }
  }
  lVar6 = *(long *)(this + 0x30);
  lVar8 = *(long *)(this + 0x38);
  uVar7 = 0;
  if (lVar8 - lVar6 != 0) {
    uVar7 = (lVar8 - lVar6) * 8 - 1;
  }
  uVar9 = *(long *)(this + 0x50) + *(long *)(this + 0x48);
  if (uVar7 == uVar9) {
    std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__add_back_capacity
              ((deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0x28));
    lVar6 = *(long *)(this + 0x30);
    lVar8 = *(long *)(this + 0x38);
    uVar9 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
  }
  if (lVar8 == lVar6) {
    pMVar10 = (Mat4 *)0x0;
  }
  else {
    pMVar10 = (Mat4 *)(*(long *)(lVar6 + (uVar9 >> 3 & 0x1ffffffffffffff8)) + (uVar9 & 0x3f) * 0x40)
    ;
  }
  Mat4::Mat4(pMVar10,(Mat4 *)Mat4::IDENTITY);
  *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  uStack_88 = 0;
  local_90 = (undefined8 *)0x0;
  local_78 = 0;
  local_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = (void *)0x0;
  std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__add_back_capacity
            ((deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)&local_a0);
  if (local_90 == puStack_98) {
    pMVar10 = (Mat4 *)0x0;
  }
  else {
    pMVar10 = (Mat4 *)(*(long *)((long)puStack_98 + (local_80 + local_78 >> 3 & 0x1ffffffffffffff8))
                      + (local_80 + local_78 & 0x3f) * 0x40);
  }
  Mat4::Mat4(pMVar10,(Mat4 *)Mat4::IDENTITY);
  local_78 = local_78 + 1;
  this_00 = *(deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x60);
  if (this_00 == *(deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x68)) {
    std::__ndk1::
    vector<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>,std::__ndk1::allocator<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>>>
    ::
    __push_back_slow_path<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>const&>
              ((vector<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>,std::__ndk1::allocator<std::__ndk1::stack<cocos2d::Mat4,std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>>>>
                *)(this + 0x58),(stack *)&local_a0);
  }
  else {
    std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::deque
              (this_00,(deque *)&local_a0);
    *(deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x60) = this_00 + 0x30;
  }
  lVar6 = *(long *)(this + 0x78);
  lVar8 = *(long *)(this + 0x80);
  uVar7 = 0;
  if (lVar8 - lVar6 != 0) {
    uVar7 = (lVar8 - lVar6) * 8 - 1;
  }
  uVar9 = *(long *)(this + 0x98) + *(long *)(this + 0x90);
  if (uVar7 == uVar9) {
    std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__add_back_capacity
              ((deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(this + 0x70));
    lVar6 = *(long *)(this + 0x78);
    lVar8 = *(long *)(this + 0x80);
    uVar9 = *(long *)(this + 0x90) + *(long *)(this + 0x98);
  }
  if (lVar8 == lVar6) {
    pMVar10 = (Mat4 *)0x0;
  }
  else {
    pMVar10 = (Mat4 *)(*(long *)(lVar6 + (uVar9 >> 3 & 0x1ffffffffffffff8)) + (uVar9 & 0x3f) * 0x40)
    ;
  }
  Mat4::Mat4(pMVar10,(Mat4 *)Mat4::IDENTITY);
  *(long *)(this + 0x98) = *(long *)(this + 0x98) + 1;
  if (local_90 != puStack_98) {
    uVar7 = local_78 + local_80;
    plVar13 = (long *)((long)puStack_98 + (local_80 >> 3 & 0x1ffffffffffffff8));
    lVar6 = *(long *)((long)puStack_98 + (uVar7 >> 3 & 0x1ffffffffffffff8));
    pMVar10 = (Mat4 *)(*plVar13 + (local_80 & 0x3f) * 0x40);
    while ((Mat4 *)(lVar6 + (uVar7 & 0x3f) * 0x40) != pMVar10) {
      Mat4::~Mat4(pMVar10);
      pMVar10 = pMVar10 + 0x40;
      if ((long)pMVar10 - *plVar13 == 0x1000) {
        plVar13 = plVar13 + 1;
        pMVar10 = (Mat4 *)*plVar13;
      }
    }
  }
  local_78 = 0;
  lVar6 = (long)local_90 - (long)puStack_98;
  puVar1 = local_90;
  while (uVar7 = lVar6 >> 3, local_90 = puVar1, 2 < uVar7) {
    operator_delete((void *)*puStack_98);
    puStack_98 = puStack_98 + 1;
    puVar1 = local_90;
    lVar6 = (long)local_90 - (long)puStack_98;
  }
  if (uVar7 == 1) {
    local_80 = 0x20;
  }
  else if (uVar7 == 2) {
    local_80 = 0x40;
  }
  puVar11 = puStack_98;
  if (puStack_98 != puVar1) {
    do {
      puVar14 = puVar11 + 1;
      operator_delete((void *)*puVar11);
      puVar11 = puVar14;
    } while (puVar1 != puVar14);
    if ((long)local_90 - (long)puStack_98 != 0) {
      local_90 = local_90 + (((long)local_90 - (long)puStack_98) - 8U >> 3 ^ 0xffffffffffffffff);
    }
  }
  if (local_a0 != (void *)0x0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

