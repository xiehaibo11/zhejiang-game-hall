
/* std::__ndk1::deque<spine::SkeletonCacheAnimation::AniQueueData*,
   std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData*> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<spine::SkeletonCacheAnimation::AniQueueData*,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData*>>
::__add_back_capacity
          (deque<spine::SkeletonCacheAnimation::AniQueueData*,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData*>>
           *this)

{
  long lVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  AniQueueData **ppAVar5;
  long lVar6;
  ulong uVar7;
  AniQueueData ***pppAVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  AniQueueData ***pppAVar15;
  undefined8 *__src;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  AniQueueData **local_88;
  AniQueueData **local_80;
  AniQueueData **ppAStack_78;
  AniQueueData **local_70;
  AniQueueData **ppAStack_68;
  deque<spine::SkeletonCacheAnimation::AniQueueData*,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData*>>
  *pdStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x200) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar6 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar6 >> 3) <= uVar7) {
      uVar12 = lVar6 >> 2;
      pdStack_60 = this + 0x18;
      if (lVar6 == 0) {
        uVar12 = 1;
      }
      ppAStack_68 = (AniQueueData **)0x0;
      if (uVar12 == 0) {
        local_80 = (AniQueueData **)0x0;
      }
      else {
        if (uVar12 >> 0x3d != 0) {
LAB_00d1b024:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        local_80 = operator_new(uVar12 << 3);
      }
      ppAStack_78 = local_80 + uVar7;
      ppAStack_68 = local_80 + uVar12;
      local_70 = ppAStack_78;
      local_88 = operator_new(0x1000);
      __split_buffer<spine::SkeletonCacheAnimation::AniQueueData**,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData**>&>
      ::push_back((__split_buffer<spine::SkeletonCacheAnimation::AniQueueData**,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData**>&>
                   *)&local_80,&local_88);
      pppAVar8 = *(AniQueueData ****)(this + 8);
      pppAVar15 = *(AniQueueData ****)(this + 0x10);
      if (pppAVar15 != pppAVar8) {
        do {
          pppAVar15 = pppAVar15 + -1;
          __split_buffer<spine::SkeletonCacheAnimation::AniQueueData**,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData**>&>
          ::push_front((__split_buffer<spine::SkeletonCacheAnimation::AniQueueData**,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData**>&>
                        *)&local_80,pppAVar15);
          pppAVar8 = *(AniQueueData ****)(this + 8);
        } while (pppAVar15 != pppAVar8);
        pppAVar15 = *(AniQueueData ****)(this + 0x10);
      }
      ppAVar5 = *(AniQueueData ***)this;
      *(AniQueueData ***)(this + 8) = ppAStack_78;
      *(AniQueueData ***)this = local_80;
      uVar17 = *(undefined8 *)(this + 0x18);
      *(AniQueueData ***)(this + 0x18) = ppAStack_68;
      *(AniQueueData ***)(this + 0x10) = local_70;
      local_70 = (AniQueueData **)pppAVar15;
      if (pppAVar8 != pppAVar15) {
        local_70 = (AniQueueData **)
                   ((long)pppAVar15 +
                   (~((long)pppAVar15 + (-8 - (long)pppAVar8)) & 0xfffffffffffffff8U));
      }
      local_80 = ppAVar5;
      ppAStack_78 = (AniQueueData **)pppAVar8;
      ppAStack_68 = (AniQueueData **)uVar17;
      if (ppAVar5 != (AniQueueData **)0x0) {
        operator_delete(ppAVar5);
      }
      goto LAB_00d1af78;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_80 = operator_new(0x1000);
      __split_buffer<spine::SkeletonCacheAnimation::AniQueueData**,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData**>>
      ::push_back((__split_buffer<spine::SkeletonCacheAnimation::AniQueueData**,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData**>>
                   *)this,&local_80);
      goto LAB_00d1af78;
    }
    local_80 = operator_new(0x1000);
    __split_buffer<spine::SkeletonCacheAnimation::AniQueueData**,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData**>>
    ::push_front((__split_buffer<spine::SkeletonCacheAnimation::AniQueueData**,std::__ndk1::allocator<spine::SkeletonCacheAnimation::AniQueueData**>>
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
          if (uVar7 >> 0x3d != 0) goto LAB_00d1b024;
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
            __src = __src + uVar14;
            puVar16 = (undefined8 *)((long)pvVar4 + uVar12 * 8 + 0x10);
            uVar13 = uVar14;
            do {
              puVar3 = puVar9 + -1;
              uVar19 = puVar9[-2];
              uVar21 = puVar9[1];
              uVar20 = *puVar9;
              puVar9 = puVar9 + 4;
              uVar13 = uVar13 - 4;
              puVar16[-1] = *puVar3;
              puVar16[-2] = uVar19;
              puVar16[1] = uVar21;
              *puVar16 = uVar20;
              puVar16 = puVar16 + 4;
            } while (uVar13 != 0);
            puVar16 = puVar11 + uVar14;
            if (uVar7 == uVar14) goto LAB_00d1aef4;
          }
          do {
            puVar9 = __src + 1;
            *puVar16 = *__src;
            puVar16 = puVar16 + 1;
            __src = puVar9;
          } while (puVar18 != puVar9);
          goto LAB_00d1aef4;
        }
        goto LAB_00d1af50;
      }
      goto LAB_00d1ac48;
    }
  }
  else {
    puVar9 = *(undefined8 **)(this + 8);
    puVar18 = *(undefined8 **)(this + 0x10);
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
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
          if (uVar7 >> 0x3d != 0) goto LAB_00d1b024;
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
LAB_00d1aee4:
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
              uVar21 = puVar9[1];
              uVar20 = *puVar9;
              puVar9 = puVar9 + 4;
              uVar13 = uVar13 - 4;
              puVar16[-1] = *puVar3;
              puVar16[-2] = uVar19;
              puVar16[1] = uVar21;
              *puVar16 = uVar20;
              puVar16 = puVar16 + 4;
            } while (uVar13 != 0);
            puVar16 = puVar11 + uVar14;
            if (uVar7 != uVar14) goto LAB_00d1aee4;
          }
LAB_00d1aef4:
          puVar16 = *(undefined8 **)this;
          puVar3 = (undefined8 *)((long)pvVar4 + (lVar6 + uVar12) * 8);
        }
LAB_00d1af50:
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
LAB_00d1ac48:
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
  *puVar18 = uVar17;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
LAB_00d1af78:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

