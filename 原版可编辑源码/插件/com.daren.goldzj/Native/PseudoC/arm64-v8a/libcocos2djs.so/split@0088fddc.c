
/* CSSColorParser::split(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, char) */

void __thiscall CSSColorParser::split(CSSColorParser *this,basic_string *param_1,char param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong __n;
  void *__src;
  basic_istream *pbVar3;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *in_x8;
  void *__dest;
  ulong uVar4;
  ulong local_1a8;
  ulong uStack_1a0;
  void *local_198;
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
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_190 = (undefined **)0x1c670a0;
  local_110[0] = (undefined **)0x1c670c8;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  uStack_188 = 0;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init
            ((ios_base *)local_110,
             (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &ppuStack_178);
  local_88 = 0;
  local_80 = 0xffffffff;
  ppuStack_178 = &PTR__basic_streambuf_01c671a8;
  local_190 = &PTR__basic_stringstream_01c66f88;
  local_110[0] = &PTR__basic_stringstream_01c66fd8;
  local_180 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_170);
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_120 = 0;
  local_128 = (void *)0x0;
  uStack_130 = 0;
  local_138 = 0;
  ppuStack_178 = &PTR__basic_stringbuf_01c67100;
  local_118 = 0x18;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &ppuStack_178,(basic_string *)this);
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = (void *)0x0;
  do {
    while( true ) {
      pbVar3 = std::__ndk1::
               getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         ((basic_istream *)&local_190,(basic_string *)&local_1a8,(char)param_1);
      __src = local_198;
      __n = uStack_1a0;
      if (((byte)pbVar3[*(long *)(*(long *)pbVar3 + -0x18) + 0x20] & 5) != 0) {
        if ((local_1a8 & 1) != 0) {
          operator_delete(local_198);
        }
        local_190 = &PTR__basic_stringstream_01c66f88;
        local_110[0] = &PTR__basic_stringstream_01c66fd8;
        local_180 = &PTR__basic_stringstream_01c66fb0;
        ppuStack_178 = &PTR__basic_stringbuf_01c67100;
        if ((local_138 & 1) != 0) {
          operator_delete(local_128);
        }
        ppuStack_178 = &PTR__basic_streambuf_01c671a8;
        std::__ndk1::locale::~locale(alStack_170);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
        if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      puVar1 = *(ulong **)(in_x8 + 8);
      if (puVar1 != *(ulong **)(in_x8 + 0x10)) break;
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                (in_x8,(basic_string *)&local_1a8);
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    if ((local_1a8 & 1) == 0) {
      puVar1[2] = (ulong)local_198;
      puVar1[1] = uStack_1a0;
      *puVar1 = local_1a8;
    }
    else {
      if (0xffffffffffffffef < uStack_1a0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uStack_1a0 < 0x17) {
        __dest = (void *)((long)puVar1 + 1);
        *(char *)puVar1 = (char)((int)uStack_1a0 << 1);
        if (uStack_1a0 != 0) goto LAB_0088ffb0;
      }
      else {
        uVar4 = uStack_1a0 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar4);
        puVar1[1] = __n;
        puVar1[2] = (ulong)__dest;
        *puVar1 = uVar4 | 1;
LAB_0088ffb0:
        memcpy(__dest,__src,__n);
      }
      *(undefined1 *)((long)__dest + __n) = 0;
    }
    *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 0x18;
  } while( true );
}

