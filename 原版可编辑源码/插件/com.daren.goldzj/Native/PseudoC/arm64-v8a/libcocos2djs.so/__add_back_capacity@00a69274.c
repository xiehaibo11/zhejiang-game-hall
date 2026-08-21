
/* std::__ndk1::deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
::__add_back_capacity
          (deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
           *this)

{
  long lVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  AsyncTaskCallBack *pAVar5;
  long lVar6;
  ulong uVar7;
  AsyncTaskCallBack **ppAVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  AsyncTaskCallBack **ppAVar15;
  undefined8 *__src;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  AsyncTaskCallBack **ppAVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  AsyncTaskCallBack *local_88;
  AsyncTaskCallBack *local_80;
  AsyncTaskCallBack *pAStack_78;
  AsyncTaskCallBack *local_70;
  AsyncTaskCallBack *pAStack_68;
  deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
  *pdStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x40) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar6 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar6 >> 3) <= uVar7) {
      uVar12 = lVar6 >> 2;
      pdStack_60 = this + 0x18;
      if (lVar6 == 0) {
        uVar12 = 1;
      }
      pAStack_68 = (AsyncTaskCallBack *)0x0;
      if (uVar12 == 0) {
        local_80 = (AsyncTaskCallBack *)0x0;
      }
      else {
                    /* try { // try from 00a693c0 to 00b6940f has its CatchHandler @ 00a695d4 */
        if (uVar12 >> 0x3d != 0) {
LAB_00a696b4:
                    /* WARNING: Subroutine does not return */
          FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        local_80 = operator_new(uVar12 << 3);
      }
      pAStack_78 = local_80 + uVar7 * 8;
      pAStack_68 = local_80 + uVar12 * 8;
      local_70 = pAStack_78;
      local_88 = operator_new(0x1000);
                    /* try { // try from 00a6943c to 00b694df has its CatchHandler @ 00a69630 */
      __split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>&>
      ::push_back((__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>&>
                   *)&local_80,&local_88);
      ppAVar15 = *(AsyncTaskCallBack ***)(this + 0x10);
      while (ppAVar8 = *(AsyncTaskCallBack ***)(this + 8), ppAVar15 != ppAVar8) {
        ppAVar15 = ppAVar15 + -1;
        __split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>&>
        ::push_front((__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>&>
                      *)&local_80,ppAVar15);
      }
      pAVar5 = *(AsyncTaskCallBack **)this;
      uVar17 = *(undefined8 *)(this + 0x18);
      ppAVar20 = *(AsyncTaskCallBack ***)(this + 0x10);
      *(AsyncTaskCallBack **)(this + 8) = pAStack_78;
      *(AsyncTaskCallBack **)this = local_80;
      *(AsyncTaskCallBack **)(this + 0x18) = pAStack_68;
      *(AsyncTaskCallBack **)(this + 0x10) = local_70;
      local_70 = (AsyncTaskCallBack *)ppAVar20;
      if (ppAVar20 != ppAVar15) {
        local_70 = (AsyncTaskCallBack *)
                   ((long)ppAVar20 +
                   (~((long)ppAVar20 + (-8 - (long)ppAVar8)) & 0xfffffffffffffff8U));
      }
      local_80 = pAVar5;
      pAStack_78 = (AsyncTaskCallBack *)ppAVar8;
      pAStack_68 = (AsyncTaskCallBack *)uVar17;
      if (pAVar5 != (AsyncTaskCallBack *)0x0) {
        operator_delete(pAVar5);
      }
      goto LAB_00a69608;
    }
                    /* try { // try from 00a69340 to 00b69357 has its CatchHandler @ 00a69620 */
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_80 = operator_new(0x1000);
      __split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
      ::push_back((__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
                   *)this,&local_80);
      goto LAB_00a69608;
    }
    local_80 = operator_new(0x1000);
    __split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
    ::push_front((__split_buffer<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack*>>
                  *)this,&local_80);
    puVar9 = *(undefined8 **)(this + 8);
    puVar18 = *(undefined8 **)(this + 0x10);
    __src = puVar9 + 1;
                    /* try { // try from 00a69360 to 00b6936b has its CatchHandler @ 00a695d0 */
    uVar17 = *puVar9;
                    /* try { // try from 00a6936c to 00b69377 has its CatchHandler @ 00a695cc */
    *(undefined8 **)(this + 8) = __src;
    if (puVar18 == *(undefined8 **)(this + 0x18)) {
                    /* try { // try from 00a69378 to 00b6938f has its CatchHandler @ 00a69630 */
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
          if (uVar7 >> 0x3d != 0) goto LAB_00a696b4;
          pvVar4 = operator_new(uVar7 << 3);
        }
                    /* try { // try from 00a69598 to 00b69687 has its CatchHandler @ 00a692e8 */
        uVar12 = uVar7 >> 2;
        puVar11 = (undefined8 *)((long)pvVar4 + uVar12 * 8);
        pvVar10 = (void *)((long)pvVar4 + uVar7 * 8);
        puVar3 = puVar11;
        if (__src != puVar18) {
          uVar13 = (ulong)((long)puVar18 + (-0x10 - (long)puVar9)) >> 3;
          uVar7 = uVar13 + 1;
                    /* catch() { ... } // from try @ 00a6936c with catch @ 00a695cc */
          lVar6 = ((ulong)((long)puVar18 + (-8 - (long)__src)) >> 3) + 1;
          puVar16 = puVar11;
                    /* catch() { ... } // from try @ 00a69360 with catch @ 00a695d0 */
          if ((3 < uVar7) &&
             ((puVar9 + uVar13 + 2 <= puVar11 ||
              ((undefined8 *)((long)pvVar4 + (uVar12 + uVar13) * 8 + 8) <= __src)))) {
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
                    /* try { // try from 00a69688 to 00b696e3 has its CatchHandler @ 00a69688
                       catch() { ... } // from try @ 00a69688 with catch @ 00a69688
                       catch() { ... } // from try @ 00a698f8 with catch @ 00a69688
                       catch() { ... } // from try @ 00a699f8 with catch @ 00a69688 */
              puVar16[-1] = *puVar3;
              puVar16[-2] = uVar19;
              puVar16[1] = uVar22;
              *puVar16 = uVar21;
              puVar16 = puVar16 + 4;
            } while (uVar13 != 0);
            puVar16 = puVar11 + uVar14;
            if (uVar7 == uVar14) goto LAB_00a69584;
          }
          do {
            puVar9 = __src + 1;
            *puVar16 = *__src;
            puVar16 = puVar16 + 1;
            __src = puVar9;
          } while (puVar18 != puVar9);
          goto LAB_00a69584;
        }
        goto LAB_00a695e0;
      }
      goto LAB_00a692d8;
    }
  }
  else {
    puVar9 = *(undefined8 **)(this + 8);
    puVar18 = *(undefined8 **)(this + 0x10);
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x40;
    __src = puVar9 + 1;
    uVar17 = *puVar9;
    *(undefined8 **)(this + 8) = __src;
    if (puVar18 == *(undefined8 **)(this + 0x18)) {
                    /* catch() { ... } // from try @ 00a691e4 with catch @ 00a692cc */
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
          if (uVar7 >> 0x3d != 0) goto LAB_00a696b4;
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
          if ((uVar7 < 4) ||
             ((puVar11 < puVar9 + uVar13 + 2 &&
              (__src < (undefined8 *)((long)pvVar4 + (uVar12 + uVar13) * 8 + 8))))) {
LAB_00a69574:
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
                    /* try { // try from 00a69554 to 00b69597 has its CatchHandler @ 00a695d4 */
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
            if (uVar7 != uVar14) goto LAB_00a69574;
          }
LAB_00a69584:
          puVar16 = *(undefined8 **)this;
          puVar3 = (undefined8 *)((long)pvVar4 + (lVar6 + uVar12) * 8);
        }
LAB_00a695e0:
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
LAB_00a692d8:
        lVar6 = lVar6 >> 3;
        lVar1 = lVar6 + 2;
                    /* try { // try from 00a692e8 to 00b6933f has its CatchHandler @ 00a692e8
                       catch() { ... } // from try @ 00a692e8 with catch @ 00a692e8
                       catch() { ... } // from try @ 00a69598 with catch @ 00a692e8 */
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
  *puVar18 = uVar17;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
LAB_00a69608:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00a69340 with catch @ 00a69620 */
                    /* catch() { ... } // from try @ 00a69378 with catch @ 00a69630
                       catch() { ... } // from try @ 00a6943c with catch @ 00a69630 */
  return;
}

