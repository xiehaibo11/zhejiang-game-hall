
/* std::__ndk1::deque<std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value> >*,
   std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value>
   >*> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*>>
::__add_back_capacity
          (deque<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*>>
           *this)

{
  long lVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  vector **ppvVar5;
  long lVar6;
  ulong uVar7;
  vector ***pppvVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  vector ***pppvVar15;
  undefined8 *__src;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  vector ***pppvVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  vector **local_88;
  vector **local_80;
  vector **ppvStack_78;
  vector **local_70;
  vector **ppvStack_68;
  deque<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>*>>
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
      ppvStack_68 = (vector **)0x0;
      if (uVar12 == 0) {
        local_80 = (vector **)0x0;
      }
      else {
        if (uVar12 >> 0x3d != 0) {
LAB_0087b080:
                    /* WARNING: Subroutine does not return */
          FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        local_80 = operator_new(uVar12 << 3);
      }
      ppvStack_78 = local_80 + uVar7;
      ppvStack_68 = local_80 + uVar12;
      local_70 = ppvStack_78;
      local_88 = operator_new(0x1000);
      __split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>&>
      ::push_back((__split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>&>
                   *)&local_80,&local_88);
      pppvVar15 = *(vector ****)(this + 0x10);
      while (pppvVar8 = *(vector ****)(this + 8), pppvVar15 != pppvVar8) {
        pppvVar15 = pppvVar15 + -1;
        __split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>&>
        ::push_front((__split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>&>
                      *)&local_80,pppvVar15);
      }
      ppvVar5 = *(vector ***)this;
      uVar17 = *(undefined8 *)(this + 0x18);
      pppvVar20 = *(vector ****)(this + 0x10);
      *(vector ***)(this + 8) = ppvStack_78;
      *(vector ***)this = local_80;
      *(vector ***)(this + 0x18) = ppvStack_68;
      *(vector ***)(this + 0x10) = local_70;
      local_70 = (vector **)pppvVar20;
      if (pppvVar20 != pppvVar15) {
        local_70 = (vector **)
                   ((long)pppvVar20 +
                   (~((long)pppvVar20 + (-8 - (long)pppvVar8)) & 0xfffffffffffffff8U));
      }
      local_80 = ppvVar5;
      ppvStack_78 = (vector **)pppvVar8;
      ppvStack_68 = (vector **)uVar17;
      if (ppvVar5 != (vector **)0x0) {
        operator_delete(ppvVar5);
      }
      goto LAB_0087afd4;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_80 = operator_new(0x1000);
      __split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>>
      ::push_back((__split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>>
                   *)this,&local_80);
      goto LAB_0087afd4;
    }
    local_80 = operator_new(0x1000);
    __split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>>
    ::push_front((__split_buffer<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>**>>
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
          if (uVar7 >> 0x3d != 0) goto LAB_0087b080;
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
            if (uVar7 == uVar14) goto LAB_0087af50;
          }
          do {
            puVar9 = __src + 1;
            *puVar16 = *__src;
            puVar16 = puVar16 + 1;
            __src = puVar9;
          } while (puVar18 != puVar9);
          goto LAB_0087af50;
        }
        goto LAB_0087afac;
      }
      goto LAB_0087aca4;
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
          if (uVar7 >> 0x3d != 0) goto LAB_0087b080;
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
LAB_0087af40:
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
            if (uVar7 != uVar14) goto LAB_0087af40;
          }
LAB_0087af50:
          puVar16 = *(undefined8 **)this;
          puVar3 = (undefined8 *)((long)pvVar4 + (lVar6 + uVar12) * 8);
        }
LAB_0087afac:
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
LAB_0087aca4:
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
LAB_0087afd4:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

