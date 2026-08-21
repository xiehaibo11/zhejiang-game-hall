
/* cocos2d::network::Uri::doParse(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall cocos2d::network::Uri::doParse(Uri *this,basic_string *param_1)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  Uri *pUVar4;
  Uri UVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  ushort uVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  void *pvVar14;
  undefined1 *puVar15;
  char *pcVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  char *pcVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined4 uVar26;
  Uri *pUVar27;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar28;
  Uri *pUVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  void *pvVar32;
  undefined1 *puVar33;
  Uri *pUVar34;
  char *pcVar35;
  ulong uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ulong local_328;
  ulong uStack_320;
  undefined1 *local_318;
  ulong local_310;
  ulong local_308;
  char *local_300;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_2f8 [8];
  ulong local_2f0;
  void *local_2e8;
  void *local_2e0;
  void *local_2d8;
  char *local_2d0;
  undefined8 local_2c8 [2];
  undefined1 local_2b8;
  undefined1 local_2a0;
  char local_288;
  undefined1 local_280;
  void *local_270;
  void *local_268;
  undefined8 uStack_260;
  undefined8 local_258 [2];
  undefined1 local_248;
  undefined1 local_230;
  char local_218;
  undefined1 local_210;
  void *local_200;
  void *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8 [2];
  undefined1 local_1d8;
  undefined1 local_1c0;
  char local_1a8;
  undefined1 local_1a0;
  undefined1 *local_190;
  undefined1 *puStack_188;
  char *local_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  locale lStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined8 uStack_160;
  undefined8 local_158;
  ulong uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  ulong uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  char *pcVar36;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  if (((DAT_0178f620 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0178f620), iVar13 != 0)) {
    FUN_00ea7308(&DAT_0178f5e0,"([a-zA-Z][a-zA-Z0-9+.-]*):([^?#]*)(?:\\?([^#]*))?(?:#(.*))?",0);
    __cxa_atexit(std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::~basic_regex,
                 &DAT_0178f5e0,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_0178f620);
  }
  if (((DAT_0178f668 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0178f668), iVar13 != 0)) {
    FUN_00ea7308(&DAT_0178f628,"//([^/]*)(/.*)?",0);
    __cxa_atexit(std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::~basic_regex,
                 &DAT_0178f628,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_0178f668);
  }
  uVar37 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar37 = *(ulong *)(param_1 + 8);
  }
  if (uVar37 == 0) {
    uVar26 = 0;
    goto LAB_00ea6674;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_2f8,param_1);
  pvVar32 = local_2e8;
  uVar22 = local_2f0;
  bVar6 = local_2f8[0];
  uVar37 = (ulong)((byte)local_2f8[0] >> 1);
  pvVar2 = (void *)((ulong)local_2f8 | 1);
  uVar18 = uVar37;
  if (((byte)local_2f8[0] & 1) != 0) {
    pvVar2 = local_2e8;
    uVar18 = local_2f0;
  }
  if (2 < (long)uVar18) {
    pvVar1 = (void *)((long)pvVar2 + uVar18);
    pvVar14 = pvVar2;
    do {
      if ((uVar18 - 2 == 0) || (pvVar14 = memchr(pvVar14,0x3a,uVar18 - 2), pvVar14 == (void *)0x0))
      break;
      iVar13 = memcmp(pvVar14,&DAT_0142aad2,3);
      if (iVar13 == 0) {
        if ((pvVar14 != pvVar1) && ((long)pvVar14 - (long)pvVar2 != -1)) {
          bVar12 = true;
          goto LAB_00ea56e8;
        }
        break;
      }
      pvVar14 = (void *)((long)pvVar14 + 1);
      uVar18 = (long)pvVar1 - (long)pvVar14;
    } while (2 < (long)uVar18);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  insert(local_2f8,0,"abc://",6);
  bVar12 = false;
  uVar37 = (ulong)((byte)local_2f8[0] >> 1);
  pvVar32 = local_2e8;
  uVar22 = local_2f0;
  bVar6 = local_2f8[0];
LAB_00ea56e8:
  pvVar2 = (void *)((ulong)local_2f8 | 1);
  if (((byte)bVar6 & 1) != 0) {
    uVar37 = uVar22;
    pvVar2 = pvVar32;
  }
  local_1f8 = (void *)0x0;
  uStack_1f0 = 0;
  local_200 = (void *)0x0;
  local_1d8 = 0;
  local_1c0 = 0;
  local_1a8 = '\0';
  local_1a0 = 0;
  local_158 = 0;
  uStack_160 = 0;
  uStack_150 = uStack_150 & 0xffffffffffffff00;
  uStack_140 = 0;
  local_148 = 0;
  local_138 = local_138 & 0xffffffffffffff00;
  uStack_130 = uStack_130 & 0xffffffffffffff00;
  local_128 = (void *)0x0;
  puStack_188 = (undefined1 *)0x0;
  local_190 = (undefined1 *)0x0;
  uStack_178 = 0;
  local_180 = (undefined1 *)0x0;
  uStack_16f = 0;
  uStack_168 = 0;
  uStack_177 = 0;
  lStack_170 = (locale)0x0;
  bVar11 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
           __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                     ((basic_regex<char,std::__ndk1::regex_traits<char>> *)&DAT_0178f5e0,pvVar2,
                      (long)pvVar2 + uVar37,&local_190,0x1040);
  std::__ndk1::
  match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
  ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
            ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
              *)&local_200,pvVar2,(long)pvVar2 + uVar37,&local_190,0);
  if (local_190 != (undefined1 *)0x0) {
    puStack_188 = local_190;
    operator_delete(local_190);
  }
  if (bVar11) {
    if (local_1a8 == '\0') {
      if (bVar12) {
        puVar24 = (undefined8 *)((long)local_200 + 0x18);
        if ((ulong)(((long)local_1f8 - (long)local_200 >> 3) * -0x5555555555555555) < 2) {
          puVar24 = local_1e8;
        }
        puVar19 = (undefined1 *)*puVar24;
        puVar30 = (undefined1 *)puVar24[1];
        local_190 = (undefined1 *)0x0;
        puStack_188 = (undefined1 *)0x0;
        local_180 = (undefined1 *)0x0;
        puVar31 = puVar30 + -(long)puVar19;
        if ((undefined1 *)0xffffffffffffffef < puVar31) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (puVar31 < (undefined1 *)0x17) {
          local_190 = (undefined1 *)(ulong)(byte)((int)puVar31 << 1);
          puVar15 = (undefined1 *)((ulong)&local_190 | 1);
        }
        else {
          puVar15 = operator_new((ulong)(puVar31 + 0x10) & 0xfffffffffffffff0);
          local_190 = (undefined1 *)((ulong)(puVar31 + 0x10) & 0xfffffffffffffff0 | 1);
          puStack_188 = puVar31;
          local_180 = puVar15;
        }
        if (puVar19 != puVar30) {
          if (((undefined1 *)0x1f < puVar31) &&
             ((puVar30 <= puVar15 || (puVar15 + (long)puVar31 <= puVar19)))) {
            puVar21 = (undefined1 *)((ulong)puVar31 & 0xffffffffffffffe0);
            puVar24 = (undefined8 *)(puVar19 + 0x10);
            puVar33 = puVar15 + (long)puVar21;
            puVar19 = puVar19 + (long)puVar21;
            puVar25 = (undefined8 *)(puVar15 + 0x10);
            puVar15 = puVar21;
            do {
              puVar9 = puVar24 + -1;
              uVar38 = puVar24[-2];
              uVar40 = puVar24[1];
              uVar39 = *puVar24;
              puVar24 = puVar24 + 4;
              puVar15 = puVar15 + -0x20;
              puVar25[-1] = *puVar9;
              puVar25[-2] = uVar38;
              puVar25[1] = uVar40;
              *puVar25 = uVar39;
              puVar25 = puVar25 + 4;
            } while (puVar15 != (undefined1 *)0x0);
            puVar15 = puVar33;
            if (puVar21 == puVar31) goto LAB_00ea58a0;
          }
          do {
            puVar33 = puVar19 + 1;
            puVar31 = puVar15 + 1;
            *puVar15 = *puVar19;
            puVar15 = puVar31;
            puVar19 = puVar33;
          } while (puVar30 != puVar33);
        }
LAB_00ea58a0:
        *puVar15 = 0;
        pUVar27 = this + 8;
        if (((byte)*pUVar27 & 1) == 0) {
          *(undefined2 *)pUVar27 = 0;
        }
        else {
          **(undefined1 **)(this + 0x18) = 0;
          *(undefined8 *)(this + 0x10) = 0;
          if (((byte)this[8] & 1) != 0) {
            operator_delete(*(void **)(this + 0x18));
            *(undefined8 *)(this + 8) = 0;
          }
        }
        *(char **)(this + 0x18) = local_180;
        *(undefined1 **)(this + 0x10) = puStack_188;
        *(undefined1 **)pUVar27 = local_190;
        UVar5 = this[8];
        uVar18 = *(ulong *)(this + 0x10);
        pUVar34 = *(Uri **)(this + 0x18);
        uVar37 = (ulong)((byte)UVar5 >> 1);
        if (((byte)UVar5 & 1) == 0) {
          pUVar34 = this + 9;
          uVar18 = uVar37;
        }
        if (uVar18 != 0) {
          do {
            iVar13 = tolower((int)(char)*pUVar34);
            uVar18 = uVar18 - 1;
            *pUVar34 = SUB41(iVar13,0);
            pUVar34 = pUVar34 + 1;
          } while (uVar18 != 0);
          UVar5 = *pUVar27;
          uVar37 = (ulong)((byte)UVar5 >> 1);
        }
        if (((byte)UVar5 & 1) != 0) {
          uVar37 = *(ulong *)(this + 0x10);
        }
        if (uVar37 == 3) {
          pUVar27 = this + 9;
          if (((byte)UVar5 & 1) != 0) {
            pUVar27 = *(Uri **)(this + 0x18);
          }
          iVar13 = memcmp(pUVar27,&DAT_0142aad6,3);
        }
        else {
          if (uVar37 != 5) goto LAB_00ea5974;
          pUVar27 = this + 9;
          if (((byte)UVar5 & 1) != 0) {
            pUVar27 = *(Uri **)(this + 0x18);
          }
          iVar13 = memcmp(pUVar27,"https",5);
        }
        if (iVar13 == 0) {
          this[1] = (Uri)0x1;
        }
      }
LAB_00ea5974:
      puVar24 = (undefined8 *)((long)local_200 + 0x30);
      if ((ulong)(((long)local_1f8 - (long)local_200 >> 3) * -0x5555555555555555) < 3) {
        puVar24 = local_1e8;
      }
      pcVar36 = (char *)*puVar24;
      pcVar3 = (char *)puVar24[1];
      local_310 = 0;
      local_308 = 0;
      local_300 = (char *)0x0;
      uVar37 = (long)pcVar3 - (long)pcVar36;
      if (0xffffffffffffffef < uVar37) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar37 < 0x17) {
        uVar17 = (int)uVar37 << 1;
        uVar18 = (ulong)uVar17;
        local_310 = (ulong)(byte)uVar17;
        pcVar16 = (char *)((ulong)&local_310 | 1);
        if (pcVar36 != pcVar3) goto LAB_00ea59d8;
LAB_00ea5a0c:
        uVar17 = (uint)uVar18;
      }
      else {
        uVar18 = uVar37 + 0x10 & 0xfffffffffffffff0;
        pcVar16 = operator_new(uVar18);
        uVar18 = uVar18 | 1;
        local_310 = uVar18;
        local_308 = uVar37;
        local_300 = pcVar16;
        if (pcVar36 == pcVar3) goto LAB_00ea5a0c;
LAB_00ea59d8:
        uVar17 = (uint)uVar18;
        if ((0x1f < uVar37) && ((pcVar3 <= pcVar16 || (pcVar16 + uVar37 <= pcVar36)))) {
          uVar22 = uVar37 & 0xffffffffffffffe0;
          pcVar20 = pcVar36 + 0x10;
          pcVar35 = pcVar16 + uVar22;
          pcVar36 = pcVar36 + uVar22;
          pcVar16 = pcVar16 + 0x10;
          uVar18 = uVar22;
          do {
            pcVar10 = pcVar20 + -8;
            uVar38 = *(undefined8 *)(pcVar20 + -0x10);
            uVar40 = *(undefined8 *)(pcVar20 + 8);
            uVar39 = *(undefined8 *)pcVar20;
            pcVar20 = pcVar20 + 0x20;
            uVar18 = uVar18 - 0x20;
            *(undefined8 *)(pcVar16 + -8) = *(undefined8 *)pcVar10;
            *(undefined8 *)(pcVar16 + -0x10) = uVar38;
            *(undefined8 *)(pcVar16 + 8) = uVar40;
            *(undefined8 *)pcVar16 = uVar39;
            pcVar16 = pcVar16 + 0x20;
          } while (uVar18 != 0);
          pcVar16 = pcVar35;
          if (uVar22 == uVar37) goto LAB_00ea5a9c;
        }
        do {
          pcVar35 = pcVar36 + 1;
          pcVar20 = pcVar16 + 1;
          *pcVar16 = *pcVar36;
          pcVar16 = pcVar20;
          pcVar36 = pcVar35;
        } while (pcVar3 != pcVar35);
      }
LAB_00ea5a9c:
      *pcVar16 = '\0';
      uVar37 = (ulong)(uVar17 >> 1 & 0x7f);
      pcVar36 = (char *)((ulong)&local_310 | 1);
      if ((uVar17 & 1) != 0) {
        uVar37 = local_308;
        pcVar36 = local_300;
      }
      local_268 = (void *)0x0;
      uStack_260 = 0;
      local_270 = (void *)0x0;
      local_248 = 0;
      local_230 = 0;
      local_218 = '\0';
      local_210 = 0;
      local_158 = 0;
      uStack_160 = 0;
      uStack_150 = uStack_150 & 0xffffffffffffff00;
      uStack_140 = 0;
      local_148 = 0;
      local_138 = local_138 & 0xffffffffffffff00;
      uStack_130 = uStack_130 & 0xffffffffffffff00;
      local_128 = (void *)0x0;
      puStack_188 = (undefined1 *)0x0;
      local_190 = (undefined1 *)0x0;
      uStack_178 = 0;
      local_180 = (char *)0x0;
      uStack_16f = 0;
      uStack_168 = 0;
      uStack_177 = 0;
      lStack_170 = (locale)0x0;
      bVar12 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
               __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                         ((basic_regex<char,std::__ndk1::regex_traits<char>> *)&DAT_0178f628,pcVar36
                          ,pcVar36 + uVar37,&local_190,0x1040);
      std::__ndk1::
      match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
      ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                  *)&local_270,pcVar36,pcVar36 + uVar37,&local_190,0);
      if (local_190 != (undefined1 *)0x0) {
        puStack_188 = local_190;
        operator_delete(local_190);
      }
      if (bVar12) {
        if (local_218 != '\0') {
          local_268 = local_270;
          goto LAB_00ea5b60;
        }
        if (((DAT_0178f6b0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0178f6b0), iVar13 != 0))
        {
          FUN_00ea7308(&DAT_0178f670,
                       "(?:([^@:]*)(?::([^@]*))?@)?(\\[[^\\]]*\\]|[^\\[:]*)(?::(\\d*))?",0);
          __cxa_atexit(std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::~basic_regex,
                       &DAT_0178f670,&PTR_LOOP_016979c0);
          __cxa_guard_release(&DAT_0178f6b0);
        }
        puVar24 = (undefined8 *)((long)local_270 + 0x18);
        if ((ulong)(((long)local_268 - (long)local_270 >> 3) * -0x5555555555555555) < 2) {
          puVar24 = local_258;
        }
        puVar19 = (undefined1 *)*puVar24;
        puVar30 = (undefined1 *)puVar24[1];
        local_2d8 = (void *)0x0;
        local_2d0 = (char *)0x0;
        local_2e0 = (void *)0x0;
        local_2b8 = 0;
        local_2a0 = 0;
        local_288 = '\0';
        local_280 = 0;
        local_158 = 0;
        uStack_160 = 0;
        uStack_150 = uStack_150 & 0xffffffffffffff00;
        uStack_140 = 0;
        local_148 = 0;
        local_138 = local_138 & 0xffffffffffffff00;
        uStack_130 = uStack_130 & 0xffffffffffffff00;
        local_128 = (void *)0x0;
        puStack_188 = (undefined1 *)0x0;
        local_190 = (undefined1 *)0x0;
        uStack_178 = 0;
        local_180 = (char *)0x0;
        uStack_16f = 0;
        uStack_168 = 0;
        uStack_177 = 0;
        lStack_170 = (locale)0x0;
        bVar12 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
                 __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                           ((basic_regex<char,std::__ndk1::regex_traits<char>> *)&DAT_0178f670,
                            puVar19,puVar30,&local_190,0x1040);
        std::__ndk1::
        match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
        ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                  ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                    *)&local_2e0,puVar19,puVar30,&local_190,0);
        if (local_190 != (undefined1 *)0x0) {
          puStack_188 = local_190;
          operator_delete(local_190);
        }
        if (bVar12) {
          if (local_288 != '\0') {
            local_2d8 = local_2e0;
            goto LAB_00ea5d24;
          }
          puVar24 = (undefined8 *)((long)local_2e0 + 0x60);
          if ((ulong)(((long)local_2d8 - (long)local_2e0 >> 3) * -0x5555555555555555) < 5) {
            puVar24 = local_2c8;
          }
          pcVar36 = (char *)*puVar24;
          pcVar3 = (char *)puVar24[1];
          local_190 = (undefined1 *)0x0;
          puStack_188 = (undefined1 *)0x0;
          local_180 = (char *)0x0;
          uVar37 = (long)pcVar3 - (long)pcVar36;
          if (0xffffffffffffffef < uVar37) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar37 < 0x17) {
            uVar17 = (int)uVar37 << 1;
            puVar19 = (undefined1 *)(ulong)uVar17;
            local_190 = (undefined1 *)(ulong)(byte)uVar17;
            pcVar16 = (char *)((ulong)&local_190 | 1);
            if (pcVar36 != pcVar3) goto LAB_00ea675c;
LAB_00ea6808:
            uVar17 = (uint)puVar19;
          }
          else {
            uVar18 = uVar37 + 0x10 & 0xfffffffffffffff0;
            pcVar16 = operator_new(uVar18);
            puVar19 = (undefined1 *)(uVar18 | 1);
            local_190 = puVar19;
            puStack_188 = (undefined1 *)uVar37;
            local_180 = pcVar16;
            if (pcVar36 == pcVar3) goto LAB_00ea6808;
LAB_00ea675c:
            uVar17 = (uint)puVar19;
            if ((0x1f < uVar37) && ((pcVar3 <= pcVar16 || (pcVar16 + uVar37 <= pcVar36)))) {
              uVar22 = uVar37 & 0xffffffffffffffe0;
              pcVar20 = pcVar36 + 0x10;
              pcVar35 = pcVar16 + uVar22;
              pcVar36 = pcVar36 + uVar22;
              pcVar16 = pcVar16 + 0x10;
              uVar18 = uVar22;
              do {
                pcVar10 = pcVar20 + -8;
                uVar38 = *(undefined8 *)(pcVar20 + -0x10);
                uVar40 = *(undefined8 *)(pcVar20 + 8);
                uVar39 = *(undefined8 *)pcVar20;
                pcVar20 = pcVar20 + 0x20;
                uVar18 = uVar18 - 0x20;
                *(undefined8 *)(pcVar16 + -8) = *(undefined8 *)pcVar10;
                *(undefined8 *)(pcVar16 + -0x10) = uVar38;
                *(undefined8 *)(pcVar16 + 8) = uVar40;
                *(undefined8 *)pcVar16 = uVar39;
                pcVar16 = pcVar16 + 0x20;
              } while (uVar18 != 0);
              pcVar16 = pcVar35;
              if (uVar22 == uVar37) goto LAB_00ea6874;
            }
            do {
              pcVar35 = pcVar36 + 1;
              pcVar20 = pcVar16 + 1;
              *pcVar16 = *pcVar36;
              pcVar16 = pcVar20;
              pcVar36 = pcVar35;
            } while (pcVar3 != pcVar35);
          }
LAB_00ea6874:
          *pcVar16 = '\0';
          puVar19 = (undefined1 *)(ulong)(uVar17 >> 1 & 0x7f);
          if ((uVar17 & 1) != 0) {
            puVar19 = puStack_188;
          }
          if (puVar19 != (undefined1 *)0x0) {
            pcVar36 = (char *)((ulong)&local_190 | 1);
            if ((uVar17 & 1) != 0) {
              pcVar36 = local_180;
            }
            iVar13 = atoi(pcVar36);
            *(short *)(this + 0x82) = (short)iVar13;
          }
          this[0x80] = (Uri)0x1;
          puVar24 = (undefined8 *)((long)local_2e0 + 0x18);
          if ((ulong)(((long)local_2d8 - (long)local_2e0 >> 3) * -0x5555555555555555) < 2) {
            puVar24 = local_2c8;
          }
          puVar19 = (undefined1 *)*puVar24;
          puVar30 = (undefined1 *)puVar24[1];
          local_328 = 0;
          uStack_320 = 0;
          local_318 = (undefined1 *)0x0;
          uVar37 = (long)puVar30 - (long)puVar19;
          if (0xffffffffffffffef < uVar37) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar37 < 0x17) {
            local_328 = (ulong)(byte)((int)uVar37 << 1);
            puVar31 = (undefined1 *)((ulong)&local_328 | 1);
          }
          else {
            uVar18 = uVar37 + 0x10 & 0xfffffffffffffff0;
            puVar31 = operator_new(uVar18);
            local_328 = uVar18 | 1;
            uStack_320 = uVar37;
            local_318 = puVar31;
          }
          if (puVar19 != puVar30) {
            if ((0x1f < uVar37) && ((puVar30 <= puVar31 || (puVar31 + uVar37 <= puVar19)))) {
              uVar22 = uVar37 & 0xffffffffffffffe0;
              puVar24 = (undefined8 *)(puVar19 + 0x10);
              puVar15 = puVar31 + uVar22;
              puVar19 = puVar19 + uVar22;
              puVar25 = (undefined8 *)(puVar31 + 0x10);
              uVar18 = uVar22;
              do {
                puVar9 = puVar24 + -1;
                uVar38 = puVar24[-2];
                uVar40 = puVar24[1];
                uVar39 = *puVar24;
                puVar24 = puVar24 + 4;
                uVar18 = uVar18 - 0x20;
                puVar25[-1] = *puVar9;
                puVar25[-2] = uVar38;
                puVar25[1] = uVar40;
                *puVar25 = uVar39;
                puVar25 = puVar25 + 4;
              } while (uVar18 != 0);
              puVar31 = puVar15;
              if (uVar22 == uVar37) goto LAB_00ea69ac;
            }
            do {
              puVar33 = puVar19 + 1;
              puVar15 = puVar31 + 1;
              *puVar31 = *puVar19;
              puVar31 = puVar15;
              puVar19 = puVar33;
            } while (puVar30 != puVar33);
          }
LAB_00ea69ac:
          *puVar31 = 0;
          pUVar27 = this + 0x20;
          if (((byte)*pUVar27 & 1) == 0) {
            *(undefined2 *)pUVar27 = 0;
          }
          else {
            **(undefined1 **)(this + 0x30) = 0;
            *(undefined8 *)(this + 0x28) = 0;
            if (((byte)this[0x20] & 1) != 0) {
              operator_delete(*(void **)(this + 0x30));
              *(undefined8 *)(this + 0x20) = 0;
            }
          }
          *(undefined1 **)(this + 0x30) = local_318;
          *(ulong *)(this + 0x28) = uStack_320;
          *(ulong *)pUVar27 = local_328;
          puVar24 = (undefined8 *)((long)local_2e0 + 0x30);
          if ((ulong)(((long)local_2d8 - (long)local_2e0 >> 3) * -0x5555555555555555) < 3) {
            puVar24 = local_2c8;
          }
          puVar19 = (undefined1 *)*puVar24;
          puVar30 = (undefined1 *)puVar24[1];
          uStack_320 = 0;
          local_318 = (undefined1 *)0x0;
          local_328 = 0;
          uVar37 = (long)puVar30 - (long)puVar19;
          if (0xffffffffffffffef < uVar37) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar37 < 0x17) {
            local_328 = (ulong)(byte)((int)uVar37 << 1);
            puVar31 = (undefined1 *)((ulong)&local_328 | 1);
          }
          else {
            uVar18 = uVar37 + 0x10 & 0xfffffffffffffff0;
            puVar31 = operator_new(uVar18);
            local_328 = uVar18 | 1;
            uStack_320 = uVar37;
            local_318 = puVar31;
          }
          if (puVar19 != puVar30) {
            if ((0x1f < uVar37) && ((puVar30 <= puVar31 || (puVar31 + uVar37 <= puVar19)))) {
              uVar22 = uVar37 & 0xffffffffffffffe0;
              puVar24 = (undefined8 *)(puVar19 + 0x10);
              puVar15 = puVar31 + uVar22;
              puVar19 = puVar19 + uVar22;
              puVar25 = (undefined8 *)(puVar31 + 0x10);
              uVar18 = uVar22;
              do {
                puVar9 = puVar24 + -1;
                uVar38 = puVar24[-2];
                uVar40 = puVar24[1];
                uVar39 = *puVar24;
                puVar24 = puVar24 + 4;
                uVar18 = uVar18 - 0x20;
                puVar25[-1] = *puVar9;
                puVar25[-2] = uVar38;
                puVar25[1] = uVar40;
                *puVar25 = uVar39;
                puVar25 = puVar25 + 4;
              } while (uVar18 != 0);
              puVar31 = puVar15;
              if (uVar22 == uVar37) goto LAB_00ea6af0;
            }
            do {
              puVar33 = puVar19 + 1;
              puVar15 = puVar31 + 1;
              *puVar31 = *puVar19;
              puVar31 = puVar15;
              puVar19 = puVar33;
            } while (puVar30 != puVar33);
          }
LAB_00ea6af0:
          *puVar31 = 0;
          pUVar27 = this + 0x38;
          if (((byte)*pUVar27 & 1) == 0) {
            *(undefined2 *)pUVar27 = 0;
          }
          else {
            **(undefined1 **)(this + 0x48) = 0;
            *(undefined8 *)(this + 0x40) = 0;
            if (((byte)this[0x38] & 1) != 0) {
              operator_delete(*(void **)(this + 0x48));
              *(undefined8 *)(this + 0x38) = 0;
            }
          }
          *(undefined1 **)(this + 0x48) = local_318;
          *(ulong *)(this + 0x40) = uStack_320;
          *(ulong *)pUVar27 = local_328;
          puVar24 = (undefined8 *)((long)local_2e0 + 0x48);
          if ((ulong)(((long)local_2d8 - (long)local_2e0 >> 3) * -0x5555555555555555) < 4) {
            puVar24 = local_2c8;
          }
          puVar19 = (undefined1 *)*puVar24;
          puVar30 = (undefined1 *)puVar24[1];
          uStack_320 = 0;
          local_318 = (undefined1 *)0x0;
          local_328 = 0;
          uVar37 = (long)puVar30 - (long)puVar19;
          if (0xffffffffffffffef < uVar37) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar37 < 0x17) {
            local_328 = (ulong)(byte)((int)uVar37 << 1);
            puVar31 = (undefined1 *)((ulong)&local_328 | 1);
          }
          else {
            uVar18 = uVar37 + 0x10 & 0xfffffffffffffff0;
            puVar31 = operator_new(uVar18);
            local_328 = uVar18 | 1;
            uStack_320 = uVar37;
            local_318 = puVar31;
          }
          if (puVar19 != puVar30) {
            if ((0x1f < uVar37) && ((puVar30 <= puVar31 || (puVar31 + uVar37 <= puVar19)))) {
              uVar22 = uVar37 & 0xffffffffffffffe0;
              puVar24 = (undefined8 *)(puVar19 + 0x10);
              puVar15 = puVar31 + uVar22;
              puVar19 = puVar19 + uVar22;
              puVar25 = (undefined8 *)(puVar31 + 0x10);
              uVar18 = uVar22;
              do {
                puVar9 = puVar24 + -1;
                uVar38 = puVar24[-2];
                uVar40 = puVar24[1];
                uVar39 = *puVar24;
                puVar24 = puVar24 + 4;
                uVar18 = uVar18 - 0x20;
                puVar25[-1] = *puVar9;
                puVar25[-2] = uVar38;
                puVar25[1] = uVar40;
                *puVar25 = uVar39;
                puVar25 = puVar25 + 4;
              } while (uVar18 != 0);
              puVar31 = puVar15;
              if (uVar22 == uVar37) goto LAB_00ea6c34;
            }
            do {
              puVar33 = puVar19 + 1;
              puVar15 = puVar31 + 1;
              *puVar31 = *puVar19;
              puVar31 = puVar15;
              puVar19 = puVar33;
            } while (puVar30 != puVar33);
          }
LAB_00ea6c34:
          *puVar31 = 0;
          pUVar27 = this + 0x50;
          if (((byte)*pUVar27 & 1) == 0) {
            *(undefined2 *)pUVar27 = 0;
          }
          else {
            **(undefined1 **)(this + 0x60) = 0;
            *(undefined8 *)(this + 0x58) = 0;
            if (((byte)this[0x50] & 1) != 0) {
              operator_delete(*(void **)(this + 0x60));
              *(undefined8 *)(this + 0x50) = 0;
            }
          }
          *(undefined1 **)(this + 0x60) = local_318;
          *(ulong *)(this + 0x58) = uStack_320;
          *(ulong *)pUVar27 = local_328;
          puVar24 = (undefined8 *)((long)local_270 + 0x30);
          if ((ulong)(((long)local_268 - (long)local_270 >> 3) * -0x5555555555555555) < 3) {
            puVar24 = local_258;
          }
          puVar19 = (undefined1 *)*puVar24;
          puVar30 = (undefined1 *)puVar24[1];
          uStack_320 = 0;
          local_318 = (undefined1 *)0x0;
          local_328 = 0;
          uVar37 = (long)puVar30 - (long)puVar19;
          if (0xffffffffffffffef < uVar37) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar37 < 0x17) {
            local_328 = (ulong)(byte)((int)uVar37 << 1);
            puVar31 = (undefined1 *)((ulong)&local_328 | 1);
          }
          else {
            uVar18 = uVar37 + 0x10 & 0xfffffffffffffff0;
            puVar31 = operator_new(uVar18);
            local_328 = uVar18 | 1;
            uStack_320 = uVar37;
            local_318 = puVar31;
          }
          if (puVar19 != puVar30) {
            if ((0x1f < uVar37) && ((puVar30 <= puVar31 || (puVar31 + uVar37 <= puVar19)))) {
              uVar22 = uVar37 & 0xffffffffffffffe0;
              puVar24 = (undefined8 *)(puVar19 + 0x10);
              puVar15 = puVar31 + uVar22;
              puVar19 = puVar19 + uVar22;
              puVar25 = (undefined8 *)(puVar31 + 0x10);
              uVar18 = uVar22;
              do {
                puVar9 = puVar24 + -1;
                uVar38 = puVar24[-2];
                uVar40 = puVar24[1];
                uVar39 = *puVar24;
                puVar24 = puVar24 + 4;
                uVar18 = uVar18 - 0x20;
                puVar25[-1] = *puVar9;
                puVar25[-2] = uVar38;
                puVar25[1] = uVar40;
                *puVar25 = uVar39;
                puVar25 = puVar25 + 4;
              } while (uVar18 != 0);
              puVar31 = puVar15;
              if (uVar22 == uVar37) goto LAB_00ea6d78;
            }
            do {
              puVar33 = puVar19 + 1;
              puVar15 = puVar31 + 1;
              *puVar31 = *puVar19;
              puVar31 = puVar15;
              puVar19 = puVar33;
            } while (puVar30 != puVar33);
          }
LAB_00ea6d78:
          *puVar31 = 0;
          pUVar27 = this + 0xb8;
          if (((byte)*pUVar27 & 1) == 0) {
            *(undefined2 *)pUVar27 = 0;
          }
          else {
            **(undefined1 **)(this + 200) = 0;
            *(undefined8 *)(this + 0xc0) = 0;
            if (((byte)this[0xb8] & 1) != 0) {
              operator_delete(*(void **)(this + 200));
              *(undefined8 *)(this + 0xb8) = 0;
            }
          }
          *(undefined1 **)(this + 200) = local_318;
          *(ulong *)(this + 0xc0) = uStack_320;
          *(ulong *)pUVar27 = local_328;
          if (((ulong)local_190 & 1) != 0) {
            operator_delete(local_180);
          }
          if (local_2e0 != (void *)0x0) {
            local_2d8 = local_2e0;
            operator_delete(local_2e0);
          }
          goto LAB_00ea5b90;
        }
LAB_00ea5d24:
        puVar31 = puVar30 + -(long)puVar19;
        puStack_188 = (undefined1 *)0x0;
        local_180 = (undefined1 *)0x0;
        local_190 = (undefined1 *)0x0;
        if ((undefined1 *)0xffffffffffffffef < puVar31) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (puVar31 < (undefined1 *)0x17) {
          puVar15 = (undefined1 *)0x0;
          local_190 = (undefined1 *)(ulong)(byte)((int)puVar31 << 1);
          puVar33 = (undefined1 *)((ulong)&local_190 | 1);
          if (puVar19 != puVar30) goto LAB_00ea5d58;
LAB_00ea66cc:
          *puVar33 = 0;
        }
        else {
          puVar33 = operator_new((ulong)(puVar31 + 0x10) & 0xfffffffffffffff0);
          puVar15 = (undefined1 *)((ulong)(puVar31 + 0x10) & 0xfffffffffffffff0 | 1);
          local_190 = puVar15;
          puStack_188 = puVar31;
          local_180 = puVar33;
          if (puVar19 == puVar30) goto LAB_00ea66cc;
LAB_00ea5d58:
          if ((puVar31 < (undefined1 *)0x20) ||
             ((puVar33 < puVar30 && (puVar19 < puVar33 + (long)puVar31)))) {
LAB_00ea67a4:
            do {
              puVar31 = puVar19 + 1;
              puVar21 = puVar33 + 1;
              *puVar33 = *puVar19;
              puVar33 = puVar21;
              puVar19 = puVar31;
            } while (puVar30 != puVar31);
          }
          else {
            puVar23 = (undefined1 *)((ulong)puVar31 & 0xffffffffffffffe0);
            puVar24 = (undefined8 *)(puVar19 + 0x10);
            puVar21 = puVar33 + (long)puVar23;
            puVar19 = puVar19 + (long)puVar23;
            puVar25 = (undefined8 *)(puVar33 + 0x10);
            puVar33 = puVar23;
            do {
              puVar9 = puVar24 + -1;
              uVar38 = puVar24[-2];
              uVar40 = puVar24[1];
              uVar39 = *puVar24;
              puVar24 = puVar24 + 4;
              puVar33 = puVar33 + -0x20;
              puVar25[-1] = *puVar9;
              puVar25[-2] = uVar38;
              puVar25[1] = uVar40;
              *puVar25 = uVar39;
              puVar25 = puVar25 + 4;
            } while (puVar33 != (undefined1 *)0x0);
            puVar33 = puVar21;
            if (puVar23 != puVar31) goto LAB_00ea67a4;
          }
          *puVar21 = 0;
        }
        if (((ulong)puVar15 & 1) != 0) {
          operator_delete(local_180);
        }
        if (local_2e0 != (void *)0x0) {
          local_2d8 = local_2e0;
          operator_delete(local_2e0);
        }
        uVar26 = 0;
      }
      else {
LAB_00ea5b60:
        this[0x80] = (Uri)0x0;
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xb8) !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_310) {
          uVar37 = local_310 >> 1 & 0x7f;
          pcVar36 = (char *)((ulong)&local_310 | 1);
          if ((local_310 & 1) != 0) {
            uVar37 = local_308;
            pcVar36 = local_300;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0xb8),pcVar36,uVar37);
        }
LAB_00ea5b90:
        puVar24 = (undefined8 *)((long)local_200 + 0x48);
        if ((ulong)(((long)local_1f8 - (long)local_200 >> 3) * -0x5555555555555555) < 4) {
          puVar24 = local_1e8;
        }
        puVar19 = (undefined1 *)*puVar24;
        puVar30 = (undefined1 *)puVar24[1];
        local_190 = (undefined1 *)0x0;
        puStack_188 = (undefined1 *)0x0;
        local_180 = (undefined1 *)0x0;
        uVar37 = (long)puVar30 - (long)puVar19;
        if (0xffffffffffffffef < uVar37) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar37 < 0x17) {
          local_190 = (undefined1 *)(ulong)(byte)((int)uVar37 << 1);
          puVar31 = (undefined1 *)((ulong)&local_190 | 1);
        }
        else {
          uVar18 = uVar37 + 0x10 & 0xfffffffffffffff0;
          puVar31 = operator_new(uVar18);
          local_190 = (undefined1 *)(uVar18 | 1);
          puStack_188 = (undefined1 *)uVar37;
          local_180 = puVar31;
        }
        if (puVar19 != puVar30) {
          if ((0x1f < uVar37) && ((puVar30 <= puVar31 || (puVar31 + uVar37 <= puVar19)))) {
            uVar22 = uVar37 & 0xffffffffffffffe0;
            puVar24 = (undefined8 *)(puVar19 + 0x10);
            puVar15 = puVar31 + uVar22;
            puVar19 = puVar19 + uVar22;
            puVar25 = (undefined8 *)(puVar31 + 0x10);
            uVar18 = uVar22;
            do {
              puVar9 = puVar24 + -1;
              uVar38 = puVar24[-2];
              uVar40 = puVar24[1];
              uVar39 = *puVar24;
              puVar24 = puVar24 + 4;
              uVar18 = uVar18 - 0x20;
              puVar25[-1] = *puVar9;
              puVar25[-2] = uVar38;
              puVar25[1] = uVar40;
              *puVar25 = uVar39;
              puVar25 = puVar25 + 4;
            } while (uVar18 != 0);
            puVar31 = puVar15;
            if (uVar22 == uVar37) goto LAB_00ea5db0;
          }
          do {
            puVar33 = puVar19 + 1;
            puVar15 = puVar31 + 1;
            *puVar31 = *puVar19;
            puVar31 = puVar15;
            puVar19 = puVar33;
          } while (puVar30 != puVar33);
        }
LAB_00ea5db0:
        *puVar31 = 0;
        pUVar27 = this + 0xd0;
        if (((byte)*pUVar27 & 1) == 0) {
          *(undefined2 *)pUVar27 = 0;
        }
        else {
          **(undefined1 **)(this + 0xe0) = 0;
          *(undefined8 *)(this + 0xd8) = 0;
          if (((byte)this[0xd0] & 1) != 0) {
            operator_delete(*(void **)(this + 0xe0));
            *(undefined8 *)(this + 0xd0) = 0;
          }
        }
        *(char **)(this + 0xe0) = local_180;
        *(undefined1 **)(this + 0xd8) = puStack_188;
        *(undefined1 **)pUVar27 = local_190;
        puVar24 = (undefined8 *)((long)local_200 + 0x60);
        if ((ulong)(((long)local_1f8 - (long)local_200 >> 3) * -0x5555555555555555) < 5) {
          puVar24 = local_1e8;
        }
        puVar19 = (undefined1 *)*puVar24;
        puVar30 = (undefined1 *)puVar24[1];
        puStack_188 = (undefined1 *)0x0;
        local_180 = (undefined1 *)0x0;
        local_190 = (undefined1 *)0x0;
        puVar31 = puVar30 + -(long)puVar19;
        if ((undefined1 *)0xffffffffffffffef < puVar31) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (puVar31 < (undefined1 *)0x17) {
          local_190 = (undefined1 *)(ulong)(byte)((int)puVar31 << 1);
          puVar15 = (undefined1 *)((ulong)&local_190 | 1);
        }
        else {
          puVar15 = operator_new((ulong)(puVar31 + 0x10) & 0xfffffffffffffff0);
          local_190 = (undefined1 *)((ulong)(puVar31 + 0x10) & 0xfffffffffffffff0 | 1);
          puStack_188 = puVar31;
          local_180 = puVar15;
        }
        if (puVar19 != puVar30) {
          if (((undefined1 *)0x1f < puVar31) &&
             ((puVar30 <= puVar15 || (puVar15 + (long)puVar31 <= puVar19)))) {
            puVar21 = (undefined1 *)((ulong)puVar31 & 0xffffffffffffffe0);
            puVar24 = (undefined8 *)(puVar19 + 0x10);
            puVar33 = puVar15 + (long)puVar21;
            puVar19 = puVar19 + (long)puVar21;
            puVar25 = (undefined8 *)(puVar15 + 0x10);
            puVar15 = puVar21;
            do {
              puVar9 = puVar24 + -1;
              uVar38 = puVar24[-2];
              uVar40 = puVar24[1];
              uVar39 = *puVar24;
              puVar24 = puVar24 + 4;
              puVar15 = puVar15 + -0x20;
              puVar25[-1] = *puVar9;
              puVar25[-2] = uVar38;
              puVar25[1] = uVar40;
              *puVar25 = uVar39;
              puVar25 = puVar25 + 4;
            } while (puVar15 != (undefined1 *)0x0);
            puVar15 = puVar33;
            if (puVar21 == puVar31) goto LAB_00ea5ef4;
          }
          do {
            puVar33 = puVar19 + 1;
            puVar31 = puVar15 + 1;
            *puVar15 = *puVar19;
            puVar15 = puVar31;
            puVar19 = puVar33;
          } while (puVar30 != puVar33);
        }
LAB_00ea5ef4:
        *puVar15 = 0;
        pUVar34 = this + 0xe8;
        if (((byte)*pUVar34 & 1) == 0) {
          *(undefined2 *)pUVar34 = 0;
        }
        else {
          **(undefined1 **)(this + 0xf8) = 0;
          *(undefined8 *)(this + 0xf0) = 0;
          if (((byte)this[0xe8] & 1) != 0) {
            operator_delete(*(void **)(this + 0xf8));
            *(undefined8 *)(this + 0xe8) = 0;
          }
        }
        *(char **)(this + 0xf8) = local_180;
        *(undefined1 **)(this + 0xf0) = puStack_188;
        *(undefined1 **)pUVar34 = local_190;
        UVar5 = this[0x50];
        pbVar28 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (this + 0x88);
        *this = (Uri)0x1;
        if (((byte)UVar5 & 1) == 0) {
          uVar37 = (ulong)((byte)UVar5 >> 1);
        }
        else {
          uVar37 = *(ulong *)(this + 0x58);
        }
        UVar5 = this[0x20];
        if (((byte)UVar5 & 1) == 0) {
          uVar18 = (ulong)((byte)UVar5 >> 1);
        }
        else {
          uVar18 = *(ulong *)(this + 0x28);
        }
        pUVar29 = this + 0x38;
        if (((byte)*pUVar29 & 1) == 0) {
          uVar22 = (ulong)((byte)*pUVar29 >> 1);
        }
        else {
          uVar22 = *(ulong *)(this + 0x40);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve(pbVar28,uVar37 + uVar18 + uVar22 + 8);
        UVar5 = this[0x20];
        if (((byte)UVar5 & 1) == 0) {
          if ((byte)UVar5 >> 1 != 0) goto LAB_00ea5fdc;
LAB_00ea5fb4:
          if (((byte)*pUVar29 & 1) == 0) {
            if ((byte)*pUVar29 >> 1 != 0) goto LAB_00ea5fdc;
          }
          else if (*(long *)(this + 0x40) != 0) goto LAB_00ea5fdc;
        }
        else {
          if (*(long *)(this + 0x28) == 0) goto LAB_00ea5fb4;
LAB_00ea5fdc:
          uVar37 = *(ulong *)(this + 0x28);
          pUVar4 = *(Uri **)(this + 0x30);
          if (((byte)UVar5 & 1) == 0) {
            pUVar4 = this + 0x21;
            uVar37 = (ulong)((byte)UVar5 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (pbVar28,(char *)pUVar4,uVar37);
          if (((byte)*pUVar29 & 1) == 0) {
            if ((byte)*pUVar29 >> 1 != 0) {
LAB_00ea6008:
              bVar6 = *pbVar28;
              if (((byte)bVar6 & 1) == 0) {
                uVar37 = (ulong)((byte)bVar6 >> 1);
                uVar18 = 0x16;
                if (uVar37 == 0x16) goto LAB_00ea6054;
LAB_00ea6024:
                if (((byte)bVar6 & 1) != 0) goto LAB_00ea6028;
LAB_00ea6078:
                pUVar29 = this + 0x89;
                *pbVar28 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            )((char)uVar37 * '\x02' + '\x02');
              }
              else {
                uVar37 = *(ulong *)(this + 0x90);
                uVar18 = (*(ulong *)(this + 0x88) & 0xfffffffffffffffe) - 1;
                if (uVar37 != uVar18) goto LAB_00ea6024;
LAB_00ea6054:
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                __grow_by(pbVar28,uVar18,1,uVar18,uVar18,0,0);
                if (((byte)*pbVar28 & 1) == 0) goto LAB_00ea6078;
LAB_00ea6028:
                pUVar29 = *(Uri **)(this + 0x98);
                *(ulong *)(this + 0x90) = uVar37 + 1;
              }
              *(undefined2 *)(pUVar29 + uVar37) = 0x3a;
              uVar37 = *(ulong *)(this + 0x40);
              pUVar29 = *(Uri **)(this + 0x48);
              if (((byte)this[0x38] & 1) == 0) {
                pUVar29 = this + 0x39;
                uVar37 = (ulong)((byte)this[0x38] >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        (pbVar28,(char *)pUVar29,uVar37);
            }
          }
          else if (*(long *)(this + 0x40) != 0) goto LAB_00ea6008;
          bVar6 = *pbVar28;
          if (((byte)bVar6 & 1) == 0) {
            uVar37 = (ulong)((byte)bVar6 >> 1);
            uVar18 = 0x16;
            if (uVar37 == 0x16) goto LAB_00ea60f0;
LAB_00ea60cc:
            if (((byte)bVar6 & 1) != 0) goto LAB_00ea60d0;
LAB_00ea6114:
            pUVar29 = this + 0x89;
            *pbVar28 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        )((char)uVar37 * '\x02' + '\x02');
          }
          else {
            uVar37 = *(ulong *)(this + 0x90);
            uVar18 = (*(ulong *)(this + 0x88) & 0xfffffffffffffffe) - 1;
            if (uVar37 != uVar18) goto LAB_00ea60cc;
LAB_00ea60f0:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __grow_by(pbVar28,uVar18,1,uVar18,uVar18,0,0);
            if (((byte)*pbVar28 & 1) == 0) goto LAB_00ea6114;
LAB_00ea60d0:
            pUVar29 = *(Uri **)(this + 0x98);
            *(ulong *)(this + 0x90) = uVar37 + 1;
          }
          *(undefined2 *)(pUVar29 + uVar37) = 0x40;
        }
        uVar37 = *(ulong *)(this + 0x58);
        pUVar29 = *(Uri **)(this + 0x60);
        if (((byte)this[0x50] & 1) == 0) {
          pUVar29 = this + 0x51;
          uVar37 = (ulong)((byte)this[0x50] >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(pbVar28,(char *)pUVar29,uVar37);
        if (*(short *)(this + 0x82) != 0) {
          bVar6 = *pbVar28;
          if (((byte)bVar6 & 1) == 0) {
            uVar37 = (ulong)((byte)bVar6 >> 1);
            uVar18 = 0x16;
          }
          else {
            uVar37 = *(ulong *)(this + 0x90);
            uVar18 = (*(ulong *)(this + 0x88) & 0xfffffffffffffffe) - 1;
          }
          if (uVar37 == uVar18) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            __grow_by(pbVar28,uVar18,1,uVar18,uVar18,0,0);
            bVar6 = *pbVar28;
          }
          if (((byte)bVar6 & 1) == 0) {
            pUVar29 = this + 0x89;
            *pbVar28 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        )((char)uVar37 * '\x02' + '\x02');
          }
          else {
            pUVar29 = *(Uri **)(this + 0x98);
            *(ulong *)(this + 0x90) = uVar37 + 1;
          }
          *(undefined2 *)(pUVar29 + uVar37) = 0x3a;
          uVar7 = *(ushort *)(this + 0x82);
          local_190 = (undefined1 *)0x1698900;
          local_110[0] = 0x1698928;
          puStack_188 = (undefined1 *)0x0;
          local_180 = (char *)0x1698810;
          std::__ndk1::ios_base::init((ios_base *)local_110,&uStack_178);
          local_80 = 0xffffffff;
          local_190 = (undefined1 *)0x16987e8;
          local_110[0] = 0x1698838;
          local_88 = 0;
          uStack_178 = 8;
          uStack_177 = 0x1698a;
          local_180 = (char *)0x1698810;
          std::__ndk1::locale::locale(&lStack_170);
          uStack_140 = 0;
          local_148 = 0;
          uStack_150 = 0;
          local_158 = 0;
          uStack_160 = 0;
          uStack_168 = 0;
          uStack_167 = 0;
          uStack_178 = 0x60;
          uStack_177 = 0x16989;
          uStack_130 = 0;
          local_138 = 0;
          uStack_120 = 0;
          local_128 = (void *)0x0;
          local_118 = 0x18;
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,uVar7);
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
          local_190 = std::__ndk1::
                      basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::vtable + 0x18;
          local_180 = std::__ndk1::
                      basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::vtable + 0x40;
          local_110[0] = 0x1698838;
          uStack_178 = 0x60;
          uStack_177 = 0x16989;
          if ((local_138 & 1) != 0) {
            operator_delete(local_128);
          }
          uStack_178 = 8;
          uStack_177 = 0x1698a;
          std::__ndk1::locale::~locale(&lStack_170);
          std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
          pvVar2 = (void *)((ulong)local_2e0 >> 1 & 0x7f);
          pcVar36 = (char *)((ulong)&local_2e0 | 1);
          if (((ulong)local_2e0 & 1) != 0) {
            pvVar2 = local_2d8;
            pcVar36 = local_2d0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (pbVar28,pcVar36,(ulong)pvVar2);
          if (((ulong)local_2e0 & 1) != 0) {
            operator_delete(local_2d0);
          }
        }
        pbVar28 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (this + 0xa0);
        uVar37 = (ulong)((byte)this[0xb8] >> 1);
        pUVar29 = this + 0xb9;
        if (((byte)this[0xb8] & 1) != 0) {
          uVar37 = *(ulong *)(this + 0xc0);
          pUVar29 = *(Uri **)(this + 200);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(pbVar28,(char *)pUVar29,uVar37);
        if (((byte)*pUVar27 & 1) == 0) {
          if ((byte)*pUVar27 >> 1 != 0) {
LAB_00ea6388:
            bVar6 = *pbVar28;
            if (((byte)bVar6 & 1) == 0) {
              uVar37 = (ulong)((byte)bVar6 >> 1);
              uVar18 = 0x16;
              if (uVar37 == 0x16) goto LAB_00ea63d4;
LAB_00ea63a4:
              if (((byte)bVar6 & 1) != 0) goto LAB_00ea63a8;
LAB_00ea63f8:
              pUVar27 = this + 0xa1;
              *pbVar28 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          )((char)uVar37 * '\x02' + '\x02');
            }
            else {
              uVar37 = *(ulong *)(this + 0xa8);
              uVar18 = (*(ulong *)(this + 0xa0) & 0xfffffffffffffffe) - 1;
              if (uVar37 != uVar18) goto LAB_00ea63a4;
LAB_00ea63d4:
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __grow_by(pbVar28,uVar18,1,uVar18,uVar18,0,0);
              if (((byte)*pbVar28 & 1) == 0) goto LAB_00ea63f8;
LAB_00ea63a8:
              pUVar27 = *(Uri **)(this + 0xb0);
              *(ulong *)(this + 0xa8) = uVar37 + 1;
            }
            *(undefined2 *)(pUVar27 + uVar37) = 0x3f;
            uVar37 = *(ulong *)(this + 0xd8);
            pUVar27 = *(Uri **)(this + 0xe0);
            if (((byte)this[0xd0] & 1) == 0) {
              pUVar27 = this + 0xd1;
              uVar37 = (ulong)((byte)this[0xd0] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (pbVar28,(char *)pUVar27,uVar37);
          }
        }
        else if (*(long *)(this + 0xd8) != 0) goto LAB_00ea6388;
        if (((byte)*pUVar34 & 1) == 0) {
          if ((byte)*pUVar34 >> 1 != 0) {
LAB_00ea6440:
            bVar6 = *pbVar28;
            if (((byte)bVar6 & 1) == 0) {
              uVar37 = (ulong)((byte)bVar6 >> 1);
              uVar18 = 0x16;
              if (uVar37 == 0x16) goto LAB_00ea648c;
LAB_00ea645c:
              if (((byte)bVar6 & 1) != 0) goto LAB_00ea6460;
LAB_00ea64b0:
              pUVar27 = this + 0xa1;
              *pbVar28 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          )((char)uVar37 * '\x02' + '\x02');
            }
            else {
              uVar37 = *(ulong *)(this + 0xa8);
              uVar18 = (*(ulong *)(this + 0xa0) & 0xfffffffffffffffe) - 1;
              if (uVar37 != uVar18) goto LAB_00ea645c;
LAB_00ea648c:
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __grow_by(pbVar28,uVar18,1,uVar18,uVar18,0,0);
              if (((byte)*pbVar28 & 1) == 0) goto LAB_00ea64b0;
LAB_00ea6460:
              pUVar27 = *(Uri **)(this + 0xb0);
              *(ulong *)(this + 0xa8) = uVar37 + 1;
            }
            *(undefined2 *)(pUVar27 + uVar37) = 0x23;
            uVar37 = *(ulong *)(this + 0xf0);
            pUVar27 = *(Uri **)(this + 0xf8);
            if (((byte)this[0xe8] & 1) == 0) {
              pUVar27 = this + 0xe9;
              uVar37 = (ulong)((byte)this[0xe8] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (pbVar28,(char *)pUVar27,uVar37);
          }
        }
        else if (*(long *)(this + 0xf0) != 0) goto LAB_00ea6440;
        UVar5 = this[0x50];
        if (((byte)UVar5 & 1) == 0) {
          if ((byte)UVar5 >> 1 == 0) goto LAB_00ea6534;
LAB_00ea64fc:
          pUVar27 = this + 0x51;
          if (((byte)UVar5 & 1) != 0) {
            pUVar27 = *(Uri **)(this + 0x60);
          }
          if (*pUVar27 != (Uri)0x5b) goto LAB_00ea6534;
          if (((byte)UVar5 & 1) == 0) {
            uVar22 = *(ulong *)(this + 0x58);
            uVar37 = (ulong)((byte)UVar5 >> 1);
            uVar18 = uVar37;
          }
          else {
            uVar22 = *(ulong *)(this + 0x58);
            uVar37 = (ulong)((byte)UVar5 >> 1);
            uVar18 = uVar22;
          }
          if (((byte)UVar5 & 1) != 0) {
            uVar37 = uVar22;
          }
          puStack_188 = (undefined1 *)0x0;
          local_180 = (undefined1 *)0x0;
          local_190 = (undefined1 *)0x0;
          if (uVar37 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pUVar27 = this + 0x51;
          if (((byte)UVar5 & 1) != 0) {
            pUVar27 = *(Uri **)(this + 0x60);
          }
          puVar19 = (undefined1 *)(uVar37 - 1);
          if ((undefined1 *)(uVar18 - 2) <= (undefined1 *)(uVar37 - 1)) {
            puVar19 = (undefined1 *)(uVar18 - 2);
          }
          if ((undefined1 *)0xffffffffffffffef < puVar19) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (puVar19 < (undefined1 *)0x17) {
            puVar30 = (undefined1 *)((ulong)&local_190 | 1);
            local_190 = (undefined1 *)(ulong)(byte)((int)puVar19 << 1);
            if (puVar19 != (undefined1 *)0x0) goto LAB_00ea65d8;
          }
          else {
            puVar30 = operator_new((ulong)(puVar19 + 0x10) & 0xfffffffffffffff0);
            local_190 = (undefined1 *)((ulong)(puVar19 + 0x10) & 0xfffffffffffffff0 | 1);
            puStack_188 = puVar19;
            local_180 = puVar30;
LAB_00ea65d8:
            memcpy(puVar30,pUVar27 + 1,(size_t)puVar19);
          }
          puVar30[(long)puVar19] = 0;
          pUVar27 = this + 0x68;
          if (((byte)*pUVar27 & 1) == 0) {
            *(undefined2 *)pUVar27 = 0;
          }
          else {
            **(undefined1 **)(this + 0x78) = 0;
            *(undefined8 *)(this + 0x70) = 0;
            if (((byte)this[0x68] & 1) != 0) {
              operator_delete(*(void **)(this + 0x78));
              *(undefined8 *)(this + 0x68) = 0;
            }
          }
          *(char **)(this + 0x78) = local_180;
          *(undefined1 **)(this + 0x70) = puStack_188;
          *(undefined1 **)pUVar27 = local_190;
        }
        else {
          if (*(long *)(this + 0x58) != 0) goto LAB_00ea64fc;
LAB_00ea6534:
          uVar37 = (ulong)((byte)UVar5 >> 1);
          pUVar27 = this + 0x51;
          if (((byte)UVar5 & 1) != 0) {
            uVar37 = *(ulong *)(this + 0x58);
            pUVar27 = *(Uri **)(this + 0x60);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x68),(char *)pUVar27,uVar37);
        }
        uVar26 = 1;
      }
      if (local_270 != (void *)0x0) {
        local_268 = local_270;
        operator_delete(local_270);
      }
      if ((local_310 & 1) != 0) {
        operator_delete(local_300);
      }
    }
    else {
      uVar26 = 0;
      local_1f8 = local_200;
    }
  }
  else {
    uVar26 = 0;
  }
  if (local_200 != (void *)0x0) {
    local_1f8 = local_200;
    operator_delete(local_200);
  }
  if (((byte)local_2f8[0] & 1) != 0) {
    operator_delete(local_2e8);
  }
LAB_00ea6674:
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return uVar26;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

