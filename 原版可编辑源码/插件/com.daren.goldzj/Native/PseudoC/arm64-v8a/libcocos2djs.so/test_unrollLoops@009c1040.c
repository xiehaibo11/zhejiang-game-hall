
/* test_unrollLoops(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void test_unrollLoops(basic_string *param_1)

{
  __shared_weak_count *p_Var1;
  long *plVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  basic_string bVar4;
  char cVar5;
  long lVar6;
  basic_string *pbVar7;
  char *pcVar8;
  long lVar9;
  bool bVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar11;
  ulong uVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  basic_string *pbVar13;
  code *pcVar14;
  ulong uVar15;
  void *pvVar16;
  long lVar17;
  basic_string *pbVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong auStack_1e0 [2];
  char *pcStack_1d0;
  basic_regex<char,std::__ndk1::regex_traits<char>> abStack_1c0 [48];
  __shared_weak_count *p_Stack_190;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  long alStack_168 [2];
  undefined1 uStack_158;
  undefined1 uStack_140;
  undefined1 uStack_128;
  undefined1 uStack_120;
  long lStack_118;
  void *pvStack_110;
  void *pvStack_108;
  char *pcStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined **appuStack_a0 [4];
  undefined ***pppuStack_80;
  long lStack_70;
  
  lVar6 = tpidr_el0;
  lStack_70 = *(long *)(lVar6 + 0x28);
  pcStack_1d0 = operator_new(0x50);
  auStack_1e0[1] = 0x4d;
  auStack_1e0[0] = 0x51;
  builtin_strncpy(pcStack_1d0,"#pragma for (\\w+) in range\\(\\s*(",0x20);
  appuStack_a0[0] = &PTR_FUN_01c6b220;
  pppuStack_80 = appuStack_a0;
  pcStack_1d0[0x4d] = '\0';
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  builtin_strncpy(pcStack_1d0 + 0x20,"\\d+)\\s*,\\s*(\\d+)\\s*\\)([\\s\\S]+?)#pragma endFor",0x2d);
  *(undefined8 *)in_x8 = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar21 = *(undefined8 *)(param_1 + 8);
    uVar20 = *(undefined8 *)param_1;
    *(undefined8 *)(in_x8 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(in_x8 + 8) = uVar21;
    *(undefined8 *)in_x8 = uVar20;
  }
  else {
    uVar15 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar16 = *(void **)(param_1 + 0x10);
    if (uVar15 < 0x17) {
      pbVar11 = in_x8 + 1;
      *in_x8 = SUB41((int)uVar15 << 1,0);
      if (uVar15 != 0) goto LAB_009c1138;
    }
    else {
      uVar12 = uVar15 + 0x10 & 0xfffffffffffffff0;
      pbVar11 = operator_new(uVar12);
      *(ulong *)(in_x8 + 8) = uVar15;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (in_x8 + 0x10) = pbVar11;
      *(ulong *)in_x8 = uVar12 | 1;
LAB_009c1138:
      memcpy(pbVar11,pvVar16,uVar15);
    }
    pbVar11[uVar15] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
  std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
  basic_regex<std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
            (abStack_1c0,auStack_1e0,0);
  bVar4 = *param_1;
  pbVar13 = *(basic_string **)(param_1 + 0x10);
  lVar19 = 0;
  pbVar18 = pbVar13;
  if (((byte)bVar4 & 1) == 0) {
    pbVar18 = param_1 + 1;
  }
  plStack_180 = (long *)0x0;
  plStack_178 = (long *)0x0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  while( true ) {
    uStack_d0 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uVar15 = (ulong)((byte)bVar4 >> 1);
    pbVar7 = param_1 + 1;
    if (((byte)bVar4 & 1) != 0) {
      uVar15 = *(ulong *)(param_1 + 8);
      pbVar7 = pbVar13;
    }
    uStack_b8 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_ef = 0;
    uStack_f0 = 0;
    pvStack_108 = (void *)0x0;
    pvStack_110 = (void *)0x0;
    uStack_f8 = 0;
    uStack_f7 = 0;
    pcStack_100 = (char *)0x0;
    bVar10 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
             __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                       (abStack_1c0,pbVar18,pbVar7 + uVar15,&pvStack_110,0);
    std::__ndk1::
    match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
    ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
              ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                *)&plStack_180,pbVar18,pbVar7 + uVar15,&pvStack_110,0);
    if (pvStack_110 != (void *)0x0) {
      pvStack_108 = pvStack_110;
      operator_delete(pvStack_110);
    }
    lVar9 = lStack_118;
    if (!bVar10) break;
    plVar2 = alStack_168;
    if (plStack_178 != plStack_180) {
      plVar2 = plStack_180;
    }
    if (pppuStack_80 == (undefined ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    lVar17 = *plVar2;
    (*(code *)(*pppuStack_80)[6])(&pvStack_110,pppuStack_80,&plStack_180);
    uVar15 = (lVar17 - lVar9) + lVar19;
    plVar2 = alStack_168;
    if (plStack_178 != plStack_180) {
      plVar2 = plStack_180;
    }
    if ((char)plVar2[2] == '\0') {
      uVar12 = 0;
    }
    else {
      uVar12 = plVar2[1] - *plVar2;
    }
    pvVar16 = (void *)((ulong)pvStack_110 >> 1 & 0x7f);
    pcVar8 = (char *)((ulong)&pvStack_110 | 1);
    if (((ulong)pvStack_110 & 1) != 0) {
      pvVar16 = pvStack_108;
      pcVar8 = pcStack_100;
    }
    pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              replace(in_x8,uVar15,uVar12,pcVar8,(ulong)pvVar16);
    if (pbVar11 != in_x8) {
      uVar12 = *(ulong *)(pbVar11 + 8);
      pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar11 + 0x10);
      if (((byte)*pbVar11 & 1) == 0) {
        pbVar3 = pbVar11 + 1;
        uVar12 = (ulong)((byte)*pbVar11 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(in_x8,(char *)pbVar3,uVar12);
    }
    pvVar16 = (void *)((ulong)pvStack_110 >> 1 & 0x7f);
    if (((ulong)pvStack_110 & 1) != 0) {
      pvVar16 = pvStack_108;
    }
    plVar2 = alStack_168;
    if (plStack_178 != plStack_180) {
      plVar2 = plStack_180;
    }
    pbVar18 = (basic_string *)plVar2[1];
    lVar19 = (long)pvVar16 + uVar15;
    if (((ulong)pvStack_110 & 1) != 0) {
      operator_delete(pcStack_100);
    }
    bVar4 = *param_1;
    pbVar13 = *(basic_string **)(param_1 + 0x10);
  }
  if (plStack_180 != (long *)0x0) {
    plStack_178 = plStack_180;
    operator_delete(plStack_180);
  }
  if (p_Stack_190 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_190 + 8;
    do {
      lVar19 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar10) {
        *(long *)p_Var1 = lVar19 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*(long *)p_Stack_190 + 0x10))(p_Stack_190);
      std::__ndk1::__shared_weak_count::__release_weak(p_Stack_190);
    }
  }
  std::__ndk1::locale::~locale((locale *)abStack_1c0);
  if (appuStack_a0 == pppuStack_80) {
    pcVar14 = (code *)(*pppuStack_80)[4];
  }
  else {
    if (pppuStack_80 == (undefined ***)0x0) goto LAB_009c13a0;
    pcVar14 = (code *)(*pppuStack_80)[5];
  }
  (*pcVar14)();
LAB_009c13a0:
  if ((auStack_1e0[0] & 1) != 0) {
    operator_delete(pcStack_1d0);
  }
  if (*(long *)(lVar6 + 0x28) == lStack_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

