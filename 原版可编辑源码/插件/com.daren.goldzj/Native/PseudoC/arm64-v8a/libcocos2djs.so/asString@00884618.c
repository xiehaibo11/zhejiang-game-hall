
/* cocos2d::Value::asString() const */

void cocos2d::Value::asString(void)

{
  char *pcVar1;
  long lVar2;
  double *in_x0;
  ulong *in_x8;
  ulong *puVar3;
  ulong uVar4;
  void *__dest;
  void *__src;
  ulong uVar5;
  char local_194 [4];
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
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (*(float *)(in_x0 + 1) != 9.80909e-45) {
    local_110[0] = (undefined **)0x1c670c8;
    local_190 = (undefined **)0x1c670a0;
    uStack_188 = 0;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
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
    switch(*(float *)(in_x0 + 1)) {
    case 1.4013e-45:
      local_194[0] = *(char *)in_x0;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_180,local_194,1);
      break;
    case 2.8026e-45:
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,
                 (int)*(float *)in_x0);
      break;
    case 4.2039e-45:
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,
                 (uint)*(float *)in_x0);
      break;
    case 5.60519e-45:
      *(uint *)(alStack_170 + (long)(local_180[-3] + -8)) =
           *(uint *)(alStack_170 + (long)(local_180[-3] + -8)) & 0xfffffeff | 4;
      *(undefined8 *)(alStack_170 + (long)local_180[-3]) = 7;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,*(float *)in_x0);
      break;
    case 7.00649e-45:
      *(uint *)(alStack_170 + (long)(local_180[-3] + -8)) =
           *(uint *)(alStack_170 + (long)(local_180[-3] + -8)) & 0xfffffeff | 4;
      *(undefined8 *)(alStack_170 + (long)local_180[-3]) = 0x10;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,*in_x0);
      break;
    case 8.40779e-45:
      pcVar1 = "false";
      if (*(char *)in_x0 != '\0') {
        pcVar1 = "true";
      }
      uVar4 = 4;
      if (*(char *)in_x0 == '\0') {
        uVar4 = 5;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_180,pcVar1,uVar4);
    }
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
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
    goto LAB_0088491c;
  }
  puVar3 = (ulong *)*in_x0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if ((*puVar3 & 1) == 0) {
    uVar5 = puVar3[1];
    uVar4 = *puVar3;
    in_x8[2] = puVar3[2];
    in_x8[1] = uVar5;
    *in_x8 = uVar4;
    goto LAB_0088491c;
  }
  uVar4 = puVar3[1];
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)puVar3[2];
  if (uVar4 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_008847cc;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    in_x8[1] = uVar4;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar5 | 1;
LAB_008847cc:
    memcpy(__dest,__src,uVar4);
  }
  *(undefined1 *)((long)__dest + uVar4) = 0;
LAB_0088491c:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

