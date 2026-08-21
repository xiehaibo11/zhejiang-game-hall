
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
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  __state *p_Var10;
  __state *p_Var11;
  __state *p_Var12;
  undefined8 *puVar13;
  __state *local_88;
  __state *local_80;
  __state *local_78;
  __state *local_70;
  __state *local_68;
  deque<std::__ndk1::__state<char>,std::__ndk1::allocator<std::__ndk1::__state<char>>> *pdStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = *(long *)(this + 0x10) - *(long *)(this + 8);
  lVar5 = 0;
  if (uVar3 != 0) {
    lVar5 = ((long)uVar3 >> 3) * 0x2a + -1;
  }
  if ((ulong)(lVar5 - (*(long *)(this + 0x28) + *(long *)(this + 0x20))) < 0x2a) {
    uVar8 = *(long *)(this + 0x18) - *(long *)this;
    if (uVar3 < uVar8) {
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
                    /* try { // try from 00eb29e0 to 00fb29e7 has its CatchHandler @ 00eb2a24 */
        __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
        ::push_front((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>>
                      *)this,&local_80);
      }
                    /* try { // try from 00eb29e8 to 00fb2a3f has its CatchHandler @ 00eb29bc */
      if (*(long *)(this + 0x10) - *(long *)(this + 8) == 8) {
        lVar5 = 0x15;
      }
      else {
        lVar5 = *(long *)(this + 0x20) + 0x2a;
      }
      *(long *)(this + 0x20) = lVar5;
    }
    else {
                    /* catch() { ... } // from try @ 00eb2888 with catch @ 00eb285c */
      uVar3 = (long)uVar8 >> 2;
      if (uVar8 == 0) {
        uVar3 = 1;
      }
      pdStack_60 = this + 0x18;
      local_68 = (__state *)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* catch() { ... } // from try @ 00eb2a74 with catch @ 00eb2ab8 */
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00eb2880 to 00fb2887 has its CatchHandler @ 00eb28bc */
      local_80 = operator_new(uVar3 * 8);
      local_68 = local_80 + uVar3 * 8;
      local_78 = local_80;
      local_70 = local_80;
                    /* try { // try from 00eb2888 to 00fb28d7 has its CatchHandler @ 00eb285c */
      local_88 = operator_new(0xfc0);
      __split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
      ::push_back((__split_buffer<std::__ndk1::__state<char>*,std::__ndk1::allocator<std::__ndk1::__state<char>*>&>
                   *)&local_80,&local_88);
      puVar6 = *(undefined8 **)(this + 8);
      puVar7 = *(undefined8 **)(this + 0x10);
      if (puVar6 != puVar7) {
        do {
          p_Var10 = local_68;
          p_Var11 = local_78;
          p_Var12 = local_80;
          if (local_70 == local_68) {
            if (local_78 < local_80 || (long)local_78 - (long)local_80 == 0) {
              uVar3 = (long)local_68 - (long)local_80 >> 2;
              if ((long)local_68 - (long)local_80 == 0) {
                uVar3 = 1;
              }
              if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00eb2958 to 00fb295f has its CatchHandler @ 00eb2994 */
              p_Var2 = operator_new(uVar3 << 3);
                    /* try { // try from 00eb2960 to 00fb29af has its CatchHandler @ 00eb2934 */
              lVar5 = (long)p_Var10 - (long)p_Var11;
              local_78 = p_Var2 + (uVar3 >> 2) * 8;
              local_68 = p_Var2 + uVar3 * 8;
              local_70 = local_78;
              if (lVar5 != 0) {
                local_70 = local_78 + lVar5;
                lVar5 = (lVar5 >> 3) << 3;
                p_Var10 = local_78;
                do {
                  lVar5 = lVar5 + -8;
                  *(undefined8 *)p_Var10 = *(undefined8 *)p_Var11;
                  p_Var10 = p_Var10 + 8;
                  p_Var11 = p_Var11 + 8;
                  p_Var12 = local_80;
                    /* catch() { ... } // from try @ 00eb2958 with catch @ 00eb2994 */
                } while (lVar5 != 0);
              }
              local_80 = p_Var2;
              if (p_Var12 != (__state *)0x0) {
                    /* catch() { ... } // from try @ 00eb29e8 with catch @ 00eb29bc */
                operator_delete(p_Var12);
              }
            }
            else {
              lVar4 = (long)local_78 - (long)local_80 >> 3;
              lVar5 = lVar4 + 2;
              if (-1 < lVar4 + 1) {
                lVar5 = lVar4 + 1;
              }
              __n = (long)local_68 - (long)local_78;
              p_Var12 = local_78 + (lVar5 >> 1) * -8;
              if (__n != 0) {
                    /* catch() { ... } // from try @ 00eb2960 with catch @ 00eb2934 */
                memmove(p_Var12,local_78,__n);
              }
              local_70 = p_Var12 + ((long)__n >> 3) * 8;
              local_78 = local_78 + (lVar5 >> 1) * -8;
            }
          }
          puVar13 = puVar6 + 1;
          *(undefined8 *)local_70 = *puVar6;
          local_70 = local_70 + 8;
          puVar7 = *(undefined8 **)(this + 0x10);
          puVar6 = puVar13;
        } while (puVar13 != puVar7);
        puVar6 = *(undefined8 **)(this + 8);
      }
      p_Var12 = *(__state **)this;
      *(__state **)this = local_80;
                    /* catch() { ... } // from try @ 00eb29e0 with catch @ 00eb2a24 */
      uVar9 = *(undefined8 *)(this + 0x18);
      *(__state **)(this + 8) = local_78;
      *(__state **)(this + 0x10) = local_70;
      *(__state **)(this + 0x18) = local_68;
      if ((long)local_70 - (long)local_78 == 8) {
        lVar5 = 0x15;
      }
      else {
                    /* catch() { ... } // from try @ 00eb2a7c with catch @ 00eb2a50 */
        lVar5 = *(long *)(this + 0x20) + 0x2a;
      }
      *(long *)(this + 0x20) = lVar5;
      local_70 = (__state *)puVar7;
      if ((long)puVar7 - (long)puVar6 != 0) {
        local_70 = (__state *)
                   (puVar7 + (((long)puVar7 - (long)puVar6) - 8U >> 3 ^ 0xffffffffffffffff));
      }
                    /* try { // try from 00eb2a74 to 00fb2a7b has its CatchHandler @ 00eb2ab8 */
      local_80 = p_Var12;
      local_78 = (__state *)puVar6;
      local_68 = (__state *)uVar9;
      if (p_Var12 != (__state *)0x0) {
        operator_delete(p_Var12);
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
                    /* try { // try from 00eb2a7c to 00fb2ad3 has its CatchHandler @ 00eb2a50 */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

