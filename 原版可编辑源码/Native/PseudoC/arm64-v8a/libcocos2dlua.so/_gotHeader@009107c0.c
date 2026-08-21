
/* LuaMinXmlHttpRequest::_gotHeader(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall LuaMinXmlHttpRequest::_gotHeader(LuaMinXmlHttpRequest *this,basic_string *param_1)

{
  LuaMinXmlHttpRequest *pLVar1;
  int *piVar2;
  basic_string bVar3;
  long lVar4;
  char *__dest;
  void *pvVar5;
  char *__s;
  int *piVar6;
  basic_ostream *pbVar7;
  long lVar8;
  basic_string *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  size_t sVar13;
  char *pcVar14;
  undefined1 *__dest_00;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 **local_2d0;
  ulong uStack_2c8;
  char *local_2c0;
  undefined8 **local_2b0;
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
  ulong *local_190;
  ulong uStack_188;
  undefined1 *local_180;
  undefined **ppuStack_178;
  locale alStack_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  
                    /* try { // try from 009107d4 to 00a10803 has its CatchHandler @ 0091073c */
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_1;
  if (((byte)bVar3 & 1) == 0) {
                    /* try { // try from 00910804 to 00a10817 has its CatchHandler @ 00910894 */
    sVar13 = (size_t)((byte)bVar3 >> 1);
    __dest = operator_new__(sVar13 + 1,(nothrow_t *)&std::nothrow);
    pbVar9 = param_1 + 1;
                    /* try { // try from 00910818 to 00a108eb has its CatchHandler @ 0091073c */
  }
  else {
    sVar13 = *(size_t *)(param_1 + 8);
    __dest = operator_new__(sVar13 + 1,(nothrow_t *)&std::nothrow);
    pbVar9 = *(basic_string **)(param_1 + 0x10);
  }
  if (((sVar13 == 0) || (pvVar5 = memchr(pbVar9,0x3a,sVar13), pvVar5 == (void *)0x0)) ||
     (uVar12 = (long)pvVar5 - (long)pbVar9, uVar12 == 0xffffffffffffffff)) {
    pbVar9 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    pcVar14 = strcpy(__dest,(char *)pbVar9);
    pcVar14 = strtok(pcVar14," ");
    if (pcVar14 != (char *)0x0) {
                    /* try { // try from 009108ec to 00a10947 has its CatchHandler @ 009108ec
                       catch() { ... } // from try @ 009108ec with catch @ 009108ec
                       catch() { ... } // from try @ 009109e8 with catch @ 009108ec
                       catch() { ... } // from try @ 00910a94 with catch @ 009108ec */
      pLVar1 = this + 0x98;
                    /* try { // try from 00910948 to 00a1095f has its CatchHandler @ 00910b5c */
                    /* try { // try from 00910974 to 00a10987 has its CatchHandler @ 00910adc */
      do {
        local_110[0] = 0x1698928;
        local_190 = (ulong *)0x1698900;
                    /* try { // try from 009109d0 to 00a109e7 has its CatchHandler @ 00910b44 */
        local_180 = (undefined1 *)0x1698810;
        uStack_188 = 0;
                    /* try { // try from 009109e8 to 00a10a87 has its CatchHandler @ 009108ec */
        std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
        local_80 = 0xffffffff;
        local_190 = (ulong *)0x16987e8;
        local_180 = (undefined1 *)0x1698810;
        local_110[0] = 0x1698838;
        local_88 = 0;
        ppuStack_178 = &PTR__basic_streambuf_01698a08;
        std::__ndk1::locale::locale(alStack_170);
        uStack_150 = 0;
        local_158 = 0;
        uStack_140 = 0;
        uStack_148 = 0;
        uStack_160 = 0;
        local_168 = 0;
        ppuStack_178 = &PTR__basic_stringbuf_01698960;
        uStack_130 = 0;
        local_138 = 0;
        uStack_120 = 0;
        local_128 = (void *)0x0;
        local_118 = 0x18;
        uStack_2c8 = 0;
        local_2c0 = (undefined1 *)0x0;
        local_2d0 = (undefined8 **)0x0;
        sVar13 = strlen(pcVar14);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  ((basic_ostream *)&local_180,pcVar14,sVar13);
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str();
        if (((ulong)local_2d0 & 1) != 0) {
          *local_2c0 = 0;
                    /* try { // try from 00910a88 to 00a10a93 has its CatchHandler @ 00910ad4 */
          uStack_2c8 = 0;
          if (((ulong)local_2d0 & 1) != 0) {
                    /* try { // try from 00910a94 to 00a10b77 has its CatchHandler @ 009108ec */
            operator_delete(local_2c0);
          }
        }
        uStack_2c8 = uStack_2a8;
        local_2d0 = local_2b0;
        local_2c0 = local_2a0;
        pcVar14 = (char *)((ulong)&local_2d0 | 1);
        uVar12 = (ulong)local_2b0 >> 1 & 0x7f;
        if (((ulong)local_2b0 & 1) != 0) {
          pcVar14 = local_2a0;
          uVar12 = uStack_2a8;
        }
        if (3 < (long)uVar12) {
                    /* catch() { ... } // from try @ 00910a88 with catch @ 00910ad4 */
          piVar2 = (int *)(pcVar14 + uVar12);
          __s = pcVar14;
          do {
                    /* catch() { ... } // from try @ 00910974 with catch @ 00910adc */
            if ((uVar12 - 3 == 0) || (piVar6 = memchr(__s,0x48,uVar12 - 3), piVar6 == (int *)0x0))
            break;
            if (*piVar6 == 0x50545448) {
              if ((piVar6 != piVar2) && ((long)piVar6 - (long)pcVar14 != -1)) {
                local_2b0 = (undefined8 **)0x1698900;
                local_230[0] = 0x1698928;
                uStack_2a8 = 0;
                local_2a0 = (char *)0x1698810;
                    /* catch() { ... } // from try @ 009109d0 with catch @ 00910b44 */
                    /* catch() { ... } // from try @ 009109ac with catch @ 00910b48 */
                std::__ndk1::ios_base::init((ios_base *)local_230,&ppuStack_298);
                local_1a0 = 0xffffffff;
                    /* catch() { ... } // from try @ 00910948 with catch @ 00910b5c */
                local_2b0 = (undefined8 **)0x16987e8;
                ppuStack_298 = &PTR__basic_streambuf_01698a08;
                local_230[0] = 0x1698838;
                    /* try { // try from 00910b78 to 00a10bcb has its CatchHandler @ 00910b78
                       catch() { ... } // from try @ 00910b78 with catch @ 00910b78
                       catch() { ... } // from try @ 00910c08 with catch @ 00910b78
                       catch() { ... } // from try @ 00910c8c with catch @ 00910b78
                       catch() { ... } // from try @ 00910cc4 with catch @ 00910b78 */
                local_1a8 = 0;
                local_2a0 = (char *)0x1698810;
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
                pcVar14 = strtok((char *)0x0," ");
                    /* try { // try from 00910bcc to 00a10c07 has its CatchHandler @ 00910d60 */
                sVar13 = strlen(pcVar14);
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          ((basic_ostream *)&local_2a0,pcVar14,sVar13);
                pcVar14 = strtok((char *)0x0,"\n");
                if (pcVar14 != (char *)0x0) {
                    /* try { // try from 00910c08 to 00a10c33 has its CatchHandler @ 00910b78 */
                  pbVar7 = std::__ndk1::
                           __put_character_sequence<char,std::__ndk1::char_traits<char>>
                                     ((basic_ostream *)&local_2a0," ",1);
                  sVar13 = strlen(pcVar14);
                  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar7,pcVar14,sVar13);
                }
                    /* try { // try from 00910c34 to 00a10c6f has its CatchHandler @ 00910d60 */
                std::__ndk1::
                basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                str();
                if (((byte)*pLVar1 & 1) == 0) {
                  *(undefined2 *)pLVar1 = 0;
                }
                else {
                  **(undefined1 **)(this + 0xa8) = 0;
                  *(undefined8 *)(this + 0xa0) = 0;
                  if (((byte)this[0x98] & 1) != 0) {
                    operator_delete(*(void **)(this + 0xa8));
                    *(undefined8 *)(this + 0x98) = 0;
                  }
                }
                    /* try { // try from 00910c78 to 00a10c8b has its CatchHandler @ 00910d2c */
                local_2b0 = (undefined8 **)
                            (std::__ndk1::
                             basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                             ::vtable + 0x18);
                local_2a0 = std::__ndk1::
                            basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::vtable + 0x40;
                *(undefined8 *)(this + 0xa8) = local_2d8;
                    /* try { // try from 00910c8c to 00a10cb7 has its CatchHandler @ 00910b78 */
                *(undefined8 *)(this + 0xa0) = uStack_2e0;
                *(undefined8 *)pLVar1 = local_2e8;
                local_230[0] = 0x1698838;
                ppuStack_298 = &PTR__basic_stringbuf_01698960;
                if ((local_258 & 1) != 0) {
                    /* try { // try from 00910cb8 to 00a10cc3 has its CatchHandler @ 00910d60 */
                  operator_delete(local_248);
                }
                    /* try { // try from 00910cc4 to 00a10db7 has its CatchHandler @ 00910b78 */
                ppuStack_298 = &PTR__basic_streambuf_01698a08;
                std::__ndk1::locale::~locale(alStack_290);
                std::__ndk1::ios_base::~ios_base((ios_base *)local_230);
              }
              break;
            }
            __s = (char *)((long)piVar6 + 1);
            uVar12 = (long)piVar2 - (long)__s;
          } while (3 < (long)uVar12);
        }
        pcVar14 = strtok((char *)0x0," ");
        if (((ulong)local_2d0 & 1) != 0) {
          operator_delete(local_2c0);
        }
        local_190 = (ulong *)0x16987e8;
        local_180 = std::__ndk1::
                    basic_stringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    ::vtable + 0x40;
        local_110[0] = 0x1698838;
                    /* catch() { ... } // from try @ 00910c78 with catch @ 00910d2c */
        ppuStack_178 = &PTR__basic_stringbuf_01698960;
        if ((local_138 & 1) != 0) {
          operator_delete(local_128);
        }
        ppuStack_178 = &PTR__basic_streambuf_01698a08;
                    /* try { // try from 009109ac to 00a109c3 has its CatchHandler @ 00910b48 */
        std::__ndk1::locale::~locale(alStack_170);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
      } while (pcVar14 != (char *)0x0);
    }
    goto LAB_00910f48;
  }
  uStack_188 = 0;
  local_180 = (undefined1 *)0x0;
  local_190 = (ulong *)0x0;
  uStack_2a8 = 0;
  local_2a0 = (undefined1 *)0x0;
  local_2b0 = (undefined8 **)0x0;
  uStack_2c8 = 0;
  local_2c0 = (undefined1 *)0x0;
  local_2d0 = (undefined8 **)0x0;
  uVar11 = *(ulong *)(param_1 + 8);
  pbVar9 = *(basic_string **)(param_1 + 0x10);
  if (((byte)bVar3 & 1) == 0) {
    pbVar9 = param_1 + 1;
    uVar11 = (ulong)((byte)bVar3 >> 1);
  }
                    /* catch() { ... } // from try @ 00910794 with catch @ 00910894
                       catch() { ... } // from try @ 00910804 with catch @ 00910894 */
  if (uVar12 <= uVar11) {
    uVar11 = uVar12;
  }
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar11 < 0x17) {
    __dest_00 = (undefined1 *)((ulong)&local_2d0 | 1);
    local_2d0 = (undefined8 **)(ulong)(byte)((int)uVar11 << 1);
    if (uVar11 != 0) goto LAB_00910d64;
  }
  else {
    uVar10 = uVar11 + 0x10 & 0xfffffffffffffff0;
    __dest_00 = operator_new(uVar10);
    local_2d0 = (undefined8 **)(uVar10 | 1);
                    /* catch() { ... } // from try @ 00910bcc with catch @ 00910d60
                       catch() { ... } // from try @ 00910c34 with catch @ 00910d60
                       catch() { ... } // from try @ 00910cb8 with catch @ 00910d60 */
    uStack_2c8 = uVar11;
    local_2c0 = __dest_00;
LAB_00910d64:
    memcpy(__dest_00,pbVar9,uVar11);
  }
  __dest_00[uVar11] = 0;
  uStack_188 = uStack_2c8;
  local_190 = (ulong *)local_2d0;
  local_180 = local_2c0;
  bVar3 = *param_1;
  uStack_2c8 = 0;
  local_2c0 = (char *)0x0;
  local_2d0 = (undefined8 **)0x0;
  uVar11 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar11 = *(ulong *)(param_1 + 8);
  }
  if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00910f98 to 00a10faf has its CatchHandler @ 009114f8 */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
                    /* try { // try from 00910db8 to 00a10e07 has its CatchHandler @ 00910db8
                       catch() { ... } // from try @ 00910db8 with catch @ 00910db8
                       catch() { ... } // from try @ 00910e44 with catch @ 00910db8
                       catch() { ... } // from try @ 00910e8c with catch @ 00910db8 */
  uVar10 = uVar11 - (uVar12 + 1);
  pbVar9 = param_1 + 1;
  if (((byte)bVar3 & 1) != 0) {
    pbVar9 = *(basic_string **)(param_1 + 0x10);
  }
  if (uVar11 <= uVar10) {
    uVar10 = uVar11;
  }
  if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar10 < 0x17) {
    pcVar14 = (char *)((ulong)&local_2d0 | 1);
    local_2d0 = (undefined8 **)(ulong)(byte)((int)uVar10 << 1);
    if (uVar10 != 0) goto LAB_00910e14;
  }
  else {
    uVar11 = uVar10 + 0x10 & 0xfffffffffffffff0;
    pcVar14 = operator_new(uVar11);
    local_2d0 = (undefined8 **)(uVar11 | 1);
                    /* try { // try from 00910e08 to 00a10e1f has its CatchHandler @ 00910ed0 */
    uStack_2c8 = uVar10;
    local_2c0 = pcVar14;
LAB_00910e14:
    memcpy(pcVar14,pbVar9 + uVar12 + 1,uVar10);
  }
  pcVar14[uVar10] = '\0';
                    /* try { // try from 00910e2c to 00a10e43 has its CatchHandler @ 00910ecc */
  if (((ulong)local_2b0 & 1) != 0) {
    *local_2a0 = 0;
                    /* try { // try from 00910e44 to 00a10e77 has its CatchHandler @ 00910db8 */
    uStack_2a8 = 0;
    if (((ulong)local_2b0 & 1) != 0) {
      operator_delete(local_2a0);
    }
  }
  uStack_2a8 = uStack_2c8;
  local_2b0 = local_2d0;
  local_2a0 = local_2c0;
  uVar11 = (ulong)local_2d0 >> 1 & 0x7f;
  uVar12 = uVar11;
                    /* try { // try from 00910e78 to 00a10e8b has its CatchHandler @ 00910ed0 */
  if (((ulong)local_2d0 & 1) != 0) {
    uVar12 = uStack_2c8;
  }
  if (uVar12 != 0) {
                    /* try { // try from 00910e8c to 00a10eeb has its CatchHandler @ 00910db8 */
    pcVar14 = (char *)((ulong)&local_2b0 | 1);
    if (((ulong)local_2d0 & 1) != 0) {
      pcVar14 = local_2c0;
    }
    if (pcVar14[uVar12 - 1] == '\n') {
      if (((ulong)local_2d0 & 1) != 0) {
        uVar11 = uStack_2c8;
      }
      uVar12 = uVar11 - 1;
      if (uVar11 < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      uVar11 = uVar12;
      if (((ulong)local_2d0 & 1) == 0) {
        local_2b0 = (undefined8 **)CONCAT71((int7)((ulong)local_2d0 >> 8),(char)((int)uVar12 << 1));
        uVar11 = uStack_2a8;
      }
      uStack_2a8 = uVar11;
                    /* catch() { ... } // from try @ 00910e2c with catch @ 00910ecc */
      pcVar14[uVar12] = '\0';
    }
  }
                    /* catch() { ... } // from try @ 00910e08 with catch @ 00910ed0
                       catch() { ... } // from try @ 00910e78 with catch @ 00910ed0 */
  local_2d0 = &local_190;
                    /* try { // try from 00910eec to 00a10f4f has its CatchHandler @ 00910eec
                       catch() { ... } // from try @ 00910eec with catch @ 00910eec
                       catch() { ... } // from try @ 00911248 with catch @ 00910eec
                       catch() { ... } // from try @ 00911348 with catch @ 00910eec
                       catch() { ... } // from try @ 00911380 with catch @ 00910eec */
  lVar8 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0xd0),(piecewise_construct_t *)&local_190,
                     (tuple *)&DAT_012b54b2,(tuple *)&local_2d0);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar8 + 0x28) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_2b0)
  {
    uVar12 = (ulong)local_2b0 >> 1 & 0x7f;
    pcVar14 = (char *)((ulong)&local_2b0 | 1);
    if (((ulong)local_2b0 & 1) != 0) {
      uVar12 = uStack_2a8;
      pcVar14 = local_2a0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar8 + 0x28),pcVar14,uVar12);
  }
  if (((ulong)local_2b0 & 1) != 0) {
    operator_delete(local_2a0);
  }
  if (((ulong)local_190 & 1) != 0) {
    operator_delete(local_180);
  }
LAB_00910f48:
  if (__dest != (char *)0x0) {
                    /* try { // try from 00910f50 to 00a10f67 has its CatchHandler @ 0091157c */
    operator_delete__(__dest);
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* try { // try from 00910f74 to 00a10f8b has its CatchHandler @ 00911544 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

