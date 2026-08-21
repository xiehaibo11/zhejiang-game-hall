
/* cocos2d::Director::initProjectionMatrixStack(unsigned long) */

void __thiscall cocos2d::Director::initProjectionMatrixStack(Director *this,ulong param_1)

{
  ulong uVar1;
  deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this_00;
  undefined8 *puVar2;
  long lVar3;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *p_Var4;
  long lVar5;
  Mat4 *pMVar6;
  undefined8 *puVar7;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this_01;
  long *plVar8;
  __deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *p_Var9;
  undefined8 *puVar10;
  void *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  ulong local_80;
  long local_78;
  long local_68;
  
                    /* try { // try from 00f99290 to 0109934f has its CatchHandler @ 00f99290
                       catch() { ... } // from try @ 00f99290 with catch @ 00f99290
                       catch() { ... } // from try @ 00f9936c with catch @ 00f99290
                       catch() { ... } // from try @ 00f993c8 with catch @ 00f99290
                       catch() { ... } // from try @ 00f9944c with catch @ 00f99290 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  p_Var9 = *(__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x58);
  p_Var4 = *(__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x60);
  while (p_Var4 != p_Var9) {
    this_01 = p_Var4 + -0x30;
    std::__ndk1::__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::clear(this_01);
    puVar2 = *(undefined8 **)(p_Var4 + -0x20);
    puVar7 = *(undefined8 **)(p_Var4 + -0x28);
    if (*(undefined8 **)(p_Var4 + -0x28) != puVar2) {
      do {
        puVar10 = puVar7 + 1;
        operator_delete((void *)*puVar7);
        puVar7 = puVar10;
      } while (puVar2 != puVar10);
      lVar5 = *(long *)(p_Var4 + -0x20) - *(long *)(p_Var4 + -0x28);
      if (lVar5 != 0) {
        *(ulong *)(p_Var4 + -0x20) =
             *(long *)(p_Var4 + -0x20) + (lVar5 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
      }
    }
    p_Var4 = this_01;
    if (*(void **)this_01 != (void *)0x0) {
      operator_delete(*(void **)this_01);
    }
  }
  *(__deque_base<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x60) = p_Var9;
  uStack_88 = 0;
  local_90 = (undefined8 *)0x0;
  local_78 = 0;
  local_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = (void *)0x0;
  std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__add_back_capacity
            ((deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)&local_a0);
                    /* try { // try from 00f99350 to 0109935b has its CatchHandler @ 00f995a4 */
  if (local_90 == puStack_98) {
    pMVar6 = (Mat4 *)0x0;
  }
  else {
                    /* try { // try from 00f99364 to 0109936b has its CatchHandler @ 00f995a0 */
                    /* try { // try from 00f9936c to 010993bb has its CatchHandler @ 00f99290 */
    pMVar6 = (Mat4 *)(*(long *)((long)puStack_98 + (local_80 + local_78 >> 3 & 0x1ffffffffffffff8))
                     + (local_80 + local_78 & 0x3f) * 0x40);
  }
  Mat4::Mat4(pMVar6,(Mat4 *)Mat4::IDENTITY);
  local_78 = local_78 + 1;
  for (; param_1 != 0; param_1 = param_1 - 1) {
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
                    /* try { // try from 00f993bc to 010993c7 has its CatchHandler @ 00f99540 */
      std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::deque
                (this_00,(deque *)&local_a0);
                    /* try { // try from 00f993c8 to 01099443 has its CatchHandler @ 00f99290 */
      *(deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> **)(this + 0x60) = this_00 + 0x30
      ;
    }
  }
  if (local_90 != puStack_98) {
    uVar1 = local_78 + local_80;
    plVar8 = (long *)((long)puStack_98 + (local_80 >> 3 & 0x1ffffffffffffff8));
    lVar5 = *(long *)((long)puStack_98 + (uVar1 >> 3 & 0x1ffffffffffffff8));
    pMVar6 = (Mat4 *)(*plVar8 + (local_80 & 0x3f) * 0x40);
    while ((Mat4 *)(lVar5 + (uVar1 & 0x3f) * 0x40) != pMVar6) {
      Mat4::~Mat4(pMVar6);
      pMVar6 = pMVar6 + 0x40;
      if ((long)pMVar6 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
                    /* try { // try from 00f99444 to 0109944b has its CatchHandler @ 00f9955c */
        pMVar6 = (Mat4 *)*plVar8;
      }
    }
  }
  local_78 = 0;
  lVar5 = (long)local_90 - (long)puStack_98;
  puVar2 = local_90;
  while (uVar1 = lVar5 >> 3, local_90 = puVar2, 2 < uVar1) {
    operator_delete((void *)*puStack_98);
    puStack_98 = puStack_98 + 1;
    puVar2 = local_90;
    lVar5 = (long)local_90 - (long)puStack_98;
  }
  if (uVar1 == 1) {
    local_80 = 0x20;
  }
  else if (uVar1 == 2) {
    local_80 = 0x40;
  }
  puVar7 = puStack_98;
  if (puStack_98 != puVar2) {
    do {
      puVar10 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar10;
    } while (puVar2 != puVar10);
    if ((long)local_90 - (long)puStack_98 != 0) {
      local_90 = local_90 + (((long)local_90 - (long)puStack_98) - 8U >> 3 ^ 0xffffffffffffffff);
    }
  }
  if (local_a0 != (void *)0x0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

