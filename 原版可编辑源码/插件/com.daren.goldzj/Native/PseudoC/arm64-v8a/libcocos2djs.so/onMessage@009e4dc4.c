
/* cocos2d::network::SIOClientImpl::onMessage(cocos2d::network::WebSocket*,
   cocos2d::network::WebSocket::Data const&) */

void __thiscall
cocos2d::network::SIOClientImpl::onMessage(SIOClientImpl *this,WebSocket *param_1,Data *param_2)

{
  ulong uVar1;
  ulong __n;
  char cVar2;
  basic_string bVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  int iVar6;
  Data *pDVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  Data *pDVar11;
  size_t sVar12;
  ulong uVar13;
  Data *pDVar14;
  long lVar15;
  Data *pDVar16;
  char *pcVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  SIOClient *pSVar22;
  char *pcVar23;
  char *pcVar24;
  basic_string local_108;
  undefined4 uStack_107;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined1 uStack_100;
  undefined2 uStack_ff;
  undefined1 uStack_fd;
  undefined4 uStack_fc;
  char *local_f8;
  ulong local_f0;
  Data *pDStack_e8;
  char *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0;
  undefined4 uStack_cf;
  undefined2 uStack_cb;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined2 uStack_c7;
  undefined1 uStack_c5;
  undefined4 uStack_c4;
  char *local_c0;
  ulong local_b0;
  Data *pDStack_a8;
  char *local_a0;
  ulong local_90;
  Data *pDStack_88;
  char *local_80;
  long local_70;
  
                    /* catch() { ... } // from try @ 009e4b7c with catch @ 009e4dc8 */
                    /* catch() { ... } // from try @ 009e4bc8 with catch @ 009e4dd8
                       catch() { ... } // from try @ 009e4c30 with catch @ 009e4dd8 */
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pcVar17 = *(char **)param_2;
  local_90 = 0;
  pDStack_88 = (Data *)0x0;
  local_80 = (char *)0x0;
  pDVar7 = (Data *)strlen(pcVar17);
  if ((Data *)0xffffffffffffffef < pDVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (pDVar7 < (Data *)0x17) {
    pcVar23 = (char *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)pDVar7 << 1));
    pcVar24 = pcVar23;
    if (pDVar7 != (Data *)0x0) goto LAB_009e4e60;
  }
  else {
                    /* try { // try from 009e4e38 to 00ae4e8b has its CatchHandler @ 009e4e38
                       catch() { ... } // from try @ 009e4e38 with catch @ 009e4e38
                       catch() { ... } // from try @ 009e4f44 with catch @ 009e4e38 */
    pcVar23 = operator_new((ulong)(pDVar7 + 0x10) & 0xfffffffffffffff0);
    local_90 = (ulong)(pDVar7 + 0x10) & 0xfffffffffffffff0 | 1;
    pcVar24 = (char *)((ulong)&local_90 | 1);
    pDStack_88 = pDVar7;
    local_80 = pcVar23;
LAB_009e4e60:
    param_2 = pDVar7;
    memcpy(pcVar23,pcVar17,(size_t)pDVar7);
  }
  pcVar17 = local_80;
  uVar19 = local_90;
  pcVar23[(long)pDVar7] = '\0';
  pDStack_a8 = (Data *)0x0;
  local_a0 = (char *)0x0;
  pDVar7 = (Data *)(local_90 >> 1 & 0x7f);
                    /* try { // try from 009e4e8c to 00ae4e97 has its CatchHandler @ 009e4f80 */
  if ((local_90 & 1) != 0) {
    pDVar7 = pDStack_88;
  }
  pDVar16 = (Data *)(ulong)(pDVar7 != (Data *)0x0);
                    /* try { // try from 009e4e98 to 00ae4e9f has its CatchHandler @ 009e4f7c */
  local_b0 = (ulong)(byte)((pDVar7 != (Data *)0x0) << 1);
                    /* try { // try from 009e4ea0 to 00ae4f43 has its CatchHandler @ 009e4f88 */
  if (pDVar7 != (Data *)0x0) {
    pcVar23 = pcVar24;
    if ((local_90 & 1) != 0) {
      pcVar23 = local_80;
    }
    param_2 = pDVar16;
    memcpy((void *)((ulong)&local_b0 | 1),pcVar23,(size_t)pDVar16);
  }
  ((char *)((ulong)&local_b0 | 1))[(long)pDVar16] = '\0';
  iVar6 = atoi((char *)((ulong)&local_b0 | 1));
  local_b0 = 0;
  pDStack_a8 = (Data *)0x0;
  local_a0 = (char *)0x0;
  if (pDVar7 == (Data *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  pDVar16 = pDVar7 + -1;
  pcVar23 = pcVar24;
  if ((uVar19 & 1) != 0) {
    pcVar23 = pcVar17;
  }
  if ((Data *)0xffffffffffffffef < pDVar16) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (pDVar16 < (Data *)0x17) {
    pcVar18 = (char *)((ulong)&local_b0 | 1);
    local_b0 = (ulong)(byte)((int)pDVar16 << 1);
    if (pDVar16 != (Data *)0x0) goto LAB_009e4f3c;
    *pcVar18 = '\0';
  }
  else {
    pcVar18 = operator_new((ulong)(pDVar7 + 0xf) & 0xfffffffffffffff0);
    local_b0 = (ulong)(pDVar7 + 0xf) & 0xfffffffffffffff0 | 1;
    pDStack_a8 = pDVar16;
    local_a0 = pcVar18;
LAB_009e4f3c:
    param_2 = pDVar16;
                    /* try { // try from 009e4f44 to 00ae4fa3 has its CatchHandler @ 009e4e38 */
    memcpy(pcVar18,pcVar23 + 1,(size_t)pDVar16);
    pcVar18[(long)pDVar16] = '\0';
  }
  if ((uVar19 & 1) != 0) {
    *pcVar17 = '\0';
    pDStack_88 = (Data *)0x0;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  pcVar17 = local_a0;
  pDVar7 = pDStack_a8;
  uVar19 = local_b0;
  local_80 = local_a0;
                    /* catch() { ... } // from try @ 009e4e98 with catch @ 009e4f7c */
  pDStack_88 = pDStack_a8;
  local_90 = local_b0;
                    /* catch() { ... } // from try @ 009e4e8c with catch @ 009e4f80 */
  local_90._0_1_ = SUB81(local_b0,0);
  local_90 = uVar19;
  if (*(int *)(this + 0x16c) == 0) {
    uVar20 = local_b0 & 0xff;
    local_b0 = 0;
    pDStack_a8 = (Data *)0x0;
    local_a0 = (char *)0x0;
    pDVar16 = (Data *)(ulong)((byte)local_90._0_1_ >> 1);
    pcVar23 = pcVar24;
    pDVar14 = pDVar16;
    if ((uVar19 & 1) != 0) {
      pcVar23 = pcVar17;
      pDVar14 = pDVar7;
    }
    bVar21 = (byte)local_90._0_1_ & 1;
    local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    uStack_cf = 0;
    uStack_cb = 0;
    uStack_c9 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c5 = 0;
    uStack_c4 = 0;
                    /* try { // try from 009e4ffc to 00ae5003 has its CatchHandler @ 009e526c */
    local_c0 = (char *)0x0;
    local_f0 = 0;
    pDStack_e8 = (Data *)0x0;
    local_e0 = (char *)0x0;
                    /* try { // try from 009e5008 to 00ae500f has its CatchHandler @ 009e5264 */
    if (0 < (long)pDVar14) {
                    /* try { // try from 009e5010 to 00ae501f has its CatchHandler @ 009e525c */
      pcVar18 = pcVar23;
      pDVar11 = pDVar14;
      while (pcVar18 = memchr(pcVar18,0x3a,(size_t)pDVar11), pcVar18 != (char *)0x0) {
                    /* try { // try from 009e5028 to 00ae5063 has its CatchHandler @ 009e5274 */
        if (*pcVar18 == ':') {
          if ((pcVar18 != pcVar23 + (long)pDVar14) &&
             (lVar9 = (long)pcVar18 - (long)pcVar23, lVar9 != -1)) {
            pDVar7 = pDVar14;
            if ((Data *)(lVar9 + 1) <= pDVar14) {
              pDVar7 = (Data *)(lVar9 + 1);
            }
            pDVar14 = pDVar14 + -(long)pDVar7;
            if (pDVar14 != (Data *)0x0) {
              memmove(pcVar23,pcVar23 + (long)pDVar7,(size_t)pDVar14);
              uVar20 = local_90 & 0xff;
            }
            pDVar7 = pDVar14;
            if ((uVar20 & 1) == 0) {
              local_90 = CONCAT71(local_90._1_7_,(char)((int)pDVar14 << 1));
              pDVar7 = pDStack_88;
            }
            pDStack_88 = pDVar7;
            pcVar23[(long)pDVar14] = '\0';
            uVar20 = local_90 & 0xff;
            bVar21 = (byte)local_90._0_1_ & 1;
            pDVar16 = (Data *)(ulong)((byte)local_90._0_1_ >> 1);
            pcVar17 = local_80;
            pDVar7 = pDStack_88;
          }
          break;
        }
        pcVar18 = pcVar18 + 1;
        pDVar11 = (Data *)(pcVar23 + (long)pDVar14 + -(long)pcVar18);
        if ((long)pDVar11 < 1) break;
      }
    }
    pDVar14 = pDVar16;
    pcVar23 = pcVar24;
    if (bVar21 != 0) {
      pDVar14 = pDVar7;
      pcVar23 = pcVar17;
    }
    if (0 < (long)pDVar14) {
      pcVar17 = pcVar23;
      pDVar11 = pDVar14;
      while (pcVar17 = memchr(pcVar17,0x3a,(size_t)pDVar11), pcVar17 != (char *)0x0) {
                    /* try { // try from 009e522c to 00ae52e3 has its CatchHandler @ 009e4fa4 */
        if (*pcVar17 == ':') {
                    /* catch() { ... } // from try @ 009e5064 with catch @ 009e5258 */
                    /* catch() { ... } // from try @ 009e5010 with catch @ 009e525c */
          if ((pcVar17 != pcVar23 + (long)pDVar14) &&
             (lVar9 = (long)pcVar17 - (long)pcVar23, lVar9 != -1)) {
                    /* catch() { ... } // from try @ 009e5008 with catch @ 009e5264 */
            if ((Data *)(lVar9 + 1) <= pDVar14) {
              pDVar14 = (Data *)(lVar9 + 1);
            }
                    /* catch() { ... } // from try @ 009e4ffc with catch @ 009e526c */
            local_108 = (basic_string)0x0;
            uStack_107 = 0;
            uStack_103 = 0;
            uStack_102 = 0;
            uStack_101 = 0;
            uStack_100 = 0;
            uStack_ff = 0;
            uStack_fd = 0;
            uStack_fc = 0;
                    /* catch() { ... } // from try @ 009e5028 with catch @ 009e5274 */
            local_f8 = (char *)0x0;
            if ((Data *)0xffffffffffffffef < pDVar14) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (pDVar14 < (Data *)0x17) {
                    /* catch() { ... } // from try @ 009e5074 with catch @ 009e5284
                       catch() { ... } // from try @ 009e50dc with catch @ 009e5284 */
              pcVar17 = (char *)((ulong)&local_108 | 1);
              local_108 = SUB41((int)pDVar14 << 1,0);
              if (pDVar14 != (Data *)0x0) goto LAB_009e52c0;
            }
            else {
              uVar19 = (ulong)(pDVar14 + 0x10) & 0xfffffffffffffff0;
              pcVar17 = operator_new(uVar19);
              uStack_100 = SUB81(pDVar14,0);
              uStack_ff = (undefined2)((ulong)pDVar14 >> 8);
              uStack_fd = (undefined1)((ulong)pDVar14 >> 0x18);
              uStack_fc = (undefined4)((ulong)pDVar14 >> 0x20);
              local_108 = (basic_string)((byte)uVar19 | 1);
              uStack_107 = (undefined4)(uVar19 >> 8);
              uStack_103 = (undefined1)(uVar19 >> 0x28);
              uStack_102 = (undefined1)(uVar19 >> 0x30);
              uStack_101 = (undefined1)(uVar19 >> 0x38);
              local_f8 = pcVar17;
LAB_009e52c0:
              memcpy(pcVar17,pcVar23,(size_t)pDVar14);
            }
            pcVar17[(long)pDVar14] = '\0';
            if (((byte)local_108 & 1) != 0) {
              operator_delete(local_f8);
                    /* try { // try from 009e52e4 to 00ae5337 has its CatchHandler @ 009e52e4
                       catch() { ... } // from try @ 009e52e4 with catch @ 009e52e4
                       catch() { ... } // from try @ 009e53f0 with catch @ 009e52e4 */
              uVar20 = local_90 & 0xff;
              bVar21 = (byte)local_90._0_1_ & 1;
              pDVar16 = (Data *)(ulong)((byte)local_90._0_1_ >> 1);
              pDVar7 = pDStack_88;
            }
            pcVar17 = pcVar24;
            if (bVar21 != 0) {
              pcVar17 = local_80;
              pDVar16 = pDVar7;
            }
            pDVar7 = pDVar16;
            if ((Data *)(lVar9 + 1) <= pDVar16) {
              pDVar7 = (Data *)(lVar9 + 1);
            }
            pDVar16 = pDVar16 + -(long)pDVar7;
            if (pDVar16 != (Data *)0x0) {
              memmove(pcVar17,pcVar17 + (long)pDVar7,(size_t)pDVar16);
              uVar20 = local_90 & 0xff;
            }
            pDVar7 = pDVar16;
            if ((uVar20 & 1) == 0) {
              local_90 = CONCAT71(local_90._1_7_,(char)((int)pDVar16 << 1));
              pDVar7 = pDStack_88;
                    /* try { // try from 009e5338 to 00ae5343 has its CatchHandler @ 009e542c */
            }
            pDStack_88 = pDVar7;
            pcVar17[(long)pDVar16] = '\0';
                    /* try { // try from 009e5344 to 00ae534b has its CatchHandler @ 009e5428 */
                    /* try { // try from 009e534c to 00ae53ef has its CatchHandler @ 009e5434 */
            bVar21 = (byte)local_90._0_1_ & 1;
            pDVar16 = (Data *)(ulong)((byte)local_90._0_1_ >> 1);
            pDVar7 = pDStack_88;
          }
          break;
        }
        pcVar17 = pcVar17 + 1;
        pDVar11 = (Data *)(pcVar23 + (long)pDVar14 + -(long)pcVar17);
                    /* catch() { ... } // from try @ 009e50a8 with catch @ 009e5240
                       catch() { ... } // from try @ 009e51e8 with catch @ 009e5240 */
        if ((long)pDVar11 < 1) break;
      }
    }
    pcVar17 = pcVar24;
    if (bVar21 != 0) {
      pcVar17 = local_80;
      pDVar16 = pDVar7;
    }
    if (0 < (long)pDVar16) {
      pcVar23 = pcVar17;
      pDVar7 = pDVar16;
      while (pcVar23 = memchr(pcVar23,0x3a,(size_t)pDVar7), pcVar23 != (char *)0x0) {
        if (*pcVar23 == ':') {
          if ((pcVar23 != pcVar17 + (long)pDVar16) &&
             (pDVar7 = (Data *)(pcVar23 + -(long)pcVar17), pDVar7 != (Data *)0xffffffffffffffff)) {
            if (pDVar7 <= pDVar16) {
              pDVar16 = pDVar7;
            }
            local_108 = (basic_string)0x0;
            uStack_107 = 0;
            uStack_103 = 0;
            uStack_102 = 0;
            uStack_101 = 0;
            uStack_100 = 0;
            uStack_ff = 0;
            uStack_fd = 0;
            uStack_fc = 0;
            local_f8 = (char *)0x0;
            if ((Data *)0xffffffffffffffef < pDVar16) {
                    /* catch() { ... } // from try @ 009e6148 with catch @ 009e622c */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009e613c with catch @ 009e6230 */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (pDVar16 < (Data *)0x17) {
              pcVar23 = (char *)((ulong)&local_108 | 1);
              local_108 = SUB41((int)pDVar16 << 1,0);
              if (pDVar16 != (Data *)0x0) goto LAB_009e5760;
            }
            else {
              uVar19 = (ulong)(pDVar16 + 0x10) & 0xfffffffffffffff0;
              pcVar23 = operator_new(uVar19);
              local_108 = (basic_string)((byte)uVar19 | 1);
              uStack_100 = SUB81(pDVar16,0);
              uStack_ff = (undefined2)((ulong)pDVar16 >> 8);
              uStack_fd = (undefined1)((ulong)pDVar16 >> 0x18);
              uStack_fc = (undefined4)((ulong)pDVar16 >> 0x20);
              uStack_107 = (undefined4)(uVar19 >> 8);
              uStack_103 = (undefined1)(uVar19 >> 0x28);
              uStack_102 = (undefined1)(uVar19 >> 0x30);
              uStack_101 = (undefined1)(uVar19 >> 0x38);
              local_f8 = pcVar23;
LAB_009e5760:
              memcpy(pcVar23,pcVar17,(size_t)pDVar16);
            }
            pcVar23[(long)pDVar16] = '\0';
            if ((local_b0 & 1) != 0) {
              *local_a0 = '\0';
                    /* try { // try from 009e5790 to 00ae57e3 has its CatchHandler @ 009e5790
                       catch() { ... } // from try @ 009e5790 with catch @ 009e5790
                       catch() { ... } // from try @ 009e589c with catch @ 009e5790 */
              pDStack_a8 = (Data *)0x0;
              if ((local_b0 & 1) != 0) {
                operator_delete(local_a0);
              }
            }
            pDStack_a8 = (Data *)CONCAT44(uStack_fc,
                                          CONCAT13(uStack_fd,CONCAT21(uStack_ff,uStack_100)));
            local_b0 = CONCAT17(uStack_101,
                                CONCAT16(uStack_102,
                                         CONCAT15(uStack_103,CONCAT41(uStack_107,local_108))));
            local_a0 = local_f8;
            pcVar17 = pcVar24;
            pDVar16 = (Data *)(ulong)((byte)local_90._0_1_ >> 1);
            if ((local_90 & 1) != 0) {
              pcVar17 = local_80;
              pDVar16 = pDStack_88;
            }
            pDVar14 = pDVar16;
            if (pDVar7 + 1 <= pDVar16) {
              pDVar14 = pDVar7 + 1;
            }
            pDVar16 = pDVar16 + -(long)pDVar14;
            if (pDVar16 != (Data *)0x0) {
                    /* try { // try from 009e57e4 to 00ae57ef has its CatchHandler @ 009e58d8 */
              memmove(pcVar17,pcVar17 + (long)pDVar14,(size_t)pDVar16);
                    /* try { // try from 009e57f0 to 00ae57f7 has its CatchHandler @ 009e58d4 */
            }
            pDVar7 = pDVar16;
            if (((byte)local_90._0_1_ & 1) == 0) {
                    /* try { // try from 009e57f8 to 00ae589b has its CatchHandler @ 009e58e0 */
              local_90 = CONCAT71(local_90._1_7_,(char)((int)pDVar16 << 1));
              pDVar7 = pDStack_88;
            }
            pDStack_88 = pDVar7;
            pcVar17[(long)pDVar16] = '\0';
            goto LAB_009e5404;
          }
          break;
        }
        pcVar23 = pcVar23 + 1;
        pDVar7 = (Data *)(pcVar17 + (long)pDVar16 + -(long)pcVar23);
        if ((long)pDVar7 < 1) break;
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_b0,pcVar17,(ulong)pDVar16);
LAB_009e5404:
    pDVar7 = (Data *)(local_b0 >> 1 & 0x7f);
    if ((local_b0 & 1) != 0) {
      pDVar7 = pDStack_a8;
    }
    if (pDVar7 == (Data *)0x0) {
                    /* catch() { ... } // from try @ 009e5344 with catch @ 009e5428 */
                    /* catch() { ... } // from try @ 009e5338 with catch @ 009e542c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_b0,"/",1);
    }
                    /* catch() { ... } // from try @ 009e534c with catch @ 009e5434 */
    lVar9 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>>>
                        *)(this + 0x178),(basic_string *)&local_b0);
    if (lVar9 == 0) {
      pSVar22 = (SIOClient *)0x0;
    }
    else {
      pSVar22 = *(SIOClient **)(lVar9 + 0x28);
    }
                    /* try { // try from 009e5450 to 00ae54a7 has its CatchHandler @ 009e5450
                       catch() { ... } // from try @ 009e5450 with catch @ 009e5450
                       catch() { ... } // from try @ 009e56d8 with catch @ 009e5450 */
    pDVar7 = (Data *)(local_90 >> 1 & 0x7f);
    if ((local_90 & 1) != 0) {
      pDVar7 = pDStack_88;
      pcVar24 = local_80;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(&local_d0,pcVar24,(ulong)pDVar7);
    switch(iVar6) {
    case 0:
      disconnectFromEndpoint((basic_string *)this);
      if (pSVar22 == (SIOClient *)0x0) break;
                    /* try { // try from 009e54a8 to 00ae54af has its CatchHandler @ 009e5718 */
                    /* try { // try from 009e54b4 to 00ae54bb has its CatchHandler @ 009e5710 */
      uStack_fc = 0;
      local_f8 = (char *)0x0;
                    /* try { // try from 009e54bc to 00ae54cb has its CatchHandler @ 009e5708 */
      local_108 = (basic_string)0x14;
      uStack_ff = 0x7463;
      uStack_107 = 0x63736964;
      uStack_103 = 0x6f;
      uStack_102 = 0x6e;
      uStack_101 = 0x6e;
      uStack_100 = 0x65;
      uStack_fd = 0;
                    /* try { // try from 009e54d4 to 00ae550f has its CatchHandler @ 009e5720 */
      SIOClient::fireEvent(pSVar22,&local_108,(basic_string *)&local_90);
LAB_009e5600:
      if (((byte)local_108 & 1) == 0) break;
      operator_delete(local_f8);
      if ((local_f0 & 1) == 0) goto LAB_009e6178;
      goto LAB_009e6170;
    case 1:
      if (pSVar22 != (SIOClient *)0x0) {
                    /* try { // try from 009e5588 to 00ae561b has its CatchHandler @ 009e5730 */
        pSVar22[0x40] = (SIOClient)0x1;
        uStack_ff = 0;
        uStack_fd = 0;
        uStack_fc = 0;
        local_f8 = (char *)0x0;
        local_108 = (basic_string)0xe;
        uStack_107 = 0x6e6e6f63;
        uStack_103 = 0x65;
        uStack_102 = 99;
        uStack_101 = 0x74;
        uStack_100 = 0;
        SIOClient::fireEvent(pSVar22,&local_108,(basic_string *)&local_90);
        goto LAB_009e5600;
      }
      break;
    case 3:
      if (pSVar22 != (SIOClient *)0x0) {
        (**(code **)(**(long **)(pSVar22 + 0x50) + 0x18))
                  (*(long **)(pSVar22 + 0x50),pSVar22,&local_d0);
                    /* try { // try from 009e5510 to 00ae551f has its CatchHandler @ 009e5704 */
        uStack_ff = 0;
        uStack_fd = 0;
        uStack_fc = 0;
        local_f8 = (char *)0x0;
        local_108 = (basic_string)0xe;
        uStack_107 = 0x7373656d;
        uStack_103 = 0x61;
        uStack_102 = 0x67;
        uStack_101 = 0x65;
        uStack_100 = 0;
                    /* try { // try from 009e5520 to 00ae5537 has its CatchHandler @ 009e5730 */
        SIOClient::fireEvent(pSVar22,&local_108,(basic_string *)&local_d0);
        goto LAB_009e5600;
      }
      break;
    case 4:
      if (pSVar22 != (SIOClient *)0x0) {
        (**(code **)(**(long **)(pSVar22 + 0x50) + 0x18))
                  (*(long **)(pSVar22 + 0x50),pSVar22,&local_d0);
        uStack_102 = 0;
        uStack_101 = 0;
        uStack_100 = 0;
        uStack_ff = 0;
        uStack_fd = 0;
        uStack_fc = 0;
        local_f8 = (char *)0x0;
        local_108 = (basic_string)0x8;
        uStack_107 = 0x6e6f736a;
        uStack_103 = 0;
        SIOClient::fireEvent(pSVar22,&local_108,(basic_string *)&local_d0);
        goto LAB_009e5600;
      }
      break;
    case 5:
      if (pSVar22 != (SIOClient *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_f0,"",0);
        pcVar17 = (char *)((ulong)&local_d0 | 1);
        uVar19 = (ulong)((byte)local_d0 >> 1);
        if (((byte)local_d0 & 1) != 0) {
          pcVar17 = local_c0;
          uVar19 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8)));
        }
        if (0 < (long)uVar19) {
          pcVar23 = pcVar17 + uVar19;
          pcVar24 = pcVar17;
          uVar20 = uVar19;
          do {
            pcVar24 = memchr(pcVar24,0x3a,uVar20);
            pcVar18 = pcVar23;
            if ((pcVar24 == (char *)0x0) || (pcVar18 = pcVar24, *pcVar24 == ':')) break;
            pcVar24 = pcVar24 + 1;
            uVar20 = (long)pcVar23 - (long)pcVar24;
            pcVar18 = pcVar23;
          } while (0 < (long)uVar20);
                    /* try { // try from 009e5694 to 00ae56d7 has its CatchHandler @ 009e56ec */
          uVar20 = (long)pcVar18 - (long)pcVar17;
          pcVar24 = pcVar17;
          sVar12 = uVar19;
          if (pcVar18 == pcVar23) {
            uVar20 = 0xffffffffffffffff;
          }
          while (((pcVar18 = pcVar23, 0 < (long)sVar12 &&
                  (pcVar8 = memchr(pcVar24,0x2c,sVar12), pcVar8 != (char *)0x0)) &&
                 (pcVar18 = pcVar8, *pcVar8 != ','))) {
            pcVar24 = pcVar8 + 1;
            sVar12 = (long)pcVar23 - (long)(pcVar8 + 1);
          }
          uVar13 = (long)pcVar18 - (long)pcVar17;
          if (pcVar18 == pcVar23) {
            uVar13 = 0xffffffffffffffff;
          }
                    /* catch() { ... } // from try @ 009e5554 with catch @ 009e56ec
                       catch() { ... } // from try @ 009e5694 with catch @ 009e56ec */
          if (uVar20 < uVar13) {
            uVar1 = uVar20 + 2;
            local_108 = (basic_string)0x0;
            uStack_107 = 0;
            uStack_103 = 0;
            uStack_102 = 0;
            uStack_101 = 0;
            uStack_100 = 0;
            uStack_ff = 0;
            uStack_fd = 0;
            uStack_fc = 0;
            local_f8 = (char *)0x0;
            if (uVar19 < uVar1) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
                    /* catch() { ... } // from try @ 009e5510 with catch @ 009e5704 */
                    /* catch() { ... } // from try @ 009e54bc with catch @ 009e5708 */
            uVar20 = (-3 - uVar20) + uVar13;
                    /* catch() { ... } // from try @ 009e54b4 with catch @ 009e5710 */
            __n = uVar19 - uVar1;
            if (uVar20 <= uVar19 - uVar1) {
              __n = uVar20;
            }
                    /* catch() { ... } // from try @ 009e54a8 with catch @ 009e5718 */
            if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
                    /* catch() { ... } // from try @ 009e54d4 with catch @ 009e5720 */
            if (__n < 0x17) {
                    /* catch() { ... } // from try @ 009e5520 with catch @ 009e5730
                       catch() { ... } // from try @ 009e5588 with catch @ 009e5730 */
              pcVar24 = (char *)((ulong)&local_108 | 1);
              local_108 = SUB41((int)__n << 1,0);
              if (__n != 0) goto LAB_009e6028;
            }
            else {
              uVar19 = __n + 0x10 & 0xfffffffffffffff0;
              pcVar24 = operator_new(uVar19);
              local_108 = (basic_string)((byte)uVar19 | 1);
              uStack_100 = (undefined1)__n;
              uStack_ff = (undefined2)(__n >> 8);
              uStack_fd = (undefined1)(__n >> 0x18);
              uStack_fc = (undefined4)(__n >> 0x20);
              uStack_107 = (undefined4)(uVar19 >> 8);
              uStack_103 = (undefined1)(uVar19 >> 0x28);
              uStack_102 = (undefined1)(uVar19 >> 0x30);
              uStack_101 = (undefined1)(uVar19 >> 0x38);
              local_f8 = pcVar24;
LAB_009e6028:
                    /* try { // try from 009e6030 to 00ae60e7 has its CatchHandler @ 009e5da8 */
              memcpy(pcVar24,pcVar17 + uVar1,__n);
            }
            pcVar24[__n] = '\0';
            if ((local_f0 & 1) != 0) {
              *local_e0 = '\0';
              pDStack_e8 = (Data *)0x0;
                    /* catch() { ... } // from try @ 009e5e68 with catch @ 009e605c */
              if ((local_f0 & 1) != 0) {
                    /* catch() { ... } // from try @ 009e5e14 with catch @ 009e6060 */
                operator_delete(local_e0);
                    /* catch() { ... } // from try @ 009e5e0c with catch @ 009e6068 */
              }
            }
            pcVar17 = local_c0;
            bVar5 = local_d0;
                    /* catch() { ... } // from try @ 009e5e00 with catch @ 009e6070 */
            pDStack_e8 = (Data *)CONCAT44(uStack_fc,
                                          CONCAT13(uStack_fd,CONCAT21(uStack_ff,uStack_100)));
                    /* catch() { ... } // from try @ 009e5e2c with catch @ 009e6078 */
            local_f0 = CONCAT17(uStack_101,
                                CONCAT16(uStack_102,
                                         CONCAT15(uStack_103,CONCAT41(uStack_107,local_108))));
            local_e0 = local_f8;
                    /* catch() { ... } // from try @ 009e5e78 with catch @ 009e6088
                       catch() { ... } // from try @ 009e5ee0 with catch @ 009e6088 */
            uVar19 = uVar13 + 9;
            uVar20 = (ulong)((byte)local_d0 >> 1);
            if (((byte)local_d0 & 1) != 0) {
              uVar20 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8)));
            }
            local_108 = (basic_string)0x0;
            uStack_107 = 0;
            uStack_103 = 0;
            uStack_102 = 0;
            uStack_101 = 0;
            uStack_100 = 0;
            uStack_ff = 0;
            uStack_fd = 0;
            uStack_fc = 0;
            local_f8 = (char *)0x0;
            if (uVar20 < uVar19) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            uVar13 = (-0xb - uVar13) + uVar20;
            pcVar24 = (char *)((ulong)&local_d0 | 1);
            if (((byte)local_d0 & 1) != 0) {
              pcVar24 = local_c0;
            }
            uVar1 = uVar20 - uVar19;
            if (uVar13 <= uVar20 - uVar19) {
              uVar1 = uVar13;
            }
            if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uVar1 < 0x17) {
              pcVar23 = (char *)((ulong)&local_108 | 1);
              local_108 = SUB41((int)uVar1 << 1,0);
              if (uVar1 != 0) goto LAB_009e610c;
            }
            else {
              uVar20 = uVar1 + 0x10 & 0xfffffffffffffff0;
              pcVar23 = operator_new(uVar20);
              local_108 = (basic_string)((byte)uVar20 | 1);
              uStack_100 = (undefined1)uVar1;
              uStack_ff = (undefined2)(uVar1 >> 8);
              uStack_fd = (undefined1)(uVar1 >> 0x18);
              uStack_fc = (undefined4)(uVar1 >> 0x20);
              uStack_107 = (undefined4)(uVar20 >> 8);
              uStack_103 = (undefined1)(uVar20 >> 0x28);
              uStack_102 = (undefined1)(uVar20 >> 0x30);
              uStack_101 = (undefined1)(uVar20 >> 0x38);
              local_f8 = pcVar23;
LAB_009e610c:
              memcpy(pcVar23,pcVar24 + uVar19,uVar1);
            }
            pcVar23[uVar1] = '\0';
            if (((byte)bVar5 & 1) != 0) {
              *pcVar17 = '\0';
              uStack_c8 = 0;
              uStack_c7 = 0;
              uStack_c5 = 0;
              uStack_c4 = 0;
              if (((byte)local_d0 & 1) != 0) {
                    /* try { // try from 009e613c to 00ae6147 has its CatchHandler @ 009e6230 */
                operator_delete(local_c0);
              }
            }
                    /* try { // try from 009e6148 to 00ae614f has its CatchHandler @ 009e622c */
            uStack_cb = CONCAT11(uStack_102,uStack_103);
                    /* try { // try from 009e6150 to 00ae61f3 has its CatchHandler @ 009e6238 */
            local_c0 = local_f8;
            uStack_c8 = uStack_100;
            uStack_c7 = uStack_ff;
            uStack_c5 = uStack_fd;
            uStack_c4 = uStack_fc;
            local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        )local_108;
            uStack_cf = uStack_107;
            uStack_c9 = uStack_101;
          }
        }
        SIOClient::fireEvent(pSVar22,(basic_string *)&local_f0,(basic_string *)&local_d0);
      }
      break;
    case 7:
      if (pSVar22 != (SIOClient *)0x0) {
        uStack_101 = 0;
        uStack_100 = 0;
        uStack_ff = 0;
        uStack_fd = 0;
        uStack_fc = 0;
        local_f8 = (char *)0x0;
        local_108 = (basic_string)0xa;
                    /* try { // try from 009e5554 to 00ae556b has its CatchHandler @ 009e56ec */
        uStack_107 = 0x6f727265;
        uStack_103 = 0x72;
        uStack_102 = 0;
        SIOClient::fireEvent(pSVar22,&local_108,(basic_string *)&local_d0);
        goto LAB_009e5600;
      }
    }
    if ((local_f0 & 1) != 0) {
LAB_009e6170:
      operator_delete(local_e0);
    }
    goto LAB_009e6178;
  }
                    /* catch() { ... } // from try @ 009e4ea0 with catch @ 009e4f88 */
  if (*(int *)(this + 0x16c) != 1) goto LAB_009e6198;
  if (iVar6 != 4) {
    if (iVar6 != 3) {
                    /* try { // try from 009e4fa4 to 00ae4ffb has its CatchHandler @ 009e4fa4
                       catch() { ... } // from try @ 009e4fa4 with catch @ 009e4fa4
                       catch() { ... } // from try @ 009e522c with catch @ 009e4fa4 */
      if (iVar6 == 2) {
        std::__ndk1::operator+((__ndk1 *)0x18dc826,(char *)&local_90,(basic_string *)param_2);
        if ((local_90 & 1) != 0) {
          *local_80 = '\0';
          pDStack_88 = (Data *)0x0;
          if ((local_90 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        local_80 = local_a0;
        pDStack_88 = pDStack_a8;
        local_90 = local_b0;
        WebSocket::send(*(WebSocket **)(this + 0x170),(basic_string *)&local_90);
        uVar19 = local_90;
      }
      goto LAB_009e6198;
    }
    pDVar7 = (Data *)(ulong)((byte)local_90._0_1_ >> 1);
    if ((local_b0 & 1) != 0) {
      pDVar7 = pDStack_a8;
    }
    if (pDVar7 != (Data *)0x5) goto LAB_009e6198;
                    /* try { // try from 009e5064 to 00ae5073 has its CatchHandler @ 009e5258 */
    if ((local_b0 & 1) != 0) {
      pcVar24 = local_a0;
    }
                    /* try { // try from 009e5074 to 00ae508b has its CatchHandler @ 009e5284 */
    iVar6 = memcmp(pcVar24,"probe",5);
    uVar19 = local_90;
    if (iVar6 != 0) goto LAB_009e6198;
    pDStack_a8 = (Data *)0x0;
    local_a0 = (char *)0x0;
    local_b0 = 0x3502;
    WebSocket::send(*(WebSocket **)(this + 0x170),(basic_string *)&local_b0);
    goto switchD_009e5c4c_caseD_33;
  }
                    /* try { // try from 009e50a8 to 00ae50bf has its CatchHandler @ 009e5240 */
  pDVar7 = (Data *)(ulong)((byte)local_90._0_1_ >> 1);
  if ((local_b0 & 1) != 0) {
    pDVar7 = pDStack_a8;
  }
  if (pDVar7 == (Data *)0x0) {
                    /* try { // try from 009e61f4 to 00ae6253 has its CatchHandler @ 009e60e8 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  pcVar17 = pcVar24;
  if ((local_b0 & 1) != 0) {
    pcVar17 = local_a0;
  }
  cVar2 = *pcVar17;
  local_b0 = 0;
  pDStack_a8 = (Data *)0x0;
  local_a0 = (char *)0x0;
  if (0 < (long)pDVar7) {
                    /* try { // try from 009e50dc to 00ae516f has its CatchHandler @ 009e5284 */
    pcVar18 = pcVar17 + (long)pDVar7;
    pcVar23 = pcVar17;
    pDVar16 = pDVar7;
    do {
      pcVar23 = memchr(pcVar23,0x2f,(size_t)pDVar16);
      pcVar8 = pcVar18;
      if ((pcVar23 == (char *)0x0) || (pcVar8 = pcVar23, *pcVar23 == '/')) break;
      pcVar23 = pcVar23 + 1;
      pDVar16 = (Data *)(pcVar18 + -(long)pcVar23);
      pcVar8 = pcVar18;
    } while (0 < (long)pDVar16);
    pDVar16 = (Data *)(pcVar8 + -(long)pcVar17);
    if (pcVar8 == pcVar18) {
      pDVar16 = (Data *)0xffffffffffffffff;
    }
    pcVar23 = pcVar17;
    pDVar14 = pDVar7;
    if (0 < (long)pDVar7) {
      while (pcVar8 = memchr(pcVar23,0x5b,(size_t)pDVar14), pcVar8 != (char *)0x0) {
        if (*pcVar8 == '[') {
          if ((pcVar8 != pcVar18) &&
             (pDVar14 = (Data *)(pcVar8 + -(long)pcVar17), pDVar14 != (Data *)0xffffffffffffffff)) {
            if ((pDVar16 == (Data *)0xffffffffffffffff) || (pDVar14 <= pDVar16)) goto LAB_009e58fc;
            local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        )0x0;
            uStack_cf = 0;
            uStack_cb = 0;
            uStack_c9 = 0;
            uStack_c8 = 0;
            uStack_c7 = 0;
            uStack_c5 = 0;
            uStack_c4 = 0;
            local_c0 = (char *)0x0;
            if (pDVar7 < pDVar16) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            pDVar11 = pDVar7 + -(long)pDVar16;
            if (pDVar14 + ~(ulong)pDVar16 <= pDVar7 + -(long)pDVar16) {
              pDVar11 = pDVar14 + ~(ulong)pDVar16;
            }
            if ((Data *)0xffffffffffffffef < pDVar11) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (pDVar11 < (Data *)0x17) goto LAB_009e58a0;
            uVar19 = (ulong)(pDVar11 + 0x10) & 0xfffffffffffffff0;
            pcVar23 = operator_new(uVar19);
            goto LAB_009e58c8;
          }
          break;
        }
        pcVar23 = pcVar8 + 1;
        pDVar14 = (Data *)(pcVar18 + -(long)(pcVar8 + 1));
        if ((long)(pcVar18 + -(long)(pcVar8 + 1)) < 1) break;
      }
    }
    if (pDVar16 != (Data *)0xffffffffffffffff) {
      pDVar11 = pDVar7 + -(long)pDVar16;
      local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
      ;
      uStack_cf = 0;
      uStack_cb = 0;
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      local_c0 = (char *)0x0;
      if (pDVar7 < pDVar16) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009e6150 with catch @ 009e6238 */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      if ((Data *)0xffffffffffffffef < pDVar11) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
                    /* try { // try from 009e589c to 00ae58fb has its CatchHandler @ 009e5790 */
      if (pDVar11 < (Data *)0x17) {
LAB_009e58a0:
        local_c0 = (char *)0x0;
        uStack_c4 = 0;
        uStack_c5 = 0;
        uStack_c7 = 0;
        uStack_c8 = 0;
        uStack_c9 = 0;
        uStack_cb = 0;
        uStack_cf = 0;
        pcVar23 = (char *)((ulong)&local_d0 | 1);
        local_d0 = SUB41((int)pDVar11 << 1,0);
        if (pDVar11 != (Data *)0x0) goto LAB_009e58d8;
      }
      else {
        uVar19 = (ulong)(pDVar11 + 0x10) & 0xfffffffffffffff0;
        pcVar23 = operator_new(uVar19);
LAB_009e58c8:
        local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                   ((byte)uVar19 | 1);
        uStack_c8 = SUB81(pDVar11,0);
        uStack_c7 = (undefined2)((ulong)pDVar11 >> 8);
        uStack_c5 = (undefined1)((ulong)pDVar11 >> 0x18);
        uStack_c4 = (undefined4)((ulong)pDVar11 >> 0x20);
                    /* catch() { ... } // from try @ 009e57f0 with catch @ 009e58d4 */
        uStack_cf = (undefined4)(uVar19 >> 8);
        uStack_cb = (undefined2)(uVar19 >> 0x28);
        uStack_c9 = (undefined1)(uVar19 >> 0x38);
        local_c0 = pcVar23;
LAB_009e58d8:
                    /* catch() { ... } // from try @ 009e57e4 with catch @ 009e58d8 */
                    /* catch() { ... } // from try @ 009e57f8 with catch @ 009e58e0 */
        memcpy(pcVar23,pcVar17 + (long)pDVar16,(size_t)pDVar11);
      }
      pcVar23[(long)pDVar11] = '\0';
      pDStack_a8 = (Data *)CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8)));
      local_b0 = CONCAT17(uStack_c9,CONCAT25(uStack_cb,CONCAT41(uStack_cf,local_d0)));
      local_a0 = local_c0;
    }
  }
LAB_009e58fc:
                    /* try { // try from 009e58fc to 00ae5953 has its CatchHandler @ 009e58fc
                       catch() { ... } // from try @ 009e58fc with catch @ 009e58fc
                       catch() { ... } // from try @ 009e5b84 with catch @ 009e58fc */
  pDVar7 = (Data *)(local_b0 >> 1 & 0x7f);
  if ((local_b0 & 1) != 0) {
    pDVar7 = pDStack_a8;
  }
  if (pDVar7 == (Data *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_b0,"/",1);
  }
  lVar9 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>>>
                      *)(this + 0x178),(basic_string *)&local_b0);
  pcVar17 = local_80;
  uVar19 = local_90;
  if (lVar9 == 0) {
    pSVar22 = (SIOClient *)0x0;
  }
  else {
    pSVar22 = *(SIOClient **)(lVar9 + 0x28);
  }
  local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  uStack_cf = 0;
  uStack_cb = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c7 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
                    /* try { // try from 009e5954 to 00ae595b has its CatchHandler @ 009e5bc4 */
  local_c0 = (char *)0x0;
  pDVar7 = (Data *)(local_90 >> 1 & 0x7f);
                    /* try { // try from 009e5960 to 00ae5967 has its CatchHandler @ 009e5bbc */
  if ((local_90 & 1) != 0) {
    pDVar7 = pDStack_88;
  }
  if (pDVar7 == (Data *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
                    /* try { // try from 009e5968 to 00ae5977 has its CatchHandler @ 009e5bb4 */
  pDVar16 = pDVar7 + -1;
  pcVar23 = pcVar24;
  if ((local_90 & 1) != 0) {
    pcVar23 = local_80;
  }
  if ((Data *)0xffffffffffffffef < pDVar16) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 009e5980 to 00ae59bb has its CatchHandler @ 009e5bcc */
  if (pDVar16 < (Data *)0x17) {
    pcVar18 = (char *)((ulong)&local_d0 | 1);
    local_d0 = SUB41((int)pDVar16 << 1,0);
    if (pDVar16 != (Data *)0x0) goto LAB_009e59c0;
  }
  else {
    uVar20 = (ulong)(pDVar7 + 0xf) & 0xfffffffffffffff0;
    pcVar18 = operator_new(uVar20);
    local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
               ((byte)uVar20 | 1);
    uStack_c8 = SUB81(pDVar16,0);
    uStack_c7 = (undefined2)((ulong)pDVar16 >> 8);
    uStack_c5 = (undefined1)((ulong)pDVar16 >> 0x18);
    uStack_c4 = (undefined4)((ulong)pDVar16 >> 0x20);
                    /* try { // try from 009e59bc to 00ae59cb has its CatchHandler @ 009e5bb0 */
    uStack_cf = (undefined4)(uVar20 >> 8);
    uStack_cb = (undefined2)(uVar20 >> 0x28);
    uStack_c9 = (undefined1)(uVar20 >> 0x38);
    local_c0 = pcVar18;
LAB_009e59c0:
                    /* try { // try from 009e59cc to 00ae59e3 has its CatchHandler @ 009e5bdc */
    memcpy(pcVar18,pcVar23 + 1,(size_t)pDVar16);
  }
  pcVar18[(long)pDVar16] = '\0';
  if ((uVar19 & 1) != 0) {
    *pcVar17 = '\0';
    pDStack_88 = (Data *)0x0;
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
                    /* try { // try from 009e5a00 to 00ae5a17 has its CatchHandler @ 009e5b98 */
    }
  }
  pcVar17 = local_c0;
  bVar5 = local_d0;
  pDStack_88 = (Data *)CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8)));
  local_90 = CONCAT17(uStack_c9,CONCAT25(uStack_cb,CONCAT41(uStack_cf,local_d0)));
  local_80 = local_c0;
  pDVar16 = (Data *)(ulong)((byte)local_b0._0_1_ >> 1);
  pDVar7 = pDVar16;
  if ((local_b0 & 1) != 0) {
    pDVar7 = pDStack_a8;
  }
  if (pDVar7 == (Data *)0x1) {
                    /* try { // try from 009e5a34 to 00ae5ac7 has its CatchHandler @ 009e5bdc */
    pcVar23 = (char *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      pcVar23 = local_a0;
    }
    if (*pcVar23 != '/') goto LAB_009e5a4c;
  }
  else {
LAB_009e5a4c:
    local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    uStack_cf = 0;
    uStack_cb = 0;
    uStack_c9 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c5 = 0;
    uStack_c4 = 0;
    pDVar16 = (Data *)(ulong)((byte)bVar5 >> 1);
    if (((byte)bVar5 & 1) != 0) {
      pDVar16 = pDStack_88;
    }
    uVar19 = (long)pDVar16 - (long)pDVar7;
    local_c0 = (char *)0x0;
    if (pDVar16 < pDVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    pcVar23 = pcVar24;
    if (((byte)bVar5 & 1) != 0) {
      pcVar23 = pcVar17;
    }
    if (0xffffffffffffffef < uVar19) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar19 < 0x17) {
      pcVar18 = (char *)((ulong)&local_d0 | 1);
      local_d0 = SUB41((int)uVar19 << 1,0);
      if (uVar19 != 0) goto LAB_009e5acc;
    }
    else {
      uVar20 = uVar19 + 0x10 & 0xfffffffffffffff0;
      pcVar18 = operator_new(uVar20);
      local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                 ((byte)uVar20 | 1);
      uStack_c8 = (undefined1)uVar19;
      uStack_c7 = (undefined2)(uVar19 >> 8);
      uStack_c5 = (undefined1)(uVar19 >> 0x18);
      uStack_c4 = (undefined4)(uVar19 >> 0x20);
      uStack_cf = (undefined4)(uVar20 >> 8);
      uStack_cb = (undefined2)(uVar20 >> 0x28);
      uStack_c9 = (undefined1)(uVar20 >> 0x38);
      local_c0 = pcVar18;
LAB_009e5acc:
      memcpy(pcVar18,pcVar23 + (long)pDVar7,uVar19);
    }
    pcVar18[uVar19] = '\0';
    if (((byte)bVar5 & 1) != 0) {
      *pcVar17 = '\0';
      pDStack_88 = (Data *)0x0;
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    pDStack_88 = (Data *)CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8)));
    local_90 = CONCAT17(uStack_c9,CONCAT25(uStack_cb,CONCAT41(uStack_cf,local_d0)));
    pDVar16 = (Data *)(ulong)((byte)local_b0._0_1_ >> 1);
  }
  uVar19 = local_90;
  pcVar17 = local_c0;
                    /* try { // try from 009e5b40 to 00ae5b83 has its CatchHandler @ 009e5b98 */
  if (((byte)local_b0._0_1_ & 1) != 0) {
    pDVar16 = pDStack_a8;
  }
  local_80 = local_c0;
  if (pDVar16 == (Data *)0x1) {
    pcVar23 = (char *)((ulong)&local_b0 | 1);
    if (((byte)local_b0._0_1_ & 1) != 0) {
      pcVar23 = local_a0;
    }
    if (*pcVar23 != '/') goto LAB_009e5b64;
  }
  else {
LAB_009e5b64:
    pDVar7 = (Data *)(local_90 >> 1 & 0x7f);
    if ((local_90 & 1) != 0) {
      pDVar7 = pDStack_88;
    }
    if (pDVar7 != (Data *)0x0) {
                    /* try { // try from 009e5b84 to 00ae5c3b has its CatchHandler @ 009e58fc */
      pDVar16 = pDVar7 + -1;
      local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
      ;
      uStack_cf = 0;
      uStack_cb = 0;
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      pcVar23 = pcVar24;
      if ((local_90 & 1) != 0) {
        pcVar23 = local_c0;
      }
      local_c0 = (char *)0x0;
      local_80 = pcVar17;
                    /* catch() { ... } // from try @ 009e5a00 with catch @ 009e5b98
                       catch() { ... } // from try @ 009e5b40 with catch @ 009e5b98 */
      if ((Data *)0xffffffffffffffef < pDVar16) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (pDVar16 < (Data *)0x17) {
        pcVar18 = (char *)((ulong)&local_d0 | 1);
                    /* catch() { ... } // from try @ 009e59bc with catch @ 009e5bb0 */
        local_d0 = SUB41((int)pDVar16 << 1,0);
                    /* catch() { ... } // from try @ 009e5968 with catch @ 009e5bb4 */
        if (pDVar16 != (Data *)0x0) goto LAB_009e5bdc;
      }
      else {
                    /* catch() { ... } // from try @ 009e5960 with catch @ 009e5bbc */
        uVar20 = (ulong)(pDVar7 + 0xf) & 0xfffffffffffffff0;
                    /* catch() { ... } // from try @ 009e5954 with catch @ 009e5bc4 */
        pcVar18 = operator_new(uVar20);
                    /* catch() { ... } // from try @ 009e5980 with catch @ 009e5bcc */
        local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                   ((byte)uVar20 | 1);
        uStack_c8 = SUB81(pDVar16,0);
        uStack_c7 = (undefined2)((ulong)pDVar16 >> 8);
        uStack_c5 = (undefined1)((ulong)pDVar16 >> 0x18);
        uStack_c4 = (undefined4)((ulong)pDVar16 >> 0x20);
        uStack_cf = (undefined4)(uVar20 >> 8);
        uStack_cb = (undefined2)(uVar20 >> 0x28);
        uStack_c9 = (undefined1)(uVar20 >> 0x38);
        local_c0 = pcVar18;
LAB_009e5bdc:
                    /* catch() { ... } // from try @ 009e59cc with catch @ 009e5bdc
                       catch() { ... } // from try @ 009e5a34 with catch @ 009e5bdc */
        memcpy(pcVar18,pcVar23 + 1,(size_t)pDVar16);
      }
      pcVar18[(long)pDVar16] = '\0';
      if ((uVar19 & 1) != 0) {
        *pcVar17 = '\0';
        pDStack_88 = (Data *)0x0;
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      pDStack_88 = (Data *)CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8)));
      local_90 = CONCAT17(uStack_c9,CONCAT25(uStack_cb,CONCAT41(uStack_cf,local_d0)));
      local_80 = local_c0;
    }
  }
  pDVar7 = pDStack_88;
  local_c0 = local_80;
                    /* try { // try from 009e5c3c to 00ae5c8f has its CatchHandler @ 009e5c3c
                       catch() { ... } // from try @ 009e5c3c with catch @ 009e5c3c
                       catch() { ... } // from try @ 009e5d48 with catch @ 009e5c3c */
  switch(cVar2) {
  case '0':
    if (pSVar22 != (SIOClient *)0x0) {
      pSVar22[0x40] = (SIOClient)0x1;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      local_c0 = (char *)0x0;
      local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xe
      ;
      uStack_cf = 0x6e6e6f63;
      uStack_cb = 0x6365;
      uStack_c9 = 0x74;
      uStack_c8 = 0;
      SIOClient::fireEvent(pSVar22,(basic_string *)&local_d0,(basic_string *)&local_90);
                    /* try { // try from 009e5c90 to 00ae5c9b has its CatchHandler @ 009e5d84 */
      goto LAB_009e6178;
    }
    break;
  case '1':
                    /* try { // try from 009e5d48 to 00ae5da7 has its CatchHandler @ 009e5c3c */
    disconnectFromEndpoint((basic_string *)this);
    uStack_c4 = 0;
    local_c0 = (char *)0x0;
    local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x14;
    uStack_c7 = 0x7463;
    uStack_cf = 0x63736964;
    uStack_cb = 0x6e6f;
    uStack_c9 = 0x6e;
    uStack_c8 = 0x65;
    uStack_c5 = 0;
                    /* catch() { ... } // from try @ 009e5c9c with catch @ 009e5d80 */
                    /* catch() { ... } // from try @ 009e5c90 with catch @ 009e5d84 */
    SIOClient::fireEvent(pSVar22,(basic_string *)&local_d0,(basic_string *)&local_90);
    goto LAB_009e6178;
  case '2':
    bVar3 = local_90._0_1_;
                    /* try { // try from 009e5c9c to 00ae5ca3 has its CatchHandler @ 009e5d80 */
                    /* try { // try from 009e5ca4 to 00ae5d47 has its CatchHandler @ 009e5d8c */
    pDVar14 = (Data *)(ulong)((byte)local_90._0_1_ >> 1);
    pDVar16 = pDVar14;
    pcVar17 = pcVar24;
    if ((local_90 & 1) != 0) {
      pDVar16 = pDStack_88;
      pcVar17 = local_80;
    }
    pcVar18 = pcVar17 + (long)pDVar16;
    pDVar11 = pDVar16;
    pcVar23 = pcVar17;
    while (((pcVar8 = pcVar18, 0 < (long)pDVar11 &&
            (pcVar23 = memchr(pcVar23,0x22,(size_t)pDVar11), pcVar23 != (char *)0x0)) &&
           (pcVar8 = pcVar23, *pcVar23 != '\"'))) {
      pcVar23 = pcVar23 + 1;
      pDVar11 = (Data *)(pcVar18 + -(long)pcVar23);
    }
    lVar9 = (long)pcVar8 - (long)pcVar17;
    if (pcVar8 == pcVar18) {
      lVar9 = -1;
    }
    pDVar11 = (Data *)(lVar9 + 1);
    uVar19 = (long)pDVar16 - (long)pDVar11;
    local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    uStack_cf = 0;
    uStack_cb = 0;
    uStack_c9 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c5 = 0;
    uStack_c4 = 0;
    local_c0 = (char *)0x0;
    if (pDVar16 < pDVar11) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    if (0xffffffffffffffef < uVar19) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar19 < 0x17) {
      pcVar23 = (char *)((ulong)&local_d0 | 1);
      local_d0 = SUB41((int)uVar19 << 1,0);
      pcVar18 = pcVar23;
      if (uVar19 != 0) goto LAB_009e5df0;
    }
    else {
      uVar20 = uVar19 + 0x10 & 0xfffffffffffffff0;
      pcVar18 = operator_new(uVar20);
      local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                 ((byte)uVar20 | 1);
      uStack_c8 = (undefined1)uVar19;
      uStack_c7 = (undefined2)(uVar19 >> 8);
      uStack_c5 = (undefined1)(uVar19 >> 0x18);
      uStack_c4 = (undefined4)(uVar19 >> 0x20);
      uStack_cf = (undefined4)(uVar20 >> 8);
      uStack_cb = (undefined2)(uVar20 >> 0x28);
      uStack_c9 = (undefined1)(uVar20 >> 0x38);
      pcVar23 = (char *)((ulong)&local_d0 | 1);
      local_c0 = pcVar18;
LAB_009e5df0:
      memcpy(pcVar18,pcVar17 + (long)pDVar11,uVar19);
    }
    pcVar17 = local_c0;
    bVar5 = local_d0;
                    /* try { // try from 009e5e00 to 00ae5e07 has its CatchHandler @ 009e6070 */
    pcVar18[uVar19] = '\0';
                    /* try { // try from 009e5e0c to 00ae5e13 has its CatchHandler @ 009e6068 */
    sVar12 = (ulong)((byte)local_d0 >> 1);
                    /* try { // try from 009e5e14 to 00ae5e23 has its CatchHandler @ 009e6060 */
    if (((byte)local_d0 & 1) != 0) {
      sVar12 = CONCAT44(uStack_c4,CONCAT13(uStack_c5,CONCAT21(uStack_c7,uStack_c8)));
      pcVar23 = local_c0;
    }
    pcVar8 = pcVar23 + sVar12;
    pcVar18 = pcVar23;
                    /* try { // try from 009e5e2c to 00ae5e67 has its CatchHandler @ 009e6078 */
    while (((pcVar10 = pcVar8, 0 < (long)sVar12 &&
            (pcVar18 = memchr(pcVar18,0x22,sVar12), pcVar18 != (char *)0x0)) &&
           (pcVar10 = pcVar18, *pcVar18 != '\"'))) {
      pcVar18 = pcVar18 + 1;
      sVar12 = (long)pcVar8 - (long)pcVar18;
    }
    lVar15 = (long)pcVar10 - (long)pcVar23;
    if (pcVar10 == pcVar8) {
      lVar15 = -1;
    }
    if (((byte)bVar5 & 1) != 0) {
      operator_delete(pcVar17);
                    /* try { // try from 009e5e78 to 00ae5e8f has its CatchHandler @ 009e6088 */
      pDVar14 = (Data *)(ulong)((byte)local_90._0_1_ >> 1);
      pDVar7 = pDStack_88;
      bVar3 = local_90._0_1_;
    }
    pcVar17 = local_80;
    if (((byte)bVar3 & 1) != 0) {
      pDVar14 = pDVar7;
    }
    local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    uStack_cf = 0;
    uStack_cb = 0;
    uStack_c9 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0;
    uStack_c5 = 0;
    uStack_c4 = 0;
    local_c0 = (char *)0x0;
    if (pDVar14 < pDVar11) {
                    /* try { // try from 009e6254 to 00ae62ab has its CatchHandler @ 009e6254
                       catch() { ... } // from try @ 009e6254 with catch @ 009e6254
                       catch() { ... } // from try @ 009e64dc with catch @ 009e6254 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar19 = (lVar15 - lVar9) + 1;
                    /* try { // try from 009e5eac to 00ae5ec3 has its CatchHandler @ 009e6044 */
    if (((byte)bVar3 & 1) != 0) {
      pcVar24 = local_80;
    }
    uVar20 = (long)pDVar14 - (long)pDVar11;
    if (uVar19 <= (ulong)((long)pDVar14 - (long)pDVar11)) {
      uVar20 = uVar19;
    }
    if (0xffffffffffffffef < uVar20) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar20 < 0x17) {
      pcVar23 = (char *)((ulong)&local_d0 | 1);
      local_d0 = SUB41((int)uVar20 << 1,0);
      if (uVar20 != 0) goto LAB_009e5f00;
    }
    else {
                    /* try { // try from 009e5ee0 to 00ae5f73 has its CatchHandler @ 009e6088 */
      uVar19 = uVar20 + 0x10 & 0xfffffffffffffff0;
      pcVar23 = operator_new(uVar19);
      local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                 ((byte)uVar19 | 1);
      uStack_c8 = (undefined1)uVar20;
      uStack_c7 = (undefined2)(uVar20 >> 8);
      uStack_c5 = (undefined1)(uVar20 >> 0x18);
      uStack_c4 = (undefined4)(uVar20 >> 0x20);
      uStack_cf = (undefined4)(uVar19 >> 8);
      uStack_cb = (undefined2)(uVar19 >> 0x28);
      uStack_c9 = (undefined1)(uVar19 >> 0x38);
      local_c0 = pcVar23;
LAB_009e5f00:
      memcpy(pcVar23,pcVar24 + (long)pDVar11,uVar20);
    }
    pDVar7 = (Data *)(lVar15 + 4);
    pcVar23[uVar20] = '\0';
    local_f0 = 0;
    pDStack_e8 = (Data *)0x0;
    local_e0 = (char *)0x0;
    if (pDVar14 < pDVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    pDVar16 = pDVar14 + -(long)pDVar7;
    if (pDVar14 + (-5 - lVar15) <= pDVar14 + -(long)pDVar7) {
      pDVar16 = pDVar14 + (-5 - lVar15);
    }
    if ((Data *)0xffffffffffffffef < pDVar16) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pDVar16 < (Data *)0x17) {
      pcVar23 = (char *)((ulong)&local_f0 | 1);
      local_f0 = (ulong)(byte)((int)pDVar16 << 1);
      if (pDVar16 != (Data *)0x0) goto LAB_009e5f88;
    }
    else {
      pcVar23 = operator_new((ulong)(pDVar16 + 0x10) & 0xfffffffffffffff0);
      local_f0 = (ulong)(pDVar16 + 0x10) & 0xfffffffffffffff0 | 1;
      pDStack_e8 = pDVar16;
      local_e0 = pcVar23;
LAB_009e5f88:
      memcpy(pcVar23,pcVar24 + (long)pDVar7,(size_t)pDVar16);
    }
    pcVar23[(long)pDVar16] = '\0';
    if (((byte)bVar3 & 1) != 0) {
      *pcVar17 = '\0';
      pDStack_88 = (Data *)0x0;
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
    }
    local_80 = local_e0;
    pDStack_88 = pDStack_e8;
    local_90 = local_f0;
    if (pSVar22 != (SIOClient *)0x0) {
      SIOClient::fireEvent(pSVar22,(basic_string *)&local_d0,(basic_string *)&local_90);
                    /* try { // try from 009e5fec to 00ae602f has its CatchHandler @ 009e6044 */
      (**(code **)(**(long **)(pSVar22 + 0x50) + 0x18))
                (*(long **)(pSVar22 + 0x50),pSVar22,&local_90);
    }
LAB_009e6178:
    if (((byte)local_d0 & 1) != 0) {
      operator_delete(local_c0);
    }
    break;
  case '4':
                    /* catch() { ... } // from try @ 009e5ca4 with catch @ 009e5d8c */
    if (pSVar22 != (SIOClient *)0x0) {
      uStack_c9 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c5 = 0;
      uStack_c4 = 0;
      local_c0 = (char *)0x0;
                    /* try { // try from 009e5da8 to 00ae5dff has its CatchHandler @ 009e5da8
                       catch() { ... } // from try @ 009e5da8 with catch @ 009e5da8
                       catch() { ... } // from try @ 009e6030 with catch @ 009e5da8 */
      local_d0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa
      ;
      uStack_cf = 0x6f727265;
      uStack_cb = 0x72;
      SIOClient::fireEvent(pSVar22,(basic_string *)&local_d0,(basic_string *)&local_90);
      goto LAB_009e6178;
    }
  }
switchD_009e5c4c_caseD_33:
  uVar19 = local_90;
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
    uVar19 = local_90;
  }
LAB_009e6198:
  local_90 = uVar19;
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

