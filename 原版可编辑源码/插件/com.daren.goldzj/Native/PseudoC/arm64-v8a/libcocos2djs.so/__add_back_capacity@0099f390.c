
/* std::__ndk1::deque<cocos2d::ThreadPool::Task, std::__ndk1::allocator<cocos2d::ThreadPool::Task>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::deque<cocos2d::ThreadPool::Task,std::__ndk1::allocator<cocos2d::ThreadPool::Task>>::
__add_back_capacity(deque<cocos2d::ThreadPool::Task,std::__ndk1::allocator<cocos2d::ThreadPool::Task>>
                    *this)

{
  long lVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  Task *pTVar5;
  long lVar6;
  ulong uVar7;
  Task **ppTVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  Task **ppTVar15;
  undefined8 *__src;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  Task **ppTVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  Task *local_88;
  Task *local_80;
  Task *pTStack_78;
  Task *local_70;
  Task *pTStack_68;
  deque<cocos2d::ThreadPool::Task,std::__ndk1::allocator<cocos2d::ThreadPool::Task>> *pdStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x100) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar6 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar6 >> 3) <= uVar7) {
                    /* try { // try from 0099f4c4 to 00a9f5b3 has its CatchHandler @ 0099f26c */
      uVar12 = lVar6 >> 2;
      pdStack_60 = this + 0x18;
      if (lVar6 == 0) {
        uVar12 = 1;
      }
      pTStack_68 = (Task *)0x0;
      if (uVar12 == 0) {
        local_80 = (Task *)0x0;
      }
      else {
        if (uVar12 >> 0x3d != 0) {
LAB_0099f7d0:
                    /* WARNING: Subroutine does not return */
          FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        local_80 = operator_new(uVar12 << 3);
      }
      pTStack_78 = local_80 + uVar7 * 8;
      pTStack_68 = local_80 + uVar12 * 8;
      local_70 = pTStack_78;
                    /* catch() { ... } // from try @ 0099f2f8 with catch @ 0099f544 */
      local_88 = operator_new(0x1000);
                    /* catch() { ... } // from try @ 0099f2ec with catch @ 0099f548 */
                    /* catch() { ... } // from try @ 0099f2cc with catch @ 0099f54c */
      __split_buffer<cocos2d::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::ThreadPool::Task*>&>
      ::push_back((__split_buffer<cocos2d::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::ThreadPool::Task*>&>
                   *)&local_80,&local_88);
                    /* catch() { ... } // from try @ 0099f304 with catch @ 0099f55c */
      ppTVar15 = *(Task ***)(this + 0x10);
      while (ppTVar8 = *(Task ***)(this + 8), ppTVar15 != ppTVar8) {
        ppTVar15 = ppTVar15 + -1;
        __split_buffer<cocos2d::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::ThreadPool::Task*>&>
        ::push_front((__split_buffer<cocos2d::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::ThreadPool::Task*>&>
                      *)&local_80,ppTVar15);
      }
      pTVar5 = *(Task **)this;
      uVar17 = *(undefined8 *)(this + 0x18);
      ppTVar20 = *(Task ***)(this + 0x10);
      *(Task **)(this + 8) = pTStack_78;
      *(Task **)this = local_80;
      *(Task **)(this + 0x18) = pTStack_68;
      *(Task **)(this + 0x10) = local_70;
      local_70 = (Task *)ppTVar20;
      if (ppTVar20 != ppTVar15) {
                    /* try { // try from 0099f5b4 to 00a9f607 has its CatchHandler @ 0099f5b4
                       catch() { ... } // from try @ 0099f5b4 with catch @ 0099f5b4
                       catch() { ... } // from try @ 0099f714 with catch @ 0099f5b4 */
        local_70 = (Task *)((long)ppTVar20 +
                           (~((long)ppTVar20 + (-8 - (long)ppTVar8)) & 0xfffffffffffffff8U));
      }
      local_80 = pTVar5;
      pTStack_78 = (Task *)ppTVar8;
      pTStack_68 = (Task *)uVar17;
      if (pTVar5 != (Task *)0x0) {
        operator_delete(pTVar5);
      }
      goto LAB_0099f724;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_80 = operator_new(0x1000);
      __split_buffer<cocos2d::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::ThreadPool::Task*>>
      ::push_back((__split_buffer<cocos2d::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::ThreadPool::Task*>>
                   *)this,&local_80);
      goto LAB_0099f724;
    }
    local_80 = operator_new(0x1000);
    __split_buffer<cocos2d::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::ThreadPool::Task*>>::
    push_front((__split_buffer<cocos2d::ThreadPool::Task*,std::__ndk1::allocator<cocos2d::ThreadPool::Task*>>
                *)this,&local_80);
    puVar9 = *(undefined8 **)(this + 8);
    puVar18 = *(undefined8 **)(this + 0x10);
    __src = puVar9 + 1;
    uVar17 = *puVar9;
    *(undefined8 **)(this + 8) = __src;
    if (puVar18 == *(undefined8 **)(this + 0x18)) {
      puVar16 = *(undefined8 **)this;
      lVar6 = (long)__src - (long)puVar16;
      if (__src < puVar16 || lVar6 == 0) {
        lVar6 = (long)*(undefined8 **)(this + 0x18) - (long)puVar16;
        uVar7 = lVar6 >> 2;
        if (lVar6 == 0) {
          uVar7 = 1;
        }
        if (uVar7 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar7 >> 0x3d != 0) goto LAB_0099f7d0;
          pvVar4 = operator_new(uVar7 << 3);
        }
        uVar12 = uVar7 >> 2;
        puVar11 = (undefined8 *)((long)pvVar4 + uVar12 * 8);
        pvVar10 = (void *)((long)pvVar4 + uVar7 * 8);
        puVar3 = puVar11;
        if (__src != puVar18) {
          uVar13 = (ulong)((long)puVar18 + (-0x10 - (long)puVar9)) >> 3;
          uVar7 = uVar13 + 1;
          lVar6 = ((ulong)((long)puVar18 + (-8 - (long)__src)) >> 3) + 1;
          puVar16 = puVar11;
          if ((3 < uVar7) &&
             ((puVar9 + uVar13 + 2 <= puVar11 ||
              ((undefined8 *)((long)pvVar4 + (uVar12 + uVar13) * 8 + 8) <= __src)))) {
            uVar14 = uVar7 & 0x3ffffffffffffffc;
            puVar9 = puVar9 + 3;
                    /* catch() { ... } // from try @ 0099f634 with catch @ 0099f788 */
                    /* catch() { ... } // from try @ 0099f628 with catch @ 0099f78c */
            __src = __src + uVar14;
                    /* catch() { ... } // from try @ 0099f608 with catch @ 0099f790 */
            puVar16 = (undefined8 *)((long)pvVar4 + uVar12 * 8 + 0x10);
            uVar13 = uVar14;
            do {
              puVar3 = puVar9 + -1;
              uVar19 = puVar9[-2];
              uVar22 = puVar9[1];
              uVar21 = *puVar9;
              puVar9 = puVar9 + 4;
                    /* catch() { ... } // from try @ 0099f640 with catch @ 0099f7a0 */
              uVar13 = uVar13 - 4;
              puVar16[-1] = *puVar3;
              puVar16[-2] = uVar19;
              puVar16[1] = uVar22;
              *puVar16 = uVar21;
              puVar16 = puVar16 + 4;
            } while (uVar13 != 0);
            puVar16 = puVar11 + uVar14;
            if (uVar7 == uVar14) goto LAB_0099f6a0;
          }
          do {
            puVar9 = __src + 1;
            *puVar16 = *__src;
            puVar16 = puVar16 + 1;
            __src = puVar9;
          } while (puVar18 != puVar9);
          goto LAB_0099f6a0;
        }
        goto LAB_0099f6fc;
      }
      goto LAB_0099f3f4;
    }
  }
  else {
    puVar9 = *(undefined8 **)(this + 8);
    puVar18 = *(undefined8 **)(this + 0x10);
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x100;
    __src = puVar9 + 1;
    uVar17 = *puVar9;
    *(undefined8 **)(this + 8) = __src;
    if (puVar18 == *(undefined8 **)(this + 0x18)) {
      puVar16 = *(undefined8 **)this;
      lVar6 = (long)__src - (long)puVar16;
      if (__src < puVar16 || lVar6 == 0) {
        lVar6 = (long)*(undefined8 **)(this + 0x18) - (long)puVar16;
        uVar7 = lVar6 >> 2;
        if (lVar6 == 0) {
          uVar7 = 1;
        }
        if (uVar7 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if (uVar7 >> 0x3d != 0) goto LAB_0099f7d0;
          pvVar4 = operator_new(uVar7 << 3);
        }
        uVar12 = uVar7 >> 2;
        puVar11 = (undefined8 *)((long)pvVar4 + uVar12 * 8);
        pvVar10 = (void *)((long)pvVar4 + uVar7 * 8);
        puVar3 = puVar11;
        if (__src != puVar18) {
                    /* try { // try from 0099f608 to 00a9f61f has its CatchHandler @ 0099f790 */
          uVar13 = (ulong)((long)puVar18 + (-0x10 - (long)puVar9)) >> 3;
          uVar7 = uVar13 + 1;
          lVar6 = ((ulong)((long)puVar18 + (-8 - (long)__src)) >> 3) + 1;
          puVar16 = puVar11;
                    /* try { // try from 0099f628 to 00a9f633 has its CatchHandler @ 0099f78c */
                    /* try { // try from 0099f634 to 00a9f63f has its CatchHandler @ 0099f788 */
                    /* try { // try from 0099f640 to 00a9f713 has its CatchHandler @ 0099f7a0 */
          if ((uVar7 < 4) ||
             ((puVar11 < puVar9 + uVar13 + 2 &&
              (__src < (undefined8 *)((long)pvVar4 + (uVar12 + uVar13) * 8 + 8))))) {
LAB_0099f690:
            do {
              puVar9 = __src + 1;
              *puVar16 = *__src;
              puVar16 = puVar16 + 1;
              __src = puVar9;
            } while (puVar18 != puVar9);
          }
          else {
            uVar14 = uVar7 & 0x3ffffffffffffffc;
            puVar9 = puVar9 + 3;
            __src = __src + uVar14;
            puVar16 = (undefined8 *)((long)pvVar4 + uVar12 * 8 + 0x10);
            uVar13 = uVar14;
            do {
              puVar3 = puVar9 + -1;
              uVar19 = puVar9[-2];
              uVar22 = puVar9[1];
              uVar21 = *puVar9;
              puVar9 = puVar9 + 4;
              uVar13 = uVar13 - 4;
              puVar16[-1] = *puVar3;
              puVar16[-2] = uVar19;
              puVar16[1] = uVar22;
              *puVar16 = uVar21;
              puVar16 = puVar16 + 4;
            } while (uVar13 != 0);
            puVar16 = puVar11 + uVar14;
            if (uVar7 != uVar14) goto LAB_0099f690;
          }
LAB_0099f6a0:
          puVar16 = *(undefined8 **)this;
          puVar3 = (undefined8 *)((long)pvVar4 + (lVar6 + uVar12) * 8);
        }
LAB_0099f6fc:
        puVar18 = puVar3;
        *(void **)this = pvVar4;
        *(undefined8 **)(this + 8) = puVar11;
        *(undefined8 **)(this + 0x10) = puVar18;
        *(void **)(this + 0x18) = pvVar10;
        if (puVar16 != (undefined8 *)0x0) {
          operator_delete(puVar16);
          puVar18 = *(undefined8 **)(this + 0x10);
        }
      }
      else {
LAB_0099f3f4:
        lVar6 = lVar6 >> 3;
        lVar1 = lVar6 + 2;
        if (-1 < lVar6 + 1) {
          lVar1 = lVar6 + 1;
        }
        __n = (long)puVar18 - (long)__src;
        puVar18 = __src + -(lVar1 >> 1);
        puVar9 = puVar18;
        if (__n != 0) {
          memmove(puVar18,__src,__n);
          puVar9 = (undefined8 *)(*(long *)(this + 8) + (lVar1 >> 1) * -8);
        }
        puVar18 = puVar18 + ((long)__n >> 3);
        *(undefined8 **)(this + 8) = puVar9;
        *(undefined8 **)(this + 0x10) = puVar18;
      }
    }
  }
                    /* try { // try from 0099f714 to 00a9f7f7 has its CatchHandler @ 0099f5b4 */
  *puVar18 = uVar17;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
LAB_0099f724:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

