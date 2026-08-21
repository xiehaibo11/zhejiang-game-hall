
/* cocos2d::network::Uri::getQueryParams() */

Uri * __thiscall cocos2d::network::Uri::getQueryParams(Uri *this)

{
  ulong *puVar1;
  undefined1 *puVar2;
  Uri UVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  void *__dest;
  undefined1 *puVar7;
  void *__dest_00;
  size_t __n;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  void *pvVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
  *local_270;
  ulong local_260;
  ulong uStack_258;
  undefined1 *local_250;
  ulong local_248;
  ulong uStack_240;
  undefined1 *local_238;
  Uri *pUStack_230;
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined8 uStack_21c;
  void *local_210;
  void *local_208;
  void *local_200;
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
  Uri *pUStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  void *local_180;
  void *local_178;
  void *local_170;
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
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  void *local_e8;
  void *pvStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 local_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined8 local_b8;
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
  undefined1 *puVar12;
  
                    /* catch() { ... } // from try @ 009f06d8 with catch @ 009f0864 */
                    /* catch() { ... } // from try @ 009f06cc with catch @ 009f0868 */
                    /* catch() { ... } // from try @ 009f0728 with catch @ 009f086c
                       catch() { ... } // from try @ 009f07d4 with catch @ 009f086c */
  lVar4 = tpidr_el0;
                    /* catch() { ... } // from try @ 009f06ac with catch @ 009f0884 */
  lVar8 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 009f06e4 with catch @ 009f0894
                       catch() { ... } // from try @ 009f0760 with catch @ 009f0894 */
  UVar3 = this[0xd0];
  if (((byte)UVar3 & 1) == 0) {
    if ((byte)UVar3 >> 1 == 0) goto LAB_009f0e14;
  }
  else {
    uStack_100 = (Uri *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
    uStack_198 = (Uri *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
    uStack_228 = (Uri *)CONCAT44(uStack_228._4_4_,(undefined4)uStack_228);
    if (*(long *)(this + 0xd8) == 0) goto LAB_009f0e14;
  }
  uStack_100 = (Uri *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
  uStack_198 = (Uri *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
  uStack_228 = (Uri *)CONCAT44(uStack_228._4_4_,(undefined4)uStack_228);
  if (*(long *)(this + 0x100) != *(long *)(this + 0x108)) goto LAB_009f0e14;
                    /* try { // try from 009f0e4c to 00af0e57 has its CatchHandler @ 009f1534 */
  if (((DAT_01d389a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_01d389a8), iVar6 != 0)) {
                    /* try { // try from 009f0e58 to 00af0e63 has its CatchHandler @ 009f1530 */
                    /* try { // try from 009f0e64 to 00af0e87 has its CatchHandler @ 009f159c */
    FUN_00877378(&DAT_01d38968,"(^|&)([^=&]*)=?([^=&]*)(?=(&|$))",0);
    __cxa_atexit(std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::~basic_regex,
                 &DAT_01d38968,&PTR_LOOP_01d1b000);
                    /* try { // try from 009f0e8c to 00af0e8f has its CatchHandler @ 009f1528 */
    __cxa_guard_release(&DAT_01d389a8);
  }
  UVar3 = this[0xd0];
  if (((byte)UVar3 & 1) == 0) {
    local_108 = this + 0xd1;
    uVar9 = (ulong)((byte)UVar3 >> 1);
  }
  else {
                    /* try { // try from 009f08ec to 00af093f has its CatchHandler @ 009f08ec
                       catch() { ... } // from try @ 009f08ec with catch @ 009f08ec
                       catch() { ... } // from try @ 009f0aac with catch @ 009f08ec */
    uVar9 = *(ulong *)(this + 0xd8);
    local_108 = *(Uri **)(this + 0xe0);
  }
  uStack_100 = local_108 + uVar9;
  uStack_f8 = 0x1d38968;
  uStack_f4 = 0;
  uStack_f0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_c7 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  local_cf = 0;
  uStack_d8 = 0;
  pvStack_e0 = (void *)0x0;
  local_e8 = (void *)0x0;
  std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
  __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>();
  pvVar17 = local_e8;
                    /* try { // try from 009f0940 to 00af0957 has its CatchHandler @ 009f0b18 */
  uStack_18c = CONCAT44(uStack_f0,uStack_f4);
  uVar9 = (long)pvStack_e0 - (long)local_e8;
  uStack_190 = uStack_f8;
  pUStack_1a0 = local_108;
                    /* try { // try from 009f0960 to 00af096b has its CatchHandler @ 009f0afc */
  local_178 = (void *)0x0;
  local_170 = (void *)0x0;
  local_180 = (void *)0x0;
  uStack_198 = uStack_100;
  if (uVar9 == 0) {
LAB_009f0dc0:
    uStack_160 = CONCAT71(uStack_c7,uStack_c8);
    local_168 = CONCAT71(local_cf,uStack_d0);
    local_158 = CONCAT71(uStack_bf,uStack_c0);
    uStack_120 = CONCAT71(uStack_87,uStack_88);
    local_128 = CONCAT71(uStack_8f,local_90);
    uStack_140 = CONCAT71(uStack_a7,uStack_a8);
    uStack_150 = local_b8;
    local_118 = local_80;
    uStack_130 = uStack_98;
    local_138 = local_a0;
    local_148 = local_b0;
    __dest = local_178;
                    /* try { // try from 009f0dd4 to 00af0e2b has its CatchHandler @ 009f0dd4
                       catch() { ... } // from try @ 009f0dd4 with catch @ 009f0dd4
                       catch() { ... } // from try @ 009f1520 with catch @ 009f0dd4 */
joined_r0x009f0dec:
    local_180 = __dest;
    if (__dest != (void *)0x0) goto LAB_009f0df8;
  }
  else {
                    /* try { // try from 009f096c to 00af0977 has its CatchHandler @ 009f0af8 */
                    /* try { // try from 009f0978 to 00af09ab has its CatchHandler @ 009f0b28 */
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar9 >> 3) * -0x5555555555555555)) {
                    /* try { // try from 009f0eb8 to 00af1127 has its CatchHandler @ 009f1548 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    __dest = operator_new(uVar9);
    local_170 = (void *)((long)__dest + ((long)uVar9 >> 3) * 8);
    local_178 = __dest;
    if ((long)uVar9 < 1) goto LAB_009f0dc0;
                    /* try { // try from 009f09bc to 00af09db has its CatchHandler @ 009f0b00 */
    local_180 = __dest;
    memcpy(__dest,pvVar17,uVar9);
    lVar10 = (uVar9 / 0x18) * 0x18;
    local_178 = (void *)((long)__dest + lVar10);
                    /* try { // try from 009f09f4 to 00af0a2f has its CatchHandler @ 009f0b28 */
    uStack_150 = local_b8;
    local_158 = CONCAT71(uStack_bf,uStack_c0);
    uStack_160 = CONCAT71(uStack_c7,uStack_c8);
    local_168 = CONCAT71(local_cf,uStack_d0);
    uStack_120 = CONCAT71(uStack_87,uStack_88);
    local_128 = CONCAT71(uStack_8f,local_90);
    uStack_130 = uStack_98;
    local_138 = local_a0;
    local_118 = local_80;
    uStack_140 = CONCAT71(uStack_a7,uStack_a8);
    local_148 = local_b0;
    if (lVar10 != 0) {
      do {
        pvVar17 = local_178;
        local_270 = (vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                     *)(this + 0x100);
                    /* try { // try from 009f0a68 to 00af0aab has its CatchHandler @ 009f0b00 */
        puVar15 = (undefined8 *)((long)__dest + 0x30);
        if ((ulong)(((long)local_178 - (long)__dest >> 3) * -0x5555555555555555) < 3) {
          puVar15 = &local_168;
        }
        if (*(char *)(puVar15 + 2) != '\0') {
          puVar12 = (undefined1 *)*puVar15;
          puVar2 = (undefined1 *)puVar15[1];
          uVar9 = (long)puVar2 - (long)puVar12;
          if (uVar9 != 0) {
            local_248 = 0;
            uStack_240 = 0;
            local_238 = (undefined1 *)0x0;
            if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uVar9 < 0x17) {
                    /* try { // try from 009f0aac to 00af0b7f has its CatchHandler @ 009f08ec */
              local_248 = (ulong)(byte)((int)uVar9 << 1);
              puVar7 = (undefined1 *)((ulong)&local_248 | 1);
            }
            else {
              uVar18 = uVar9 + 0x10 & 0xfffffffffffffff0;
              local_238 = operator_new(uVar18);
              local_248 = uVar18 | 1;
              uStack_240 = uVar9;
              puVar7 = local_238;
            }
            if (puVar12 != puVar2) {
              puVar13 = puVar7;
                    /* catch() { ... } // from try @ 009f096c with catch @ 009f0af8 */
                    /* catch() { ... } // from try @ 009f0960 with catch @ 009f0afc */
                    /* catch() { ... } // from try @ 009f09bc with catch @ 009f0b00
                       catch() { ... } // from try @ 009f0a68 with catch @ 009f0b00 */
              if ((uVar9 < 0x20) || ((puVar7 < puVar2 && (puVar12 < puVar7 + uVar9)))) {
LAB_009f0b4c:
                do {
                  puVar11 = puVar12 + 1;
                  *puVar13 = *puVar12;
                  puVar12 = puVar11;
                  puVar13 = puVar13 + 1;
                } while (puVar2 != puVar11);
              }
              else {
                uVar14 = uVar9 & 0xffffffffffffffe0;
                    /* catch() { ... } // from try @ 009f0940 with catch @ 009f0b18 */
                puVar15 = (undefined8 *)(puVar7 + 0x10);
                puVar16 = (undefined8 *)(puVar12 + 0x10);
                    /* catch() { ... } // from try @ 009f0978 with catch @ 009f0b28
                       catch() { ... } // from try @ 009f09f4 with catch @ 009f0b28 */
                uVar18 = uVar14;
                do {
                  puVar5 = puVar16 + -1;
                  uVar20 = puVar16[-2];
                  uVar22 = puVar16[1];
                  uVar21 = *puVar16;
                  uVar18 = uVar18 - 0x20;
                  puVar16 = puVar16 + 4;
                  puVar15[-1] = *puVar5;
                  puVar15[-2] = uVar20;
                  puVar15[1] = uVar22;
                  *puVar15 = uVar21;
                  puVar15 = puVar15 + 4;
                } while (uVar18 != 0);
                puVar12 = puVar12 + uVar14;
                puVar13 = puVar7 + uVar14;
                if (uVar14 != uVar9) goto LAB_009f0b4c;
              }
              puVar7 = puVar7 + uVar9;
              pvVar17 = local_178;
              __dest = local_180;
            }
                    /* try { // try from 009f0b80 to 00af0bd3 has its CatchHandler @ 009f0b80
                       catch() { ... } // from try @ 009f0b80 with catch @ 009f0b80
                       catch() { ... } // from try @ 009f0cf0 with catch @ 009f0b80 */
            *puVar7 = 0;
            puVar15 = (undefined8 *)((long)__dest + 0x48);
            if ((ulong)(((long)pvVar17 - (long)__dest >> 3) * -0x5555555555555555) < 4) {
              puVar15 = &local_168;
            }
            puVar12 = (undefined1 *)*puVar15;
            puVar2 = (undefined1 *)puVar15[1];
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
              puVar7 = (undefined1 *)((ulong)&local_260 | 1);
              puVar13 = local_250;
            }
            else {
                    /* try { // try from 009f0bd4 to 00af0beb has its CatchHandler @ 009f0d6c */
              uVar18 = uVar9 + 0x10 & 0xfffffffffffffff0;
              puVar7 = operator_new(uVar18);
              local_260 = uVar18 | 1;
              uStack_258 = uVar9;
              puVar13 = puVar7;
            }
            if (puVar12 != puVar2) {
              puVar11 = puVar7;
                    /* try { // try from 009f0c00 to 00af0c0b has its CatchHandler @ 009f0d64 */
                    /* try { // try from 009f0c0c to 00af0cef has its CatchHandler @ 009f0d7c */
              if ((uVar9 < 0x20) || ((puVar7 < puVar2 && (puVar12 < puVar7 + uVar9)))) {
LAB_009f0c4c:
                do {
                  puVar19 = puVar12 + 1;
                  *puVar11 = *puVar12;
                  puVar11 = puVar11 + 1;
                  puVar12 = puVar19;
                } while (puVar2 != puVar19);
              }
              else {
                uVar14 = uVar9 & 0xffffffffffffffe0;
                puVar15 = (undefined8 *)(puVar7 + 0x10);
                puVar16 = (undefined8 *)(puVar12 + 0x10);
                uVar18 = uVar14;
                do {
                  puVar5 = puVar16 + -1;
                  uVar20 = puVar16[-2];
                  uVar22 = puVar16[1];
                  uVar21 = *puVar16;
                  uVar18 = uVar18 - 0x20;
                  puVar16 = puVar16 + 4;
                  puVar15[-1] = *puVar5;
                  puVar15[-2] = uVar20;
                  puVar15[1] = uVar22;
                  *puVar15 = uVar21;
                  puVar15 = puVar15 + 4;
                } while (uVar18 != 0);
                puVar11 = puVar7 + uVar14;
                puVar12 = puVar12 + uVar14;
                if (uVar9 != uVar14) goto LAB_009f0c4c;
              }
              puVar7 = puVar7 + uVar9;
            }
            *puVar7 = 0;
            puVar1 = *(ulong **)(this + 0x108);
            if (puVar1 < *(ulong **)(this + 0x110)) {
              puVar1[2] = (ulong)local_238;
              puVar1[1] = uStack_240;
              *puVar1 = local_248;
              uStack_240 = 0;
              local_238 = (undefined1 *)0x0;
              local_250 = (undefined1 *)0x0;
              local_248 = 0;
              puVar1[5] = (ulong)puVar13;
              puVar1[4] = uStack_258;
              puVar1[3] = local_260;
              local_260 = 0;
              uStack_258 = 0;
              *(long *)(this + 0x108) = *(long *)(this + 0x108) + 0x30;
              __dest = local_180;
            }
            else {
              local_250 = puVar13;
              std::__ndk1::
              vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
              ::
              __emplace_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (local_270,(basic_string *)&local_248,(basic_string *)&local_260);
              if ((local_260 & 1) != 0) {
                operator_delete(local_250);
              }
              __dest = local_180;
              if ((local_248 & 1) != 0) {
                operator_delete(local_238);
                __dest = local_180;
              }
            }
          }
        }
        pvVar17 = local_178;
                    /* try { // try from 009f0cf0 to 00af0dd3 has its CatchHandler @ 009f0b80 */
        uVar9 = (long)local_178 - (long)__dest;
        uStack_21c = uStack_18c;
        uStack_220 = uStack_190;
        pUStack_230 = pUStack_1a0;
        local_210 = (void *)0x0;
        local_208 = (void *)0x0;
        local_200 = (void *)0x0;
        uStack_228 = uStack_198;
        if (uVar9 != 0) {
          if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar9 >> 3) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          __dest_00 = operator_new(uVar9);
          __n = (long)pvVar17 - (long)__dest;
          local_200 = (void *)((long)__dest_00 + ((long)uVar9 >> 3) * 8);
          local_210 = __dest_00;
          local_208 = __dest_00;
          if (0 < (long)__n) {
            memcpy(__dest_00,__dest,__n);
            local_208 = (void *)((long)__dest_00 + (__n / 0x18) * 0x18);
          }
        }
                    /* catch() { ... } // from try @ 009f0c00 with catch @ 009f0d64 */
                    /* catch() { ... } // from try @ 009f0bf4 with catch @ 009f0d68 */
                    /* catch() { ... } // from try @ 009f0bd4 with catch @ 009f0d6c */
        uStack_1f0 = uStack_160;
        local_1f8 = local_168;
        uStack_1e0 = uStack_150;
        uStack_1e8 = local_158;
        uStack_1d0 = uStack_140;
        local_1d8 = local_148;
                    /* catch() { ... } // from try @ 009f0c0c with catch @ 009f0d7c */
        local_1a8 = local_118;
        uStack_1c0 = uStack_130;
        local_1c8 = local_138;
        uStack_1b0 = uStack_120;
        uStack_1b8 = local_128;
        std::__ndk1::regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>>::operator++
                  ((regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> *)&pUStack_1a0)
        ;
        if (local_210 != (void *)0x0) {
          local_208 = local_210;
          operator_delete(local_210);
        }
        __dest = local_180;
      } while (local_178 != local_180);
      goto joined_r0x009f0dec;
    }
LAB_009f0df8:
    local_178 = __dest;
    operator_delete(__dest);
  }
  if (local_e8 != (void *)0x0) {
    pvStack_e0 = local_e8;
    operator_delete(local_e8);
  }
LAB_009f0e14:
  if (*(long *)(lVar4 + 0x28) == lVar8) {
                    /* try { // try from 009f0e2c to 00af0e43 has its CatchHandler @ 009f1538 */
    return this + 0x100;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

