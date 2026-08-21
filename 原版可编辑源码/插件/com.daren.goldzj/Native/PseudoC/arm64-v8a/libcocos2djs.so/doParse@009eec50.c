
/* cocos2d::network::Uri::doParse(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall cocos2d::network::Uri::doParse(Uri *this,basic_string *param_1)

{
  void *pvVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  Uri *pUVar5;
  basic_string bVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  Uri UVar8;
  ushort uVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  void *pvVar16;
  undefined **ppuVar17;
  char *pcVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined **ppuVar24;
  char *pcVar26;
  undefined1 *puVar27;
  undefined **ppuVar28;
  ulong uVar29;
  char *pcVar30;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined **ppuVar34;
  undefined4 uVar35;
  void *pvVar36;
  Uri *pUVar37;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar38;
  ulong uVar39;
  Uri *pUVar40;
  undefined **ppuVar41;
  void *pvVar42;
  undefined **ppuVar43;
  Uri *pUVar44;
  ulong uVar45;
  undefined *puVar46;
  undefined8 uVar47;
  undefined *puVar48;
  undefined8 uVar49;
  undefined *puVar50;
  undefined8 uVar51;
  ulong local_330;
  ulong uStack_328;
  undefined1 *local_320;
  ulong local_318;
  ulong local_310;
  char *local_308;
  ulong local_300;
  ulong uStack_2f8;
  void *local_2f0;
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
  undefined8 local_260;
  undefined8 local_258 [2];
  undefined1 local_248;
  undefined1 local_230;
  char local_218;
  undefined1 local_210;
  void *local_200;
  void *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8 [2];
  undefined1 local_1d8;
  undefined1 local_1c0;
  char local_1a8;
  undefined1 local_1a0;
  undefined **local_190;
  undefined **ppuStack_188;
  undefined **local_180;
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
  undefined **local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  undefined **ppuVar25;
  char *pcVar31;
  
                    /* try { // try from 009eec50 to 00aeec6b has its CatchHandler @ 009eefd0 */
  lVar10 = tpidr_el0;
  lVar20 = *(long *)(lVar10 + 0x28);
  if (((DAT_01d388d0 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_01d388d0), iVar15 != 0)) {
    FUN_00877378(&DAT_01d38890,"([a-zA-Z][a-zA-Z0-9+.-]*):([^?#]*)(?:\\?([^#]*))?(?:#(.*))?",0);
                    /* try { // try from 009f0350 to 00af03a3 has its CatchHandler @ 009f0350
                       catch() { ... } // from try @ 009f0350 with catch @ 009f0350
                       catch() { ... } // from try @ 009f03f0 with catch @ 009f0350 */
    __cxa_atexit(std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::~basic_regex,
                 &DAT_01d38890,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d388d0);
  }
                    /* try { // try from 009eec9c to 00aeecb3 has its CatchHandler @ 009eefcc */
  if (((DAT_01d38918 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_01d38918), iVar15 != 0)) {
    FUN_00877378(&DAT_01d388d8,"//([^/]*)(/.*)?",0);
                    /* try { // try from 009f03a4 to 00af03bb has its CatchHandler @ 009f046c */
    __cxa_atexit(std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::~basic_regex,
                 &DAT_01d388d8,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d38918);
  }
  bVar6 = *param_1;
  uVar39 = *(ulong *)(param_1 + 8);
  uVar45 = (ulong)((byte)bVar6 >> 1);
                    /* try { // try from 009eecb4 to 00aeed83 has its CatchHandler @ 009ee1e4 */
  if (((byte)bVar6 & 1) != 0) {
    uVar45 = uVar39;
  }
  if (uVar45 == 0) {
    uVar35 = 0;
    goto LAB_009efb60;
  }
  local_300 = 0;
  uStack_2f8 = 0;
  local_2f0 = (void *)0x0;
  if (((byte)bVar6 & 1) == 0) {
    local_2f0 = *(void **)(param_1 + 0x10);
    uStack_2f8 = *(ulong *)(param_1 + 8);
    local_300 = *(ulong *)param_1;
  }
  else {
    if (0xffffffffffffffef < uVar39) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar36 = *(void **)(param_1 + 0x10);
    if (uVar39 < 0x17) {
      pvVar42 = (void *)((ulong)&local_300 | 1);
      local_300 = (ulong)(byte)((int)uVar39 << 1);
      if (uVar39 != 0) goto LAB_009eed34;
    }
    else {
      uVar45 = uVar39 + 0x10 & 0xfffffffffffffff0;
      pvVar42 = operator_new(uVar45);
      local_300 = uVar45 | 1;
      uStack_2f8 = uVar39;
      local_2f0 = pvVar42;
LAB_009eed34:
      memcpy(pvVar42,pvVar36,uVar39);
    }
    *(undefined1 *)((long)pvVar42 + uVar39) = 0;
  }
  pvVar42 = local_2f0;
  uVar29 = uStack_2f8;
  bVar7 = local_300._0_1_;
  uVar45 = (ulong)((byte)local_300._0_1_ >> 1);
  pvVar36 = (void *)((ulong)&local_300 | 1);
  uVar39 = uVar45;
  if ((local_300 & 1) != 0) {
    pvVar36 = local_2f0;
    uVar39 = uStack_2f8;
  }
  if (2 < (long)uVar39) {
    pvVar1 = (void *)((long)pvVar36 + uVar39);
    pvVar16 = pvVar36;
    do {
                    /* try { // try from 009eed84 to 00aeed9b has its CatchHandler @ 009eedcc */
      if ((uVar39 - 2 == 0) || (pvVar16 = memchr(pvVar16,0x3a,uVar39 - 2), pvVar16 == (void *)0x0))
      break;
                    /* try { // try from 009eed9c to 00aeeda3 has its CatchHandler @ 009ee1e4 */
                    /* try { // try from 009eeda4 to 00aeedab has its CatchHandler @ 009eefc4 */
      iVar15 = memcmp(pvVar16,&DAT_0188d78f,3);
      if (iVar15 == 0) {
                    /* try { // try from 009eedc4 to 00aeedc7 has its CatchHandler @ 009eedd0 */
                    /* catch() { ... } // from try @ 009eea7c with catch @ 009eedc8
                       try { // try from 009eedc8 to 00aef0d3 has its CatchHandler @ 009ee1e4 */
                    /* catch() { ... } // from try @ 009eea4c with catch @ 009eedcc
                       catch() { ... } // from try @ 009eed84 with catch @ 009eedcc */
                    /* catch() { ... } // from try @ 009ee640 with catch @ 009eedd0
                       catch() { ... } // from try @ 009eedc4 with catch @ 009eedd0 */
        if ((pvVar16 != pvVar1) && ((long)pvVar16 - (long)pvVar36 != -1)) {
          bVar14 = true;
          goto LAB_009eee08;
        }
        break;
      }
                    /* try { // try from 009eedac to 00aeedbb has its CatchHandler @ 009eedec */
      pvVar16 = (void *)((long)pvVar16 + 1);
      uVar39 = (long)pvVar1 - (long)pvVar16;
    } while (2 < (long)uVar39);
  }
                    /* catch() { ... } // from try @ 009ee57c with catch @ 009eede8
                       catch() { ... } // from try @ 009eedbc with catch @ 009eede8 */
                    /* catch() { ... } // from try @ 009eeb94 with catch @ 009eedec
                       catch() { ... } // from try @ 009eedac with catch @ 009eedec */
                    /* catch() { ... } // from try @ 009ee7a0 with catch @ 009eedf0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         &local_300,0,"abc://",6);
  bVar14 = false;
  uVar45 = (ulong)((byte)local_300._0_1_ >> 1);
  pvVar42 = local_2f0;
  uVar29 = uStack_2f8;
  bVar7 = local_300._0_1_;
LAB_009eee08:
  pvVar36 = (void *)((ulong)&local_300 | 1);
  if (((byte)bVar7 & 1) != 0) {
    uVar45 = uVar29;
    pvVar36 = pvVar42;
  }
                    /* catch() { ... } // from try @ 009eebc8 with catch @ 009eee10 */
  local_200 = (void *)0x0;
  local_1f8 = (void *)0x0;
  local_1f0 = 0;
  local_1d8 = 0;
  local_1c0 = 0;
                    /* catch() { ... } // from try @ 009eeb28 with catch @ 009eee30 */
  local_1a8 = '\0';
                    /* catch() { ... } // from try @ 009ee8a8 with catch @ 009eee34 */
  local_1a0 = 0;
  local_158 = 0;
  uStack_160 = 0;
  uStack_150 = uStack_150 & 0xffffffffffffff00;
  uStack_140 = 0;
  local_148 = 0;
  local_138 = local_138 & 0xffffffffffffff00;
  uStack_130 = uStack_130 & 0xffffffffffffff00;
  local_128 = (void *)0x0;
  uStack_16f = 0;
  uStack_168 = 0;
  lStack_170 = (locale)0x0;
  ppuStack_188 = (undefined **)0x0;
  local_190 = (undefined **)0x0;
  uStack_178 = 0;
  uStack_177 = 0;
  local_180 = (undefined **)0x0;
  bVar13 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
           __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                     ((basic_regex<char,std::__ndk1::regex_traits<char>> *)&DAT_01d38890,pvVar36,
                      (long)pvVar36 + uVar45,&local_190,0x1040);
                    /* catch() { ... } // from try @ 009ee89c with catch @ 009eee84 */
  std::__ndk1::
  match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
  ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
            ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
              *)&local_200,pvVar36,(long)pvVar36 + uVar45,&local_190,0);
  if (local_190 != (undefined **)0x0) {
    ppuStack_188 = local_190;
    operator_delete(local_190);
  }
  if (bVar13) {
    if (local_1a8 == '\0') {
      if (bVar14) {
                    /* catch() { ... } // from try @ 009ee764 with catch @ 009eeecc */
                    /* catch() { ... } // from try @ 009ee6b8 with catch @ 009eeed0 */
                    /* catch() { ... } // from try @ 009ee5d0 with catch @ 009eeed8 */
        puVar32 = (undefined8 *)((long)local_200 + 0x18);
        if ((ulong)(((long)local_1f8 - (long)local_200 >> 3) * -0x5555555555555555) < 2) {
          puVar32 = local_1e8;
        }
                    /* catch() { ... } // from try @ 009ee77c with catch @ 009eeee8
                       catch() { ... } // from try @ 009ee884 with catch @ 009eeee8 */
        ppuVar25 = (undefined **)*puVar32;
        ppuVar41 = (undefined **)puVar32[1];
        ppuStack_188 = (undefined **)0x0;
        local_180 = (undefined **)0x0;
        local_190 = (undefined **)0x0;
        ppuVar43 = (undefined **)((long)ppuVar41 - (long)ppuVar25);
        if ((undefined **)0xffffffffffffffef < ppuVar43) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
                    /* catch() { ... } // from try @ 009ee73c with catch @ 009eef00 */
        if (ppuVar43 < (undefined **)0x17) {
          local_190 = (undefined **)(ulong)(byte)((int)ppuVar43 << 1);
          ppuVar17 = (undefined **)((ulong)&local_190 | 1);
        }
        else {
          ppuVar17 = operator_new((ulong)(ppuVar43 + 2) & 0xfffffffffffffff0);
          ppuStack_188 = ppuVar43;
          local_180 = ppuVar17;
          local_190 = (undefined **)((ulong)(ppuVar43 + 2) & 0xfffffffffffffff0 | 1);
        }
        if (ppuVar25 != ppuVar41) {
          ppuVar21 = ppuVar17;
          if ((ppuVar43 < (undefined **)0x20) ||
             ((ppuVar17 < ppuVar41 && (ppuVar25 < (undefined **)((long)ppuVar17 + (long)ppuVar43))))
             ) {
LAB_009eefb8:
            do {
              ppuVar24 = (undefined **)((long)ppuVar25 + 1);
              *(undefined1 *)ppuVar21 = *(undefined1 *)ppuVar25;
              ppuVar21 = (undefined **)((long)ppuVar21 + 1);
              ppuVar25 = ppuVar24;
                    /* catch() { ... } // from try @ 009ee32c with catch @ 009eefc4
                       catch() { ... } // from try @ 009eeda4 with catch @ 009eefc4 */
            } while (ppuVar41 != ppuVar24);
          }
          else {
            ppuVar28 = (undefined **)((ulong)ppuVar43 & 0xffffffffffffffe0);
            ppuVar21 = ppuVar25 + 2;
            ppuVar24 = ppuVar17 + 2;
            ppuVar34 = ppuVar28;
            do {
              ppuVar11 = ppuVar21 + -1;
              puVar46 = ppuVar21[-2];
              puVar50 = ppuVar21[1];
              puVar48 = *ppuVar21;
              ppuVar21 = ppuVar21 + 4;
              ppuVar34 = ppuVar34 + -4;
              ppuVar24[-1] = *ppuVar11;
              ppuVar24[-2] = puVar46;
              ppuVar24[1] = puVar50;
              *ppuVar24 = puVar48;
              ppuVar24 = ppuVar24 + 4;
            } while (ppuVar34 != (undefined **)0x0);
            ppuVar21 = (undefined **)((long)ppuVar17 + (long)ppuVar28);
            ppuVar25 = (undefined **)((long)ppuVar25 + (long)ppuVar28);
            if (ppuVar28 != ppuVar43) goto LAB_009eefb8;
          }
          ppuVar17 = (undefined **)((long)ppuVar17 + (long)ppuVar43);
        }
                    /* catch() { ... } // from try @ 009eec9c with catch @ 009eefcc */
        *(undefined1 *)ppuVar17 = 0;
                    /* catch() { ... } // from try @ 009eec50 with catch @ 009eefd0 */
        pUVar37 = this + 8;
        if (((byte)*pUVar37 & 1) == 0) {
          *(undefined2 *)pUVar37 = 0;
        }
        else {
          **(undefined1 **)(this + 0x18) = 0;
                    /* catch() { ... } // from try @ 009ee260 with catch @ 009eeff0 */
          *(undefined8 *)(this + 0x10) = 0;
          if (((byte)this[8] & 1) != 0) {
            operator_delete(*(void **)(this + 0x18));
            *(undefined8 *)(this + 8) = 0;
          }
        }
                    /* catch() { ... } // from try @ 009ee2a8 with catch @ 009ef004 */
        *(undefined ***)(this + 0x18) = local_180;
        *(undefined ***)(this + 0x10) = ppuStack_188;
        *(undefined ***)pUVar37 = local_190;
        UVar8 = this[8];
        uVar39 = *(ulong *)(this + 0x10);
        pUVar44 = *(Uri **)(this + 0x18);
        uVar45 = (ulong)((byte)UVar8 >> 1);
        if (((byte)UVar8 & 1) == 0) {
          pUVar44 = this + 9;
          uVar39 = uVar45;
        }
        if (uVar39 != 0) {
          do {
            iVar15 = tolower((int)(char)*pUVar44);
            uVar39 = uVar39 - 1;
            *pUVar44 = SUB41(iVar15,0);
            pUVar44 = pUVar44 + 1;
          } while (uVar39 != 0);
          UVar8 = *pUVar37;
          uVar45 = (ulong)((byte)UVar8 >> 1);
                    /* catch() { ... } // from try @ 009eea90 with catch @ 009ef048 */
        }
        if (((byte)UVar8 & 1) != 0) {
          uVar45 = *(ulong *)(this + 0x10);
        }
        if (uVar45 == 3) {
          pUVar37 = this + 9;
          if (((byte)UVar8 & 1) != 0) {
            pUVar37 = *(Uri **)(this + 0x18);
          }
          iVar15 = memcmp(pUVar37,&DAT_0188d799,3);
        }
        else {
          if (uVar45 != 5) goto LAB_009ef0a0;
          pUVar37 = this + 9;
          if (((byte)UVar8 & 1) != 0) {
            pUVar37 = *(Uri **)(this + 0x18);
          }
          iVar15 = memcmp(pUVar37,"https",5);
        }
                    /* try { // try from 009ef6f0 to 00aef6f7 has its CatchHandler @ 009ef7c4 */
        if (iVar15 == 0) {
          this[1] = (Uri)0x1;
        }
      }
LAB_009ef0a0:
      puVar32 = (undefined8 *)((long)local_200 + 0x30);
      if ((ulong)(((long)local_1f8 - (long)local_200 >> 3) * -0x5555555555555555) < 3) {
        puVar32 = local_1e8;
      }
      pcVar2 = (char *)*puVar32;
      pcVar3 = (char *)puVar32[1];
      local_310 = 0;
      local_308 = (char *)0x0;
      local_318 = 0;
      uVar45 = (long)pcVar3 - (long)pcVar2;
                    /* catch() { ... } // from try @ 009ef1d8 with catch @ 009ef0d4
                       catch() { ... } // from try @ 009ef26c with catch @ 009ef0d4
                       catch() { ... } // from try @ 009ef31c with catch @ 009ef0d4
                       catch() { ... } // from try @ 009ef3e8 with catch @ 009ef0d4
                       catch() { ... } // from try @ 009ef474 with catch @ 009ef0d4
                       catch() { ... } // from try @ 009ef514 with catch @ 009ef0d4
                       catch() { ... } // from try @ 009ef564 with catch @ 009ef0d4
                       catch() { ... } // from try @ 009ef71c with catch @ 009ef0d4 */
      if (0xffffffffffffffef < uVar45) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar45 < 0x17) {
        local_318 = (ulong)(byte)((int)uVar45 << 1);
        pcVar18 = (char *)((ulong)&local_318 | 1);
      }
      else {
        uVar39 = uVar45 + 0x10 & 0xfffffffffffffff0;
        pcVar18 = operator_new(uVar39);
        local_318 = uVar39 | 1;
        local_310 = uVar45;
        local_308 = pcVar18;
                    /* try { // try from 009ef114 to 00aef11b has its CatchHandler @ 009ef9f4 */
      }
      if (pcVar2 != pcVar3) {
        pcVar26 = pcVar18;
        pcVar31 = pcVar2;
        if ((uVar45 < 0x20) || ((pcVar18 < pcVar3 && (pcVar2 < pcVar18 + uVar45)))) {
LAB_009ef18c:
          do {
            pcVar30 = pcVar31 + 1;
            *pcVar26 = *pcVar31;
            pcVar26 = pcVar26 + 1;
            pcVar31 = pcVar30;
          } while (pcVar3 != pcVar30);
        }
        else {
          uVar29 = uVar45 & 0xffffffffffffffe0;
          pcVar26 = pcVar2 + 0x10;
          pcVar31 = pcVar18 + 0x10;
          uVar39 = uVar29;
          do {
            pcVar30 = pcVar26 + -8;
            uVar47 = *(undefined8 *)(pcVar26 + -0x10);
            uVar51 = *(undefined8 *)(pcVar26 + 8);
            uVar49 = *(undefined8 *)pcVar26;
            pcVar26 = pcVar26 + 0x20;
            uVar39 = uVar39 - 0x20;
            *(undefined8 *)(pcVar31 + -8) = *(undefined8 *)pcVar30;
            *(undefined8 *)(pcVar31 + -0x10) = uVar47;
            *(undefined8 *)(pcVar31 + 8) = uVar51;
            *(undefined8 *)pcVar31 = uVar49;
            pcVar31 = pcVar31 + 0x20;
          } while (uVar39 != 0);
          pcVar26 = pcVar18 + uVar29;
          pcVar31 = pcVar2 + uVar29;
          if (uVar29 != uVar45) goto LAB_009ef18c;
        }
        pcVar18 = pcVar18 + ((long)pcVar3 - (long)pcVar2);
      }
      *pcVar18 = '\0';
      uVar45 = local_318 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_318 | 1);
      if ((local_318 & 1) != 0) {
        uVar45 = local_310;
        pcVar2 = local_308;
      }
                    /* try { // try from 009ef1d0 to 00aef1d7 has its CatchHandler @ 009ef7c4 */
      local_270 = (void *)0x0;
      local_268 = (void *)0x0;
      local_260 = 0;
                    /* try { // try from 009ef1d8 to 00aef263 has its CatchHandler @ 009ef0d4 */
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
      uStack_16f = 0;
      uStack_168 = 0;
      lStack_170 = (locale)0x0;
      ppuStack_188 = (undefined **)0x0;
      local_190 = (undefined **)0x0;
      uStack_178 = 0;
      uStack_177 = 0;
      local_180 = (undefined **)0x0;
      bVar14 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
               __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                         ((basic_regex<char,std::__ndk1::regex_traits<char>> *)&DAT_01d388d8,pcVar2,
                          pcVar2 + uVar45,&local_190,0x1040);
      std::__ndk1::
      match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
      ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                  *)&local_270,pcVar2,pcVar2 + uVar45,&local_190,0);
      if (local_190 != (undefined **)0x0) {
        ppuStack_188 = local_190;
        operator_delete(local_190);
      }
      if (bVar14) {
        if (local_218 != '\0') {
                    /* try { // try from 009ef264 to 00aef26b has its CatchHandler @ 009ef7b4 */
          local_268 = local_270;
          goto LAB_009ef26c;
        }
                    /* try { // try from 009f03c4 to 00af03cf has its CatchHandler @ 009f0468 */
        if (((DAT_01d38960 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_01d38960), iVar15 != 0))
        {
                    /* try { // try from 009f03d0 to 00af03db has its CatchHandler @ 009f0464 */
                    /* try { // try from 009f03dc to 00af03ef has its CatchHandler @ 009f047c */
          FUN_00877378(&DAT_01d38920,
                       "(?:([^@:]*)(?::([^@]*))?@)?(\\[[^\\]]*\\]|[^\\[:]*)(?::(\\d*))?",0);
                    /* try { // try from 009f03f0 to 00af04d3 has its CatchHandler @ 009f0350 */
          __cxa_atexit(std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::~basic_regex,
                       &DAT_01d38920,&PTR_LOOP_01d1b000);
          __cxa_guard_release(&DAT_01d38960);
        }
        puVar32 = (undefined8 *)((long)local_270 + 0x18);
        if ((ulong)(((long)local_268 - (long)local_270 >> 3) * -0x5555555555555555) < 2) {
          puVar32 = local_258;
        }
        ppuVar25 = (undefined **)*puVar32;
        ppuVar41 = (undefined **)puVar32[1];
        local_2e0 = (void *)0x0;
        local_2d8 = (void *)0x0;
        local_2d0 = (char *)0x0;
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
        uStack_16f = 0;
        uStack_168 = 0;
        lStack_170 = (locale)0x0;
        ppuStack_188 = (undefined **)0x0;
        local_190 = (undefined **)0x0;
        uStack_178 = 0;
        uStack_177 = 0;
        local_180 = (undefined **)0x0;
        bVar14 = std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
                 __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                           ((basic_regex<char,std::__ndk1::regex_traits<char>> *)&DAT_01d38920,
                            ppuVar25,ppuVar41,&local_190,0x1040);
        std::__ndk1::
        match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
        ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                  ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                    *)&local_2e0,ppuVar25,ppuVar41,&local_190,0);
        if (local_190 != (undefined **)0x0) {
          ppuStack_188 = local_190;
          operator_delete(local_190);
        }
        if (bVar14) {
          if (local_288 != '\0') {
            local_2d8 = local_2e0;
            goto LAB_009ef69c;
          }
                    /* catch() { ... } // from try @ 009efa94 with catch @ 009efc6c */
                    /* catch() { ... } // from try @ 009efa88 with catch @ 009efc70 */
                    /* catch() { ... } // from try @ 009efa68 with catch @ 009efc74 */
                    /* catch() { ... } // from try @ 009efaa0 with catch @ 009efc84
                       catch() { ... } // from try @ 009efb0c with catch @ 009efc84
                       catch() { ... } // from try @ 009efb88 with catch @ 009efc84 */
          puVar32 = (undefined8 *)((long)local_2e0 + 0x60);
          if ((ulong)(((long)local_2d8 - (long)local_2e0 >> 3) * -0x5555555555555555) < 5) {
            puVar32 = local_2c8;
          }
          pcVar2 = (char *)*puVar32;
          pcVar3 = (char *)puVar32[1];
          ppuStack_188 = (undefined **)0x0;
          local_180 = (undefined **)0x0;
          local_190 = (undefined **)0x0;
          uVar45 = (long)pcVar3 - (long)pcVar2;
          if (0xffffffffffffffef < uVar45) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar45 < 0x17) {
            local_190 = (undefined **)(ulong)(byte)((int)uVar45 << 1);
            pcVar18 = (char *)((ulong)&local_190 | 1);
          }
          else {
            uVar39 = uVar45 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009efcdc to 00aefd33 has its CatchHandler @ 009efcdc
                       catch() { ... } // from try @ 009efcdc with catch @ 009efcdc
                       catch() { ... } // from try @ 009eff54 with catch @ 009efcdc */
            pcVar18 = operator_new(uVar39);
            ppuStack_188 = (undefined **)uVar45;
            local_180 = (undefined **)pcVar18;
            local_190 = (undefined **)(uVar39 | 1);
          }
          if (pcVar2 != pcVar3) {
            pcVar26 = pcVar18;
            pcVar31 = pcVar2;
            if ((uVar45 < 0x20) || ((pcVar18 < pcVar3 && (pcVar2 < pcVar18 + uVar45)))) {
LAB_009efd60:
              do {
                    /* try { // try from 009efd60 to 00aefd6b has its CatchHandler @ 009efff0 */
                pcVar30 = pcVar31 + 1;
                *pcVar26 = *pcVar31;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar30;
                    /* try { // try from 009efd6c to 00aefd8f has its CatchHandler @ 009f0008 */
              } while (pcVar3 != pcVar30);
            }
            else {
              uVar29 = uVar45 & 0xffffffffffffffe0;
              pcVar26 = pcVar2 + 0x10;
                    /* try { // try from 009efd34 to 00aefd4b has its CatchHandler @ 009efff8 */
              pcVar31 = pcVar18 + 0x10;
              uVar39 = uVar29;
              do {
                pcVar30 = pcVar26 + -8;
                uVar47 = *(undefined8 *)(pcVar26 + -0x10);
                uVar51 = *(undefined8 *)(pcVar26 + 8);
                uVar49 = *(undefined8 *)pcVar26;
                pcVar26 = pcVar26 + 0x20;
                uVar39 = uVar39 - 0x20;
                *(undefined8 *)(pcVar31 + -8) = *(undefined8 *)pcVar30;
                *(undefined8 *)(pcVar31 + -0x10) = uVar47;
                *(undefined8 *)(pcVar31 + 8) = uVar51;
                *(undefined8 *)pcVar31 = uVar49;
                pcVar31 = pcVar31 + 0x20;
                    /* try { // try from 009efd54 to 00aefd5f has its CatchHandler @ 009efff4 */
              } while (uVar39 != 0);
              pcVar26 = pcVar18 + uVar29;
              pcVar31 = pcVar2 + uVar29;
              if (uVar29 != uVar45) goto LAB_009efd60;
            }
            pcVar18 = pcVar18 + ((long)pcVar3 - (long)pcVar2);
          }
          *pcVar18 = '\0';
          uVar45 = (ulong)local_190 >> 1 & 0x7f;
          if (((ulong)local_190 & 1) != 0) {
            uVar45 = (ulong)ppuStack_188;
          }
          if (uVar45 != 0) {
                    /* try { // try from 009efd94 to 00aefd9b has its CatchHandler @ 009effbc */
            pcVar2 = (char *)((ulong)&local_190 | 1);
            if (((ulong)local_190 & 1) != 0) {
              pcVar2 = (char *)local_180;
            }
                    /* try { // try from 009efda8 to 00aefdc3 has its CatchHandler @ 009effe0 */
            iVar15 = atoi(pcVar2);
            *(short *)(this + 0x82) = (short)iVar15;
          }
          this[0x80] = (Uri)0x1;
                    /* try { // try from 009efdd8 to 00aefddf has its CatchHandler @ 009effc8 */
          puVar32 = (undefined8 *)((long)local_2e0 + 0x18);
          if ((ulong)(((long)local_2d8 - (long)local_2e0 >> 3) * -0x5555555555555555) < 2) {
            puVar32 = local_2c8;
          }
          puVar27 = (undefined1 *)*puVar32;
          puVar4 = (undefined1 *)puVar32[1];
          uStack_328 = 0;
          local_320 = (undefined1 *)0x0;
          local_330 = 0;
          uVar45 = (long)puVar4 - (long)puVar27;
                    /* try { // try from 009efdf0 to 00aefdf7 has its CatchHandler @ 009effc4 */
          if (0xffffffffffffffef < uVar45) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009f03d0 with catch @ 009f0464 */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar45 < 0x17) {
                    /* try { // try from 009efdfc to 00aefdff has its CatchHandler @ 009effa4 */
                    /* try { // try from 009efe00 to 00aefe2f has its CatchHandler @ 009effc4 */
            local_330 = (ulong)(byte)((int)uVar45 << 1);
            puVar19 = (undefined1 *)((ulong)&local_330 | 1);
          }
          else {
            uVar39 = uVar45 + 0x10 & 0xfffffffffffffff0;
            puVar19 = operator_new(uVar39);
            local_330 = uVar39 | 1;
            uStack_328 = uVar45;
            local_320 = puVar19;
                    /* try { // try from 009efe30 to 00aefe5b has its CatchHandler @ 009effc0 */
          }
          if (puVar27 != puVar4) {
            puVar22 = puVar19;
            if ((uVar45 < 0x20) || ((puVar19 < puVar4 && (puVar27 < puVar19 + uVar45)))) {
LAB_009efea0:
              do {
                puVar23 = puVar27 + 1;
                *puVar22 = *puVar27;
                puVar22 = puVar22 + 1;
                puVar27 = puVar23;
              } while (puVar4 != puVar23);
            }
            else {
              uVar29 = uVar45 & 0xffffffffffffffe0;
              puVar32 = (undefined8 *)(puVar27 + 0x10);
              puVar33 = (undefined8 *)(puVar19 + 0x10);
              uVar39 = uVar29;
              do {
                puVar12 = puVar32 + -1;
                    /* try { // try from 009efe80 to 00aefed7 has its CatchHandler @ 009f0008 */
                uVar47 = puVar32[-2];
                uVar51 = puVar32[1];
                uVar49 = *puVar32;
                puVar32 = puVar32 + 4;
                uVar39 = uVar39 - 0x20;
                puVar33[-1] = *puVar12;
                puVar33[-2] = uVar47;
                puVar33[1] = uVar51;
                *puVar33 = uVar49;
                puVar33 = puVar33 + 4;
              } while (uVar39 != 0);
              puVar22 = puVar19 + uVar29;
              puVar27 = puVar27 + uVar29;
              if (uVar29 != uVar45) goto LAB_009efea0;
            }
            puVar19 = puVar19 + uVar45;
          }
          *puVar19 = 0;
          pUVar37 = this + 0x20;
          if (((byte)*pUVar37 & 1) == 0) {
            *(undefined2 *)pUVar37 = 0;
          }
          else {
            **(undefined1 **)(this + 0x30) = 0;
            *(undefined8 *)(this + 0x28) = 0;
            if (((byte)this[0x20] & 1) != 0) {
              operator_delete(*(void **)(this + 0x30));
              *(undefined8 *)(this + 0x20) = 0;
            }
          }
          *(undefined1 **)(this + 0x30) = local_320;
          *(ulong *)(this + 0x28) = uStack_328;
          *(ulong *)pUVar37 = local_330;
                    /* try { // try from 009eff10 to 00aeff53 has its CatchHandler @ 009effc8 */
          puVar32 = (undefined8 *)((long)local_2e0 + 0x30);
          if ((ulong)(((long)local_2d8 - (long)local_2e0 >> 3) * -0x5555555555555555) < 3) {
            puVar32 = local_2c8;
          }
          puVar27 = (undefined1 *)*puVar32;
          puVar4 = (undefined1 *)puVar32[1];
          local_330 = 0;
          uStack_328 = 0;
          local_320 = (undefined1 *)0x0;
          uVar45 = (long)puVar4 - (long)puVar27;
          if (0xffffffffffffffef < uVar45) {
                    /* catch() { ... } // from try @ 009f03c4 with catch @ 009f0468 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009f03a4 with catch @ 009f046c */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar45 < 0x17) {
            local_330 = (ulong)(byte)((int)uVar45 << 1);
            puVar19 = (undefined1 *)((ulong)&local_330 | 1);
                    /* try { // try from 009eff54 to 00af005f has its CatchHandler @ 009efcdc */
          }
          else {
            uVar39 = uVar45 + 0x10 & 0xfffffffffffffff0;
            puVar19 = operator_new(uVar39);
            local_330 = uVar39 | 1;
            uStack_328 = uVar45;
            local_320 = puVar19;
          }
          if (puVar27 != puVar4) {
            puVar22 = puVar19;
                    /* catch() { ... } // from try @ 009efdfc with catch @ 009effa4 */
            if ((uVar45 < 0x20) || ((puVar19 < puVar4 && (puVar27 < puVar19 + uVar45)))) {
LAB_009effe4:
              do {
                puVar23 = puVar27 + 1;
                *puVar22 = *puVar27;
                puVar22 = puVar22 + 1;
                puVar27 = puVar23;
                    /* catch() { ... } // from try @ 009efd60 with catch @ 009efff0 */
              } while (puVar4 != puVar23);
            }
            else {
              uVar29 = uVar45 & 0xffffffffffffffe0;
              puVar32 = (undefined8 *)(puVar27 + 0x10);
                    /* catch() { ... } // from try @ 009efd94 with catch @ 009effbc */
              puVar33 = (undefined8 *)(puVar19 + 0x10);
                    /* catch() { ... } // from try @ 009efe30 with catch @ 009effc0 */
              uVar39 = uVar29;
              do {
                puVar12 = puVar32 + -1;
                    /* catch() { ... } // from try @ 009efdf0 with catch @ 009effc4
                       catch() { ... } // from try @ 009efe00 with catch @ 009effc4 */
                uVar47 = puVar32[-2];
                uVar51 = puVar32[1];
                uVar49 = *puVar32;
                    /* catch() { ... } // from try @ 009efdd8 with catch @ 009effc8
                       catch() { ... } // from try @ 009eff10 with catch @ 009effc8 */
                puVar32 = puVar32 + 4;
                uVar39 = uVar39 - 0x20;
                puVar33[-1] = *puVar12;
                puVar33[-2] = uVar47;
                puVar33[1] = uVar51;
                *puVar33 = uVar49;
                puVar33 = puVar33 + 4;
              } while (uVar39 != 0);
              puVar22 = puVar19 + uVar29;
              puVar27 = puVar27 + uVar29;
                    /* catch() { ... } // from try @ 009efda8 with catch @ 009effe0 */
              if (uVar29 != uVar45) goto LAB_009effe4;
            }
                    /* catch() { ... } // from try @ 009efd54 with catch @ 009efff4 */
            puVar19 = puVar19 + uVar45;
          }
                    /* catch() { ... } // from try @ 009efd34 with catch @ 009efff8 */
          *puVar19 = 0;
          pUVar37 = this + 0x38;
          if (((byte)*pUVar37 & 1) == 0) {
                    /* catch() { ... } // from try @ 009efd6c with catch @ 009f0008
                       catch() { ... } // from try @ 009efe80 with catch @ 009f0008 */
            *(undefined2 *)pUVar37 = 0;
          }
          else {
            **(undefined1 **)(this + 0x48) = 0;
            *(undefined8 *)(this + 0x40) = 0;
            if (((byte)this[0x38] & 1) != 0) {
              operator_delete(*(void **)(this + 0x48));
              *(undefined8 *)(this + 0x38) = 0;
            }
          }
          *(undefined1 **)(this + 0x48) = local_320;
          *(ulong *)(this + 0x40) = uStack_328;
          *(ulong *)pUVar37 = local_330;
                    /* try { // try from 009f0060 to 00af00b3 has its CatchHandler @ 009f0060
                       catch() { ... } // from try @ 009f0060 with catch @ 009f0060
                       catch() { ... } // from try @ 009f02b4 with catch @ 009f0060 */
          puVar32 = (undefined8 *)((long)local_2e0 + 0x48);
          if ((ulong)(((long)local_2d8 - (long)local_2e0 >> 3) * -0x5555555555555555) < 4) {
            puVar32 = local_2c8;
          }
          puVar27 = (undefined1 *)*puVar32;
          puVar4 = (undefined1 *)puVar32[1];
          local_330 = 0;
          uStack_328 = 0;
          local_320 = (undefined1 *)0x0;
          uVar45 = (long)puVar4 - (long)puVar27;
          if (0xffffffffffffffef < uVar45) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar45 < 0x17) {
            local_330 = (ulong)(byte)((int)uVar45 << 1);
            puVar19 = (undefined1 *)((ulong)&local_330 | 1);
          }
          else {
            uVar39 = uVar45 + 0x10 & 0xfffffffffffffff0;
            puVar19 = operator_new(uVar39);
            local_330 = uVar39 | 1;
            uStack_328 = uVar45;
            local_320 = puVar19;
                    /* try { // try from 009f00b4 to 00af00cb has its CatchHandler @ 009f02e8 */
          }
          if (puVar27 != puVar4) {
            puVar22 = puVar19;
                    /* try { // try from 009f00d4 to 00af00df has its CatchHandler @ 009f02e4 */
                    /* try { // try from 009f00e0 to 00af00eb has its CatchHandler @ 009f02e0 */
                    /* try { // try from 009f00ec to 00af0113 has its CatchHandler @ 009f02f8 */
            if ((uVar45 < 0x20) || ((puVar19 < puVar4 && (puVar27 < puVar19 + uVar45)))) {
LAB_009f0128:
              do {
                    /* try { // try from 009f0128 to 00af013f has its CatchHandler @ 009f02c8 */
                puVar23 = puVar27 + 1;
                *puVar22 = *puVar27;
                puVar22 = puVar22 + 1;
                puVar27 = puVar23;
              } while (puVar4 != puVar23);
            }
            else {
              uVar29 = uVar45 & 0xffffffffffffffe0;
              puVar32 = (undefined8 *)(puVar27 + 0x10);
              puVar33 = (undefined8 *)(puVar19 + 0x10);
              uVar39 = uVar29;
              do {
                puVar12 = puVar32 + -1;
                uVar47 = puVar32[-2];
                uVar51 = puVar32[1];
                uVar49 = *puVar32;
                puVar32 = puVar32 + 4;
                uVar39 = uVar39 - 0x20;
                puVar33[-1] = *puVar12;
                puVar33[-2] = uVar47;
                puVar33[1] = uVar51;
                *puVar33 = uVar49;
                puVar33 = puVar33 + 4;
              } while (uVar39 != 0);
              puVar22 = puVar19 + uVar29;
              puVar27 = puVar27 + uVar29;
              if (uVar29 != uVar45) goto LAB_009f0128;
            }
            puVar19 = puVar19 + uVar45;
          }
          *puVar19 = 0;
          pUVar37 = this + 0x50;
          if (((byte)*pUVar37 & 1) == 0) {
            *(undefined2 *)pUVar37 = 0;
          }
          else {
            **(undefined1 **)(this + 0x60) = 0;
                    /* try { // try from 009f0160 to 00af01ff has its CatchHandler @ 009f02f8 */
            *(undefined8 *)(this + 0x58) = 0;
            if (((byte)this[0x50] & 1) != 0) {
              operator_delete(*(void **)(this + 0x60));
              *(undefined8 *)(this + 0x50) = 0;
            }
          }
          *(undefined1 **)(this + 0x60) = local_320;
          *(ulong *)(this + 0x58) = uStack_328;
          *(ulong *)pUVar37 = local_330;
          puVar32 = (undefined8 *)((long)local_270 + 0x30);
          if ((ulong)(((long)local_268 - (long)local_270 >> 3) * -0x5555555555555555) < 3) {
            puVar32 = local_258;
          }
          puVar27 = (undefined1 *)*puVar32;
          puVar4 = (undefined1 *)puVar32[1];
          local_330 = 0;
          uStack_328 = 0;
          local_320 = (undefined1 *)0x0;
          uVar45 = (long)puVar4 - (long)puVar27;
          if (0xffffffffffffffef < uVar45) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009f03dc with catch @ 009f047c */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar45 < 0x17) {
            local_330 = (ulong)(byte)((int)uVar45 << 1);
            puVar19 = (undefined1 *)((ulong)&local_330 | 1);
          }
          else {
            uVar39 = uVar45 + 0x10 & 0xfffffffffffffff0;
            puVar19 = operator_new(uVar39);
            local_330 = uVar39 | 1;
            uStack_328 = uVar45;
            local_320 = puVar19;
          }
          if (puVar27 != puVar4) {
            puVar22 = puVar19;
            if ((uVar45 < 0x20) || ((puVar19 < puVar4 && (puVar27 < puVar19 + uVar45)))) {
LAB_009f026c:
              do {
                puVar23 = puVar27 + 1;
                    /* try { // try from 009f0270 to 00af02b3 has its CatchHandler @ 009f02c8 */
                *puVar22 = *puVar27;
                puVar22 = puVar22 + 1;
                puVar27 = puVar23;
              } while (puVar4 != puVar23);
            }
            else {
              uVar29 = uVar45 & 0xffffffffffffffe0;
              puVar32 = (undefined8 *)(puVar27 + 0x10);
              puVar33 = (undefined8 *)(puVar19 + 0x10);
              uVar39 = uVar29;
              do {
                puVar12 = puVar32 + -1;
                uVar47 = puVar32[-2];
                uVar51 = puVar32[1];
                uVar49 = *puVar32;
                puVar32 = puVar32 + 4;
                uVar39 = uVar39 - 0x20;
                puVar33[-1] = *puVar12;
                puVar33[-2] = uVar47;
                puVar33[1] = uVar51;
                *puVar33 = uVar49;
                puVar33 = puVar33 + 4;
              } while (uVar39 != 0);
              puVar22 = puVar19 + uVar29;
              puVar27 = puVar27 + uVar29;
              if (uVar29 != uVar45) goto LAB_009f026c;
            }
            puVar19 = puVar19 + uVar45;
          }
          *puVar19 = 0;
          pUVar37 = this + 0xb8;
          if (((byte)*pUVar37 & 1) == 0) {
            *(undefined2 *)pUVar37 = 0;
          }
          else {
            **(undefined1 **)(this + 200) = 0;
            *(undefined8 *)(this + 0xc0) = 0;
            if (((byte)this[0xb8] & 1) != 0) {
              operator_delete(*(void **)(this + 200));
                    /* try { // try from 009f02b4 to 00af034f has its CatchHandler @ 009f0060 */
              *(undefined8 *)(this + 0xb8) = 0;
            }
          }
          *(undefined1 **)(this + 200) = local_320;
          *(ulong *)(this + 0xc0) = uStack_328;
          *(ulong *)pUVar37 = local_330;
                    /* catch() { ... } // from try @ 009f0128 with catch @ 009f02c8
                       catch() { ... } // from try @ 009f0270 with catch @ 009f02c8 */
          if (((ulong)local_190 & 1) != 0) {
            operator_delete(local_180);
          }
          if (local_2e0 != (void *)0x0) {
                    /* catch() { ... } // from try @ 009f00e0 with catch @ 009f02e0 */
            local_2d8 = local_2e0;
                    /* catch() { ... } // from try @ 009f00d4 with catch @ 009f02e4 */
            operator_delete(local_2e0);
                    /* catch() { ... } // from try @ 009f00b4 with catch @ 009f02e8 */
          }
          goto LAB_009ef29c;
        }
LAB_009ef69c:
        ppuVar43 = (undefined **)((long)ppuVar41 - (long)ppuVar25);
        local_190 = (undefined **)0x0;
        ppuStack_188 = (undefined **)0x0;
        local_180 = (undefined **)0x0;
        if ((undefined **)0xffffffffffffffef < ppuVar43) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (ppuVar43 < (undefined **)0x17) {
          local_190 = (undefined **)(ulong)(byte)((int)ppuVar43 << 1);
          ppuVar17 = (undefined **)((ulong)&local_190 | 1);
        }
        else {
          ppuVar17 = operator_new((ulong)(ppuVar43 + 2) & 0xfffffffffffffff0);
          local_190 = (undefined **)((ulong)(ppuVar43 + 2) & 0xfffffffffffffff0 | 1);
          ppuStack_188 = ppuVar43;
          local_180 = ppuVar17;
        }
        if (ppuVar25 != ppuVar41) {
          ppuVar21 = ppuVar17;
          ppuVar24 = ppuVar25;
                    /* try { // try from 009efbc4 to 00aefcdb has its CatchHandler @ 009efa14 */
          if ((ppuVar43 < (undefined **)0x20) ||
             ((ppuVar17 < ppuVar41 && (ppuVar25 < (undefined **)((long)ppuVar17 + (long)ppuVar43))))
             ) {
LAB_009efc20:
            do {
              ppuVar43 = (undefined **)((long)ppuVar24 + 1);
              *(undefined1 *)ppuVar21 = *(undefined1 *)ppuVar24;
              ppuVar21 = (undefined **)((long)ppuVar21 + 1);
              ppuVar24 = ppuVar43;
            } while (ppuVar41 != ppuVar43);
          }
          else {
            ppuVar28 = (undefined **)((ulong)ppuVar43 & 0xffffffffffffffe0);
            ppuVar21 = ppuVar25 + 2;
            ppuVar24 = ppuVar17 + 2;
            ppuVar34 = ppuVar28;
            do {
              ppuVar11 = ppuVar21 + -1;
              puVar46 = ppuVar21[-2];
              puVar50 = ppuVar21[1];
              puVar48 = *ppuVar21;
              ppuVar21 = ppuVar21 + 4;
              ppuVar34 = ppuVar34 + -4;
              ppuVar24[-1] = *ppuVar11;
              ppuVar24[-2] = puVar46;
              ppuVar24[1] = puVar50;
              *ppuVar24 = puVar48;
              ppuVar24 = ppuVar24 + 4;
            } while (ppuVar34 != (undefined **)0x0);
            ppuVar21 = (undefined **)((long)ppuVar17 + (long)ppuVar28);
            ppuVar24 = (undefined **)((long)ppuVar25 + (long)ppuVar28);
            if (ppuVar28 != ppuVar43) goto LAB_009efc20;
          }
          ppuVar17 = (undefined **)((long)ppuVar17 + ((long)ppuVar41 - (long)ppuVar25));
        }
                    /* catch() { ... } // from try @ 009efae4 with catch @ 009efc38 */
        *(undefined1 *)ppuVar17 = 0;
        if (((ulong)local_190 & 1) != 0) {
          operator_delete(local_180);
        }
                    /* catch() { ... } // from try @ 009efadc with catch @ 009efc50 */
        if (local_2e0 != (void *)0x0) {
                    /* catch() { ... } // from try @ 009efac8 with catch @ 009efc54
                       catch() { ... } // from try @ 009efb2c with catch @ 009efc54 */
          local_2d8 = local_2e0;
          operator_delete(local_2e0);
        }
        uVar35 = 0;
      }
      else {
LAB_009ef26c:
                    /* try { // try from 009ef26c to 00aef313 has its CatchHandler @ 009ef0d4 */
        this[0x80] = (Uri)0x0;
        if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xb8) !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_318) {
          uVar45 = local_318 >> 1 & 0x7f;
          pcVar2 = (char *)((ulong)&local_318 | 1);
          if ((local_318 & 1) != 0) {
            uVar45 = local_310;
            pcVar2 = local_308;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0xb8),pcVar2,uVar45);
        }
LAB_009ef29c:
        puVar32 = (undefined8 *)((long)local_200 + 0x48);
        if ((ulong)(((long)local_1f8 - (long)local_200 >> 3) * -0x5555555555555555) < 4) {
          puVar32 = local_1e8;
        }
        puVar27 = (undefined1 *)*puVar32;
        puVar4 = (undefined1 *)puVar32[1];
        ppuStack_188 = (undefined **)0x0;
        local_180 = (undefined **)0x0;
        local_190 = (undefined **)0x0;
        uVar45 = (long)puVar4 - (long)puVar27;
        if (0xffffffffffffffef < uVar45) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar45 < 0x17) {
          local_190 = (undefined **)(ulong)(byte)((int)uVar45 << 1);
          puVar19 = (undefined1 *)((ulong)&local_190 | 1);
        }
        else {
          uVar39 = uVar45 + 0x10 & 0xfffffffffffffff0;
          puVar19 = operator_new(uVar39);
          ppuStack_188 = (undefined **)uVar45;
          local_180 = (undefined **)puVar19;
                    /* try { // try from 009ef314 to 00aef31b has its CatchHandler @ 009ef7a4 */
          local_190 = (undefined **)(uVar39 | 1);
        }
                    /* try { // try from 009ef31c to 00aef36b has its CatchHandler @ 009ef0d4 */
        if (puVar27 != puVar4) {
          puVar22 = puVar19;
          if ((uVar45 < 0x20) || ((puVar19 < puVar4 && (puVar27 < puVar19 + uVar45)))) {
LAB_009ef384:
            do {
              puVar23 = puVar27 + 1;
              *puVar22 = *puVar27;
              puVar22 = puVar22 + 1;
              puVar27 = puVar23;
            } while (puVar4 != puVar23);
          }
          else {
            uVar29 = uVar45 & 0xffffffffffffffe0;
            puVar32 = (undefined8 *)(puVar27 + 0x10);
            puVar33 = (undefined8 *)(puVar19 + 0x10);
            uVar39 = uVar29;
            do {
              puVar12 = puVar32 + -1;
              uVar47 = puVar32[-2];
              uVar51 = puVar32[1];
              uVar49 = *puVar32;
              puVar32 = puVar32 + 4;
                    /* try { // try from 009ef36c to 00aef373 has its CatchHandler @ 009ef810 */
              uVar39 = uVar39 - 0x20;
              puVar33[-1] = *puVar12;
              puVar33[-2] = uVar47;
              puVar33[1] = uVar51;
              *puVar33 = uVar49;
              puVar33 = puVar33 + 4;
            } while (uVar39 != 0);
            puVar22 = puVar19 + uVar29;
            puVar27 = puVar27 + uVar29;
            if (uVar29 != uVar45) goto LAB_009ef384;
          }
          puVar19 = puVar19 + uVar45;
        }
        *puVar19 = 0;
        pUVar37 = this + 0xd0;
        if (((byte)*pUVar37 & 1) == 0) {
          *(undefined2 *)pUVar37 = 0;
        }
        else {
          **(undefined1 **)(this + 0xe0) = 0;
          *(undefined8 *)(this + 0xd8) = 0;
          if (((byte)this[0xd0] & 1) != 0) {
            operator_delete(*(void **)(this + 0xe0));
            *(undefined8 *)(this + 0xd0) = 0;
          }
        }
                    /* try { // try from 009ef3e0 to 00aef3e7 has its CatchHandler @ 009ef78c */
        *(undefined ***)(this + 0xe0) = local_180;
        *(undefined ***)(this + 0xd8) = ppuStack_188;
        *(undefined ***)pUVar37 = local_190;
                    /* try { // try from 009ef3e8 to 00aef46b has its CatchHandler @ 009ef0d4 */
        puVar32 = (undefined8 *)((long)local_200 + 0x60);
        if ((ulong)(((long)local_1f8 - (long)local_200 >> 3) * -0x5555555555555555) < 5) {
          puVar32 = local_1e8;
        }
        ppuVar25 = (undefined **)*puVar32;
        ppuVar41 = (undefined **)puVar32[1];
        local_190 = (undefined **)0x0;
        ppuStack_188 = (undefined **)0x0;
        local_180 = (undefined **)0x0;
        ppuVar43 = (undefined **)((long)ppuVar41 - (long)ppuVar25);
        if ((undefined **)0xffffffffffffffef < ppuVar43) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (ppuVar43 < (undefined **)0x17) {
          local_190 = (undefined **)(ulong)(byte)((int)ppuVar43 << 1);
          ppuVar17 = (undefined **)((ulong)&local_190 | 1);
        }
        else {
          ppuVar17 = operator_new((ulong)(ppuVar43 + 2) & 0xfffffffffffffff0);
          local_190 = (undefined **)((ulong)(ppuVar43 + 2) & 0xfffffffffffffff0 | 1);
          ppuStack_188 = ppuVar43;
          local_180 = ppuVar17;
        }
        if (ppuVar25 != ppuVar41) {
          ppuVar21 = ppuVar17;
                    /* try { // try from 009ef46c to 00aef473 has its CatchHandler @ 009ef774 */
                    /* try { // try from 009ef474 to 00aef50b has its CatchHandler @ 009ef0d4 */
          if ((ppuVar43 < (undefined **)0x20) ||
             ((ppuVar17 < ppuVar41 && (ppuVar25 < (undefined **)((long)ppuVar17 + (long)ppuVar43))))
             ) {
LAB_009ef4c8:
            do {
              ppuVar24 = (undefined **)((long)ppuVar25 + 1);
              *(undefined1 *)ppuVar21 = *(undefined1 *)ppuVar25;
              ppuVar21 = (undefined **)((long)ppuVar21 + 1);
              ppuVar25 = ppuVar24;
            } while (ppuVar41 != ppuVar24);
          }
          else {
            ppuVar28 = (undefined **)((ulong)ppuVar43 & 0xffffffffffffffe0);
            ppuVar21 = ppuVar25 + 2;
            ppuVar24 = ppuVar17 + 2;
            ppuVar34 = ppuVar28;
            do {
              ppuVar11 = ppuVar21 + -1;
              puVar46 = ppuVar21[-2];
              puVar50 = ppuVar21[1];
              puVar48 = *ppuVar21;
              ppuVar21 = ppuVar21 + 4;
              ppuVar34 = ppuVar34 + -4;
              ppuVar24[-1] = *ppuVar11;
              ppuVar24[-2] = puVar46;
              ppuVar24[1] = puVar50;
              *ppuVar24 = puVar48;
              ppuVar24 = ppuVar24 + 4;
            } while (ppuVar34 != (undefined **)0x0);
            ppuVar21 = (undefined **)((long)ppuVar17 + (long)ppuVar28);
            ppuVar25 = (undefined **)((long)ppuVar25 + (long)ppuVar28);
            if (ppuVar28 != ppuVar43) goto LAB_009ef4c8;
          }
          ppuVar17 = (undefined **)((long)ppuVar17 + (long)ppuVar43);
        }
        *(undefined1 *)ppuVar17 = 0;
        pUVar44 = this + 0xe8;
        if (((byte)*pUVar44 & 1) == 0) {
          *(undefined2 *)pUVar44 = 0;
        }
        else {
          **(undefined1 **)(this + 0xf8) = 0;
          *(undefined8 *)(this + 0xf0) = 0;
          if (((byte)this[0xe8] & 1) != 0) {
                    /* try { // try from 009ef50c to 00aef513 has its CatchHandler @ 009ef71c */
            operator_delete(*(void **)(this + 0xf8));
            *(undefined8 *)(this + 0xe8) = 0;
          }
        }
                    /* try { // try from 009ef514 to 00aef54f has its CatchHandler @ 009ef0d4 */
        *(undefined ***)(this + 0xf8) = local_180;
        *(undefined ***)(this + 0xf0) = ppuStack_188;
        *(undefined ***)pUVar44 = local_190;
        UVar8 = this[0x50];
        pbVar38 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (this + 0x88);
        *this = (Uri)0x1;
        if (((byte)UVar8 & 1) == 0) {
          uVar45 = (ulong)((byte)UVar8 >> 1);
        }
        else {
          uVar45 = *(ulong *)(this + 0x58);
        }
        UVar8 = this[0x20];
                    /* try { // try from 009ef550 to 00aef563 has its CatchHandler @ 009ef7d4 */
        if (((byte)UVar8 & 1) == 0) {
          uVar39 = (ulong)((byte)UVar8 >> 1);
        }
        else {
          uVar39 = *(ulong *)(this + 0x28);
        }
                    /* try { // try from 009ef564 to 00aef6ef has its CatchHandler @ 009ef0d4 */
        pUVar40 = this + 0x38;
        if (((byte)*pUVar40 & 1) == 0) {
          uVar29 = (ulong)((byte)*pUVar40 >> 1);
        }
        else {
          uVar29 = *(ulong *)(this + 0x40);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::reserve(pbVar38,uVar45 + uVar39 + uVar29 + 8);
        UVar8 = this[0x20];
        if (((byte)UVar8 & 1) == 0) {
          if ((byte)UVar8 >> 1 != 0) goto LAB_009ef700;
LAB_009ef59c:
          if (((byte)*pUVar40 & 1) == 0) {
            if ((byte)*pUVar40 >> 1 != 0) goto LAB_009ef700;
          }
          else {
                    /* try { // try from 009ef6f8 to 00aef6ff has its CatchHandler @ 009ef7b4 */
            if (*(long *)(this + 0x40) != 0) goto LAB_009ef700;
          }
        }
        else {
          if (*(long *)(this + 0x28) == 0) goto LAB_009ef59c;
LAB_009ef700:
                    /* try { // try from 009ef700 to 00aef707 has its CatchHandler @ 009ef7a4 */
          uVar45 = *(ulong *)(this + 0x28);
          pUVar5 = *(Uri **)(this + 0x30);
                    /* try { // try from 009ef708 to 00aef70f has its CatchHandler @ 009ef78c */
          if (((byte)UVar8 & 1) == 0) {
            pUVar5 = this + 0x21;
            uVar45 = (ulong)((byte)UVar8 >> 1);
          }
                    /* try { // try from 009ef710 to 00aef717 has its CatchHandler @ 009ef774 */
                    /* try { // try from 009ef718 to 00aef71b has its CatchHandler @ 009ef71c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (pbVar38,(char *)pUVar5,uVar45);
                    /* catch() { ... } // from try @ 009ef50c with catch @ 009ef71c
                       catch() { ... } // from try @ 009ef718 with catch @ 009ef71c
                       try { // try from 009ef71c to 00aef9ff has its CatchHandler @ 009ef0d4 */
          if (((byte)*pUVar40 & 1) == 0) {
            if ((byte)*pUVar40 >> 1 != 0) {
LAB_009ef738:
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(pbVar38,':');
              uVar45 = *(ulong *)(this + 0x40);
              pUVar40 = *(Uri **)(this + 0x48);
              if (((byte)this[0x38] & 1) == 0) {
                pUVar40 = this + 0x39;
                uVar45 = (ulong)((byte)this[0x38] >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        (pbVar38,(char *)pUVar40,uVar45);
            }
          }
          else if (*(long *)(this + 0x40) != 0) goto LAB_009ef738;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (pbVar38,'@');
        }
                    /* catch() { ... } // from try @ 009ef46c with catch @ 009ef774
                       catch() { ... } // from try @ 009ef710 with catch @ 009ef774 */
        uVar45 = *(ulong *)(this + 0x58);
        pUVar40 = *(Uri **)(this + 0x60);
        if (((byte)this[0x50] & 1) == 0) {
          pUVar40 = this + 0x51;
          uVar45 = (ulong)((byte)this[0x50] >> 1);
        }
                    /* catch() { ... } // from try @ 009ef3e0 with catch @ 009ef78c
                       catch() { ... } // from try @ 009ef708 with catch @ 009ef78c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(pbVar38,(char *)pUVar40,uVar45);
        if (*(short *)(this + 0x82) != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (pbVar38,':');
                    /* catch() { ... } // from try @ 009ef314 with catch @ 009ef7a4
                       catch() { ... } // from try @ 009ef700 with catch @ 009ef7a4 */
          uVar9 = *(ushort *)(this + 0x82);
                    /* catch() { ... } // from try @ 009ef264 with catch @ 009ef7b4
                       catch() { ... } // from try @ 009ef6f8 with catch @ 009ef7b4 */
                    /* catch() { ... } // from try @ 009ef1d0 with catch @ 009ef7c4
                       catch() { ... } // from try @ 009ef6f0 with catch @ 009ef7c4 */
                    /* catch() { ... } // from try @ 009ef550 with catch @ 009ef7d4 */
          local_110[0] = (undefined **)0x1c670c8;
          local_190 = (undefined **)0x1c670a0;
          ppuStack_188 = (undefined **)0x0;
          local_180 = &PTR__basic_stringstream_01c66fb0;
          std::__ndk1::ios_base::init((ios_base *)local_110,&uStack_178);
          local_88 = 0;
                    /* catch() { ... } // from try @ 009ef36c with catch @ 009ef810 */
          local_80 = 0xffffffff;
          local_190 = &PTR__basic_stringstream_01c66f88;
          local_110[0] = &PTR__basic_stringstream_01c66fd8;
          uStack_178 = 0xa8;
          uStack_177 = 0x1c671;
          local_180 = &PTR__basic_stringstream_01c66fb0;
          std::__ndk1::locale::locale(&lStack_170);
          uStack_140 = 0;
          local_148 = 0;
          uStack_150 = 0;
          local_158 = 0;
          uStack_160 = 0;
          uStack_168 = 0;
          uStack_167 = 0;
          uStack_178 = 0;
          uStack_177 = 0x1c671;
          uStack_120 = 0;
          local_128 = (void *)0x0;
          uStack_130 = 0;
          local_138 = 0;
          local_118 = 0x18;
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,uVar9);
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
          local_190 = &PTR__basic_stringstream_01c66f88;
          local_110[0] = &PTR__basic_stringstream_01c66fd8;
          local_180 = &PTR__basic_stringstream_01c66fb0;
          uStack_178 = 0;
          uStack_177 = 0x1c671;
          if ((local_138 & 1) != 0) {
            operator_delete(local_128);
          }
          uStack_178 = 0xa8;
          uStack_177 = 0x1c671;
          std::__ndk1::locale::~locale(&lStack_170);
          std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
          pvVar36 = (void *)((ulong)local_2e0 >> 1 & 0x7f);
          pcVar2 = (char *)((ulong)&local_2e0 | 1);
          if (((ulong)local_2e0 & 1) != 0) {
            pvVar36 = local_2d8;
            pcVar2 = local_2d0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (pbVar38,pcVar2,(ulong)pvVar36);
          if (((ulong)local_2e0 & 1) != 0) {
            operator_delete(local_2d0);
          }
        }
        pbVar38 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (this + 0xa0);
        uVar45 = (ulong)((byte)this[0xb8] >> 1);
        pUVar40 = this + 0xb9;
        if (((byte)this[0xb8] & 1) != 0) {
          uVar45 = *(ulong *)(this + 0xc0);
          pUVar40 = *(Uri **)(this + 200);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(pbVar38,(char *)pUVar40,uVar45);
        if (((byte)*pUVar37 & 1) == 0) {
          if ((byte)*pUVar37 >> 1 != 0) {
LAB_009ef960:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(pbVar38,'?');
            uVar45 = *(ulong *)(this + 0xd8);
            pUVar37 = *(Uri **)(this + 0xe0);
            if (((byte)this[0xd0] & 1) == 0) {
              pUVar37 = this + 0xd1;
              uVar45 = (ulong)((byte)this[0xd0] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (pbVar38,(char *)pUVar37,uVar45);
          }
        }
        else if (*(long *)(this + 0xd8) != 0) goto LAB_009ef960;
        if (((byte)*pUVar44 & 1) == 0) {
          if ((byte)*pUVar44 >> 1 != 0) {
LAB_009ef9a8:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(pbVar38,'#');
            uVar45 = *(ulong *)(this + 0xf0);
            pUVar37 = *(Uri **)(this + 0xf8);
            if (((byte)this[0xe8] & 1) == 0) {
              pUVar37 = this + 0xe9;
              uVar45 = (ulong)((byte)this[0xe8] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (pbVar38,(char *)pUVar37,uVar45);
          }
        }
        else if (*(long *)(this + 0xf0) != 0) goto LAB_009ef9a8;
        UVar8 = this[0x50];
        if (((byte)UVar8 & 1) == 0) {
          if ((byte)UVar8 >> 1 == 0) goto LAB_009efa20;
LAB_009ef9e8:
          pUVar37 = this + 0x51;
          if (((byte)UVar8 & 1) != 0) {
            pUVar37 = *(Uri **)(this + 0x60);
          }
                    /* catch() { ... } // from try @ 009ef114 with catch @ 009ef9f4 */
          if (*pUVar37 != (Uri)0x5b) goto LAB_009efa20;
                    /* try { // try from 009efa00 to 00aefa03 has its CatchHandler @ 009efa04 */
          if (((byte)UVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 009efa00 with catch @ 009efa04 */
            uVar29 = *(ulong *)(this + 0x58);
                    /* try { // try from 009efa08 to 00aefa0b has its CatchHandler @ 009efa10 */
            uVar45 = (ulong)((byte)UVar8 >> 1);
            uVar39 = uVar45;
                    /* catch() { ... } // from try @ 009efa08 with catch @ 009efa10 */
          }
          else {
            uVar29 = *(ulong *)(this + 0x58);
            uVar45 = (ulong)((byte)UVar8 >> 1);
            uVar39 = uVar29;
          }
          if (((byte)UVar8 & 1) != 0) {
            uVar45 = uVar29;
          }
          local_190 = (undefined **)0x0;
          ppuStack_188 = (undefined **)0x0;
          local_180 = (undefined **)0x0;
          if (uVar45 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
                    /* try { // try from 009efa68 to 00aefa7f has its CatchHandler @ 009efc74 */
          pUVar37 = this + 0x51;
          if (((byte)UVar8 & 1) != 0) {
            pUVar37 = *(Uri **)(this + 0x60);
          }
          ppuVar25 = (undefined **)(uVar45 - 1);
          if ((undefined **)(uVar39 - 2) <= (undefined **)(uVar45 - 1)) {
            ppuVar25 = (undefined **)(uVar39 - 2);
          }
          if ((undefined **)0xffffffffffffffef < ppuVar25) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
                    /* try { // try from 009efa88 to 00aefa93 has its CatchHandler @ 009efc70 */
          if (ppuVar25 < (undefined **)0x17) {
                    /* try { // try from 009efa94 to 00aefa9f has its CatchHandler @ 009efc6c */
            ppuVar41 = (undefined **)((ulong)&local_190 | 1);
            local_190 = (undefined **)(ulong)(byte)((int)ppuVar25 << 1);
            if (ppuVar25 != (undefined **)0x0) goto LAB_009efac4;
          }
          else {
            ppuVar41 = operator_new((ulong)(ppuVar25 + 2) & 0xfffffffffffffff0);
            local_190 = (undefined **)((ulong)(ppuVar25 + 2) & 0xfffffffffffffff0 | 1);
            ppuStack_188 = ppuVar25;
            local_180 = ppuVar41;
LAB_009efac4:
                    /* try { // try from 009efac8 to 00aefacf has its CatchHandler @ 009efc54 */
            memcpy(ppuVar41,pUVar37 + 1,(size_t)ppuVar25);
          }
          *(undefined1 *)((long)ppuVar41 + (long)ppuVar25) = 0;
                    /* try { // try from 009efadc to 00aefae3 has its CatchHandler @ 009efc50 */
          pUVar37 = this + 0x68;
          if (((byte)*pUVar37 & 1) == 0) {
                    /* try { // try from 009efae4 to 00aefaef has its CatchHandler @ 009efc38 */
            *(undefined2 *)pUVar37 = 0;
          }
          else {
            **(undefined1 **)(this + 0x78) = 0;
            *(undefined8 *)(this + 0x70) = 0;
            if (((byte)this[0x68] & 1) != 0) {
              operator_delete(*(void **)(this + 0x78));
              *(undefined8 *)(this + 0x68) = 0;
            }
          }
                    /* try { // try from 009efb0c to 00aefb27 has its CatchHandler @ 009efc84 */
          *(undefined ***)(this + 0x78) = local_180;
          *(undefined ***)(this + 0x70) = ppuStack_188;
          *(undefined ***)pUVar37 = local_190;
        }
        else {
                    /* try { // try from 009efa14 to 00aefa67 has its CatchHandler @ 009efa14
                       catch() { ... } // from try @ 009efa14 with catch @ 009efa14
                       catch() { ... } // from try @ 009efbc4 with catch @ 009efa14 */
          if (*(long *)(this + 0x58) != 0) goto LAB_009ef9e8;
LAB_009efa20:
          uVar45 = (ulong)((byte)UVar8 >> 1);
          pUVar37 = this + 0x51;
          if (((byte)UVar8 & 1) != 0) {
            uVar45 = *(ulong *)(this + 0x58);
            pUVar37 = *(Uri **)(this + 0x60);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x68),(char *)pUVar37,uVar45);
        }
        uVar35 = 1;
      }
      if (local_270 != (void *)0x0) {
        local_268 = local_270;
                    /* try { // try from 009efb2c to 00aefb6f has its CatchHandler @ 009efc54 */
        operator_delete(local_270);
      }
      if ((local_318 & 1) != 0) {
        operator_delete(local_308);
      }
    }
    else {
      uVar35 = 0;
      local_1f8 = local_200;
    }
  }
  else {
    uVar35 = 0;
  }
  if (local_200 != (void *)0x0) {
    local_1f8 = local_200;
    operator_delete(local_200);
  }
  if ((local_300 & 1) != 0) {
    operator_delete(local_2f0);
  }
LAB_009efb60:
  if (*(long *)(lVar10 + 0x28) != lVar20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009efb88 to 00aefbc3 has its CatchHandler @ 009efc84 */
  return uVar35;
}

