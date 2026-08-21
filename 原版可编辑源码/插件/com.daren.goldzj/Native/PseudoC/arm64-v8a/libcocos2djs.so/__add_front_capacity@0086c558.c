
/* std::__ndk1::deque<std::__ndk1::__state<char>, std::__ndk1::allocator<std::__ndk1::__state<char>
   > >::__add_front_capacity() */

void __thiscall
std::__ndk1::deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>::
__add_front_capacity
          (deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>>
           *this)

{
  size_t __n;
  long lVar1;
  __state *p_Var2;
  __state *p_Var3;
  ulong uVar4;
  __state *p_Var5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  __state *p_Var12;
  ulong uVar13;
  __state *p_Var14;
  __state *p_Var15;
  __state *p_Var16;
  undefined8 uVar17;
  undefined8 uVar18;
  __state *local_88;
  __state *local_80;
  __state *local_78;
  __state *local_70;
  __state *local_68;
  deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>> *pdStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = *(long *)(this + 0x10) - *(long *)(this + 8);
  lVar8 = 0;
  if (uVar4 != 0) {
    lVar8 = ((long)uVar4 >> 3) * 0x2a + -1;
  }
  if ((ulong)(lVar8 - (*(long *)(this + 0x28) + *(long *)(this + 0x20))) < 0x2a) {
    uVar9 = *(long *)(this + 0x18) - *(long *)this;
    if (uVar4 < uVar9) {
      if (*(long *)(this + 8) == *(long *)this) {
        local_80 = operator_new(0xfc0);
        __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
        ::push_back((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
                     *)this,&local_80);
        local_80 = *(__state **)(*(long *)(this + 0x10) + -8);
        *(undefined8 **)(this + 0x10) = (undefined8 *)(*(long *)(this + 0x10) + -8);
        __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
        ::push_front((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
                      *)this,&local_80);
      }
      else {
        local_80 = operator_new(0xfc0);
        __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
        ::push_front((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
                      *)this,&local_80);
      }
      if (*(long *)(this + 0x10) - *(long *)(this + 8) == 8) {
        *(undefined8 *)(this + 0x20) = 0x15;
      }
      else {
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + 0x2a;
      }
    }
    else {
      uVar4 = (long)uVar9 >> 2;
      pdStack_60 = this + 0x18;
      if (uVar9 == 0) {
        uVar4 = 1;
      }
      local_68 = (__state *)0x0;
      if (uVar4 == 0) {
        local_80 = (__state *)0x0;
      }
      else {
        if (uVar4 >> 0x3d != 0) {
LAB_0086c908:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        local_80 = operator_new(uVar4 << 3);
      }
      local_68 = local_80 + uVar4 * 8;
      local_78 = local_80;
      local_70 = local_80;
      local_88 = operator_new(0xfc0);
      __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
      ::push_back((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
                   *)&local_80,&local_88);
      p_Var16 = *(__state **)(this + 8);
      p_Var5 = *(__state **)(this + 0x10);
      if (p_Var16 != p_Var5) {
        do {
          p_Var3 = local_70;
          p_Var5 = local_78;
          p_Var14 = local_80;
          if (local_70 == local_68) {
            if (local_78 < local_80 || (long)local_78 - (long)local_80 == 0) {
              uVar4 = (long)local_68 - (long)local_80 >> 2;
              if ((long)local_68 - (long)local_80 == 0) {
                uVar4 = 1;
              }
              if (uVar4 == 0) {
                local_80 = (__state *)0x0;
              }
              else {
                if (uVar4 >> 0x3d != 0) goto LAB_0086c908;
                local_80 = operator_new(uVar4 << 3);
              }
              uVar9 = uVar4 >> 2;
              local_78 = local_80 + uVar9 * 8;
              local_68 = local_80 + uVar4 * 8;
              local_70 = local_78;
              if (p_Var5 != p_Var3) {
                uVar11 = (ulong)(p_Var3 + (-8 - (long)p_Var5)) >> 3;
                uVar4 = uVar11 + 1;
                p_Var12 = local_78;
                if ((uVar4 < 4) ||
                   ((local_78 < p_Var5 + uVar11 * 8 + 8 &&
                    (p_Var5 < local_80 + (uVar9 + uVar11) * 8 + 8)))) {
LAB_0086c808:
                  do {
                    p_Var15 = p_Var5 + 8;
                    *(undefined8 *)p_Var12 = *(undefined8 *)p_Var5;
                    p_Var12 = p_Var12 + 8;
                    p_Var5 = p_Var15;
                  } while (p_Var3 != p_Var15);
                }
                else {
                  uVar13 = uVar4 & 0x3ffffffffffffffc;
                  p_Var12 = p_Var5 + 0x10;
                  p_Var5 = p_Var5 + uVar13 * 8;
                  p_Var15 = local_80 + uVar9 * 8 + 0x10;
                  uVar11 = uVar13;
                  do {
                    p_Var2 = p_Var12 + -8;
                    uVar10 = *(undefined8 *)(p_Var12 + -0x10);
                    uVar18 = *(undefined8 *)(p_Var12 + 8);
                    uVar17 = *(undefined8 *)p_Var12;
                    p_Var12 = p_Var12 + 0x20;
                    uVar11 = uVar11 - 4;
                    *(undefined8 *)(p_Var15 + -8) = *(undefined8 *)p_Var2;
                    *(undefined8 *)(p_Var15 + -0x10) = uVar10;
                    *(undefined8 *)(p_Var15 + 8) = uVar18;
                    *(undefined8 *)p_Var15 = uVar17;
                    p_Var15 = p_Var15 + 0x20;
                  } while (uVar11 != 0);
                  p_Var12 = local_78 + uVar13 * 8;
                  if (uVar4 != uVar13) goto LAB_0086c808;
                }
                local_70 = local_80 + (uVar4 + uVar9) * 8;
              }
              if (p_Var14 != (__state *)0x0) {
                operator_delete(p_Var14);
              }
            }
            else {
              lVar7 = (long)local_78 - (long)local_80 >> 3;
              lVar8 = lVar7 + 2;
              if (-1 < lVar7 + 1) {
                lVar8 = lVar7 + 1;
              }
              __n = (long)local_68 - (long)local_78;
              p_Var14 = local_78 + (lVar8 >> 1) * -8;
              p_Var5 = p_Var14;
              if (__n != 0) {
                memmove(p_Var14,local_78,__n);
                p_Var5 = local_78 + (lVar8 >> 1) * -8;
              }
              local_70 = p_Var14 + ((long)__n >> 3) * 8;
              local_78 = p_Var5;
            }
          }
          p_Var14 = p_Var16 + 8;
          *(undefined8 *)local_70 = *(undefined8 *)p_Var16;
          local_70 = local_70 + 8;
          p_Var5 = *(__state **)(this + 0x10);
          p_Var16 = p_Var14;
        } while (p_Var14 != p_Var5);
        p_Var16 = *(__state **)(this + 8);
      }
      p_Var14 = *(__state **)this;
      *(__state **)this = local_80;
      *(__state **)(this + 8) = local_78;
      uVar10 = *(undefined8 *)(this + 0x18);
      *(__state **)(this + 0x10) = local_70;
      *(__state **)(this + 0x18) = local_68;
      if ((long)local_70 - (long)local_78 == 8) {
        lVar8 = 0x15;
      }
      else {
        lVar8 = *(long *)(this + 0x20) + 0x2a;
      }
      *(long *)(this + 0x20) = lVar8;
      local_70 = p_Var5;
      if (p_Var5 != p_Var16) {
        local_70 = p_Var5 + (~(ulong)(p_Var5 + (-8 - (long)p_Var16)) & 0xfffffffffffffff8);
      }
      local_80 = p_Var14;
      local_78 = p_Var16;
      local_68 = (__state *)uVar10;
      if (p_Var14 != (__state *)0x0) {
        operator_delete(p_Var14);
      }
    }
  }
  else {
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + 0x2a;
    puVar6 = (undefined8 *)(*(long *)(this + 0x10) + -8);
    local_80 = (__state *)*puVar6;
    *(undefined8 **)(this + 0x10) = puVar6;
    __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
    ::push_front((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
                  *)this,&local_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

