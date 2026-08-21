
/* cocos2d::ZipFile::listFiles(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void cocos2d::ZipFile::listFiles(basic_string *param_1)

{
  size_t __n;
  basic_string *pbVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  char *pcVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  int iVar8;
  char *pcVar9;
  void *pvVar10;
  __tree_node_base **pp_Var11;
  __tree_node_base *p_Var12;
  basic_string *in_x1;
  char *__s2;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *in_x8;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  char *pcVar17;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b8;
  ulong local_b0;
  char *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [8];
  ulong local_98;
  char *local_90;
  __tree_node_base *local_88;
  __tree_node_base *local_80;
  long local_78;
  __tree_end_node *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_80 = (__tree_node_base *)0x0;
  local_78 = 0;
  uVar14 = *(ulong *)(in_x1 + 8);
  pbVar1 = *(basic_string **)(in_x1 + 0x10);
  if (((byte)*in_x1 & 1) == 0) {
    pbVar1 = in_x1 + 1;
    uVar14 = (ulong)((byte)*in_x1 >> 1);
  }
  plVar16 = *(long **)(*(long *)(param_1 + 8) + 0x18);
  local_88 = (__tree_node_base *)&local_80;
  if (pbVar1[uVar14 - 1] == (basic_string)0x2f) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_a0,in_x1);
  }
  else {
    FUN_007c1fb0(local_a0);
  }
  if (plVar16 != (long *)0x0) {
    pcVar17 = (char *)((ulong)&local_b8 | 1);
    do {
      uVar15 = local_98;
      bVar7 = local_a0[0];
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = (char *)0x0;
      bVar2 = (byte)local_a0[0] >> 1;
      uVar14 = (ulong)bVar2;
      if (((byte)local_a0[0] & 1) != 0) {
        uVar14 = local_98;
      }
      pvVar10 = (void *)((long)plVar16 + 0x11);
      uVar3 = (ulong)(*(byte *)(plVar16 + 2) >> 1);
      if ((*(byte *)(plVar16 + 2) & 1) != 0) {
        pvVar10 = (void *)plVar16[4];
        uVar3 = plVar16[3];
      }
      if (uVar14 <= uVar3) {
        uVar3 = uVar14;
      }
      if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar3 < 0x17) {
        local_b8 = (ulong)(byte)((int)uVar3 << 1);
        pcVar9 = pcVar17;
        if (uVar3 != 0) goto LAB_00fc1698;
      }
      else {
        uVar14 = uVar3 + 0x10 & 0xfffffffffffffff0;
        pcVar9 = operator_new(uVar14);
        local_b8 = uVar14 | 1;
        local_b0 = uVar3;
        local_a8 = pcVar9;
LAB_00fc1698:
        memcpy(pcVar9,pvVar10,uVar3);
      }
      pcVar6 = local_a8;
      pcVar9[uVar3] = '\0';
      bVar5 = false;
      uVar14 = local_b8 >> 1 & 0x7f;
      __n = uVar14;
      if ((local_b8 & 1) != 0) {
        __n = local_b0;
      }
      uVar3 = (ulong)bVar2;
      if (((byte)bVar7 & 1) != 0) {
        uVar3 = uVar15;
      }
      if (__n == uVar3) {
        pcVar9 = pcVar17;
        if ((local_b8 & 1) != 0) {
          pcVar9 = local_a8;
        }
        __s2 = (char *)((ulong)local_a0 | 1);
        if (((byte)bVar7 & 1) != 0) {
          __s2 = local_90;
        }
        if ((local_b8 & 1) == 0) {
          pcVar9 = pcVar17;
          if (__n != 0) {
            do {
              if (*pcVar9 != *__s2) {
                bVar5 = false;
                goto joined_r0x00fc18ec;
              }
              uVar14 = uVar14 - 1;
              pcVar9 = pcVar9 + 1;
              __s2 = __s2 + 1;
            } while (uVar14 != 0);
            bVar5 = true;
            goto joined_r0x00fc18ec;
          }
        }
        else if (__n == 0) {
          operator_delete(local_a8);
        }
        else {
          iVar8 = memcmp(pcVar9,__s2,__n);
          operator_delete(pcVar6);
          if (iVar8 != 0) goto LAB_00fc160c;
        }
LAB_00fc175c:
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = (char *)0x0;
        bVar2 = *(byte *)(plVar16 + 2);
        uVar14 = (ulong)((byte)local_a0[0] >> 1);
        if (((byte)local_a0[0] & 1) != 0) {
          uVar14 = local_98;
        }
        uVar15 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar15 = plVar16[3];
        }
        uVar3 = uVar15 - uVar14;
        if (uVar15 < uVar14) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        lVar13 = (long)plVar16 + 0x11;
        if ((bVar2 & 1) != 0) {
          lVar13 = plVar16[4];
        }
        if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar3 < 0x17) {
          local_b8 = (ulong)(byte)((int)uVar3 << 1);
          pcVar9 = pcVar17;
          if (uVar3 != 0) goto LAB_00fc17e4;
        }
        else {
          uVar15 = uVar3 + 0x10 & 0xfffffffffffffff0;
          pcVar9 = operator_new(uVar15);
          local_b8 = uVar15 | 1;
          local_b0 = uVar3;
          local_a8 = pcVar9;
LAB_00fc17e4:
          memcpy(pcVar9,(void *)(lVar13 + uVar14),uVar3);
        }
        pcVar9[uVar3] = '\0';
        pcVar9 = pcVar17;
        uVar14 = local_b8 >> 1 & 0x7f;
        if ((local_b8 & 1) != 0) {
          pcVar9 = local_a8;
          uVar14 = local_b0;
        }
        if (((uVar14 == 0) || (pvVar10 = memchr(pcVar9,0x2f,uVar14), pvVar10 == (void *)0x0)) ||
           (lVar13 = (long)pvVar10 - (long)pcVar9, lVar13 == -1)) {
          std::__ndk1::
          __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)&local_88,(basic_string *)&local_b8,(basic_string *)&local_b8);
        }
        else {
          if (lVar13 + 1U <= uVar14) {
            uVar14 = lVar13 + 1;
          }
          uStack_c8 = 0;
          local_c0 = (void *)0x0;
          local_d0 = 0;
          if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar14 < 0x17) {
            local_d0 = (ulong)(byte)((int)uVar14 << 1);
            pvVar10 = (void *)((ulong)&local_d0 | 1);
          }
          else {
            uVar15 = uVar14 + 0x10 & 0xfffffffffffffff0;
            pvVar10 = operator_new(uVar15);
            local_d0 = uVar15 | 1;
            uStack_c8 = uVar14;
            local_c0 = pvVar10;
          }
          memcpy(pvVar10,pcVar9,uVar14);
          *(undefined1 *)((long)pvVar10 + uVar14) = 0;
          pp_Var11 = std::__ndk1::
                     __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                     ::
                     __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                                 *)&local_88,&local_70,(basic_string *)&local_d0);
          if (*pp_Var11 == (__tree_node_base *)0x0) {
            p_Var12 = operator_new(0x38);
            pvVar10 = local_c0;
            uVar15 = uStack_c8;
            uVar14 = local_d0;
            uStack_c8 = 0;
            local_c0 = (void *)0x0;
            local_d0 = 0;
            *(undefined8 *)p_Var12 = 0;
            *(undefined8 *)(p_Var12 + 8) = 0;
            *(void **)(p_Var12 + 0x30) = pvVar10;
            *(ulong *)(p_Var12 + 0x28) = uVar15;
            *(ulong *)(p_Var12 + 0x20) = uVar14;
            *(__tree_end_node **)(p_Var12 + 0x10) = local_70;
            *pp_Var11 = p_Var12;
            if (*(__tree_node_base **)local_88 != (__tree_node_base *)0x0) {
              p_Var12 = *pp_Var11;
              local_88 = *(__tree_node_base **)local_88;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (local_80,p_Var12);
            local_78 = local_78 + 1;
          }
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
        }
        if ((local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
      }
      else {
joined_r0x00fc18ec:
        if ((local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
        if (bVar5) goto LAB_00fc175c;
      }
LAB_00fc160c:
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
  std::__ndk1::
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::
  vector<std::__ndk1::__tree_const_iterator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__tree_node<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,void*>*,long>>
            (in_x8,local_88,(__tree_node_base *)&local_80);
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  std::__ndk1::
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::destroy((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_88,(__tree_node *)local_80);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

