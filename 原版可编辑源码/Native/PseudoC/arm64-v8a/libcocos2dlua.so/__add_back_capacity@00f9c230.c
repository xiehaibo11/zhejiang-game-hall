
/* std::__ndk1::deque<cocos2d::Mat4, std::__ndk1::allocator<cocos2d::Mat4>
   >::__add_back_capacity(unsigned long) */

void __thiscall
std::__ndk1::deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__add_back_capacity
          (deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this,ulong param_1)

{
  size_t __n;
  long lVar1;
  Mat4 *pMVar2;
  ulong uVar3;
  Mat4 **ppMVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  Mat4 *pMVar9;
  Mat4 *pMVar10;
  Mat4 **ppMVar11;
  long lVar12;
  Mat4 *pMVar13;
  ulong uVar14;
  undefined8 *puVar15;
  Mat4 **ppMVar16;
  undefined8 uVar17;
  Mat4 *local_98;
  Mat4 *local_90;
  Mat4 *pMStack_88;
  Mat4 *local_80;
  Mat4 *pMStack_78;
  deque<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *pdStack_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 00f9b884 with catch @ 00f9c24c
                       catch() { ... } // from try @ 00f9ba04 with catch @ 00f9c24c
                       catch() { ... } // from try @ 00f9bb54 with catch @ 00f9c24c */
                    /* catch() { ... } // from try @ 00f9b460 with catch @ 00f9c250 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00f9b820 with catch @ 00f9c258 */
  puVar15 = *(undefined8 **)(this + 8);
  lVar6 = *(long *)(this + 0x10);
                    /* catch() { ... } // from try @ 00f9b788 with catch @ 00f9c26c */
  if (lVar6 - (long)puVar15 == 0) {
    param_1 = param_1 + 1;
  }
  uVar7 = param_1 >> 6;
  if ((param_1 & 0x3f) != 0) {
    uVar7 = uVar7 + 1;
  }
  uVar8 = *(ulong *)(this + 0x20) >> 6;
  uVar14 = uVar7;
  if (uVar8 <= uVar7) {
    uVar14 = uVar8;
  }
  uVar7 = uVar7 - uVar14;
  if (uVar7 == 0) {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) + uVar14 * -0x40;
    if (uVar14 != 0) {
      local_90 = (Mat4 *)*puVar15;
      *(undefined8 **)(this + 8) = puVar15 + 1;
      FUN_00f9b748(this,&local_90);
      if (uVar14 != 1) {
        lVar6 = -uVar14;
        do {
          lVar6 = lVar6 + 1;
          local_90 = (Mat4 *)**(undefined8 **)(this + 8);
          *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
          FUN_00f9b748(this,&local_90);
        } while (lVar6 != -1);
      }
    }
  }
  else {
    lVar5 = *(long *)(this + 0x18);
    lVar12 = lVar6 - (long)puVar15 >> 3;
    if ((ulong)((lVar5 - *(long *)this >> 3) - lVar12) < uVar7) {
      uVar3 = lVar5 - *(long *)this >> 2;
      pdStack_70 = this + 0x18;
      uVar8 = lVar12 + uVar7;
      if (lVar12 + uVar7 <= uVar3) {
        uVar8 = uVar3;
      }
      pMStack_78 = (Mat4 *)0x0;
      if (uVar8 == 0) {
        local_90 = (Mat4 *)0x0;
      }
      else {
        if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        local_90 = operator_new(uVar8 << 3);
      }
      pMStack_78 = local_90 + uVar8 * 8;
      pMStack_88 = local_90 + (lVar12 - uVar14) * 8;
      local_80 = pMStack_88;
      do {
        local_98 = operator_new(0x1000);
        __split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>&>::push_back
                  ((__split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>&> *)
                   &local_90,&local_98);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      if (uVar14 != 0) {
        puVar15 = *(undefined8 **)(this + 8);
        uVar7 = uVar14;
        do {
          pMVar9 = pMStack_78;
          pMVar10 = pMStack_88;
          pMVar13 = local_90;
          if (local_80 == pMStack_78) {
            if (pMStack_88 < local_90 || (long)pMStack_88 - (long)local_90 == 0) {
              uVar8 = (long)pMStack_78 - (long)local_90 >> 2;
                    /* try { // try from 00f9c4d4 to 0109c56b has its CatchHandler @ 00f9c4d4
                       catch() { ... } // from try @ 00f9c4d4 with catch @ 00f9c4d4
                       catch() { ... } // from try @ 00f9c5f4 with catch @ 00f9c4d4 */
              if ((long)pMStack_78 - (long)local_90 == 0) {
                uVar8 = 1;
              }
              if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              pMVar2 = operator_new(uVar8 << 3);
              lVar6 = (long)pMVar9 - (long)pMVar10;
              pMStack_88 = pMVar2 + (uVar8 >> 2) * 8;
              pMStack_78 = pMVar2 + uVar8 * 8;
              local_80 = pMStack_88;
              if (lVar6 != 0) {
                local_80 = pMStack_88 + lVar6;
                lVar6 = (lVar6 >> 3) << 3;
                pMVar9 = pMStack_88;
                do {
                  lVar6 = lVar6 + -8;
                  *(undefined8 *)pMVar9 = *(undefined8 *)pMVar10;
                  pMVar9 = pMVar9 + 8;
                  pMVar10 = pMVar10 + 8;
                  pMVar13 = local_90;
                } while (lVar6 != 0);
              }
              local_90 = pMVar2;
              if (pMVar13 != (Mat4 *)0x0) {
                operator_delete(pMVar13);
              }
            }
            else {
              lVar5 = (long)pMStack_88 - (long)local_90 >> 3;
              lVar6 = lVar5 + 2;
              if (-1 < lVar5 + 1) {
                lVar6 = lVar5 + 1;
              }
              __n = (long)pMStack_78 - (long)pMStack_88;
              pMVar13 = pMStack_88 + (lVar6 >> 1) * -8;
              if (__n != 0) {
                memmove(pMVar13,pMStack_88,__n);
              }
              local_80 = pMVar13 + ((long)__n >> 3) * 8;
              pMStack_88 = pMStack_88 + (lVar6 >> 1) * -8;
            }
          }
          uVar7 = uVar7 - 1;
          *(undefined8 *)local_80 = *puVar15;
          local_80 = local_80 + 8;
          puVar15 = (undefined8 *)(*(long *)(this + 8) + 8);
          *(undefined8 **)(this + 8) = puVar15;
        } while (uVar7 != 0);
      }
      ppMVar11 = *(Mat4 ***)(this + 0x10);
      while (ppMVar4 = *(Mat4 ***)(this + 8), ppMVar11 != ppMVar4) {
        ppMVar11 = ppMVar11 + -1;
                    /* try { // try from 00f9c56c to 0109c58b has its CatchHandler @ 00f9c630 */
        __split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>&>::push_front
                  ((__split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>&> *)
                   &local_90,ppMVar11);
      }
      pMVar13 = *(Mat4 **)this;
      *(Mat4 **)(this + 8) = pMStack_88;
      *(Mat4 **)this = local_90;
      uVar17 = *(undefined8 *)(this + 0x18);
      ppMVar16 = *(Mat4 ***)(this + 0x10);
      *(Mat4 **)(this + 0x18) = pMStack_78;
      *(Mat4 **)(this + 0x10) = local_80;
      *(ulong *)(this + 0x20) = *(long *)(this + 0x20) + uVar14 * -0x40;
      local_80 = (Mat4 *)ppMVar16;
      if (ppMVar16 != ppMVar11) {
                    /* try { // try from 00f9c5b4 to 0109c5f3 has its CatchHandler @ 00f9c634 */
        local_80 = (Mat4 *)(ppMVar16 +
                           ((ulong)((long)ppMVar16 + (-8 - (long)ppMVar4)) >> 3 ^ 0xffffffffffffffff
                           ));
      }
      local_90 = pMVar13;
      pMStack_88 = (Mat4 *)ppMVar4;
      pMStack_78 = (Mat4 *)uVar17;
      if (pMVar13 != (Mat4 *)0x0) {
        operator_delete(pMVar13);
      }
    }
    else {
      while (lVar5 != lVar6) {
        local_90 = operator_new(0x1000);
        __split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>>::push_back
                  ((__split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>> *)this,
                   &local_90);
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_00f9c3bc;
        lVar6 = *(long *)(this + 0x10);
        lVar5 = *(long *)(this + 0x18);
      }
      uVar8 = uVar7;
      if (uVar7 == 0) {
LAB_00f9c3bc:
        lVar6 = *(long *)(this + 0x20);
      }
      else {
        do {
          local_90 = operator_new(0x1000);
          __split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>>::push_front
                    ((__split_buffer<cocos2d::Mat4*,std::__ndk1::allocator<cocos2d::Mat4*>> *)this,
                     &local_90);
          uVar8 = uVar8 - 1;
          lVar6 = 0x3f;
          if (*(long *)(this + 0x10) - *(long *)(this + 8) != 8) {
            lVar6 = 0x40;
          }
          lVar6 = lVar6 + *(long *)(this + 0x20);
          *(long *)(this + 0x20) = lVar6;
        } while (uVar8 != 0);
        uVar14 = uVar7 + uVar14;
      }
      *(ulong *)(this + 0x20) = lVar6 + uVar14 * -0x40;
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        local_90 = (Mat4 *)**(undefined8 **)(this + 8);
        *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
        FUN_00f9b748(this,&local_90);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00f9c5f4 to 0109c64f has its CatchHandler @ 00f9c4d4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

