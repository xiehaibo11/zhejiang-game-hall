
/* cocos2d::network::SIOClientImpl::handshakeResponse(cocos2d::network::HttpClient*,
   cocos2d::network::HttpResponse*) */

void __thiscall
cocos2d::network::SIOClientImpl::handshakeResponse
          (SIOClientImpl *this,HttpClient *param_1,HttpResponse *param_2)

{
  undefined1 *puVar1;
  basic_string bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  size_t __n;
  undefined **__dest;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  char *pcVar17;
  ulong uVar18;
  long *plVar19;
  HttpResponse *__s;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  ulong uVar23;
  ulong uVar24;
  char *pcVar25;
  byte bVar26;
  long *plVar27;
  byte bVar28;
  ulong local_258;
  ulong local_250;
  char *local_248;
  ulong local_240;
  char *pcStack_238;
  char *local_230;
  ulong local_228;
  char *pcStack_220;
  char *local_218;
  ulong local_210;
  char *pcStack_208;
  char *local_200;
  ulong local_1f8;
  char *local_1f0;
  char *local_1e8;
  undefined **local_1e0;
  size_t sStack_1d8;
  undefined **local_1d0;
  undefined **ppuStack_1c8;
  locale alStack_1c0 [8];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ulong local_188;
  undefined8 uStack_180;
  void *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined **local_160 [17];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar3 = tpidr_el0;
  lVar13 = *(long *)(lVar3 + 0x28);
  lVar14 = *(long *)(param_2 + 0x10);
  lVar15 = *(long *)(param_2 + 0x50);
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if ((*(byte *)(lVar14 + 0x40) & 1) == 0) {
    lVar14 = lVar14 + 0x41;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x50);
  }
  sprintf((char *)&local_c0,"HTTP Status Code: %ld, tag = %s",lVar15,lVar14);
  if ((399 < lVar15) || (param_2[0x18] == (HttpResponse)0x0)) {
    plVar27 = *(long **)(this + 0x188);
    if (plVar27 != (long *)0x0) {
      do {
        lVar14 = plVar27[5];
        plVar19 = *(long **)(lVar14 + 0x50);
        __s = param_2 + 0x59;
        if (((byte)param_2[0x58] & 1) != 0) {
          __s = *(HttpResponse **)(param_2 + 0x68);
        }
        local_1e0 = (undefined **)0x0;
        sStack_1d8 = 0;
        local_1d0 = (undefined **)0x0;
        __n = strlen((char *)__s);
        if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (__n < 0x17) {
          local_1e0 = (undefined **)CONCAT71(local_1e0._1_7_,(char)((int)__n << 1));
          __dest = (undefined **)((ulong)&local_1e0 | 1);
          if (__n != 0) goto LAB_009e2a50;
        }
        else {
          uVar18 = __n + 0x10 & 0xfffffffffffffff0;
          __dest = operator_new(uVar18);
                    /* try { // try from 009e2a40 to 00ae2a4f has its CatchHandler @ 009e2d40 */
          local_1e0 = (undefined **)(uVar18 | 1);
          sStack_1d8 = __n;
          local_1d0 = __dest;
LAB_009e2a50:
                    /* try { // try from 009e2a50 to 00ae2a63 has its CatchHandler @ 009e2d1c */
          memcpy(__dest,__s,__n);
        }
        *(undefined1 *)((long)__dest + __n) = 0;
        (**(code **)(*plVar19 + 0x28))(plVar19,lVar14,&local_1e0);
        if (((ulong)local_1e0 & 1) != 0) {
          operator_delete(local_1d0);
        }
        plVar27 = (long *)*plVar27;
      } while (plVar27 != (long *)0x0);
    }
                    /* try { // try from 009e2aa0 to 00ae2aa7 has its CatchHandler @ 009e2ce4 */
    (**(code **)(*(long *)this + 0x20))(this,0);
    goto LAB_009e2fec;
  }
  local_160[0] = (undefined **)0x1c670c8;
  local_1e0 = (undefined **)0x1c670a0;
  sStack_1d8 = 0;
  local_1d0 = &PTR__basic_stringstream_01c66fb0;
                    /* try { // try from 009e2828 to 00ae28db has its CatchHandler @ 009e2920 */
  std::__ndk1::ios_base::init
            ((ios_base *)local_160,
             (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &ppuStack_1c8);
  local_d8 = 0;
  local_d0 = 0xffffffff;
  ppuStack_1c8 = &PTR__basic_streambuf_01c671a8;
  local_1e0 = &PTR__basic_stringstream_01c66f88;
  local_160[0] = &PTR__basic_stringstream_01c66fd8;
  local_1d0 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_1c0);
  uStack_190 = 0;
  local_198 = 0;
  uStack_1a0 = 0;
  local_1a8 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  local_1f8 = 0;
  local_1f0 = (char *)0x0;
  local_1e8 = (char *)0x0;
  ppuStack_1c8 = &PTR__basic_stringbuf_01c67100;
  uStack_170 = 0;
  local_178 = (void *)0x0;
  uStack_180 = 0;
  local_188 = 0;
  local_168 = 0x18;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &ppuStack_1c8,(basic_string *)&local_1f8);
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8);
  }
  puVar16 = *(undefined1 **)(param_2 + 0x20);
  puVar1 = *(undefined1 **)(param_2 + 0x28);
  if (puVar16 != puVar1) {
    do {
                    /* try { // try from 009e28dc to 00ae293b has its CatchHandler @ 009e26e0 */
      local_1f8 = CONCAT71(local_1f8._1_7_,*puVar16);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_1d0,(char *)&local_1f8,1);
      puVar16 = puVar16 + 1;
    } while (puVar1 != puVar16);
  }
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  pcVar10 = local_1e8;
  pcVar21 = local_1f0;
  bVar2 = local_1f8._0_1_;
  pcVar17 = (char *)((ulong)&local_1f8 | 1);
  local_210 = 0;
  pcStack_208 = (char *)0x0;
  pcVar25 = (char *)(ulong)((byte)local_1f8._0_1_ >> 1);
                    /* catch() { ... } // from try @ 009e2828 with catch @ 009e2920 */
  pcVar20 = pcVar17;
  pcVar22 = pcVar25;
  if ((local_1f8 & 1) != 0) {
    pcVar20 = local_1e8;
    pcVar22 = local_1f0;
  }
  local_200 = (char *)0x0;
                    /* try { // try from 009e293c to 00ae2a3f has its CatchHandler @ 009e293c
                       catch() { ... } // from try @ 009e293c with catch @ 009e293c
                       catch() { ... } // from try @ 009e2ccc with catch @ 009e293c */
  if (((pcVar22 == (char *)0x0) ||
      (pvVar6 = memchr(pcVar20,0x7d,(size_t)pcVar22), pvVar6 == (void *)0x0)) ||
     ((long)pvVar6 - (long)pcVar20 == -1)) {
    bVar26 = (byte)bVar2 & 1;
    *(undefined4 *)(this + 0x16c) = 0;
    if (0 < (long)pcVar22) {
      pcVar9 = pcVar20;
      pcVar11 = pcVar22;
      while (pcVar9 = memchr(pcVar9,0x3a,(size_t)pcVar11), pcVar9 != (char *)0x0) {
        if (*pcVar9 == ':') {
          if ((pcVar9 != pcVar20 + (long)pcVar22) &&
             (pcVar9 = pcVar9 + -(long)pcVar20, pcVar9 != (char *)0xffffffffffffffff)) {
            pcVar25 = pcVar22;
            if (pcVar9 <= pcVar22) {
              pcVar25 = pcVar9;
            }
            local_228 = 0;
            pcStack_220 = (char *)0x0;
            local_218 = (char *)0x0;
            if ((char *)0xffffffffffffffef < pcVar25) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (pcVar25 < (char *)0x17) {
              pcVar21 = (char *)((ulong)&local_228 | 1);
              local_228 = (ulong)(byte)((int)pcVar25 << 1);
              if (pcVar25 != (char *)0x0) goto LAB_009e2e04;
            }
            else {
              pcVar21 = operator_new((ulong)(pcVar25 + 0x10) & 0xfffffffffffffff0);
              local_228 = (ulong)(pcVar25 + 0x10) & 0xfffffffffffffff0 | 1;
              pcStack_220 = pcVar25;
              local_218 = pcVar21;
LAB_009e2e04:
              memcpy(pcVar21,pcVar20,(size_t)pcVar25);
            }
            pcVar21[(long)pcVar25] = '\0';
            pcVar25 = pcVar22;
            if (pcVar9 + 1 <= pcVar22) {
              pcVar25 = pcVar9 + 1;
            }
            pcVar22 = pcVar22 + -(long)pcVar25;
            local_200 = local_218;
            pcStack_208 = pcStack_220;
            local_210 = local_228;
            if (pcVar22 != (char *)0x0) {
              memmove(pcVar20,pcVar20 + (long)pcVar25,(size_t)pcVar22);
              bVar2 = local_1f8._0_1_;
            }
            pcVar25 = pcVar22;
            if (((byte)bVar2 & 1) == 0) {
              local_1f8 = CONCAT71(local_1f8._1_7_,(char)((int)pcVar22 << 1));
              pcVar25 = local_1f0;
            }
            local_1f0 = pcVar25;
            pcVar20[(long)pcVar22] = '\0';
            bVar26 = (byte)local_1f8._0_1_ & 1;
            pcVar25 = (char *)(ulong)((byte)local_1f8._0_1_ >> 1);
            pcVar10 = local_1e8;
            pcVar21 = local_1f0;
          }
          break;
        }
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar20 + (long)pcVar22 + -(long)pcVar9;
        if ((long)pcVar11 < 1) break;
      }
    }
    pcVar20 = pcVar17;
    pcVar22 = pcVar25;
    if (bVar26 != 0) {
      pcVar20 = pcVar10;
      pcVar22 = pcVar21;
    }
    if ((long)pcVar22 < 1) {
      iVar4 = 0;
    }
    else {
                    /* try { // try from 009e2e9c to 00ae2e9f has its CatchHandler @ 009e2f40 */
      pcVar9 = pcVar20;
      pcVar11 = pcVar22;
      do {
        pcVar9 = memchr(pcVar9,0x3a,(size_t)pcVar11);
        if (pcVar9 == (char *)0x0) break;
        if (*pcVar9 == ':') {
                    /* try { // try from 009e3020 to 00ae303f has its CatchHandler @ 009e3198 */
          iVar4 = 0;
          if ((pcVar9 != pcVar20 + (long)pcVar22) && (iVar4 = 0, (long)pcVar9 - (long)pcVar20 != -1)
             ) {
            pcVar9 = (char *)(((long)pcVar9 - (long)pcVar20) + 1);
            local_228 = 0;
            pcStack_220 = (char *)0x0;
            local_218 = (char *)0x0;
            if (pcVar22 < pcVar9) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009e35bc to 00ae35d3 has its CatchHandler @ 009e37a0 */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            pcVar11 = pcVar22 + -(long)pcVar9;
            if (pcVar22 <= pcVar22 + -(long)pcVar9) {
              pcVar11 = pcVar22;
            }
            if ((char *)0xffffffffffffffef < pcVar11) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (pcVar11 < (char *)0x17) {
                    /* try { // try from 009e3060 to 00ae3077 has its CatchHandler @ 009e31e8 */
              pcVar22 = (char *)((ulong)&local_228 | 1);
              local_228 = (ulong)(byte)((int)pcVar11 << 1);
              if (pcVar11 != (char *)0x0) goto LAB_009e3100;
            }
            else {
                    /* try { // try from 009e30d8 to 00ae3113 has its CatchHandler @ 009e31e8 */
              pcVar22 = operator_new((ulong)(pcVar11 + 0x10) & 0xfffffffffffffff0);
              local_228 = (ulong)(pcVar11 + 0x10) & 0xfffffffffffffff0 | 1;
              pcStack_220 = pcVar11;
              local_218 = pcVar22;
LAB_009e3100:
              memcpy(pcVar22,pcVar20 + (long)pcVar9,(size_t)pcVar11);
            }
            pcVar20 = local_218;
            pcVar22[(long)pcVar11] = '\0';
            if ((local_228 & 1) == 0) {
              iVar4 = atoi((char *)((ulong)&local_228 | 1));
            }
            else {
                    /* try { // try from 009e3184 to 00ae318f has its CatchHandler @ 009e3198 */
              iVar4 = atoi(local_218);
                    /* try { // try from 009e3190 to 00ae323f has its CatchHandler @ 009e2f5c */
              operator_delete(pcVar20);
                    /* catch() { ... } // from try @ 009e3020 with catch @ 009e3198
                       catch() { ... } // from try @ 009e3184 with catch @ 009e3198 */
              bVar26 = (byte)local_1f8._0_1_ & 1;
              pcVar25 = (char *)(ulong)((byte)local_1f8._0_1_ >> 1);
              pcVar10 = local_1e8;
              pcVar21 = local_1f0;
            }
          }
          goto LAB_009e2ed8;
        }
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar20 + (long)pcVar22 + -(long)pcVar9;
      } while (0 < (long)pcVar11);
      iVar4 = 0;
    }
LAB_009e2ed8:
    if (bVar26 != 0) {
      pcVar25 = pcVar21;
      pcVar17 = pcVar10;
    }
                    /* try { // try from 009e2ee4 to 00ae2eeb has its CatchHandler @ 009e2f2c */
    if (0 < (long)pcVar25) {
                    /* try { // try from 009e2eec to 00ae2f1f has its CatchHandler @ 009e2d60 */
      pcVar20 = pcVar17;
      pcVar22 = pcVar25;
      do {
        pcVar20 = memchr(pcVar20,0x3a,(size_t)pcVar22);
        if (pcVar20 == (char *)0x0) break;
        if (*pcVar20 == ':') {
                    /* try { // try from 009e307c to 00ae30bf has its CatchHandler @ 009e31b8 */
          iVar5 = 0;
          if ((pcVar20 != pcVar17 + (long)pcVar25) && ((long)pcVar20 - (long)pcVar17 != -1)) {
            pcVar20 = (char *)(((long)pcVar20 - (long)pcVar17) + 1);
            local_228 = 0;
            pcStack_220 = (char *)0x0;
            local_218 = (char *)0x0;
            if (pcVar25 < pcVar20) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            pcVar22 = pcVar25 + -(long)pcVar20;
            if (pcVar25 <= pcVar25 + -(long)pcVar20) {
              pcVar22 = pcVar25;
            }
            if ((char *)0xffffffffffffffef < pcVar22) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009e35d8 to 00ae361b has its CatchHandler @ 009e3770 */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (pcVar22 < (char *)0x17) {
              pcVar25 = (char *)((ulong)&local_228 | 1);
              local_228 = (ulong)(byte)((int)pcVar22 << 1);
              if (pcVar22 != (char *)0x0) goto LAB_009e3150;
            }
            else {
              pcVar25 = operator_new((ulong)(pcVar22 + 0x10) & 0xfffffffffffffff0);
              local_228 = (ulong)(pcVar22 + 0x10) & 0xfffffffffffffff0 | 1;
              pcStack_220 = pcVar22;
              local_218 = pcVar25;
LAB_009e3150:
              memcpy(pcVar25,pcVar17 + (long)pcVar20,(size_t)pcVar22);
            }
            pcVar20 = local_218;
            pcVar25[(long)pcVar22] = '\0';
            if ((local_228 & 1) == 0) {
              iVar5 = atoi((char *)((ulong)&local_228 | 1));
            }
            else {
              iVar5 = atoi(local_218);
                    /* catch() { ... } // from try @ 009e300c with catch @ 009e31b8
                       catch() { ... } // from try @ 009e307c with catch @ 009e31b8 */
              operator_delete(pcVar20);
            }
          }
          goto LAB_009e2f30;
        }
        pcVar20 = pcVar20 + 1;
        pcVar22 = pcVar17 + (long)pcVar25 + -(long)pcVar20;
                    /* try { // try from 009e2f20 to 00ae2f27 has its CatchHandler @ 009e2f2c */
      } while (0 < (long)pcVar22);
    }
                    /* catch() { ... } // from try @ 009e2ee4 with catch @ 009e2f2c
                       catch() { ... } // from try @ 009e2f20 with catch @ 009e2f2c */
    iVar5 = 0;
  }
  else {
    *(undefined4 *)(this + 0x16c) = 1;
    pvVar6 = memchr(pcVar20,0x7b,(size_t)pcVar22);
    pcVar25 = (char *)((long)pvVar6 - (long)pcVar20);
    if (pvVar6 == (void *)0x0) {
      pcVar25 = (char *)0xffffffffffffffff;
    }
    pcVar17 = pcVar22 + -(long)pcVar25;
    local_228 = 0;
    pcStack_220 = (char *)0x0;
    local_218 = (char *)0x0;
    if (pcVar22 < pcVar25) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    if ((char *)0xffffffffffffffef < pcVar17) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009e3578 to 00ae357f has its CatchHandler @ 009e3770 */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pcVar17 < (char *)0x17) {
      pcVar21 = (char *)((ulong)&local_228 | 1);
      local_228 = (ulong)(byte)((int)pcVar17 << 1);
      pcVar22 = pcVar21;
      if (pcVar17 != (char *)0x0) goto LAB_009e2b78;
    }
    else {
                    /* try { // try from 009e2b5c to 00ae2b6f has its CatchHandler @ 009e2ce0 */
      pcVar21 = operator_new((ulong)(pcVar17 + 0x10) & 0xfffffffffffffff0);
      local_228 = (ulong)(pcVar17 + 0x10) & 0xfffffffffffffff0 | 1;
      pcVar22 = (char *)((ulong)&local_228 | 1);
      pcStack_220 = pcVar17;
      local_218 = pcVar21;
LAB_009e2b78:
      memcpy(pcVar21,pcVar20 + (long)pcVar25,(size_t)pcVar17);
    }
    pcVar9 = local_218;
    pcVar10 = pcStack_220;
    pcVar21[(long)pcVar17] = '\0';
    bVar26 = (byte)local_228;
    uVar18 = local_228 & 0xff;
    pcVar25 = (char *)(ulong)((byte)local_228 >> 1);
    pcVar20 = pcVar25;
    pcVar17 = pcVar22;
    if ((local_228 & 1) != 0) {
      pcVar20 = pcStack_220;
      pcVar17 = local_218;
    }
    pcVar21 = pcVar17 + (long)pcVar20;
                    /* try { // try from 009e2bac to 00ae2bb3 has its CatchHandler @ 009e2cdc */
    pcVar11 = pcVar17;
    pcVar12 = pcVar20;
    if ((long)pcVar20 < 1) {
      lVar14 = -1;
      pcVar11 = pcVar21;
    }
    else {
      do {
        pcVar7 = memchr(pcVar11,0x3a,(size_t)pcVar12);
        pcVar8 = pcVar21;
        if ((pcVar7 == (char *)0x0) || (pcVar8 = pcVar7, *pcVar7 == ':')) break;
        pcVar11 = pcVar7 + 1;
        pcVar8 = pcVar21;
        pcVar12 = pcVar21 + -(long)(pcVar7 + 1);
      } while (0 < (long)(pcVar21 + -(long)(pcVar7 + 1)));
      lVar14 = (long)pcVar8 - (long)pcVar17;
      pcVar12 = pcVar20;
      pcVar7 = pcVar17;
      if (pcVar8 == pcVar21) {
        lVar14 = -1;
      }
      while (((pcVar11 = pcVar21, 0 < (long)pcVar12 &&
              (pcVar8 = memchr(pcVar7,0x2c,(size_t)pcVar12), pcVar8 != (char *)0x0)) &&
             (pcVar11 = pcVar8, *pcVar8 != ','))) {
        pcVar12 = pcVar21 + -(long)(pcVar8 + 1);
        pcVar7 = pcVar8 + 1;
      }
    }
    lVar15 = (long)pcVar11 - (long)pcVar17;
    pcVar12 = (char *)(lVar14 + 2);
    if (pcVar11 == pcVar21) {
      lVar15 = -1;
    }
    local_240 = 0;
    pcStack_238 = (char *)0x0;
                    /* try { // try from 009e2c50 to 00ae2ccb has its CatchHandler @ 009e2d44 */
    local_230 = (char *)0x0;
    if (pcVar20 < pcVar12) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    pcVar21 = (char *)((-3 - lVar14) + lVar15);
    pcVar11 = pcVar20 + -(long)pcVar12;
    if (pcVar21 <= pcVar20 + -(long)pcVar12) {
      pcVar11 = pcVar21;
    }
    if ((char *)0xffffffffffffffef < pcVar11) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pcVar11 < (char *)0x17) {
      pcVar21 = (char *)((ulong)&local_240 | 1);
      local_240 = (ulong)(byte)((int)pcVar11 << 1);
      if (pcVar11 != (char *)0x0) goto LAB_009e2cc4;
    }
    else {
      pcVar21 = operator_new((ulong)(pcVar11 + 0x10) & 0xfffffffffffffff0);
      local_240 = (ulong)(pcVar11 + 0x10) & 0xfffffffffffffff0 | 1;
      pcStack_238 = pcVar11;
      local_230 = pcVar21;
LAB_009e2cc4:
                    /* try { // try from 009e2ccc to 00ae2d5f has its CatchHandler @ 009e293c */
      memcpy(pcVar21,pcVar17 + (long)pcVar12,(size_t)pcVar11);
    }
    pcVar21[(long)pcVar11] = '\0';
                    /* catch() { ... } // from try @ 009e2bac with catch @ 009e2cdc */
                    /* catch() { ... } // from try @ 009e2b5c with catch @ 009e2ce0 */
    pcVar21 = (char *)(lVar15 + 1);
                    /* catch() { ... } // from try @ 009e2aa0 with catch @ 009e2ce4 */
    local_200 = local_230;
    pcStack_208 = pcStack_238;
    local_210 = local_240;
    if (pcVar21 != (char *)0x0) {
      pcVar25 = pcVar20;
      if (pcVar21 <= pcVar20) {
        pcVar25 = pcVar21;
      }
      pcVar20 = pcVar20 + -(long)pcVar25;
      if (pcVar20 != (char *)0x0) {
        memmove(pcVar17,pcVar17 + (long)pcVar25,(size_t)pcVar20);
        uVar18 = local_228 & 0xff;
      }
      pcVar25 = pcVar20;
      if ((uVar18 & 1) == 0) {
                    /* catch() { ... } // from try @ 009e2a50 with catch @ 009e2d1c */
        local_228 = CONCAT71(local_228._1_7_,(char)((int)pcVar20 << 1));
        pcVar25 = pcStack_220;
      }
      pcStack_220 = pcVar25;
                    /* catch() { ... } // from try @ 009e2b4c with catch @ 009e2d3c */
      pcVar17[(long)pcVar20] = '\0';
                    /* catch() { ... } // from try @ 009e2a40 with catch @ 009e2d40 */
      uVar18 = local_228 & 0xff;
      pcVar25 = (char *)(ulong)((byte)local_228 >> 1);
      pcVar10 = pcStack_220;
      pcVar9 = local_218;
      bVar26 = (byte)local_228;
                    /* catch() { ... } // from try @ 009e2c50 with catch @ 009e2d44 */
    }
    bVar28 = bVar26 & 1;
    pcVar20 = pcVar22;
    pcVar17 = pcVar25;
    if ((bVar26 & 1) != 0) {
      pcVar20 = pcVar9;
      pcVar17 = pcVar10;
    }
                    /* try { // try from 009e2d60 to 00ae2e9b has its CatchHandler @ 009e2d60
                       catch() { ... } // from try @ 009e2d60 with catch @ 009e2d60
                       catch() { ... } // from try @ 009e2eec with catch @ 009e2d60
                       catch() { ... } // from try @ 009e2f28 with catch @ 009e2d60 */
    if (0 < (long)pcVar17) {
      pcVar21 = pcVar20;
      pcVar11 = pcVar17;
      while (pcVar21 = memchr(pcVar21,0x2c,(size_t)pcVar11), pcVar21 != (char *)0x0) {
        if (*pcVar21 == ',') {
          if ((pcVar21 != pcVar20 + (long)pcVar17) &&
             (pcVar21 = pcVar21 + (1 - (long)pcVar20), pcVar21 != (char *)0x0)) {
            pcVar25 = pcVar17;
            if (pcVar21 <= pcVar17) {
              pcVar25 = pcVar21;
            }
            pcVar17 = pcVar17 + -(long)pcVar25;
            if (pcVar17 != (char *)0x0) {
              memmove(pcVar20,pcVar20 + (long)pcVar25,(size_t)pcVar17);
              uVar18 = local_228 & 0xff;
            }
            pcVar25 = pcVar17;
            if ((uVar18 & 1) == 0) {
              local_228 = CONCAT71(local_228._1_7_,(char)((int)pcVar17 << 1));
              pcVar25 = pcStack_220;
            }
            pcStack_220 = pcVar25;
                    /* catch() { ... } // from try @ 009e2fdc with catch @ 009e31d0 */
            pcVar20[(long)pcVar17] = '\0';
                    /* catch() { ... } // from try @ 009e2fd0 with catch @ 009e31d4 */
            uVar18 = local_228 & 0xff;
                    /* catch() { ... } // from try @ 009e2fb0 with catch @ 009e31d8 */
            bVar28 = (byte)local_228 & 1;
            pcVar25 = (char *)(ulong)((byte)local_228 >> 1);
            pcVar10 = pcStack_220;
            pcVar9 = local_218;
          }
          break;
        }
        pcVar21 = pcVar21 + 1;
        pcVar11 = pcVar20 + (long)pcVar17 + -(long)pcVar21;
        if ((long)pcVar11 < 1) break;
      }
    }
    pcVar20 = pcVar25;
    pcVar17 = pcVar22;
                    /* catch() { ... } // from try @ 009e2fe8 with catch @ 009e31e8
                       catch() { ... } // from try @ 009e3060 with catch @ 009e31e8
                       catch() { ... } // from try @ 009e30d8 with catch @ 009e31e8 */
    if (bVar28 != 0) {
      pcVar20 = pcVar10;
      pcVar17 = pcVar9;
    }
    pcVar21 = pcVar17 + (long)pcVar20;
    pcVar11 = pcVar17;
    pcVar12 = pcVar20;
    if ((long)pcVar20 < 1) {
      lVar14 = -1;
      pcVar11 = pcVar21;
    }
    else {
      do {
        pcVar7 = memchr(pcVar11,0x3a,(size_t)pcVar12);
        pcVar8 = pcVar21;
        if ((pcVar7 == (char *)0x0) || (pcVar8 = pcVar7, *pcVar7 == ':')) break;
        pcVar11 = pcVar7 + 1;
        pcVar8 = pcVar21;
        pcVar12 = pcVar21 + -(long)(pcVar7 + 1);
      } while (0 < (long)(pcVar21 + -(long)(pcVar7 + 1)));
      lVar14 = (long)pcVar8 - (long)pcVar17;
                    /* try { // try from 009e3240 to 00ae3293 has its CatchHandler @ 009e3240
                       catch() { ... } // from try @ 009e3240 with catch @ 009e3240
                       catch() { ... } // from try @ 009e33f0 with catch @ 009e3240 */
      pcVar12 = pcVar20;
      pcVar7 = pcVar17;
      if (pcVar8 == pcVar21) {
        lVar14 = -1;
      }
      while (((pcVar11 = pcVar21, 0 < (long)pcVar12 &&
              (pcVar8 = memchr(pcVar7,0x2c,(size_t)pcVar12), pcVar8 != (char *)0x0)) &&
             (pcVar11 = pcVar8, *pcVar8 != ','))) {
        pcVar12 = pcVar21 + -(long)(pcVar8 + 1);
        pcVar7 = pcVar8 + 1;
      }
    }
    lVar15 = (long)pcVar11 - (long)pcVar17;
                    /* try { // try from 009e3294 to 00ae32ab has its CatchHandler @ 009e345c */
    pcVar12 = (char *)(lVar14 + 1);
    if (pcVar11 == pcVar21) {
      lVar15 = -1;
    }
    local_240 = 0;
    pcStack_238 = (char *)0x0;
    local_230 = (char *)0x0;
    if (pcVar20 < pcVar12) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar24 = (long)pcVar20 - (long)pcVar12;
                    /* try { // try from 009e32b4 to 00ae32bf has its CatchHandler @ 009e3440 */
    if ((ulong)(lVar15 - lVar14) <= (ulong)((long)pcVar20 - (long)pcVar12)) {
      uVar24 = lVar15 - lVar14;
    }
    if (0xffffffffffffffef < uVar24) {
                    /* try { // try from 009e3594 to 00ae35ab has its CatchHandler @ 009e3750 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
                    /* try { // try from 009e32c0 to 00ae32cb has its CatchHandler @ 009e343c */
                    /* try { // try from 009e32cc to 00ae32d3 has its CatchHandler @ 009e346c */
    if (uVar24 < 0x17) {
      pcVar11 = (char *)((ulong)&local_240 | 1);
      local_240 = (ulong)(byte)((int)uVar24 << 1);
      pcVar21 = pcVar11;
      if (uVar24 != 0) goto LAB_009e3318;
    }
    else {
                    /* try { // try from 009e32f0 to 00ae3303 has its CatchHandler @ 009e3444 */
      uVar23 = uVar24 + 0x10 & 0xfffffffffffffff0;
      pcVar11 = operator_new(uVar23);
      local_240 = uVar23 | 1;
      pcVar21 = (char *)((ulong)&local_240 | 1);
      pcStack_238 = (char *)uVar24;
      local_230 = pcVar11;
LAB_009e3318:
                    /* try { // try from 009e3320 to 00ae3373 has its CatchHandler @ 009e346c */
      memcpy(pcVar11,pcVar17 + (long)pcVar12,uVar24);
    }
    pcVar11[uVar24] = '\0';
    if ((local_240 & 1) != 0) {
      pcVar21 = local_230;
    }
    iVar4 = atoi(pcVar21);
    pcVar21 = (char *)(lVar15 + 1);
    if (pcVar21 != (char *)0x0) {
      pcVar25 = pcVar20;
      if (pcVar21 <= pcVar20) {
        pcVar25 = pcVar21;
      }
      pcVar20 = pcVar20 + -(long)pcVar25;
      if (pcVar20 != (char *)0x0) {
        memmove(pcVar17,pcVar17 + (long)pcVar25,(size_t)pcVar20);
        uVar18 = local_228 & 0xff;
      }
      pcVar25 = pcVar20;
      if ((uVar18 & 1) == 0) {
        local_228 = CONCAT71(local_228._1_7_,(char)((int)pcVar20 << 1));
        pcVar25 = pcStack_220;
      }
      pcStack_220 = pcVar25;
      pcVar17[(long)pcVar20] = '\0';
      bVar28 = (byte)local_228 & 1;
      pcVar25 = (char *)(ulong)((byte)local_228 >> 1);
      pcVar10 = pcStack_220;
      pcVar9 = local_218;
    }
                    /* try { // try from 009e33ac to 00ae33ef has its CatchHandler @ 009e3444 */
    if (bVar28 != 0) {
      pcVar25 = pcVar10;
      pcVar22 = pcVar9;
    }
    pcVar20 = pcVar22 + (long)pcVar25;
    pcVar17 = pcVar22;
    pcVar21 = pcVar25;
    if ((long)pcVar25 < 1) {
                    /* catch() { ... } // from try @ 009e32b4 with catch @ 009e3440 */
                    /* catch() { ... } // from try @ 009e32f0 with catch @ 009e3444
                       catch() { ... } // from try @ 009e33ac with catch @ 009e3444 */
      lVar14 = -1;
      pcVar17 = pcVar20;
    }
    else {
      do {
        pcVar9 = memchr(pcVar17,0x3a,(size_t)pcVar21);
        pcVar10 = pcVar20;
        if ((pcVar9 == (char *)0x0) || (pcVar10 = pcVar9, *pcVar9 == ':')) break;
                    /* try { // try from 009e33f0 to 00ae34c3 has its CatchHandler @ 009e3240 */
        pcVar17 = pcVar9 + 1;
        pcVar10 = pcVar20;
        pcVar21 = pcVar20 + -(long)(pcVar9 + 1);
      } while (0 < (long)(pcVar20 + -(long)(pcVar9 + 1)));
      lVar14 = (long)pcVar10 - (long)pcVar22;
      pcVar21 = pcVar25;
      pcVar9 = pcVar22;
      if (pcVar10 == pcVar20) {
        lVar14 = -1;
      }
      while (((pcVar17 = pcVar20, 0 < (long)pcVar21 &&
              (pcVar10 = memchr(pcVar9,0x7d,(size_t)pcVar21), pcVar10 != (char *)0x0)) &&
             (pcVar17 = pcVar10, *pcVar10 != '}'))) {
        pcVar21 = pcVar20 + -(long)(pcVar10 + 1);
        pcVar9 = pcVar10 + 1;
      }
    }
    lVar15 = (long)pcVar17 - (long)pcVar22;
    pcVar21 = (char *)(lVar14 + 1);
    if (pcVar17 == pcVar20) {
      lVar15 = -1;
    }
                    /* catch() { ... } // from try @ 009e3294 with catch @ 009e345c */
    local_258 = 0;
    local_250 = 0;
    local_248 = (char *)0x0;
    if (pcVar25 < pcVar21) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
                    /* catch() { ... } // from try @ 009e32cc with catch @ 009e346c
                       catch() { ... } // from try @ 009e3320 with catch @ 009e346c */
    uVar18 = (long)pcVar25 - (long)pcVar21;
    if ((ulong)(lVar15 - lVar14) <= (ulong)((long)pcVar25 - (long)pcVar21)) {
      uVar18 = lVar15 - lVar14;
    }
    if (0xffffffffffffffef < uVar18) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar18 < 0x17) {
      pcVar20 = (char *)((ulong)&local_258 | 1);
      local_258 = (ulong)(byte)((int)uVar18 << 1);
      if (uVar18 != 0) goto LAB_009e34c0;
    }
    else {
      uVar24 = uVar18 + 0x10 & 0xfffffffffffffff0;
      pcVar20 = operator_new(uVar24);
      local_258 = uVar24 | 1;
      local_250 = uVar18;
      local_248 = pcVar20;
LAB_009e34c0:
                    /* try { // try from 009e34c4 to 00ae3517 has its CatchHandler @ 009e34c4
                       catch() { ... } // from try @ 009e34c4 with catch @ 009e34c4
                       catch() { ... } // from try @ 009e36dc with catch @ 009e34c4 */
      memcpy(pcVar20,pcVar22 + (long)pcVar21,uVar18);
    }
    pcVar25 = local_248;
    pcVar20[uVar18] = '\0';
    if ((local_258 & 1) == 0) {
      iVar5 = atoi((char *)((ulong)&local_258 | 1));
    }
    else {
      iVar5 = atoi(local_248);
                    /* try { // try from 009e3518 to 00ae352f has its CatchHandler @ 009e3790 */
      operator_delete(pcVar25);
    }
                    /* try { // try from 009e3538 to 00ae3543 has its CatchHandler @ 009e378c */
    if ((local_240 & 1) != 0) {
      operator_delete(local_230);
    }
                    /* try { // try from 009e3544 to 00ae354f has its CatchHandler @ 009e3788 */
    iVar4 = iVar4 / 1000;
    iVar5 = iVar5 / 1000;
                    /* try { // try from 009e3550 to 00ae3557 has its CatchHandler @ 009e37a0 */
    if ((local_228 & 1) != 0) {
      operator_delete(local_218);
    }
  }
LAB_009e2f30:
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x20) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_210)
  {
                    /* catch() { ... } // from try @ 009e2e9c with catch @ 009e2f40 */
    pcVar20 = (char *)(local_210 >> 1 & 0x7f);
    pcVar25 = (char *)((ulong)&local_210 | 1);
    if ((local_210 & 1) != 0) {
      pcVar20 = pcStack_208;
      pcVar25 = local_200;
    }
                    /* try { // try from 009e2f5c to 00ae2faf has its CatchHandler @ 009e2f5c
                       catch() { ... } // from try @ 009e2f5c with catch @ 009e2f5c
                       catch() { ... } // from try @ 009e3190 with catch @ 009e2f5c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x20),pcVar25,(ulong)pcVar20);
  }
  *(int *)(this + 0x18) = iVar4;
  *(int *)(this + 0x1c) = iVar5;
  openSocket(this);
  if ((local_210 & 1) != 0) {
    operator_delete(local_200);
  }
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8);
  }
  local_1e0 = &PTR__basic_stringstream_01c66f88;
  local_160[0] = &PTR__basic_stringstream_01c66fd8;
                    /* try { // try from 009e2fb0 to 00ae2fc7 has its CatchHandler @ 009e31d8 */
  local_1d0 = &PTR__basic_stringstream_01c66fb0;
  ppuStack_1c8 = &PTR__basic_stringbuf_01c67100;
  if ((local_188 & 1) != 0) {
    operator_delete(local_178);
  }
                    /* try { // try from 009e2fd0 to 00ae2fdb has its CatchHandler @ 009e31d4 */
  ppuStack_1c8 = &PTR__basic_streambuf_01c671a8;
                    /* try { // try from 009e2fdc to 00ae2fe7 has its CatchHandler @ 009e31d0 */
  std::__ndk1::locale::~locale(alStack_1c0);
                    /* try { // try from 009e2fe8 to 00ae2fef has its CatchHandler @ 009e31e8 */
  std::__ndk1::ios_base::~ios_base((ios_base *)local_160);
LAB_009e2fec:
  if (*(long *)(lVar3 + 0x28) == lVar13) {
                    /* try { // try from 009e300c to 00ae3013 has its CatchHandler @ 009e31b8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

