
/* WARNING: Type propagation algorithm not settling */
/* XMLHttpRequest::getHeader(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall XMLHttpRequest::getHeader(XMLHttpRequest *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string *pbVar1;
  basic_string *__s;
  ulong uVar2;
  long lVar3;
  ulong ***pppuVar4;
  int iVar5;
  basic_string *pbVar6;
  size_t sVar7;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  int local_e0 [2];
  undefined8 ****local_d8;
  ulong uStack_d0;
  char *local_c8;
  ulong ***local_c0;
  ulong uStack_b8;
  char *local_b0;
  ulong ***local_a0;
  ulong uStack_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar16 = *(ulong *)(param_1 + 8);
  __s = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __s = param_1 + 1;
    uVar16 = (ulong)((byte)*param_1 >> 1);
  }
  if (uVar16 != 0) {
    uVar17 = 0;
    pbVar1 = __s + uVar16;
    while (pbVar6 = __s, __s[uVar17] != (basic_string)0x3a) {
      uVar17 = uVar17 + 1;
      if (uVar16 == uVar17) goto joined_r0x008f9830;
    }
    if ((uVar16 == uVar17) || (uVar17 == 0xffffffffffffffff)) goto joined_r0x008f9830;
    uVar10 = uVar16;
    if (uVar17 <= uVar16) {
      uVar10 = uVar17;
    }
    local_a0 = (undefined8 ***)0x0;
    uStack_98 = 0;
    local_90 = (char *)0x0;
    local_c0 = (undefined8 ***)0x0;
    uStack_b8 = 0;
    local_b0 = (char *)0x0;
    local_d8 = (undefined8 ****)0x0;
    uStack_d0 = 0;
    local_c8 = (char *)0x0;
    if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar10 < 0x17) {
      pcVar15 = (char *)((ulong)&local_d8 | 1);
      local_d8 = (undefined8 ****)(ulong)(byte)((int)uVar10 << 1);
      if (uVar10 != 0) goto LAB_008f9894;
    }
    else {
      uVar12 = uVar10 + 0x10 & 0xfffffffffffffff0;
      pcVar15 = operator_new(uVar12);
      local_d8 = (undefined8 ****)(uVar12 | 1);
      uStack_d0 = uVar10;
      local_c8 = pcVar15;
LAB_008f9894:
      memcpy(pcVar15,__s,uVar10);
    }
    uStack_98 = uStack_d0;
    local_a0 = (ulong ***)local_d8;
    pcVar15[uVar10] = '\0';
    uVar17 = uVar17 + 1;
    local_d8 = (undefined8 ****)0x0;
    uStack_d0 = 0;
    local_90 = local_c8;
    local_c8 = (char *)0x0;
    if (uVar16 < uVar17) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar10 = uVar16 - uVar17;
    if (uVar16 <= uVar16 - uVar17) {
      uVar10 = uVar16;
    }
    if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar10 < 0x17) {
      pcVar15 = (char *)((ulong)&local_d8 | 1);
      local_d8 = (undefined8 ****)(ulong)(byte)((int)uVar10 << 1);
      if (uVar10 != 0) goto LAB_008f991c;
    }
    else {
      uVar16 = uVar10 + 0x10 & 0xfffffffffffffff0;
      pcVar15 = operator_new(uVar16);
      local_d8 = (undefined8 ****)(uVar16 | 1);
      uStack_d0 = uVar10;
      local_c8 = pcVar15;
LAB_008f991c:
      memcpy(pcVar15,__s + uVar17,uVar10);
    }
    pcVar15[uVar10] = '\0';
    uStack_b8 = uStack_d0;
    local_c0 = (ulong ***)local_d8;
    pppuVar4 = local_c0;
    local_c0._0_1_ = SUB81(local_d8,0);
    uVar10 = (ulong)local_d8 & 0xff;
    local_b0 = local_c8;
    uVar17 = (ulong)((byte)local_c0._0_1_ >> 1);
    uVar16 = uVar17;
    if (((ulong)local_d8 & 1) != 0) {
      uVar16 = uStack_d0;
    }
    bVar9 = (byte)local_c0._0_1_ & 1;
    local_c0 = pppuVar4;
    if (uVar16 != 0) {
      pcVar15 = (char *)((ulong)&local_c0 | 1);
      if (((ulong)local_d8 & 1) != 0) {
        pcVar15 = local_c8;
      }
      if (pcVar15[uVar16 - 1] == '\n') {
        if (((ulong)local_d8 & 1) != 0) {
          uVar17 = uStack_d0;
        }
        uVar16 = uVar17 - 1;
        if (uVar17 < uVar16) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        uVar17 = uVar16;
        if (((ulong)local_d8 & 1) == 0) {
          local_c0._1_7_ = (undefined7)((ulong)local_d8 >> 8);
          local_c0 = (ulong ***)CONCAT71(local_c0._1_7_,(char)((int)uVar16 << 1));
          uVar17 = uStack_b8;
        }
        uStack_b8 = uVar17;
        pcVar15[uVar16] = '\0';
        uVar10 = (ulong)local_c0 & 0xff;
        bVar9 = (byte)local_c0._0_1_ & 1;
        uVar17 = (ulong)((byte)local_c0._0_1_ >> 1);
      }
    }
    if (bVar9 != 0) {
      uVar17 = uStack_b8;
    }
    if (uVar17 != 0) {
      pcVar15 = (char *)((ulong)&local_c0 | 1);
      if (bVar9 != 0) {
        pcVar15 = local_c8;
      }
      if (*pcVar15 == ' ') {
        sVar7 = uVar17 - 1;
        if (sVar7 != 0) {
          memmove(pcVar15,pcVar15 + 1,sVar7);
          uVar10 = (ulong)local_c0 & 0xff;
        }
        uVar16 = sVar7;
        if ((uVar10 & 1) == 0) {
          local_c0 = (ulong ***)CONCAT71(local_c0._1_7_,(char)((int)sVar7 << 1));
          uVar16 = uStack_b8;
        }
        uStack_b8 = uVar16;
        pcVar15[sVar7] = '\0';
      }
    }
    if (((ulong)local_a0 & 1) == 0) {
      pcVar13 = (char *)((ulong)&local_a0 | 1);
      pcVar15 = pcVar13 + ((ulong)local_a0 >> 1 & 0x7f);
      if (pcVar13 == pcVar15) goto LAB_008f9ad0;
      goto LAB_008f9abc;
    }
    pcVar15 = local_90 + uStack_98;
    pcVar13 = local_90;
    if (local_90 != pcVar15) {
LAB_008f9abc:
      do {
        iVar5 = tolower((int)*pcVar13);
        pcVar14 = pcVar13 + 1;
        *pcVar13 = (char)iVar5;
        pcVar13 = pcVar14;
      } while (pcVar15 != pcVar14);
    }
LAB_008f9ad0:
    local_d8 = &local_a0;
    lVar8 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                        *)(this + 0x160),(basic_string *)&local_a0,
                       (piecewise_construct_t *)&DAT_01867545,(tuple *)&local_d8,(tuple *)local_e0);
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (lVar8 + 0x28) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_c0)
    {
      uVar16 = (ulong)local_c0 >> 1 & 0x7f;
      pcVar15 = (char *)((ulong)&local_c0 | 1);
      if (((ulong)local_c0 & 1) != 0) {
        uVar16 = uStack_b8;
        pcVar15 = local_b0;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar8 + 0x28),pcVar15,uVar16);
    }
    if (((ulong)local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if (((ulong)local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
  }
  goto LAB_008f9b44;
joined_r0x008f9830:
  if (((long)uVar16 < 4) ||
     ((uVar16 - 3 == 0 || (pbVar6 = memchr(pbVar6,0x48,uVar16 - 3), pbVar6 == (basic_string *)0x0)))
     ) goto LAB_008f9b44;
  if (*(int *)pbVar6 == 0x50545448) {
    if ((pbVar6 == pbVar1) || (pbVar6 != __s)) goto LAB_008f9b44;
    local_e0[0] = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    local_a0 = (ulong ***)0x0;
    uStack_88 = 0;
    local_90 = (char *)0x0;
    sscanf((char *)__s,"HTTP/%d.%d %d %63[^\n]",&local_c0,&local_d8,local_e0,&local_a0);
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x210);
    sVar7 = strlen((char *)&local_a0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)&local_a0,sVar7);
    if (((byte)this[0x210] & 1) == 0) {
      if ((byte)this[0x210] >> 1 != 0) goto LAB_008f9b44;
    }
    else if (*(long *)(this + 0x218) != 0) goto LAB_008f9b44;
    if (DAT_01d370e8 != 0) {
      uVar16 = (ulong)local_e0[0];
      uVar17 = DAT_01d370e8 - 1;
      if ((uVar17 & DAT_01d370e8) == 0) {
        uVar10 = uVar17 & uVar16;
      }
      else {
        uVar10 = uVar16;
        if (DAT_01d370e8 <= uVar16) {
          uVar10 = 0;
          if (DAT_01d370e8 != 0) {
            uVar10 = uVar16 / DAT_01d370e8;
          }
          uVar10 = uVar16 - uVar10 * DAT_01d370e8;
        }
      }
      plVar11 = *(long **)(DAT_01d370e0 + uVar10 * 8);
      if (plVar11 != (long *)0x0) goto LAB_008f9bc0;
    }
    goto LAB_008f9b44;
  }
  uVar16 = (long)pbVar1 - (long)(pbVar6 + 1);
  pbVar6 = pbVar6 + 1;
  goto joined_r0x008f9830;
  while( true ) {
    if ((uVar17 & DAT_01d370e8) == 0) {
      uVar12 = uVar12 & uVar17;
    }
    else if (DAT_01d370e8 <= uVar12) {
      uVar2 = 0;
      if (DAT_01d370e8 != 0) {
        uVar2 = uVar12 / DAT_01d370e8;
      }
      uVar12 = uVar12 - uVar2 * DAT_01d370e8;
    }
    if (uVar12 != uVar10) break;
LAB_008f9bc0:
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) break;
    uVar12 = plVar11[1];
    if (uVar12 == uVar16) {
      if (*(int *)(plVar11 + 2) == local_e0[0]) {
        if (this_00 !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (plVar11 + 3)) {
          uVar16 = plVar11[4];
          pcVar15 = (char *)plVar11[5];
          if ((*(byte *)(plVar11 + 3) & 1) == 0) {
            pcVar15 = (char *)((long)plVar11 + 0x19);
            uVar16 = (ulong)(*(byte *)(plVar11 + 3) >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (this_00,pcVar15,uVar16);
        }
        break;
      }
      goto LAB_008f9bc0;
    }
  }
LAB_008f9b44:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

