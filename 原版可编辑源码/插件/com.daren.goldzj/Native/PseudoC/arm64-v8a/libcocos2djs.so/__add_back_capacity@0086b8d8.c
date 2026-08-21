
/* std::__ndk1::deque<std::__ndk1::__state<char>, std::__ndk1::allocator<std::__ndk1::__state<char>
   > >::__add_back_capacity() */

void __thiscall
std::__ndk1::deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
__add_back_capacity(deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
                    *this)

{
  long lVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  __state *p_Var5;
  long lVar6;
  ulong uVar7;
  __state **pp_Var8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  __state **pp_Var15;
  undefined8 *__src;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  __state *local_88;
  __state *local_80;
  __state *p_Stack_78;
  __state *local_70;
  __state *p_Stack_68;
  deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>> *pdStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(ulong *)(this + 0x20) < 0x2a) {
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar6 = *(long *)(this + 0x18) - *(long *)this;
    if ((ulong)(lVar6 >> 3) <= uVar7) {
      uVar12 = lVar6 >> 2;
      pdStack_60 = this + 0x18;
      if (lVar6 == 0) {
        uVar12 = 1;
      }
      p_Stack_68 = (__state *)0x0;
      if (uVar12 == 0) {
        local_80 = (__state *)0x0;
      }
      else {
        if (uVar12 >> 0x3d != 0) {
LAB_0086bd18:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        local_80 = operator_new(uVar12 << 3);
      }
      p_Stack_78 = local_80 + uVar7 * 8;
      p_Stack_68 = local_80 + uVar12 * 8;
      local_70 = p_Stack_78;
      local_88 = operator_new(0xfc0);
      __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
      ::push_back((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
                   *)&local_80,&local_88);
      pp_Var8 = *(__state ***)(this + 8);
      pp_Var15 = *(__state ***)(this + 0x10);
      if (pp_Var15 != pp_Var8) {
        do {
          pp_Var15 = pp_Var15 + -1;
          __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
          ::push_front((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
                        *)&local_80,pp_Var15);
          pp_Var8 = *(__state ***)(this + 8);
        } while (pp_Var15 != pp_Var8);
        pp_Var15 = *(__state ***)(this + 0x10);
      }
      p_Var5 = *(__state **)this;
      *(__state **)(this + 8) = p_Stack_78;
      *(__state **)this = local_80;
      uVar17 = *(undefined8 *)(this + 0x18);
      *(__state **)(this + 0x18) = p_Stack_68;
      *(__state **)(this + 0x10) = local_70;
      local_70 = (__state *)pp_Var15;
      if (pp_Var8 != pp_Var15) {
        local_70 = (__state *)
                   ((long)pp_Var15 +
                   (~((long)pp_Var15 + (-8 - (long)pp_Var8)) & 0xfffffffffffffff8U));
      }
      local_80 = p_Var5;
      p_Stack_78 = (__state *)pp_Var8;
      p_Stack_68 = (__state *)uVar17;
      if (p_Var5 != (__state *)0x0) {
        operator_delete(p_Var5);
      }
      goto LAB_0086bc6c;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_80 = operator_new(0xfc0);
      __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
      ::push_back((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
                   *)this,&local_80);
      goto LAB_0086bc6c;
    }
    local_80 = operator_new(0xfc0);
    __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
    ::push_front((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
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
          if (uVar7 >> 0x3d != 0) goto LAB_0086bd18;
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
            if (uVar7 == uVar14) goto LAB_0086bbe8;
          }
          do {
            puVar9 = __src + 1;
            *puVar16 = *__src;
            puVar16 = puVar16 + 1;
            __src = puVar9;
          } while (puVar18 != puVar9);
          goto LAB_0086bbe8;
        }
        goto LAB_0086bc44;
      }
      goto LAB_0086b93c;
    }
  }
  else {
    puVar9 = *(undefined8 **)(this + 8);
    puVar18 = *(undefined8 **)(this + 0x10);
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x2a;
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
          if (uVar7 >> 0x3d != 0) goto LAB_0086bd18;
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
LAB_0086bbd8:
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
            if (uVar7 != uVar14) goto LAB_0086bbd8;
          }
LAB_0086bbe8:
          puVar16 = *(undefined8 **)this;
          puVar3 = (undefined8 *)((long)pvVar4 + (lVar6 + uVar12) * 8);
        }
LAB_0086bc44:
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
LAB_0086b93c:
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
LAB_0086bc6c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

