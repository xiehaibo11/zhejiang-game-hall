
/* cocos2d::network::Uri::getQueryParams() */

Uri * __thiscall cocos2d::network::Uri::getQueryParams(Uri *this)

{
  ulong *puVar1;
  undefined1 *puVar2;
  Uri UVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong local_260;
  ulong uStack_258;
  undefined1 *local_250;
  ulong local_248;
  ulong uStack_240;
  undefined1 *local_238;
  Uri *local_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_21c;
  void *local_210;
  void *local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  Uri *local_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  void *local_180;
  void *local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  Uri *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  void *local_e8;
  void *pvStack_e0;
  undefined8 local_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 local_80;
  long local_78;
  undefined1 *puVar12;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  UVar3 = this[0xd0];
  if (((byte)UVar3 & 1) == 0) {
    if ((byte)UVar3 >> 1 == 0) goto LAB_00ea7a28;
  }
  else {
    uStack_100 = (Uri *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
    uStack_198 = (Uri *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
    uStack_228 = (Uri *)CONCAT44(uStack_228._4_4_,(undefined4)uStack_228);
    if (*(long *)(this + 0xd8) == 0) goto LAB_00ea7a28;
  }
  uStack_100 = (Uri *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
  uStack_198 = (Uri *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
  uStack_228 = (Uri *)CONCAT44(uStack_228._4_4_,(undefined4)uStack_228);
  if (*(long *)(this + 0x100) == *(long *)(this + 0x108)) {
    if (((DAT_0178f6f8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0178f6f8), iVar6 != 0)) {
      FUN_00ea7308(&DAT_0178f6b8,"(^|&)([^=&]*)=?([^=&]*)(?=(&|$))",0);
      __cxa_atexit(std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::~basic_regex,
                   &DAT_0178f6b8,&PTR_LOOP_016979c0);
      __cxa_guard_release(&DAT_0178f6f8);
    }
    UVar3 = this[0xd0];
    if (((byte)UVar3 & 1) == 0) {
      local_108 = this + 0xd1;
      uVar9 = (ulong)((byte)UVar3 >> 1);
    }
    else {
      uVar9 = *(ulong *)(this + 0xd8);
      local_108 = *(Uri **)(this + 0xe0);
    }
    uStack_100 = local_108 + uVar9;
    local_f0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_f8 = 0x178f6b8;
    uStack_f4 = 0;
    pvStack_e0 = (void *)0x0;
    local_e8 = (void *)0x0;
    uStack_d0 = 0;
    local_d8 = 0;
    uStack_c7 = 0;
    local_c0 = 0;
    uStack_cf = 0;
    uStack_c8 = 0;
    std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
    __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>();
    uStack_18c = CONCAT44(local_f0,uStack_f4);
    local_1a0 = local_108;
    uStack_190 = local_f8;
    uStack_198 = uStack_100;
    std::__ndk1::
    vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
    ::vector((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
              *)&local_180,(vector *)&local_e8);
    uStack_140 = CONCAT71(uStack_a7,uStack_a8);
    local_148 = local_b0;
    uStack_130 = uStack_98;
    local_138 = local_a0;
    uStack_120 = CONCAT71(uStack_87,uStack_88);
    local_128 = CONCAT71(uStack_8f,local_90);
    uStack_160 = CONCAT71(uStack_c7,uStack_c8);
    local_168 = CONCAT71(uStack_cf,uStack_d0);
    uStack_150 = uStack_b8;
    local_158 = CONCAT71(uStack_bf,local_c0);
    local_118 = local_80;
    if (local_178 != local_180) {
      do {
        puVar14 = (undefined8 *)((long)local_180 + 0x30);
        if ((ulong)(((long)local_178 - (long)local_180 >> 3) * -0x5555555555555555) < 3) {
          puVar14 = &local_168;
        }
        if (*(char *)(puVar14 + 2) != '\0') {
          puVar12 = (undefined1 *)*puVar14;
          puVar2 = (undefined1 *)puVar14[1];
          uVar9 = (long)puVar2 - (long)puVar12;
          if (uVar9 != 0) {
            uStack_240 = 0;
            local_238 = (undefined1 *)0x0;
            local_248 = 0;
            if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uVar9 < 0x17) {
              local_248 = (ulong)(byte)((int)uVar9 << 1);
              puVar8 = (undefined1 *)((ulong)&local_248 | 1);
            }
            else {
              uVar16 = uVar9 + 0x10 & 0xfffffffffffffff0;
              local_238 = operator_new(uVar16);
              local_248 = uVar16 | 1;
              uStack_240 = uVar9;
              puVar8 = local_238;
            }
            if (puVar12 != puVar2) {
              puVar7 = puVar8;
              if ((0x1f < uVar9) && ((puVar2 <= puVar8 || (puVar8 + uVar9 <= puVar12)))) {
                uVar13 = uVar9 & 0xffffffffffffffe0;
                puVar14 = (undefined8 *)(puVar8 + 0x10);
                puVar8 = puVar8 + uVar13;
                puVar15 = (undefined8 *)(puVar12 + 0x10);
                uVar16 = uVar13;
                do {
                  puVar5 = puVar15 + -1;
                  uVar17 = puVar15[-2];
                  uVar19 = puVar15[1];
                  uVar18 = *puVar15;
                  uVar16 = uVar16 - 0x20;
                  puVar15 = puVar15 + 4;
                  puVar14[-1] = *puVar5;
                  puVar14[-2] = uVar17;
                  puVar14[1] = uVar19;
                  *puVar14 = uVar18;
                  puVar14 = puVar14 + 4;
                } while (uVar16 != 0);
                puVar7 = puVar8;
                puVar12 = puVar12 + uVar13;
                if (uVar13 == uVar9) goto LAB_00ea7838;
              }
              do {
                puVar10 = puVar12 + 1;
                puVar8 = puVar7 + 1;
                *puVar7 = *puVar12;
                puVar7 = puVar8;
                puVar12 = puVar10;
              } while (puVar2 != puVar10);
            }
LAB_00ea7838:
            *puVar8 = 0;
            puVar14 = (undefined8 *)((long)local_180 + 0x48);
            if ((ulong)(((long)local_178 - (long)local_180 >> 3) * -0x5555555555555555) < 4) {
              puVar14 = &local_168;
            }
            puVar12 = (undefined1 *)*puVar14;
            puVar2 = (undefined1 *)puVar14[1];
            local_260 = 0;
            uStack_258 = 0;
            local_250 = (undefined1 *)0x0;
            uVar9 = (long)puVar2 - (long)puVar12;
            if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uVar9 < 0x17) {
              local_260 = (ulong)(byte)((int)uVar9 << 1);
              puVar8 = (undefined1 *)((ulong)&local_260 | 1);
              puVar7 = local_250;
            }
            else {
              uVar16 = uVar9 + 0x10 & 0xfffffffffffffff0;
              puVar8 = operator_new(uVar16);
              local_260 = uVar16 | 1;
              uStack_258 = uVar9;
              puVar7 = puVar8;
            }
            if (puVar12 != puVar2) {
              puVar10 = puVar8;
              if ((0x1f < uVar9) && ((puVar2 <= puVar8 || (puVar8 + uVar9 <= puVar12)))) {
                uVar13 = uVar9 & 0xffffffffffffffe0;
                puVar14 = (undefined8 *)(puVar8 + 0x10);
                puVar8 = puVar8 + uVar13;
                puVar15 = (undefined8 *)(puVar12 + 0x10);
                uVar16 = uVar13;
                do {
                  puVar5 = puVar15 + -1;
                  uVar17 = puVar15[-2];
                  uVar19 = puVar15[1];
                  uVar18 = *puVar15;
                  uVar16 = uVar16 - 0x20;
                  puVar15 = puVar15 + 4;
                  puVar14[-1] = *puVar5;
                  puVar14[-2] = uVar17;
                  puVar14[1] = uVar19;
                  *puVar14 = uVar18;
                  puVar14 = puVar14 + 4;
                } while (uVar16 != 0);
                puVar10 = puVar8;
                puVar12 = puVar12 + uVar13;
                if (uVar9 == uVar13) goto LAB_00ea7930;
              }
              do {
                puVar11 = puVar12 + 1;
                puVar8 = puVar10 + 1;
                *puVar10 = *puVar12;
                puVar10 = puVar8;
                puVar12 = puVar11;
              } while (puVar2 != puVar11);
            }
LAB_00ea7930:
            *puVar8 = 0;
            puVar1 = *(ulong **)(this + 0x108);
            if (puVar1 < *(ulong **)(this + 0x110)) {
              puVar1[2] = (ulong)local_238;
              puVar1[1] = uStack_240;
              *puVar1 = local_248;
              uStack_240 = 0;
              local_238 = (undefined1 *)0x0;
              local_250 = (undefined1 *)0x0;
              local_248 = 0;
              puVar1[5] = (ulong)puVar7;
              puVar1[4] = uStack_258;
              puVar1[3] = local_260;
              local_260 = 0;
              uStack_258 = 0;
              *(ulong **)(this + 0x108) = puVar1 + 6;
            }
            else {
              local_250 = puVar7;
              std::__ndk1::
              vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              ::
              __emplace_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                          *)(this + 0x100),(basic_string *)&local_248,(basic_string *)&local_260);
              if ((local_260 & 1) != 0) {
                operator_delete(local_250);
              }
              if ((local_248 & 1) != 0) {
                operator_delete(local_238);
              }
            }
          }
        }
        local_230 = local_1a0;
        uStack_21c = uStack_18c;
        uStack_220 = uStack_190;
        uStack_228 = uStack_198;
        std::__ndk1::
        vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
        ::vector((vector<std::__ndk1::sub_match<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                  *)&local_210,(vector *)&local_180);
        uStack_1f0 = uStack_160;
        local_1f8 = local_168;
        uStack_1e0 = uStack_150;
        uStack_1e8 = local_158;
        uStack_1d0 = uStack_140;
        local_1d8 = local_148;
        local_1a8 = local_118;
        uStack_1c0 = uStack_130;
        local_1c8 = local_138;
        uStack_1b0 = uStack_120;
        uStack_1b8 = local_128;
        std::__ndk1::regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>>::operator++
                  ((regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> *)&local_1a0);
        if (local_210 != (void *)0x0) {
          local_208 = local_210;
          operator_delete(local_210);
        }
      } while (local_178 != local_180);
    }
    if (local_180 != (void *)0x0) {
      operator_delete(local_180);
    }
    if (local_e8 != (void *)0x0) {
      pvStack_e0 = local_e8;
      operator_delete(local_e8);
    }
  }
LAB_00ea7a28:
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this + 0x100;
}

