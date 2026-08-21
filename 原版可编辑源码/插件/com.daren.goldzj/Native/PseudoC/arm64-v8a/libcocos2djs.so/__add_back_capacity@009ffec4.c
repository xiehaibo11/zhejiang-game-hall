
/* std::__ndk1::deque<std::__ndk1::function<void ()>,
   std::__ndk1::allocator<std::__ndk1::function<void ()> > >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
__add_back_capacity(deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
                    *this)

{
  long lVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  function *pfVar5;
  long lVar6;
  ulong uVar7;
  function **ppfVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  function **ppfVar15;
  undefined8 *__src;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  function **ppfVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  function *local_88;
  function *local_80;
  function **ppfStack_78;
  function **local_70;
  function *pfStack_68;
  deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
  *pdStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x55) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009ffe64 with catch @ 009fff74
                        */
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar6 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar6 >> 3) <= uVar7) {
      uVar12 = lVar6 >> 2;
      pdStack_60 = this + 0x18;
      if (lVar6 == 0) {
        uVar12 = 1;
      }
      pfStack_68 = (function *)0x0;
      if (uVar12 == 0) {
                    /* try { // try from 00a00060 to 00b000b3 has its CatchHandler @ 009fffc0 */
        local_80 = (function *)0x0;
      }
      else {
        if (uVar12 >> 0x3d != 0) {
LAB_00a00304:
                    /* WARNING: Subroutine does not return */
          FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        local_80 = operator_new(uVar12 << 3);
      }
      ppfStack_78 = (function **)(local_80 + uVar7 * 8);
      pfStack_68 = local_80 + uVar12 * 8;
      local_70 = ppfStack_78;
      local_88 = operator_new(0xff0);
      __split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>&>
      ::push_back((__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>&>
                   *)&local_80,&local_88);
      ppfVar15 = *(function ***)(this + 0x10);
      while (ppfVar8 = *(function ***)(this + 8), ppfVar15 != ppfVar8) {
        ppfVar15 = ppfVar15 + -1;
        __split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>&>
        ::push_front((__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>&>
                      *)&local_80,ppfVar15);
      }
                    /* try { // try from 00a000b4 to 00b000b7 has its CatchHandler @ 00a000b8 */
      pfVar5 = *(function **)this;
                    /* catch() { ... } // from try @ 00a00058 with catch @ 00a000b8
                       catch() { ... } // from try @ 00a000b4 with catch @ 00a000b8
                       try { // try from 00a000b8 to 00b000cf has its CatchHandler @ 009fffc0 */
      uVar17 = *(undefined8 *)(this + 0x18);
      ppfVar20 = *(function ***)(this + 0x10);
      *(function ***)(this + 8) = ppfStack_78;
      *(function **)this = local_80;
      *(function **)(this + 0x18) = pfStack_68;
      *(function ***)(this + 0x10) = local_70;
      local_70 = ppfVar20;
      if (ppfVar20 != ppfVar15) {
        local_70 = (function **)
                   ((long)ppfVar20 +
                   (~((long)ppfVar20 + (-8 - (long)ppfVar8)) & 0xfffffffffffffff8U));
      }
      local_80 = pfVar5;
      ppfStack_78 = ppfVar8;
      pfStack_68 = (function *)uVar17;
      if (pfVar5 != (function *)0x0) {
        operator_delete(pfVar5);
      }
      goto LAB_00a00258;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_80 = operator_new(0xff0);
      __split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>>
      ::push_back((__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>>
                   *)this,&local_80);
      goto LAB_00a00258;
    }
    local_80 = operator_new(0xff0);
    __split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>>
    ::push_front((__split_buffer<std::__ndk1::function<void()>*,std::__ndk1::allocator<std::__ndk1::function<void()>*>>
                  *)this,&local_80);
    puVar9 = *(undefined8 **)(this + 8);
    puVar18 = *(undefined8 **)(this + 0x10);
    __src = puVar9 + 1;
    uVar17 = *puVar9;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009ffc9c with catch @ 009fffbc
                        */
    *(undefined8 **)(this + 8) = __src;
                    /* try { // try from 009fffc0 to 00b00057 has its CatchHandler @ 009fffc0
                       catch() { ... } // from try @ 009fffc0 with catch @ 009fffc0
                       catch() { ... } // from try @ 00a00060 with catch @ 009fffc0
                       catch() { ... } // from try @ 00a000b8 with catch @ 009fffc0 */
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
          if (uVar7 >> 0x3d != 0) goto LAB_00a00304;
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
                    /* try { // try from 00a002a0 to 00b002a7 has its CatchHandler @ 00a00408 */
                    /* try { // try from 00a002a8 to 00b0040b has its CatchHandler @ 00a00254 */
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
            if (uVar7 == uVar14) goto LAB_00a001d4;
          }
          do {
            puVar9 = __src + 1;
            *puVar16 = *__src;
            puVar16 = puVar16 + 1;
            __src = puVar9;
          } while (puVar18 != puVar9);
          goto LAB_00a001d4;
        }
        goto LAB_00a00230;
      }
      goto LAB_009fff28;
    }
  }
  else {
    puVar9 = *(undefined8 **)(this + 8);
    puVar18 = *(undefined8 **)(this + 0x10);
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x55;
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
          if (uVar7 >> 0x3d != 0) goto LAB_00a00304;
                    /* try { // try from 00a00058 to 00b0005f has its CatchHandler @ 00a000b8 */
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
LAB_00a001c4:
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
            if (uVar7 != uVar14) goto LAB_00a001c4;
          }
LAB_00a001d4:
          puVar16 = *(undefined8 **)this;
          puVar3 = (undefined8 *)((long)pvVar4 + (lVar6 + uVar12) * 8);
        }
LAB_00a00230:
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
LAB_009fff28:
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a002a8 with catch @ 00a00254
                        */
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
LAB_00a00258:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

