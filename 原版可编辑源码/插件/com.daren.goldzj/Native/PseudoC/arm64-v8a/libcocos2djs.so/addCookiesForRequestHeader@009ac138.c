
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::network::HttpURLConnection::addCookiesForRequestHeader() */

void __thiscall
cocos2d::network::HttpURLConnection::addCookiesForRequestHeader(HttpURLConnection *this)

{
  mutex *this_00;
  size_t __n;
  basic_string *pbVar1;
  HttpURLConnection *pHVar2;
  size_t __n_00;
  CookiesInfo *pCVar3;
  basic_string bVar4;
  CookiesInfo CVar5;
  long lVar6;
  ulong *puVar7;
  CookiesInfo *pCVar8;
  basic_string *pbVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  basic_istream *pbVar13;
  undefined **ppuVar14;
  basic_string *pbVar15;
  char *__dest;
  HttpURLConnection *pHVar16;
  char *pcVar17;
  long lVar18;
  basic_string *pbVar19;
  char *pcVar20;
  HttpURLConnection *pHVar21;
  basic_string *pbVar22;
  ulong uVar23;
  ulong *puVar24;
  CookiesInfo *pCVar25;
  long lVar26;
  ulong *puVar27;
  byte *pbVar28;
  ulong __n_01;
  ulong uVar29;
  void *pvVar30;
  ulong local_3e8;
  ulong uStack_3e0;
  char *local_3d8;
  ulong *local_3d0;
  ulong *local_3c8;
  ulong *local_3c0;
  ulong local_3b8;
  ulong uStack_3b0;
  void *local_3a8;
  ulong local_3a0;
  ulong uStack_398;
  char *local_390;
  undefined1 local_388;
  ulong local_380;
  undefined8 local_378;
  void *local_370;
  undefined1 local_368;
  ulong local_360;
  undefined8 uStack_358;
  void *local_350;
  ulong local_348;
  undefined8 local_340;
  void *pvStack_338;
  ulong local_330;
  undefined8 uStack_328;
  void *local_320;
  CookiesInfo *local_310;
  CookiesInfo *local_308;
  CookiesInfo *local_300;
  ulong local_2f8;
  ulong uStack_2f0;
  void *local_2e8;
  basic_string *local_2e0;
  basic_string *local_2d8;
  basic_string *local_2d0;
  basic_string local_2c8 [8];
  ulong local_2c0;
  void *local_2b8;
  undefined **local_2b0;
  ulong uStack_2a8;
  undefined **local_2a0;
  undefined **ppuStack_298;
  locale alStack_290 [8];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  byte local_258;
  undefined8 uStack_250;
  void *local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined **local_230 [17];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined **local_190;
  undefined8 uStack_188;
  undefined **local_180;
  undefined **ppuStack_178;
  locale alStack_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined **local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  
  lVar6 = tpidr_el0;
  lVar18 = *(long *)(lVar6 + 0x28);
  lVar26 = *(long *)this;
  std::__ndk1::mutex::lock((mutex *)(lVar26 + 0x160));
                    /* try { // try from 009ac17c to 00aac193 has its CatchHandler @ 009ac608 */
  std::__ndk1::mutex::unlock((mutex *)(lVar26 + 0x160));
  if ((*(byte *)(lVar26 + 0x148) & 1) == 0) {
    if (*(byte *)(lVar26 + 0x148) >> 1 == 0) goto LAB_009acf9c;
  }
  else if (*(long *)(lVar26 + 0x150) == 0) goto LAB_009acf9c;
                    /* try { // try from 009ac19c to 00aac1a7 has its CatchHandler @ 009ac604 */
  plVar12 = (long *)FileUtils::getInstance();
  lVar26 = *(long *)this;
                    /* try { // try from 009ac1a8 to 00aac1b3 has its CatchHandler @ 009ac600 */
  this_00 = (mutex *)(lVar26 + 0x160);
                    /* try { // try from 009ac1b4 to 00aac1cb has its CatchHandler @ 009ac618 */
  std::__ndk1::mutex::lock(this_00);
  std::__ndk1::mutex::unlock(this_00);
  (**(code **)(*plVar12 + 0x40))(&local_190,plVar12,lVar26 + 0x148);
  pHVar21 = this + 0x40;
  if (((byte)*pHVar21 & 1) == 0) {
    *(undefined2 *)pHVar21 = 0;
  }
  else {
                    /* try { // try from 009ac1f4 to 00aac1fb has its CatchHandler @ 009ac5c8 */
    **(undefined1 **)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
                    /* try { // try from 009ac200 to 00aac217 has its CatchHandler @ 009ac5ac */
    if (((byte)this[0x40] & 1) != 0) {
      operator_delete(*(void **)(this + 0x50));
      *(undefined8 *)(this + 0x40) = 0;
    }
  }
  *(undefined ***)(this + 0x50) = local_180;
                    /* try { // try from 009ac21c to 00aac223 has its CatchHandler @ 009ac5a4 */
  *(undefined8 *)(this + 0x48) = uStack_188;
  *(undefined ***)pHVar21 = local_190;
  plVar12 = (long *)FileUtils::getInstance();
                    /* try { // try from 009ac224 to 00aac243 has its CatchHandler @ 009ac5b0 */
  (**(code **)(*plVar12 + 0x18))(local_2c8,plVar12,pHVar21);
                    /* try { // try from 009ac244 to 00aac253 has its CatchHandler @ 009ac5a0 */
  uVar23 = (ulong)((byte)local_2c8[0] >> 1);
  if (((byte)local_2c8[0] & 1) != 0) {
    uVar23 = local_2c0;
  }
  if (uVar23 != 0) {
    local_2e0 = (basic_string *)0x0;
    local_2d8 = (basic_string *)0x0;
    local_2d0 = (basic_string *)0x0;
                    /* try { // try from 009ac258 to 00aac263 has its CatchHandler @ 009ac598 */
                    /* try { // try from 009ac264 to 00aac273 has its CatchHandler @ 009ac580 */
    local_110[0] = (undefined **)0x1c670c8;
                    /* try { // try from 009ac278 to 00aac283 has its CatchHandler @ 009ac570 */
    local_190 = (undefined **)0x1c670a0;
                    /* try { // try from 009ac288 to 00aac28f has its CatchHandler @ 009ac560 */
    uStack_188 = 0;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::ios_base::init
              ((ios_base *)local_110,
               (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &ppuStack_178);
    local_88 = 0;
                    /* try { // try from 009ac2a4 to 00aac2af has its CatchHandler @ 009ac550 */
                    /* try { // try from 009ac2b4 to 00aac2bb has its CatchHandler @ 009ac540 */
    local_80 = 0xffffffff;
    ppuStack_178 = &PTR__basic_streambuf_01c671a8;
    local_190 = &PTR__basic_stringstream_01c66f88;
    local_110[0] = &PTR__basic_stringstream_01c66fd8;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::locale::locale(alStack_170);
    uStack_140 = 0;
    local_148 = 0;
                    /* try { // try from 009ac2ec to 00aac38f has its CatchHandler @ 009ac618 */
    uStack_150 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    ppuStack_178 = &PTR__basic_stringbuf_01c67100;
    uStack_120 = 0;
    local_128 = (void *)0x0;
    uStack_130 = 0;
    local_138 = 0;
    local_118 = 0x18;
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        &ppuStack_178,local_2c8);
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = (void *)0x0;
    while (pbVar13 = std::__ndk1::
                     getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ((basic_istream *)&local_190,(basic_string *)&local_2f8,'\n'),
          pbVar9 = local_2d8, pvVar30 = local_2e8, uVar23 = uStack_2f0,
          ((byte)pbVar13[*(long *)(*(long *)pbVar13 + -0x18) + 0x20] & 5) == 0) {
      if (local_2d8 == local_2d0) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)&local_2e0,(basic_string *)&local_2f8);
      }
      else {
        *(ulong *)(local_2d8 + 8) = 0;
        *(ulong *)(local_2d8 + 0x10) = 0;
        *(ulong *)local_2d8 = 0;
        if ((local_2f8 & 1) == 0) {
          *(void **)(local_2d8 + 0x10) = local_2e8;
                    /* try { // try from 009ac390 to 00aac50f has its CatchHandler @ 009ac120 */
          *(ulong *)(local_2d8 + 8) = uStack_2f0;
          *(ulong *)local_2d8 = local_2f8;
        }
        else {
          if (0xffffffffffffffef < uStack_2f0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_2f0 < 0x17) {
            pbVar22 = local_2d8 + 1;
            *local_2d8 = SUB41((int)uStack_2f0 << 1,0);
            if (uStack_2f0 != 0) goto LAB_009ac3f0;
          }
          else {
            uVar29 = uStack_2f0 + 0x10 & 0xfffffffffffffff0;
            pbVar22 = operator_new(uVar29);
            *(ulong *)(pbVar9 + 8) = uVar23;
            *(basic_string **)(pbVar9 + 0x10) = pbVar22;
            *(ulong *)pbVar9 = uVar29 | 1;
LAB_009ac3f0:
            memcpy(pbVar22,pvVar30,uVar23);
          }
          pbVar22[uVar23] = (basic_string)0x0;
        }
        local_2d8 = local_2d8 + 0x18;
      }
    }
    if (local_2e0 != local_2d8) {
      local_310 = (CookiesInfo *)0x0;
      local_308 = (CookiesInfo *)0x0;
      local_300 = (CookiesInfo *)0x0;
      pbVar22 = local_2e0;
      do {
        bVar4 = *pbVar22;
        uVar23 = (ulong)(byte)bVar4;
        if (((byte)bVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 009ac258 with catch @ 009ac598 */
          pbVar19 = pbVar22 + 1;
          uVar29 = (ulong)((byte)bVar4 >> 1);
                    /* catch() { ... } // from try @ 009ac244 with catch @ 009ac5a0 */
                    /* catch() { ... } // from try @ 009ac21c with catch @ 009ac5a4 */
          if (uVar29 < 10) goto joined_r0x009ac600;
LAB_009ac5a8:
          pbVar1 = pbVar19 + uVar29;
                    /* catch() { ... } // from try @ 009ac200 with catch @ 009ac5ac */
          pbVar15 = pbVar19;
          do {
                    /* catch() { ... } // from try @ 009ac224 with catch @ 009ac5b0 */
            if ((uVar29 - 9 == 0) ||
               (pbVar15 = memchr(pbVar15,0x23,uVar29 - 9), pbVar15 == (basic_string *)0x0)) break;
                    /* catch() { ... } // from try @ 009ac1f4 with catch @ 009ac5c8
                       catch() { ... } // from try @ 009ac510 with catch @ 009ac5c8 */
            iVar10 = memcmp(pbVar15,"#HttpOnly_",10);
            if (iVar10 == 0) {
              if ((pbVar15 != pbVar1) && ((long)pbVar15 - (long)pbVar19 != -1)) {
                local_2b0 = (undefined **)0x0;
                uStack_2a8 = 0;
                local_2a0 = (undefined **)0x0;
                uVar23 = (ulong)((byte)bVar4 >> 1);
                if (((byte)bVar4 & 1) != 0) {
                  uVar23 = *(ulong *)(pbVar22 + 8);
                }
                    /* catch() { ... } // from try @ 009ac99c with catch @ 009acb48 */
                    /* catch() { ... } // from try @ 009ac990 with catch @ 009acb4c */
                if (uVar23 < 10) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                    /* catch() { ... } // from try @ 009ac970 with catch @ 009acb50 */
                pbVar19 = *(basic_string **)(pbVar22 + 0x10);
                uVar29 = uVar23 - 10;
                if (((byte)bVar4 & 1) == 0) {
                  pbVar19 = pbVar22 + 1;
                }
                    /* catch() { ... } // from try @ 009ac9a8 with catch @ 009acb60 */
                if (0xffffffffffffffef < uVar29) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uVar29 < 0x17) {
                  local_2b0 = (undefined **)(ulong)(byte)((int)uVar29 << 1);
                  ppuVar14 = (undefined **)((ulong)&local_2b0 | 1);
                  if (uVar29 != 0) goto LAB_009ac524;
                }
                else {
                  uVar23 = uVar23 + 6 & 0xfffffffffffffff0;
                  ppuVar14 = operator_new(uVar23);
                    /* try { // try from 009ac510 to 00aac537 has its CatchHandler @ 009ac5c8 */
                  local_2b0 = (undefined **)(uVar23 | 1);
                  uStack_2a8 = uVar29;
                  local_2a0 = ppuVar14;
LAB_009ac524:
                  memcpy(ppuVar14,pbVar19 + 10,uVar29);
                }
                *(undefined1 *)((long)ppuVar14 + uVar29) = 0;
                    /* try { // try from 009ac538 to 00aac66f has its CatchHandler @ 009ac120 */
                if (((byte)*pbVar22 & 1) == 0) {
                    /* catch() { ... } // from try @ 009ac2b4 with catch @ 009ac540 */
                  *(undefined2 *)pbVar22 = 0;
                }
                else {
                    /* catch() { ... } // from try @ 009ac2a4 with catch @ 009ac550 */
                  **(undefined1 **)(pbVar22 + 0x10) = 0;
                  *(undefined8 *)(pbVar22 + 8) = 0;
                    /* catch() { ... } // from try @ 009ac288 with catch @ 009ac560 */
                  if (((byte)*pbVar22 & 1) != 0) {
                    operator_delete(*(void **)(pbVar22 + 0x10));
                    *(undefined8 *)pbVar22 = 0;
                  }
                }
                    /* catch() { ... } // from try @ 009ac278 with catch @ 009ac570 */
                *(ulong *)(pbVar22 + 8) = uStack_2a8;
                *(undefined ***)pbVar22 = local_2b0;
                bVar4 = *pbVar22;
                uVar23 = (ulong)(byte)bVar4;
                    /* catch() { ... } // from try @ 009ac264 with catch @ 009ac580 */
                *(undefined ***)(pbVar22 + 0x10) = local_2a0;
                goto joined_r0x009ac600;
              }
              break;
            }
            pbVar15 = pbVar15 + 1;
            uVar29 = (long)pbVar1 - (long)pbVar15;
          } while (9 < (long)uVar29);
          if (((byte)bVar4 & 1) == 0) goto LAB_009ac604;
LAB_009ac884:
          uVar29 = *(ulong *)(pbVar22 + 8);
        }
        else {
          uVar29 = *(ulong *)(pbVar22 + 8);
          pbVar19 = *(basic_string **)(pbVar22 + 0x10);
          if (9 < (long)uVar29) goto LAB_009ac5a8;
joined_r0x009ac600:
                    /* catch() { ... } // from try @ 009ac1a8 with catch @ 009ac600 */
          if (((byte)bVar4 & 1) != 0) goto LAB_009ac884;
LAB_009ac604:
                    /* catch() { ... } // from try @ 009ac19c with catch @ 009ac604 */
          uVar29 = uVar23 >> 1;
        }
                    /* catch() { ... } // from try @ 009ac17c with catch @ 009ac608 */
        if (uVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        if ((uVar23 & 1) == 0) {
          pbVar19 = pbVar22 + 1;
        }
        else {
                    /* catch() { ... } // from try @ 009ac1b4 with catch @ 009ac618
                       catch() { ... } // from try @ 009ac2ec with catch @ 009ac618 */
          pbVar19 = *(basic_string **)(pbVar22 + 0x10);
        }
        if (*pbVar19 != (basic_string)0x23) {
          uStack_398 = 0;
          local_390 = (char *)0x0;
          local_3a0 = 0;
          local_378 = 0;
          local_370 = (void *)0x0;
          local_380 = 0;
          local_320 = (void *)0x0;
          pvStack_338 = (void *)0x0;
          local_340 = 0;
          uStack_328 = 0;
          local_330 = 0;
          uStack_358 = 0;
          local_360 = 0;
          local_348 = 0;
          local_350 = (void *)0x0;
          local_2a0 = &PTR__basic_stringstream_01c66fb0;
          local_230[0] = (undefined **)0x1c670c8;
          local_2b0 = (undefined **)0x1c670a0;
          uStack_2a8 = 0;
                    /* try { // try from 009ac670 to 00aac6c3 has its CatchHandler @ 009ac670
                       catch() { ... } // from try @ 009ac670 with catch @ 009ac670
                       catch() { ... } // from try @ 009ac834 with catch @ 009ac670 */
          std::__ndk1::ios_base::init
                    ((ios_base *)local_230,
                     (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&ppuStack_298);
          local_1a0 = 0xffffffff;
          local_2b0 = &PTR__basic_stringstream_01c66f88;
          local_2a0 = &PTR__basic_stringstream_01c66fb0;
          local_230[0] = &PTR__basic_stringstream_01c66fd8;
          local_1a8 = 0;
          ppuStack_298 = &PTR__basic_streambuf_01c671a8;
          std::__ndk1::locale::locale(alStack_290);
          uStack_270 = 0;
          local_278 = 0;
          uStack_260 = 0;
          uStack_268 = 0;
          uStack_280 = 0;
          local_288 = 0;
                    /* try { // try from 009ac6c4 to 00aac6db has its CatchHandler @ 009ac8b0 */
          ppuStack_298 = &PTR__basic_stringbuf_01c67100;
          uStack_250 = 0;
          local_258 = 0;
          uStack_240 = 0;
          local_248 = (void *)0x0;
          local_238 = 0x18;
                    /* try { // try from 009ac6e4 to 00aac6ef has its CatchHandler @ 009ac8ac */
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                    ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&ppuStack_298,pbVar22);
          local_3b8 = 0;
          uStack_3b0 = 0;
          local_3a8 = (void *)0x0;
                    /* try { // try from 009ac6f0 to 00aac6fb has its CatchHandler @ 009ac8a8 */
          local_3d0 = (ulong *)0x0;
          local_3c8 = (ulong *)0x0;
          local_3c0 = (ulong *)0x0;
          while (pbVar13 = std::__ndk1::
                           getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                     ((basic_istream *)&local_2b0,(basic_string *)&local_3b8,'\t'),
                pvVar30 = local_3a8, uVar23 = uStack_3b0, puVar24 = local_3c8,
                ((byte)pbVar13[*(long *)(*(long *)pbVar13 + -0x18) + 0x20] & 5) == 0) {
            if (local_3c8 == local_3c0) {
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)&local_3d0,(basic_string *)&local_3b8);
            }
            else {
              local_3c8[1] = 0;
              local_3c8[2] = 0;
              *local_3c8 = 0;
              if ((local_3b8 & 1) == 0) {
                local_3c8[2] = (ulong)local_3a8;
                local_3c8[1] = uStack_3b0;
                *local_3c8 = local_3b8;
              }
              else {
                if (0xffffffffffffffef < uStack_3b0) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uStack_3b0 < 0x17) {
                  pbVar28 = (byte *)((long)local_3c8 + 1);
                  *(byte *)local_3c8 = (byte)((int)uStack_3b0 << 1);
                  if (uStack_3b0 != 0) goto LAB_009ac7b8;
                }
                else {
                  uVar29 = uStack_3b0 + 0x10 & 0xfffffffffffffff0;
                  pbVar28 = operator_new(uVar29);
                  puVar24[1] = uVar23;
                  puVar24[2] = (ulong)pbVar28;
                  *puVar24 = uVar29 | 1;
LAB_009ac7b8:
                  memcpy(pbVar28,pvVar30,uVar23);
                }
                pbVar28[uVar23] = 0;
              }
                    /* try { // try from 009ac6fc to 00aac833 has its CatchHandler @ 009ac8c0 */
              local_3c8 = local_3c8 + 3;
            }
          }
          if (&local_3a0 != local_3d0) {
            uVar23 = local_3d0[1];
            pbVar28 = (byte *)local_3d0[2];
            if (((byte)*local_3d0 & 1) == 0) {
              pbVar28 = (byte *)((long)local_3d0 + 1);
              uVar23 = (ulong)(byte)((byte)*local_3d0 >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_3a0,(char *)pbVar28,uVar23);
          }
          pcVar20 = local_390;
          uVar29 = local_3a0;
          uVar23 = local_3a0 >> 1 & 0x7f;
          if ((local_3a0 & 1) != 0) {
            uVar23 = uStack_398;
          }
          if (uVar23 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pcVar17 = (char *)((ulong)&local_3a0 | 1);
          if ((local_3a0 & 1) != 0) {
            pcVar17 = local_390;
          }
                    /* try { // try from 009ac834 to 00aac917 has its CatchHandler @ 009ac670 */
          if (*pcVar17 == '.') {
            __n_01 = uVar23 - 1;
            local_3e8 = 0;
            uStack_3e0 = 0;
            local_3d8 = (char *)0x0;
            if (0xffffffffffffffef < __n_01) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (__n_01 < 0x17) {
              local_3e8 = (ulong)(byte)((int)__n_01 << 1);
              __dest = (char *)((ulong)&local_3e8 | 1);
              if (__n_01 != 0) goto LAB_009ac8b0;
              *(char *)((ulong)&local_3e8 | 1) = '\0';
            }
            else {
              uVar23 = uVar23 + 0xf & 0xfffffffffffffff0;
              __dest = operator_new(uVar23);
              local_3e8 = uVar23 | 1;
                    /* catch() { ... } // from try @ 009ac6f0 with catch @ 009ac8a8 */
                    /* catch() { ... } // from try @ 009ac6e4 with catch @ 009ac8ac */
              uStack_3e0 = __n_01;
              local_3d8 = __dest;
LAB_009ac8b0:
                    /* catch() { ... } // from try @ 009ac6c4 with catch @ 009ac8b0 */
              memcpy(__dest,pcVar17 + 1,__n_01);
                    /* catch() { ... } // from try @ 009ac6fc with catch @ 009ac8c0 */
              __dest[__n_01] = '\0';
            }
            if ((uVar29 & 1) != 0) {
              *pcVar20 = '\0';
              uStack_398 = 0;
              if ((local_3a0 & 1) != 0) {
                operator_delete(local_390);
              }
            }
            local_390 = local_3d8;
            uStack_398 = uStack_3e0;
            local_3a0 = local_3e8;
          }
          puVar24 = local_3d0;
          uVar23 = ((long)local_3c8 - (long)local_3d0 >> 3) * -0x5555555555555555;
          if (uVar23 < 2) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
                    /* try { // try from 009ac918 to 00aac96f has its CatchHandler @ 009ac918
                       catch() { ... } // from try @ 009ac918 with catch @ 009ac918
                       catch() { ... } // from try @ 009acad0 with catch @ 009ac918 */
          if ((local_3d0[3] & 1) == 0) {
            pbVar28 = (byte *)((long)local_3d0 + 0x19);
          }
          else {
            pbVar28 = (byte *)local_3d0[5];
          }
          iVar10 = strcmp("TRUE",(char *)pbVar28);
          local_388 = iVar10 != 0;
          if (uVar23 < 3) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_380 !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar24 + 6)) {
            uVar23 = puVar24[7];
            pbVar28 = (byte *)puVar24[8];
                    /* try { // try from 009ac970 to 00aac987 has its CatchHandler @ 009acb50 */
            if (((byte)puVar24[6] & 1) == 0) {
              pbVar28 = (byte *)((long)puVar24 + 0x31);
              uVar23 = (ulong)(byte)((byte)puVar24[6] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_380,(char *)pbVar28,uVar23);
                    /* try { // try from 009ac990 to 00aac99b has its CatchHandler @ 009acb4c */
            uVar23 = ((long)local_3c8 - (long)local_3d0 >> 3) * -0x5555555555555555;
            puVar24 = local_3d0;
          }
                    /* try { // try from 009ac99c to 00aac9a7 has its CatchHandler @ 009acb48 */
          if (uVar23 < 4) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
                    /* try { // try from 009ac9a8 to 00aacacf has its CatchHandler @ 009acb60 */
          if ((puVar24[9] & 1) == 0) {
            pbVar28 = (byte *)((long)puVar24 + 0x49);
          }
          else {
            pbVar28 = (byte *)puVar24[0xb];
          }
          iVar10 = strcmp("TRUE",(char *)pbVar28);
          local_368 = iVar10 != 0;
          if (uVar23 < 5) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_330 !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar24 + 0xc)) {
            uVar23 = puVar24[0xd];
            pbVar28 = (byte *)puVar24[0xe];
            if (((byte)puVar24[0xc] & 1) == 0) {
              pbVar28 = (byte *)((long)puVar24 + 0x61);
              uVar23 = (ulong)(byte)((byte)puVar24[0xc] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_330,(char *)pbVar28,uVar23);
            uVar23 = ((long)local_3c8 - (long)local_3d0 >> 3) * -0x5555555555555555;
            puVar24 = local_3d0;
          }
          if (uVar23 < 6) {
                    /* try { // try from 009ad004 to 00aad00b has its CatchHandler @ 009ad20c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_360 !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar24 + 0xf)) {
            uVar23 = puVar24[0x10];
            pbVar28 = (byte *)puVar24[0x11];
            if (((byte)puVar24[0xf] & 1) == 0) {
              pbVar28 = (byte *)((long)puVar24 + 0x79);
              uVar23 = (ulong)(byte)((byte)puVar24[0xf] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_360,(char *)pbVar28,uVar23);
            uVar23 = ((long)local_3c8 - (long)local_3d0 >> 3) * -0x5555555555555555;
            puVar24 = local_3d0;
          }
          if (uVar23 < 7) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009ad010 to 00aad037 has its CatchHandler @ 009ad214 */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_348 !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar24 + 0x12)) {
            uVar23 = puVar24[0x13];
            pbVar28 = (byte *)puVar24[0x14];
            if (((byte)puVar24[0x12] & 1) == 0) {
              pbVar28 = (byte *)((long)puVar24 + 0x91);
              uVar23 = (ulong)(byte)((byte)puVar24[0x12] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_348,(char *)pbVar28,uVar23);
          }
          if (local_308 == local_300) {
                    /* try { // try from 009acad0 to 00aacbb7 has its CatchHandler @ 009ac918 */
            std::__ndk1::
            vector<cocos2d::network::CookiesInfo,std::__ndk1::allocator<cocos2d::network::CookiesInfo>>
            ::__push_back_slow_path<cocos2d::network::CookiesInfo_const&>
                      ((vector<cocos2d::network::CookiesInfo,std::__ndk1::allocator<cocos2d::network::CookiesInfo>>
                        *)&local_310,(CookiesInfo *)&local_3a0);
          }
          else {
            CookiesInfo::CookiesInfo(local_308,(CookiesInfo *)&local_3a0);
            local_308 = local_308 + 0x88;
          }
          puVar24 = local_3d0;
          puVar27 = local_3c8;
          if (local_3d0 != (ulong *)0x0) {
            while (puVar7 = puVar27, puVar7 != puVar24) {
              puVar27 = puVar7 + -3;
              if ((*puVar27 & 1) != 0) {
                operator_delete((void *)puVar7[-1]);
              }
            }
            local_3c8 = puVar24;
            operator_delete(local_3d0);
          }
          if ((local_3b8 & 1) != 0) {
            operator_delete(local_3a8);
          }
          local_2b0 = &PTR__basic_stringstream_01c66f88;
                    /* try { // try from 009acbb8 to 00aacc0b has its CatchHandler @ 009acbb8
                       catch() { ... } // from try @ 009acbb8 with catch @ 009acbb8
                       catch() { ... } // from try @ 009acd7c with catch @ 009acbb8 */
          local_230[0] = &PTR__basic_stringstream_01c66fd8;
          local_2a0 = &PTR__basic_stringstream_01c66fb0;
          ppuStack_298 = &PTR__basic_stringbuf_01c67100;
          if ((local_258 & 1) != 0) {
            operator_delete(local_248);
          }
          ppuStack_298 = &PTR__basic_streambuf_01c671a8;
          std::__ndk1::locale::~locale(alStack_290);
          std::__ndk1::ios_base::~ios_base((ios_base *)local_230);
          if ((local_330 & 1) != 0) {
            operator_delete(local_320);
          }
          if ((local_348 & 1) != 0) {
            operator_delete(pvStack_338);
          }
          if ((local_360 & 1) != 0) {
            operator_delete(local_350);
          }
          if ((local_380 & 1) != 0) {
            operator_delete(local_370);
          }
          if ((local_3a0 & 1) != 0) {
                    /* try { // try from 009acc2c to 00aacc37 has its CatchHandler @ 009acdf4 */
            operator_delete(local_390);
          }
        }
        pCVar8 = local_308;
                    /* try { // try from 009acc38 to 00aacc43 has its CatchHandler @ 009acdf0 */
        pbVar22 = pbVar22 + 0x18;
      } while (pbVar22 != pbVar9);
                    /* try { // try from 009acc44 to 00aacd7b has its CatchHandler @ 009ace08 */
      local_2b0 = (undefined **)0x0;
      uStack_2a8 = 0;
      local_2a0 = (undefined **)0x0;
      if (local_310 == local_308) {
        local_2b0._0_1_ = (basic_istream)0x0;
      }
      else {
        iVar10 = 0;
        pcVar20 = (char *)((ulong)&local_3a0 | 1);
        pCVar25 = local_310;
        do {
          if (((byte)this[0x58] & 1) == 0) {
            uVar23 = (ulong)((byte)this[0x58] >> 1);
            pHVar21 = this + 0x59;
          }
          else {
            uVar23 = *(ulong *)(this + 0x60);
            pHVar21 = *(HttpURLConnection **)(this + 0x68);
          }
          __n_00 = *(size_t *)(pCVar25 + 8);
          pCVar3 = *(CookiesInfo **)(pCVar25 + 0x10);
          if (((byte)*pCVar25 & 1) == 0) {
            pCVar3 = pCVar25 + 1;
            __n_00 = (ulong)((byte)*pCVar25 >> 1);
          }
          if (__n_00 == 0) {
LAB_009acd18:
            uStack_398 = 0;
            local_390 = (char *)0x0;
            local_3a0 = 0;
            if (((byte)pCVar25[0x40] & 1) == 0) {
              local_390 = *(char **)(pCVar25 + 0x50);
              uStack_398 = *(ulong *)(pCVar25 + 0x48);
              local_3a0 = *(ulong *)(pCVar25 + 0x40);
            }
            else {
              uVar23 = *(ulong *)(pCVar25 + 0x48);
              if (0xffffffffffffffef < uVar23) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              pvVar30 = *(void **)(pCVar25 + 0x50);
              if (uVar23 < 0x17) {
                local_3a0 = (ulong)(byte)((int)uVar23 << 1);
                pcVar17 = pcVar20;
                if (uVar23 != 0) goto LAB_009acd8c;
              }
              else {
                uVar29 = uVar23 + 0x10 & 0xfffffffffffffff0;
                pcVar17 = operator_new(uVar29);
                    /* try { // try from 009acd7c to 00aace5f has its CatchHandler @ 009acbb8 */
                local_3a0 = uVar29 | 1;
                uStack_398 = uVar23;
                local_390 = pcVar17;
LAB_009acd8c:
                memcpy(pcVar17,pvVar30,uVar23);
              }
              pcVar17[uVar23] = '\0';
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_3a0,"=",1);
            uVar23 = (ulong)((byte)pCVar25[0x58] >> 1);
            pCVar3 = pCVar25 + 0x59;
            if (((byte)pCVar25[0x58] & 1) != 0) {
              uVar23 = *(ulong *)(pCVar25 + 0x60);
              pCVar3 = *(CookiesInfo **)(pCVar25 + 0x68);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_3a0,(char *)pCVar3,uVar23);
            if (iVar10 != 0) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_2b0,";",1);
            }
                    /* catch() { ... } // from try @ 009acc38 with catch @ 009acdf0 */
                    /* catch() { ... } // from try @ 009acc2c with catch @ 009acdf4 */
                    /* catch() { ... } // from try @ 009acc0c with catch @ 009acdf8 */
            pcVar17 = pcVar20;
            uVar23 = local_3a0 >> 1 & 0x7f;
            if ((local_3a0 & 1) != 0) {
              pcVar17 = local_390;
              uVar23 = uStack_398;
            }
                    /* catch() { ... } // from try @ 009acc44 with catch @ 009ace08 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_2b0,pcVar17,uVar23);
            if ((local_3a0 & 1) != 0) {
              operator_delete(local_390);
            }
          }
          else if ((long)__n_00 <= (long)uVar23) {
            CVar5 = *pCVar3;
            pHVar2 = pHVar21 + uVar23;
            pHVar16 = pHVar21;
            do {
              __n = (uVar23 - __n_00) + 1;
              if ((__n == 0) ||
                 (pHVar16 = memchr(pHVar16,(uint)(byte)CVar5,__n),
                 pHVar16 == (HttpURLConnection *)0x0)) break;
              iVar11 = memcmp(pHVar16,pCVar3,__n_00);
              if (iVar11 == 0) {
                if ((pHVar16 != pHVar2) && ((long)pHVar16 - (long)pHVar21 != -1)) goto LAB_009acd18;
                break;
              }
              pHVar16 = pHVar16 + 1;
              uVar23 = (long)pHVar2 - (long)pHVar16;
            } while ((long)__n_00 <= (long)uVar23);
          }
          pCVar25 = pCVar25 + 0x88;
          iVar10 = iVar10 + 1;
        } while (pCVar25 != pCVar8);
      }
      ppuVar14 = (undefined **)((ulong)&local_2b0 | 1);
                    /* try { // try from 009ace60 to 00aaceb7 has its CatchHandler @ 009ace60
                       catch() { ... } // from try @ 009ace60 with catch @ 009ace60
                       catch() { ... } // from try @ 009ad1f4 with catch @ 009ace60 */
      if (((byte)local_2b0._0_1_ & 1) != 0) {
        ppuVar14 = local_2a0;
      }
      addRequestHeader(this,"Cookie",(char *)ppuVar14);
      if (((ulong)local_2b0 & 1) != 0) {
        operator_delete(local_2a0);
      }
      pCVar8 = local_310;
      if (local_310 != (CookiesInfo *)0x0) {
        if (local_308 != local_310) {
          pCVar25 = local_308;
          do {
            pCVar25 = pCVar25 + -0x88;
                    /* try { // try from 009aceb8 to 00aacecf has its CatchHandler @ 009ad238 */
            FUN_009ad688(&local_300,pCVar25);
          } while (pCVar8 != pCVar25);
        }
        local_308 = pCVar8;
        operator_delete(local_310);
      }
    }
                    /* try { // try from 009aced8 to 00aacee3 has its CatchHandler @ 009ad234 */
    if ((local_2f8 & 1) != 0) {
                    /* try { // try from 009acee4 to 00aaceef has its CatchHandler @ 009ad230 */
      operator_delete(local_2e8);
    }
    local_190 = &PTR__basic_stringstream_01c66f88;
                    /* try { // try from 009acef0 to 00aacf07 has its CatchHandler @ 009ad248 */
    local_110[0] = &PTR__basic_stringstream_01c66fd8;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    ppuStack_178 = &PTR__basic_stringbuf_01c67100;
    if ((local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    ppuStack_178 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_170);
                    /* try { // try from 009acf38 to 00aacf3f has its CatchHandler @ 009ad210 */
    std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
    pbVar9 = local_2e0;
                    /* try { // try from 009acf44 to 00aacf67 has its CatchHandler @ 009ad218 */
    pbVar22 = local_2d8;
    if (local_2e0 != (basic_string *)0x0) {
      while (pbVar19 = pbVar22, pbVar19 != pbVar9) {
        pbVar22 = pbVar19 + -0x18;
        if (((byte)*pbVar22 & 1) != 0) {
          operator_delete(*(void **)(pbVar19 + -8));
        }
      }
                    /* try { // try from 009acf80 to 00aacfdb has its CatchHandler @ 009ad248 */
      local_2d8 = pbVar9;
      operator_delete(local_2e0);
    }
  }
  if (((byte)local_2c8[0] & 1) != 0) {
    operator_delete(local_2b8);
  }
LAB_009acf9c:
  if (*(long *)(lVar6 + 0x28) == lVar18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

