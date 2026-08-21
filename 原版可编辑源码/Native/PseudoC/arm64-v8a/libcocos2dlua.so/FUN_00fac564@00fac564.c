
undefined4
FUN_00fac564(byte *param_1,
            vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            *param_2)

{
  void *pvVar1;
  size_t sVar2;
  size_t __n;
  ulong *puVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined4 uVar17;
  ulong uVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  size_t local_a8;
  byte *local_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  bVar5 = *param_1;
  sVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 8);
  }
  if (sVar2 == 0) {
    uVar17 = 0;
    goto LAB_00fac71c;
  }
  pbVar15 = *(byte **)(param_1 + 0x10);
  if ((bVar5 & 1) == 0) {
    pbVar15 = param_1 + 1;
  }
                    /* catch() { ... } // from try @ 00fac528 with catch @ 00fac5c4 */
  pvVar9 = memchr(pbVar15,0x7b,sVar2);
  uVar12 = (long)pvVar9 - (long)pbVar15;
  if (pvVar9 == (void *)0x0) {
    uVar12 = 0xffffffffffffffff;
  }
  pvVar9 = memchr(pbVar15,0x7d,sVar2);
  uVar13 = (long)pvVar9 - (long)pbVar15;
  if (pvVar9 == (void *)0x0) {
    uVar13 = 0xffffffffffffffff;
  }
  uVar17 = 0;
  if (((uVar13 < uVar12) || (uVar12 == 0xffffffffffffffff)) || (uVar13 == 0xffffffffffffffff))
  goto LAB_00fac71c;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  if (sVar2 <= uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  uVar16 = sVar2 - (uVar12 + 1);
  if (uVar13 + ~uVar12 <= uVar16) {
    uVar16 = uVar13 + ~uVar12;
  }
  if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar16 < 0x17) {
    pvVar9 = (void *)((ulong)&local_98 | 1);
    local_98 = (ulong)(byte)((int)uVar16 << 1);
    if (uVar16 != 0) goto LAB_00fac684;
  }
  else {
    uVar13 = uVar16 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = operator_new(uVar13);
    local_98 = uVar13 | 1;
    local_90 = uVar16;
    local_88 = pvVar9;
LAB_00fac684:
    memcpy(pvVar9,pbVar15 + uVar12 + 1,uVar16);
  }
  *(undefined1 *)((long)pvVar9 + uVar16) = 0;
  sVar2 = local_98 >> 1 & 0x7f;
  if ((local_98 & 1) != 0) {
    sVar2 = local_90;
  }
  if (sVar2 == 0) {
joined_r0x00fac710:
    uVar17 = 0;
  }
  else {
    pvVar9 = (void *)((ulong)&local_98 | 1);
    if ((local_98 & 1) != 0) {
      pvVar9 = local_88;
    }
    pvVar10 = memchr(pvVar9,0x7b,sVar2);
    uVar12 = (long)pvVar10 - (long)pvVar9;
    if (pvVar10 == (void *)0x0) {
      uVar12 = 0xffffffffffffffff;
    }
    pvVar10 = memchr(pvVar9,0x7d,sVar2);
    uVar13 = (long)pvVar10 - (long)pvVar9;
    if (pvVar10 == (void *)0x0) {
      uVar13 = 0xffffffffffffffff;
    }
    if ((uVar13 & uVar12) != 0xffffffffffffffff) goto joined_r0x00fac710;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_b0,",");
    uVar12 = 0;
    sVar2 = (ulong)((byte)local_b0[0] >> 1);
    if (((byte)local_b0[0] & 1) != 0) {
      sVar2 = local_a8;
    }
    pvVar9 = (void *)((ulong)&local_80 | 1);
    while( true ) {
      uVar13 = local_98 >> 1 & 0x7f;
      pvVar10 = (void *)((ulong)&local_98 | 1);
      if ((local_98 & 1) != 0) {
        uVar13 = local_90;
        pvVar10 = local_88;
      }
      __n = (ulong)((byte)local_b0[0] >> 1);
      pbVar15 = (byte *)((ulong)local_b0 | 1);
      if (((byte)local_b0[0] & 1) != 0) {
        __n = local_a8;
        pbVar15 = local_a0;
      }
      uVar16 = uVar13 - uVar12;
      if (uVar13 < uVar12) {
        uStack_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar18 = uVar12;
      if (__n != 0) break;
LAB_00fac830:
      if (uVar18 == 0xffffffffffffffff) goto LAB_00fac908;
      if (uVar18 - uVar12 <= uVar16) {
        uVar16 = uVar18 - uVar12;
      }
      uStack_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
                    /* try { // try from 00fac854 to 010acad7 has its CatchHandler @ 00fac854
                       catch() { ... } // from try @ 00fac854 with catch @ 00fac854
                       catch() { ... } // from try @ 00facae0 with catch @ 00fac854
                       catch() { ... } // from try @ 00facbec with catch @ 00fac854 */
      if (uVar16 < 0x17) {
        local_80 = (ulong)(byte)((int)uVar16 << 1);
        pvVar11 = pvVar9;
        if (uVar16 != 0) goto LAB_00fac890;
      }
      else {
        uVar13 = uVar16 + 0x10 & 0xfffffffffffffff0;
        pvVar11 = operator_new(uVar13);
        local_80 = uVar13 | 1;
        uStack_78 = uVar16;
        local_70 = pvVar11;
LAB_00fac890:
        memcpy(pvVar11,(void *)((long)pvVar10 + uVar12),uVar16);
      }
      *(undefined1 *)((long)pvVar11 + uVar16) = 0;
      puVar3 = *(ulong **)(param_2 + 8);
      if (puVar3 < *(ulong **)(param_2 + 0x10)) {
        puVar3[2] = (ulong)local_70;
        puVar3[1] = uStack_78;
        *puVar3 = local_80;
        uStack_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        *(ulong **)(param_2 + 8) = puVar3 + 3;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  (param_2,(basic_string *)&local_80);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      uVar12 = uVar18 + sVar2;
    }
    pvVar11 = (void *)((long)pvVar10 + uVar12);
    pvVar1 = (void *)((long)pvVar10 + uVar13);
    lVar14 = (long)pvVar1 - (long)pvVar11;
    if ((long)__n <= lVar14) {
      bVar5 = *pbVar15;
      while( true ) {
        if ((0xfffffffffffffffe < lVar14 - __n) ||
           (pvVar11 = memchr(pvVar11,(uint)bVar5,(lVar14 - __n) + 1), pvVar11 == (void *)0x0))
        goto LAB_00fac908;
        iVar8 = memcmp(pvVar11,pbVar15,__n);
        if (iVar8 == 0) break;
        pvVar11 = (void *)((long)pvVar11 + 1);
        lVar14 = (long)pvVar1 - (long)pvVar11;
        if (lVar14 < (long)__n) goto LAB_00fac908;
      }
      if (pvVar11 != pvVar1) {
        uVar18 = (long)pvVar11 - (long)pvVar10;
        goto LAB_00fac830;
      }
    }
LAB_00fac908:
    uStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar16 < 0x17) {
      local_80 = (ulong)(byte)((int)uVar16 << 1);
      if (uVar16 != 0) goto LAB_00fac954;
    }
    else {
      uVar13 = uVar16 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = operator_new(uVar13);
      local_80 = uVar13 | 1;
      uStack_78 = uVar16;
      local_70 = pvVar9;
LAB_00fac954:
      memcpy(pvVar9,(void *)((long)pvVar10 + uVar12),uVar16);
    }
    *(undefined1 *)((long)pvVar9 + uVar16) = 0;
    puVar3 = *(ulong **)(param_2 + 8);
    if (puVar3 < *(ulong **)(param_2 + 0x10)) {
      puVar3[2] = (ulong)local_70;
      puVar3[1] = uStack_78;
      *puVar3 = local_80;
      uStack_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      *(ulong **)(param_2 + 8) = puVar3 + 3;
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                (param_2,(basic_string *)&local_80);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
    if (((byte)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    pbVar15 = *(byte **)param_2;
    pbVar4 = *(byte **)(param_2 + 8);
    if ((long)pbVar4 - (long)pbVar15 != 0x30) {
LAB_00faca08:
      if (pbVar4 != pbVar15) {
        bVar5 = pbVar4[-0x18];
        pbVar7 = pbVar4 + -0x18;
        while( true ) {
          if ((bVar5 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          if (pbVar15 == pbVar7) break;
          bVar5 = pbVar7[-0x18];
          pbVar4 = pbVar7;
          pbVar7 = pbVar7 + -0x18;
        }
      }
      *(byte **)(param_2 + 8) = pbVar15;
      goto joined_r0x00fac710;
    }
    if ((*pbVar15 & 1) != 0) {
      if (*(long *)(pbVar15 + 8) != 0) goto LAB_00fac9f8;
      goto LAB_00faca08;
    }
    if (*pbVar15 >> 1 == 0) goto LAB_00faca08;
LAB_00fac9f8:
    if ((pbVar15[0x18] & 1) == 0) {
      if (pbVar15[0x18] >> 1 == 0) goto LAB_00faca08;
    }
    else if (*(long *)(pbVar15 + 0x20) == 0) goto LAB_00faca08;
    uVar17 = 1;
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
LAB_00fac71c:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

