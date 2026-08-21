
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::network::HttpURLConnection::addCookiesForRequestHeader() */

void __thiscall
cocos2d::network::HttpURLConnection::addCookiesForRequestHeader(HttpURLConnection *this)

{
  mutex *this_00;
  basic_string *pbVar1;
  HttpURLConnection *pHVar2;
  size_t __n;
  CookiesInfo *pCVar3;
  byte bVar4;
  basic_string bVar5;
  HttpURLConnection HVar6;
  CookiesInfo CVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  void *pvVar11;
  CookiesInfo *pCVar12;
  basic_string *pbVar13;
  ulong *puVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  basic_istream *pbVar18;
  basic_string *pbVar19;
  char *__dest;
  char *pcVar20;
  HttpURLConnection *pHVar21;
  basic_string *pbVar22;
  HttpURLConnection *pHVar23;
  byte *pbVar24;
  ulong *puVar25;
  CookiesInfo *pCVar26;
  long lVar27;
  ulong uVar28;
  ulong __n_00;
  basic_string *pbVar29;
  ulong uVar30;
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
  undefined8 uStack_378;
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
  CookiesInfo *pCStack_300;
  ulong local_2f8;
  ulong uStack_2f0;
  void *local_2e8;
  basic_string *local_2e0;
  basic_string *local_2d8;
  basic_string *pbStack_2d0;
  basic_string local_2c8 [8];
  ulong local_2c0;
  void *local_2b8;
  ulong local_2b0;
  ulong uStack_2a8;
  char *local_2a0;
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
  undefined8 local_230 [17];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
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
  undefined8 local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  lVar27 = *(long *)this;
  std::__ndk1::mutex::lock((mutex *)(lVar27 + 0x158));
  std::__ndk1::mutex::unlock((mutex *)(lVar27 + 0x158));
  if ((*(byte *)(lVar27 + 0x140) & 1) == 0) {
    if (*(byte *)(lVar27 + 0x140) >> 1 == 0) goto LAB_00e9c0b0;
  }
  else if (*(long *)(lVar27 + 0x148) == 0) goto LAB_00e9c0b0;
  plVar17 = (long *)FileUtils::getInstance();
  lVar27 = *(long *)this;
  this_00 = (mutex *)(lVar27 + 0x158);
  std::__ndk1::mutex::lock(this_00);
  std::__ndk1::mutex::unlock(this_00);
  (**(code **)(*plVar17 + 0x50))(&local_190,plVar17,lVar27 + 0x140);
  pHVar23 = this + 0x40;
  if (((byte)*pHVar23 & 1) == 0) {
    *(undefined2 *)pHVar23 = 0;
  }
  else {
    **(undefined1 **)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    if (((byte)this[0x40] & 1) != 0) {
      operator_delete(*(void **)(this + 0x50));
      *(undefined8 *)(this + 0x40) = 0;
    }
  }
  *(undefined8 *)(this + 0x50) = local_180;
  *(undefined8 *)(this + 0x48) = uStack_188;
  *(undefined8 *)pHVar23 = local_190;
  plVar17 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar17 + 0x18))(local_2c8,plVar17,pHVar23);
  uVar28 = (ulong)((byte)local_2c8[0] >> 1);
  if (((byte)local_2c8[0] & 1) != 0) {
    uVar28 = local_2c0;
  }
  if (uVar28 != 0) {
    local_2d8 = (basic_string *)0x0;
    pbStack_2d0 = (basic_string *)0x0;
    local_2e0 = (basic_string *)0x0;
    local_110[0] = 0x1698928;
    local_190 = 0x1698900;
    uStack_188 = 0;
    local_180 = 0x1698810;
    std::__ndk1::ios_base::init
              ((ios_base *)local_110,
               (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &ppuStack_178);
    local_80 = 0xffffffff;
    ppuStack_178 = &PTR__basic_streambuf_01698a08;
    local_190 = 0x16987e8;
    local_110[0] = 0x1698838;
    local_88 = 0;
    local_180 = 0x1698810;
    std::__ndk1::locale::locale(alStack_170);
    uStack_140 = 0;
    local_148 = 0;
    uStack_150 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    ppuStack_178 = &PTR__basic_stringbuf_01698960;
    uStack_130 = 0;
    local_138 = 0;
    uStack_120 = 0;
    local_128 = (void *)0x0;
    local_118 = 0x18;
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        &ppuStack_178,local_2c8);
    uStack_2f0 = 0;
    local_2e8 = (void *)0x0;
    local_2f8 = 0;
    while (pbVar18 = std::__ndk1::
                     getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ((basic_istream *)&local_190,(basic_string *)&local_2f8,'\n'),
          pbVar13 = local_2d8, pvVar11 = local_2e8, uVar28 = uStack_2f0,
          ((byte)pbVar18[*(long *)(*(long *)pbVar18 + -0x18) + 0x20] & 5) == 0) {
      if (local_2d8 == pbStack_2d0) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)&local_2e0,(basic_string *)&local_2f8);
      }
      else {
        *(ulong *)local_2d8 = 0;
        *(ulong *)(local_2d8 + 8) = 0;
        *(ulong *)(local_2d8 + 0x10) = 0;
        if ((local_2f8 & 1) == 0) {
          *(void **)(local_2d8 + 0x10) = local_2e8;
          *(ulong *)(local_2d8 + 8) = uStack_2f0;
          *(ulong *)local_2d8 = local_2f8;
        }
        else {
          if (0xffffffffffffffef < uStack_2f0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_2f0 < 0x17) {
            pbVar29 = local_2d8 + 1;
            *local_2d8 = SUB41((int)uStack_2f0 << 1,0);
            if (uStack_2f0 != 0) goto LAB_00e9b514;
          }
          else {
            uVar30 = uStack_2f0 + 0x10 & 0xfffffffffffffff0;
            pbVar29 = operator_new(uVar30);
            *(ulong *)(pbVar13 + 8) = uVar28;
            *(basic_string **)(pbVar13 + 0x10) = pbVar29;
            *(ulong *)pbVar13 = uVar30 | 1;
LAB_00e9b514:
            memcpy(pbVar29,pvVar11,uVar28);
          }
          pbVar29[uVar28] = (basic_string)0x0;
        }
        local_2d8 = pbVar13 + 0x18;
      }
    }
    if (local_2e0 != local_2d8) {
      local_308 = (CookiesInfo *)0x0;
      pCStack_300 = (CookiesInfo *)0x0;
      local_310 = (CookiesInfo *)0x0;
      pbVar29 = local_2e0;
      do {
        bVar5 = *pbVar29;
        uVar28 = (ulong)(byte)bVar5;
        if (((byte)bVar5 & 1) == 0) {
          pbVar22 = pbVar29 + 1;
          uVar30 = (ulong)((byte)bVar5 >> 1);
          if (uVar30 < 10) goto joined_r0x00e9b634;
LAB_00e9b64c:
          pbVar1 = pbVar22 + uVar30;
          pbVar19 = pbVar22;
          do {
            if ((uVar30 - 9 == 0) ||
               (pbVar19 = memchr(pbVar19,0x23,uVar30 - 9), pbVar19 == (basic_string *)0x0)) break;
            iVar15 = memcmp(pbVar19,"#HttpOnly_",10);
            if (iVar15 == 0) {
              if ((pbVar19 != pbVar1) && ((long)pbVar19 - (long)pbVar22 != -1)) {
                uStack_2a8 = 0;
                local_2a0 = (char *)0x0;
                local_2b0 = 0;
                uVar28 = (ulong)((byte)bVar5 >> 1);
                if (((byte)bVar5 & 1) != 0) {
                  uVar28 = *(ulong *)(pbVar29 + 8);
                }
                if (uVar28 < 10) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                pbVar22 = *(basic_string **)(pbVar29 + 0x10);
                uVar30 = uVar28 - 10;
                if (((byte)bVar5 & 1) == 0) {
                  pbVar22 = pbVar29 + 1;
                }
                if (0xffffffffffffffef < uVar30) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uVar30 < 0x17) {
                  local_2b0 = (ulong)(byte)((int)uVar30 << 1);
                  pcVar20 = (char *)((ulong)&local_2b0 | 1);
                  if (uVar30 != 0) goto LAB_00e9bd38;
                }
                else {
                  uVar28 = uVar28 + 6 & 0xfffffffffffffff0;
                  pcVar20 = operator_new(uVar28);
                  local_2b0 = uVar28 | 1;
                  uStack_2a8 = uVar30;
                  local_2a0 = pcVar20;
LAB_00e9bd38:
                  memcpy(pcVar20,pbVar22 + 10,uVar30);
                }
                pcVar20[uVar30] = '\0';
                if (((byte)*pbVar29 & 1) == 0) {
                  *(undefined2 *)pbVar29 = 0;
                }
                else {
                  **(undefined1 **)(pbVar29 + 0x10) = 0;
                  *(undefined8 *)(pbVar29 + 8) = 0;
                  if (((byte)*pbVar29 & 1) != 0) {
                    operator_delete(*(void **)(pbVar29 + 0x10));
                    *(undefined8 *)pbVar29 = 0;
                  }
                }
                *(ulong *)(pbVar29 + 8) = uStack_2a8;
                *(ulong *)pbVar29 = local_2b0;
                bVar5 = *pbVar29;
                uVar28 = (ulong)(byte)bVar5;
                *(char **)(pbVar29 + 0x10) = local_2a0;
              }
              goto joined_r0x00e9b634;
            }
            pbVar19 = pbVar19 + 1;
            uVar30 = (long)pbVar1 - (long)pbVar19;
          } while (9 < (long)uVar30);
          if (((byte)bVar5 & 1) == 0) goto LAB_00e9b638;
LAB_00e9b910:
          uVar30 = *(ulong *)(pbVar29 + 8);
        }
        else {
          uVar30 = *(ulong *)(pbVar29 + 8);
          pbVar22 = *(basic_string **)(pbVar29 + 0x10);
          if (9 < (long)uVar30) goto LAB_00e9b64c;
joined_r0x00e9b634:
          if (((byte)bVar5 & 1) != 0) goto LAB_00e9b910;
LAB_00e9b638:
          uVar30 = uVar28 >> 1;
        }
        if (uVar30 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        if ((uVar28 & 1) == 0) {
          pbVar22 = pbVar29 + 1;
        }
        else {
          pbVar22 = *(basic_string **)(pbVar29 + 0x10);
        }
        if (*pbVar22 != (basic_string)0x23) {
          uStack_398 = 0;
          local_390 = (char *)0x0;
          local_3a0 = 0;
          local_380 = 0;
          uStack_378 = 0;
          local_370 = (void *)0x0;
          local_320 = (void *)0x0;
          pvStack_338 = (void *)0x0;
          local_340 = 0;
          uStack_328 = 0;
          local_330 = 0;
          uStack_358 = 0;
          local_360 = 0;
          local_348 = 0;
          local_350 = (void *)0x0;
          local_230[0] = 0x1698928;
          local_2b0 = 0x1698900;
          local_2a0 = (char *)0x1698810;
          uStack_2a8 = 0;
          std::__ndk1::ios_base::init
                    ((ios_base *)local_230,
                     (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&ppuStack_298);
          local_1a0 = 0xffffffff;
          local_2b0 = 0x16987e8;
          local_2a0 = (char *)0x1698810;
          local_230[0] = 0x1698838;
          local_1a8 = 0;
          ppuStack_298 = &PTR__basic_streambuf_01698a08;
          std::__ndk1::locale::locale(alStack_290);
          uStack_270 = 0;
          local_278 = 0;
          uStack_260 = 0;
          uStack_268 = 0;
          uStack_280 = 0;
          local_288 = 0;
          ppuStack_298 = &PTR__basic_stringbuf_01698960;
          uStack_250 = 0;
          local_258 = 0;
          uStack_240 = 0;
          local_248 = (void *)0x0;
          local_238 = 0x18;
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                    ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&ppuStack_298,pbVar29);
          uStack_3b0 = 0;
          local_3a8 = (void *)0x0;
          local_3c0 = (ulong *)0x0;
          local_3b8 = 0;
          local_3d0 = (ulong *)0x0;
          local_3c8 = (ulong *)0x0;
          while (pbVar18 = std::__ndk1::
                           getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                     ((basic_istream *)&local_2b0,(basic_string *)&local_3b8,'\t'),
                pvVar11 = local_3a8, uVar28 = uStack_3b0, puVar25 = local_3c8,
                ((byte)pbVar18[*(long *)(*(long *)pbVar18 + -0x18) + 0x20] & 5) == 0) {
            if (local_3c8 == local_3c0) {
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)&local_3d0,(basic_string *)&local_3b8);
            }
            else {
              *local_3c8 = 0;
              local_3c8[1] = 0;
              local_3c8[2] = 0;
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
                  pbVar24 = (byte *)((long)local_3c8 + 1);
                  *(byte *)local_3c8 = (byte)((int)uStack_3b0 << 1);
                  if (uStack_3b0 != 0) goto LAB_00e9b838;
                }
                else {
                  uVar30 = uStack_3b0 + 0x10 & 0xfffffffffffffff0;
                  pbVar24 = operator_new(uVar30);
                  puVar25[1] = uVar28;
                  puVar25[2] = (ulong)pbVar24;
                  *puVar25 = uVar30 | 1;
LAB_00e9b838:
                  memcpy(pbVar24,pvVar11,uVar28);
                }
                pbVar24[uVar28] = 0;
              }
              local_3c8 = puVar25 + 3;
            }
          }
          if (&local_3a0 != local_3d0) {
            uVar28 = local_3d0[1];
            pbVar24 = (byte *)local_3d0[2];
            if (((byte)*local_3d0 & 1) == 0) {
              pbVar24 = (byte *)((long)local_3d0 + 1);
              uVar28 = (ulong)(byte)((byte)*local_3d0 >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_3a0,(char *)pbVar24,uVar28);
          }
          uVar30 = local_3a0;
          uVar28 = local_3a0 >> 1 & 0x7f;
          if ((local_3a0 & 1) != 0) {
            uVar28 = uStack_398;
          }
          if (uVar28 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pcVar20 = (char *)((ulong)&local_3a0 | 1);
          if ((local_3a0 & 1) != 0) {
            pcVar20 = local_390;
          }
          if (*pcVar20 == '.') {
            __n_00 = uVar28 - 1;
            uStack_3e0 = 0;
            local_3d8 = (char *)0x0;
            local_3e8 = 0;
            if (0xffffffffffffffef < __n_00) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (__n_00 < 0x17) {
              local_3e8 = (ulong)(byte)((int)__n_00 << 1);
              __dest = (char *)((ulong)&local_3e8 | 1);
              if (__n_00 != 0) goto LAB_00e9b93c;
              *(char *)((ulong)&local_3e8 | 1) = '\0';
            }
            else {
              uVar28 = uVar28 + 0xf & 0xfffffffffffffff0;
              __dest = operator_new(uVar28);
              local_3e8 = uVar28 | 1;
              uStack_3e0 = __n_00;
              local_3d8 = __dest;
LAB_00e9b93c:
              memcpy(__dest,pcVar20 + 1,__n_00);
              __dest[__n_00] = '\0';
            }
            if ((uVar30 & 1) != 0) {
              *local_390 = '\0';
              uStack_398 = 0;
              if ((local_3a0 & 1) != 0) {
                operator_delete(local_390);
              }
            }
            uStack_398 = uStack_3e0;
            local_3a0 = local_3e8;
            local_390 = local_3d8;
          }
          puVar25 = local_3d0;
          uVar28 = ((long)local_3c8 - (long)local_3d0 >> 3) * -0x5555555555555555;
          if (uVar28 < 2) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((local_3d0[3] & 1) == 0) {
            pbVar24 = (byte *)((long)local_3d0 + 0x19);
          }
          else {
            pbVar24 = (byte *)local_3d0[5];
          }
          iVar15 = strcmp("TRUE",(char *)pbVar24);
          local_388 = iVar15 != 0;
          if (uVar28 < 3) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_380 !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar25 + 6)) {
            uVar28 = puVar25[7];
            pbVar24 = (byte *)puVar25[8];
            if (((byte)puVar25[6] & 1) == 0) {
              pbVar24 = (byte *)((long)puVar25 + 0x31);
              uVar28 = (ulong)(byte)((byte)puVar25[6] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_380,(char *)pbVar24,uVar28);
            uVar28 = ((long)local_3c8 - (long)local_3d0 >> 3) * -0x5555555555555555;
            puVar25 = local_3d0;
          }
          if (uVar28 < 4) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((puVar25[9] & 1) == 0) {
            pbVar24 = (byte *)((long)puVar25 + 0x49);
          }
          else {
            pbVar24 = (byte *)puVar25[0xb];
          }
          iVar15 = strcmp("TRUE",(char *)pbVar24);
          local_368 = iVar15 != 0;
          if (uVar28 < 5) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_330 !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar25 + 0xc)) {
            uVar28 = puVar25[0xd];
            pbVar24 = (byte *)puVar25[0xe];
            if (((byte)puVar25[0xc] & 1) == 0) {
              pbVar24 = (byte *)((long)puVar25 + 0x61);
              uVar28 = (ulong)(byte)((byte)puVar25[0xc] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_330,(char *)pbVar24,uVar28);
            uVar28 = ((long)local_3c8 - (long)local_3d0 >> 3) * -0x5555555555555555;
            puVar25 = local_3d0;
          }
          if (uVar28 < 6) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_360 !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar25 + 0xf)) {
            uVar28 = puVar25[0x10];
            pbVar24 = (byte *)puVar25[0x11];
            if (((byte)puVar25[0xf] & 1) == 0) {
              pbVar24 = (byte *)((long)puVar25 + 0x79);
              uVar28 = (ulong)(byte)((byte)puVar25[0xf] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_360,(char *)pbVar24,uVar28);
            uVar28 = ((long)local_3c8 - (long)local_3d0 >> 3) * -0x5555555555555555;
            puVar25 = local_3d0;
          }
          if (uVar28 < 7) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_348 !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (puVar25 + 0x12)) {
            uVar28 = puVar25[0x13];
            pbVar24 = (byte *)puVar25[0x14];
            if (((byte)puVar25[0x12] & 1) == 0) {
              pbVar24 = (byte *)((long)puVar25 + 0x91);
              uVar28 = (ulong)(byte)((byte)puVar25[0x12] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_348,(char *)pbVar24,uVar28);
          }
          pCVar12 = local_308;
          if (local_308 == pCStack_300) {
            std::__ndk1::
            vector<cocos2d::network::CookiesInfo,std::__ndk1::allocator<cocos2d::network::CookiesInfo>>
            ::__push_back_slow_path<cocos2d::network::CookiesInfo_const&>
                      ((vector<cocos2d::network::CookiesInfo,std::__ndk1::allocator<cocos2d::network::CookiesInfo>>
                        *)&local_310,(CookiesInfo *)&local_3a0);
          }
          else {
            CookiesInfo::CookiesInfo(local_308,(CookiesInfo *)&local_3a0);
            local_308 = pCVar12 + 0x88;
          }
          puVar25 = local_3d0;
          if (local_3d0 != (ulong *)0x0) {
            if (local_3c8 != local_3d0) {
              bVar4 = (byte)local_3c8[-3];
              puVar14 = local_3c8 + -3;
              puVar10 = local_3c8;
              while( true ) {
                puVar9 = puVar14;
                if ((bVar4 & 1) != 0) {
                  operator_delete((void *)puVar10[-1]);
                }
                if (puVar25 == puVar9) break;
                bVar4 = (byte)puVar9[-3];
                puVar14 = puVar9 + -3;
                puVar10 = puVar9;
              }
            }
            local_3c8 = puVar25;
            operator_delete(local_3d0);
          }
          if ((local_3b8 & 1) != 0) {
            operator_delete(local_3a8);
          }
          local_2b0 = 0x16987e8;
          local_2a0 = std::__ndk1::
                      basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::vtable + 0x40;
          local_230[0] = 0x1698838;
          ppuStack_298 = &PTR__basic_stringbuf_01698960;
          if ((local_258 & 1) != 0) {
            operator_delete(local_248);
          }
          ppuStack_298 = &PTR__basic_streambuf_01698a08;
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
            operator_delete(local_390);
          }
        }
        pbVar29 = pbVar29 + 0x18;
      } while (pbVar29 != pbVar13);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_2b0,"");
      pCVar12 = local_308;
      if (local_310 != local_308) {
        iVar15 = 0;
        HVar6 = this[0x58];
        pCVar26 = local_310;
        if (((byte)HVar6 & 1) == 0) goto LAB_00e9be14;
LAB_00e9be20:
        uVar28 = *(ulong *)(this + 0x60);
        pHVar23 = *(HttpURLConnection **)(this + 0x68);
        do {
          __n = *(size_t *)(pCVar26 + 8);
          pCVar3 = *(CookiesInfo **)(pCVar26 + 0x10);
          if (((byte)*pCVar26 & 1) == 0) {
            pCVar3 = pCVar26 + 1;
            __n = (ulong)((byte)*pCVar26 >> 1);
          }
          if (__n == 0) {
LAB_00e9beac:
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_3a0,(basic_string *)(pCVar26 + 0x40));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_3a0,"=",1);
            uVar28 = (ulong)((byte)pCVar26[0x58] >> 1);
            pCVar3 = pCVar26 + 0x59;
            if (((byte)pCVar26[0x58] & 1) != 0) {
              uVar28 = *(ulong *)(pCVar26 + 0x60);
              pCVar3 = *(CookiesInfo **)(pCVar26 + 0x68);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_3a0,(char *)pCVar3,uVar28);
            if (iVar15 != 0) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_2b0,";",1);
            }
            pcVar20 = (char *)((ulong)&local_3a0 | 1);
            uVar28 = local_3a0 >> 1 & 0x7f;
            if ((local_3a0 & 1) != 0) {
              pcVar20 = local_390;
              uVar28 = uStack_398;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_2b0,pcVar20,uVar28);
            if ((local_3a0 & 1) != 0) {
              operator_delete(local_390);
            }
          }
          else if ((long)__n <= (long)uVar28) {
            CVar7 = *pCVar3;
            pHVar2 = pHVar23 + uVar28;
            pHVar21 = pHVar23;
            do {
              if ((0xfffffffffffffffe < uVar28 - __n) ||
                 (pHVar21 = memchr(pHVar21,(uint)(byte)CVar7,(uVar28 - __n) + 1),
                 pHVar21 == (HttpURLConnection *)0x0)) break;
              iVar16 = memcmp(pHVar21,pCVar3,__n);
              if (iVar16 == 0) {
                if ((pHVar21 != pHVar2) && ((long)pHVar21 - (long)pHVar23 != -1)) goto LAB_00e9beac;
                break;
              }
              pHVar21 = pHVar21 + 1;
              uVar28 = (long)pHVar2 - (long)pHVar21;
            } while ((long)__n <= (long)uVar28);
          }
          pCVar26 = pCVar26 + 0x88;
          iVar15 = iVar15 + 1;
          if (pCVar26 == pCVar12) break;
          HVar6 = this[0x58];
          if (((byte)HVar6 & 1) != 0) goto LAB_00e9be20;
LAB_00e9be14:
          uVar28 = (ulong)((byte)HVar6 >> 1);
          pHVar23 = this + 0x59;
        } while( true );
      }
      pcVar20 = (char *)((ulong)&local_2b0 | 1);
      if ((local_2b0 & 1) != 0) {
        pcVar20 = local_2a0;
      }
      addRequestHeader(this,"Cookie",pcVar20);
      if ((local_2b0 & 1) != 0) {
        operator_delete(local_2a0);
      }
      pCVar12 = local_310;
      if (local_310 != (CookiesInfo *)0x0) {
        if (local_308 != local_310) {
          pCVar26 = local_308;
          do {
            pCVar26 = pCVar26 + -0x88;
            FUN_00e9c650(&pCStack_300,pCVar26);
          } while (pCVar12 != pCVar26);
        }
        local_308 = pCVar12;
        operator_delete(local_310);
      }
    }
    if ((local_2f8 & 1) != 0) {
      operator_delete(local_2e8);
    }
    local_190 = 0x16987e8;
    local_180 = 0x1698810;
    local_110[0] = 0x1698838;
    ppuStack_178 = &PTR__basic_stringbuf_01698960;
    if ((local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    ppuStack_178 = &PTR__basic_streambuf_01698a08;
    std::__ndk1::locale::~locale(alStack_170);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
    pbVar13 = local_2e0;
    if (local_2e0 != (basic_string *)0x0) {
      if (local_2d8 != local_2e0) {
        bVar5 = local_2d8[-0x18];
        pbVar22 = local_2d8 + -0x18;
        pbVar29 = local_2d8;
        while( true ) {
          pbVar19 = pbVar22;
          if (((byte)bVar5 & 1) != 0) {
            operator_delete(*(void **)(pbVar29 + -8));
          }
          if (pbVar13 == pbVar19) break;
          bVar5 = pbVar19[-0x18];
          pbVar22 = pbVar19 + -0x18;
          pbVar29 = pbVar19;
        }
      }
      local_2d8 = pbVar13;
      operator_delete(local_2e0);
    }
  }
  if (((byte)local_2c8[0] & 1) != 0) {
    operator_delete(local_2b8);
  }
LAB_00e9c0b0:
  if (*(long *)(lVar8 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

