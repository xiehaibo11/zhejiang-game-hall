
/* std::__ndk1::deque<cocos2d::SAXState, std::__ndk1::allocator<cocos2d::SAXState>
   >::__add_back_capacity() */

void __thiscall
std::__ndk1::deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>>::__add_back_capacity
          (deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>> *this)

{
  long lVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  SAXState *pSVar5;
  long lVar6;
  ulong uVar7;
  SAXState **ppSVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  SAXState **ppSVar15;
  undefined8 *__src;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  SAXState **ppSVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  SAXState *local_88;
  SAXState *local_80;
  SAXState *pSStack_78;
  SAXState *local_70;
  SAXState *pSStack_68;
  deque<cocos2d::SAXState,std::__ndk1::allocator<cocos2d::SAXState>> *pdStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x400) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar6 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar6 >> 3) <= uVar7) {
      uVar12 = lVar6 >> 2;
      pdStack_60 = this + 0x18;
      if (lVar6 == 0) {
        uVar12 = 1;
      }
      pSStack_68 = (SAXState *)0x0;
      if (uVar12 == 0) {
        local_80 = (SAXState *)0x0;
      }
      else {
        if (uVar12 >> 0x3d != 0) {
LAB_008798f8:
                    /* WARNING: Subroutine does not return */
          FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        local_80 = operator_new(uVar12 << 3);
      }
      pSStack_78 = local_80 + uVar7 * 8;
      pSStack_68 = local_80 + uVar12 * 8;
      local_70 = pSStack_78;
      local_88 = operator_new(0x1000);
      __split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>&>::push_back
                ((__split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>&> *)
                 &local_80,&local_88);
      ppSVar15 = *(SAXState ***)(this + 0x10);
      while (ppSVar8 = *(SAXState ***)(this + 8), ppSVar15 != ppSVar8) {
        ppSVar15 = ppSVar15 + -1;
        __split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>&>::push_front
                  ((__split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>&> *
                   )&local_80,ppSVar15);
      }
      pSVar5 = *(SAXState **)this;
      uVar17 = *(undefined8 *)(this + 0x18);
      ppSVar20 = *(SAXState ***)(this + 0x10);
      *(SAXState **)(this + 8) = pSStack_78;
      *(SAXState **)this = local_80;
      *(SAXState **)(this + 0x18) = pSStack_68;
      *(SAXState **)(this + 0x10) = local_70;
      local_70 = (SAXState *)ppSVar20;
      if (ppSVar20 != ppSVar15) {
        local_70 = (SAXState *)
                   ((long)ppSVar20 +
                   (~((long)ppSVar20 + (-8 - (long)ppSVar8)) & 0xfffffffffffffff8U));
      }
      local_80 = pSVar5;
      pSStack_78 = (SAXState *)ppSVar8;
      pSStack_68 = (SAXState *)uVar17;
      if (pSVar5 != (SAXState *)0x0) {
        operator_delete(pSVar5);
      }
      goto LAB_0087984c;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_80 = operator_new(0x1000);
      __split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>>::push_back
                ((__split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>> *)
                 this,&local_80);
      goto LAB_0087984c;
    }
    local_80 = operator_new(0x1000);
    __split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>>::push_front
              ((__split_buffer<cocos2d::SAXState*,std::__ndk1::allocator<cocos2d::SAXState*>> *)this
               ,&local_80);
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
          if (uVar7 >> 0x3d != 0) goto LAB_008798f8;
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
            if (uVar7 == uVar14) goto LAB_008797c8;
          }
          do {
            puVar9 = __src + 1;
            *puVar16 = *__src;
            puVar16 = puVar16 + 1;
            __src = puVar9;
          } while (puVar18 != puVar9);
          goto LAB_008797c8;
        }
        goto LAB_00879824;
      }
      goto LAB_0087951c;
    }
  }
  else {
    puVar9 = *(undefined8 **)(this + 8);
    puVar18 = *(undefined8 **)(this + 0x10);
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x400;
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
          if (uVar7 >> 0x3d != 0) goto LAB_008798f8;
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
LAB_008797b8:
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
            if (uVar7 != uVar14) goto LAB_008797b8;
          }
LAB_008797c8:
          puVar16 = *(undefined8 **)this;
          puVar3 = (undefined8 *)((long)pvVar4 + (lVar6 + uVar12) * 8);
        }
LAB_00879824:
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
LAB_0087951c:
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
LAB_0087984c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

