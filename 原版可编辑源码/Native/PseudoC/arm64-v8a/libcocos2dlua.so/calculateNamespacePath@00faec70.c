
/* calculateNamespacePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >&) */

void calculateNamespacePath(basic_string *param_1,basic_string *param_2,vector *param_3)

{
  ulong *puVar1;
  basic_string *pbVar2;
  basic_string bVar3;
  long lVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  ulong local_98;
  ulong uStack_90;
  undefined1 *local_88;
  ulong local_80;
  ulong uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar7 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar7 = (ulong)((byte)*param_1 >> 1);
  }
  if (uVar7 != 0) {
    uVar14 = uVar7;
    do {
      uVar10 = uVar14;
      if (uVar10 == 0) goto LAB_00faed24;
      uVar14 = uVar10 - 1;
    } while (pbVar2[uVar10 - 1] != (basic_string)0x23);
    if (uVar14 != 0xffffffffffffffff) {
      if (uVar14 <= uVar7) {
        uVar7 = uVar14;
      }
      uStack_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      if (0xffffffffffffffef < uVar7) goto LAB_00faf160;
      if (uVar7 < 0x17) {
        pvVar11 = (void *)((ulong)&local_80 | 1);
        local_80 = (ulong)(byte)((int)uVar7 << 1);
        if (uVar7 != 0) goto LAB_00faed88;
      }
      else {
        uVar9 = uVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00faed70 to 010aed87 has its CatchHandler @ 00faed70
                       catch() { ... } // from try @ 00faed70 with catch @ 00faed70
                       catch() { ... } // from try @ 00faed90 with catch @ 00faed70 */
        pvVar11 = operator_new(uVar9);
        local_80 = uVar9 | 1;
        uStack_78 = uVar7;
        local_70 = pvVar11;
LAB_00faed88:
                    /* try { // try from 00faed88 to 010aed8f has its CatchHandler @ 00faeda8 */
                    /* try { // try from 00faed90 to 010aedbb has its CatchHandler @ 00faed70 */
        memcpy(pvVar11,pbVar2,uVar7);
      }
      *(undefined1 *)((long)pvVar11 + uVar7) = 0;
      if (((byte)*param_2 & 1) == 0) {
        *(undefined2 *)param_2 = 0;
                    /* catch() { ... } // from try @ 00faed88 with catch @ 00faeda8 */
      }
      else {
        **(undefined1 **)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 8) = 0;
                    /* try { // try from 00faedbc to 010aeedb has its CatchHandler @ 00faedbc
                       catch() { ... } // from try @ 00faedbc with catch @ 00faedbc
                       catch() { ... } // from try @ 00faefd8 with catch @ 00faedbc */
        if (((byte)*param_2 & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x10));
          *(undefined8 *)param_2 = 0;
        }
      }
      *(undefined1 **)(param_2 + 0x10) = local_70;
      *(ulong *)(param_2 + 8) = uStack_78;
      *(ulong *)param_2 = local_80;
      bVar3 = *param_1;
      uStack_78 = 0;
      local_70 = (undefined1 *)0x0;
      local_80 = 0;
      uVar7 = (ulong)((byte)bVar3 >> 1);
      if (((byte)bVar3 & 1) != 0) {
        uVar7 = *(ulong *)(param_1 + 8);
      }
      if (uVar7 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar7 = uVar7 - uVar10;
      pbVar2 = param_1 + 1;
      if (((byte)bVar3 & 1) != 0) {
        pbVar2 = *(basic_string **)(param_1 + 0x10);
      }
      if (0xffffffffffffffef < uVar7) {
LAB_00faf160:
        local_70 = (undefined1 *)0x0;
        uStack_78 = 0;
        local_80 = 0;
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar7 < 0x17) {
        puVar8 = (undefined1 *)((ulong)&local_80 | 1);
        local_80 = (ulong)(byte)((int)uVar7 << 1);
        if (uVar7 != 0) goto LAB_00faee5c;
      }
      else {
        uVar14 = uVar7 + 0x10 & 0xfffffffffffffff0;
        puVar8 = operator_new(uVar14);
        local_80 = uVar14 | 1;
        uStack_78 = uVar7;
        local_70 = puVar8;
LAB_00faee5c:
        memcpy(puVar8,pbVar2 + uVar10,uVar7);
      }
      puVar8[uVar7] = 0;
      bVar5 = (local_80 & 1) == 0;
      uVar7 = (ulong)((byte)local_80._0_1_ >> 1);
      if (!bVar5) {
        uVar7 = uStack_78;
      }
      uVar14 = local_80;
      if (uVar7 != 0) {
        puVar12 = (undefined1 *)((ulong)&local_80 | 1);
        puVar8 = puVar12;
        if ((local_80 & 1) != 0) {
          puVar8 = local_70;
        }
        puVar13 = (undefined1 *)((ulong)&local_98 | 1);
        bVar3 = local_80._0_1_;
        do {
          puVar6 = local_70;
          uVar10 = uStack_78;
          pvVar11 = memchr(puVar8,0x2f,uVar7);
          uVar14 = local_80;
          if ((pvVar11 == (void *)0x0) ||
             (uVar7 = (long)pvVar11 - (long)puVar8, uVar7 == 0xffffffffffffffff)) break;
          puVar8 = puVar12;
          uVar14 = (ulong)((byte)bVar3 >> 1);
          if (!bVar5) {
            puVar8 = puVar6;
            uVar14 = uVar10;
          }
          if (uVar7 <= uVar14) {
            uVar14 = uVar7;
          }
          uStack_90 = 0;
          local_88 = (undefined1 *)0x0;
          local_98 = 0;
          if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar14 < 0x17) {
            local_98 = (ulong)(byte)((int)uVar14 << 1);
            puVar6 = puVar13;
            if (uVar14 != 0) goto LAB_00faef60;
          }
          else {
                    /* try { // try from 00faef44 to 010aef4b has its CatchHandler @ 00faf05c */
            uVar10 = uVar14 + 0x10 & 0xfffffffffffffff0;
            puVar6 = operator_new(uVar10);
            local_98 = uVar10 | 1;
            uStack_90 = uVar14;
            local_88 = puVar6;
LAB_00faef60:
            memcpy(puVar6,puVar8,uVar14);
          }
          puVar6[uVar14] = 0;
          puVar1 = *(ulong **)(param_3 + 8);
          if (puVar1 < *(ulong **)(param_3 + 0x10)) {
            puVar1[2] = (ulong)local_88;
            puVar1[1] = uStack_90;
            *puVar1 = local_98;
            *(ulong **)(param_3 + 8) = puVar1 + 3;
          }
          else {
            std::__ndk1::
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            ::
            __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                        *)param_3,(basic_string *)&local_98);
            if ((local_98 & 1) != 0) {
              operator_delete(local_88);
            }
          }
          uVar10 = local_80;
          uStack_90 = 0;
          local_88 = (undefined1 *)0x0;
          local_98 = 0;
                    /* try { // try from 00faefd0 to 010aefd7 has its CatchHandler @ 00faf04c */
          uVar14 = local_80 >> 1 & 0x7f;
                    /* try { // try from 00faefd8 to 010af09b has its CatchHandler @ 00faedbc */
          if ((local_80 & 1) != 0) {
            uVar14 = uStack_78;
          }
          if (uVar14 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          uVar14 = uVar14 - (uVar7 + 1);
          puVar8 = puVar12;
          if ((local_80 & 1) != 0) {
            puVar8 = local_70;
          }
          if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar14 < 0x17) {
            local_98 = (ulong)(byte)((int)uVar14 << 1);
            puVar6 = puVar13;
            if (uVar14 != 0) goto LAB_00faf044;
            *puVar13 = 0;
          }
          else {
            uVar9 = uVar14 + 0x10 & 0xfffffffffffffff0;
            puVar6 = operator_new(uVar9);
            local_98 = uVar9 | 1;
            uStack_90 = uVar14;
            local_88 = puVar6;
LAB_00faf044:
                    /* catch() { ... } // from try @ 00faefd0 with catch @ 00faf04c */
            memcpy(puVar6,puVar8 + uVar7 + 1,uVar14);
            puVar6[uVar14] = 0;
          }
          if ((uVar10 & 1) != 0) {
                    /* catch() { ... } // from try @ 00faef44 with catch @ 00faf05c */
            *local_70 = 0;
            uStack_78 = 0;
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
                    /* catch() { ... } // from try @ 00faeedc with catch @ 00faf078 */
            }
          }
          uStack_78 = uStack_90;
          local_80 = local_98;
          uVar14 = local_80;
          local_80._0_1_ = SUB81(local_98,0);
          local_70 = local_88;
          bVar5 = (local_98 & 1) == 0;
          puVar8 = puVar12;
          uVar7 = (ulong)((byte)local_80._0_1_ >> 1);
          if (!bVar5) {
            puVar8 = local_88;
            uVar7 = uStack_90;
          }
                    /* try { // try from 00faeedc to 010aeee3 has its CatchHandler @ 00faf078 */
          bVar3 = local_80._0_1_;
          local_80 = uVar14;
        } while (uVar7 != 0);
      }
      local_80 = uVar14;
      puVar8 = local_70;
      uVar7 = uStack_78;
      puVar1 = *(ulong **)(param_3 + 8);
      if (puVar1 == *(ulong **)(param_3 + 0x10)) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)param_3,(basic_string *)&local_80);
      }
      else {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        if ((local_80 & 1) == 0) {
                    /* try { // try from 00faf09c to 010af1d7 has its CatchHandler @ 00faf09c
                       catch() { ... } // from try @ 00faf09c with catch @ 00faf09c
                       catch() { ... } // from try @ 00faf1e0 with catch @ 00faf09c */
          puVar1[2] = (ulong)local_70;
          puVar1[1] = uStack_78;
          *puVar1 = local_80;
        }
        else {
          if (0xffffffffffffffef < uStack_78) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_78 < 0x17) {
            pvVar11 = (void *)((long)puVar1 + 1);
            *(char *)puVar1 = (char)((int)uStack_78 << 1);
            if (uStack_78 != 0) goto LAB_00faf114;
          }
          else {
            uVar14 = uStack_78 + 0x10 & 0xfffffffffffffff0;
            pvVar11 = operator_new(uVar14);
            puVar1[1] = uVar7;
            puVar1[2] = (ulong)pvVar11;
            *puVar1 = uVar14 | 1;
LAB_00faf114:
            memcpy(pvVar11,puVar8,uVar7);
          }
          *(undefined1 *)((long)pvVar11 + uVar7) = 0;
        }
        *(ulong **)(param_3 + 8) = puVar1 + 3;
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      goto LAB_00faed38;
    }
  }
LAB_00faed24:
  if (param_2 != param_1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2
           ,(char *)pbVar2,uVar7);
  }
LAB_00faed38:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

